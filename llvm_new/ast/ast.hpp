#ifndef __AST_HPP__
#define __AST_HPP__

#include <iostream>
#include <vector>
#include <string>
#include <llvm/IR/Value.h> 
#include "../lexer/lexer.hpp"
#include "../symbol/types.hpp"
#include "../symbol/symbol.hpp"
#include "../codegen/codegen.hpp"

// Operator overloads
std::ostream &operator<<(std::ostream &out, compare c);
std::ostream &operator<<(std::ostream &out, ParameterType p);
std::ostream &operator<<(std::ostream &out, TypeEnum t);

// AST Base Class
class AST
{
public:
    virtual ~AST() {}
    virtual void printOn(std::ostream &out) const = 0;
    virtual void sem() {}
    virtual llvm::Value* igen() const { return nullptr; } 
    void llvm_igen(bool optimize);

protected:
    Type *type;
    static llvm::LLVMContext TheContext;
    static llvm::IRBuilder<> Builder;
    static std::unique_ptr<llvm::Module> TheModule;
    static std::unique_ptr<llvm::legacy::FunctionPassManager> TheFPM;
    std::string filename;
    static llvm::Type *proc;
    static llvm::Type *i8;
    static llvm::Type *i32;
    static GenScope scopes;
    std::stack<GenBlock*> blockStack;
    static llvm::ConstantInt* c8(char c);
    static llvm::ConstantInt* c32(int n);
    static llvm::ConstantArray* ca8(std::string s);

};

std::ostream &operator<<(std::ostream &out, const AST &ast);

// Expr Class
class Expr : public AST
{
public:
    virtual ~Expr() {}
    virtual void printOn(std::ostream &out) const override = 0;
    virtual void sem() override = 0;
    virtual llvm::Value* igen() const override = 0;
    Type *getType() const;
    TypeEnum getTypeEnum() const;

protected:
    Type *type;
};

// Stmt Class
class Stmt : public AST
{
public:
    virtual ~Stmt() {}
    virtual void printOn(std::ostream &out) const override = 0;
    virtual void sem() override = 0;
    virtual llvm::Value* igen() const override = 0;
    void setExternal(bool e);
    bool isReturnStatement() const;

protected:
    bool external;
    bool isReturn;
};

// StmtList Class
class StmtList : public Stmt
{
public:
    StmtList();
    ~StmtList();
    void append(Stmt *stmt);
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    std::vector<Stmt *> stmts;
};

// LocalDef Class
class LocalDef : public AST
{
public:
    virtual ~LocalDef() {}
    virtual void printOn(std::ostream &out) const override = 0;
    virtual void sem() override = 0;

protected:
    Type *type;
};

// LocalDefList Class
class LocalDefList : public AST
{
public:
    LocalDefList();
    ~LocalDefList();
    void append(LocalDef *def);
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;


private:
    std::vector<LocalDef *> defs;
};

// Fpar Class
class Fpar : public AST
{
public:
    Fpar(std::string *n, Type *t, ParameterType p);
    ~Fpar();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    ParameterSymbol *getParameterSymbol() const;

private:
    std::string *name;
    Type *type;
    ParameterType parameterType;
    ParameterSymbol *parameterSymbol;
};

// FparList Class
class FparList : public AST
{
public:
    FparList();
    ~FparList();
    void append(Fpar *f);
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;
    const std::vector<Fpar *> &getParameters() const;

private:
    std::vector<Fpar *> fpar;
};

// FuncDef Class
class FuncDef : public LocalDef
{
public:
    FuncDef(std::string *n, Type *t, LocalDefList *l, Stmt *s, FparList *f = nullptr);
    ~FuncDef();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;
    std::string* getName() const; 

private:
    std::string *name;
    FparList *fpar;
    Type *type;
    LocalDefList *localDef;
    Stmt *stmts;
    FunctionSymbol *funcSymbol;
};

// VarDef Class
class VarDef : public LocalDef
{
public:
    VarDef(std::string *n, Type *t, bool arr, int arraySize = -1);
    ~VarDef();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    std::string *name;
    Type *type;
    int size;
    bool isArray;
};

// ExprList Class
class ExprList : public AST
{
public:
    ExprList();
    ~ExprList();
    void append(Expr *expr);
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;
    const std::vector<Expr *> &getExprs() const;

private:
    std::vector<Expr *> exprs;
};

// Cond Class
class Cond : public AST // checked
{
public:
    virtual void printOn(std::ostream &out) const override = 0;
    virtual void sem() override = 0;
    virtual llvm::Value* igen() const override = 0;
};

// UnOp Class
class UnOp : public Expr // checked
{
public:
    UnOp(char o, Expr *e);
    ~UnOp();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    char op;
    Expr *expr;
};

// BinOp Class
class BinOp : public Expr // checked
{
public:
    BinOp(Expr *l, char o, Expr *r);
    ~BinOp();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    char op;
    Expr *left;
    Expr *right;
};

// CondCompOp Class
class CondCompOp : public Cond // checked
{
public:
    CondCompOp(Expr *l, compare o, Expr *r);
    ~CondCompOp();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    compare op;
    Expr *left;
    Expr *right;
};

// CondBoolOp Class
class CondBoolOp : public Cond
{
public:
    CondBoolOp(Cond *l, char o, Cond *r);
    ~CondBoolOp();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    char op;
    Cond *left;
    Cond *right;
};

// CondUnOp Class
class CondUnOp : public Cond
{
public:
    CondUnOp(char o, Cond *c);
    ~CondUnOp();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    char op;
    Cond *cond;
};

// IntConst Class
class IntConst : public Expr // checked
{
public:
    IntConst(int v);
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    int getValue() const;
    virtual llvm::Value* igen() const override;

private:
    int val;
};

// CharConst Class
class CharConst : public Expr // checked
{
public:
    CharConst(unsigned char c);
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    unsigned char val;
};

// Lval Class
class Lval : public Expr // checked
{
public:
    virtual ~Lval() {}
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    std::string getName() const;
    virtual llvm::Value* igen() const override = 0;

protected:
    std::string *name;
};

// StringConst Class
class StringConst : public Lval // checked
{
public:
    StringConst(std::string *v);
    ~StringConst();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;
};

// BoolConst Class
class BoolConst : public Cond // checked
{
public:
    BoolConst(bool v);
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    bool val;
};

// Id Class
class Id : public Lval // checked
{
public:
    Id(std::string *n);
    ~Id();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    SymbolType symbolType;
};

// ArrayAccess Class
class ArrayAccess : public Lval // checked
{
public:
    ArrayAccess(std::string *n, Expr *index);
    ~ArrayAccess();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    Expr *indexExpr;
};

// Let Class
class Let : public Stmt // checked
{
public:
    Let(Lval *l, Expr *r);
    ~Let();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    Lval *lexpr;
    Expr *rexpr;
};

// FuncCall Class
class FuncCall : public Expr
{
public:
    FuncCall(std::string *n, ExprList *e = nullptr);
    ~FuncCall();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
   std::string *name;
   ExprList *exprs;
};

// ProcCall Class
class ProcCall : public Stmt // checked
{
public:
    ProcCall(FuncCall *f);
    ~ProcCall();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    FuncCall *funcCall;
};

// If Class
class If : public Stmt // checked
{
public:
    If(Cond *c, Stmt *t, Stmt *e = nullptr);
    ~If();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    Cond *cond;
    Stmt *thenStmt;
    Stmt *elseStmt;
};

// While Class
class While : public Stmt // checked
{
public:
    While(Cond *c, Stmt *b);
    ~While();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;
    virtual llvm::Value* igen() const override;

private:
    Cond *cond;
    Stmt *body;
};

// Return Class
class Return : public Stmt
{
public:
    Return(Expr *e = nullptr);
    ~Return();
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override;

private:
    Expr *expr;
};

// Empty Class
class Empty : public Stmt
{
public:
    virtual void printOn(std::ostream &out) const override;
    virtual void sem() override {}
    virtual llvm::Value* igen() const override {}

};

#endif // AST_HPP