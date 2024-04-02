/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "lexer.hpp"
#include "ast.hpp"
#include "symbol.hpp"
#include "types.hpp"

Type* typeInteger = new IntType();
Type* typeByte = new ByteType();
Type* typeVoid = new VoidType();

SymbolTable st;


#line 87 "parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_byte = 3,                     /* "byte"  */
  YYSYMBOL_T_else = 4,                     /* "else"  */
  YYSYMBOL_T_false = 5,                    /* "false"  */
  YYSYMBOL_T_if = 6,                       /* "if"  */
  YYSYMBOL_T_int = 7,                      /* "int"  */
  YYSYMBOL_T_proc = 8,                     /* "proc"  */
  YYSYMBOL_T_reference = 9,                /* "reference"  */
  YYSYMBOL_T_return = 10,                  /* "return"  */
  YYSYMBOL_T_while = 11,                   /* "while"  */
  YYSYMBOL_T_true = 12,                    /* "true"  */
  YYSYMBOL_T_lte = 13,                     /* "<="  */
  YYSYMBOL_T_gte = 14,                     /* ">="  */
  YYSYMBOL_T_eq = 15,                      /* "=="  */
  YYSYMBOL_T_neq = 16,                     /* "!="  */
  YYSYMBOL_T_string = 17,                  /* T_string  */
  YYSYMBOL_T_const = 18,                   /* T_const  */
  YYSYMBOL_T_id = 19,                      /* T_id  */
  YYSYMBOL_T_char = 20,                    /* T_char  */
  YYSYMBOL_21_ = 21,                       /* '&'  */
  YYSYMBOL_22_ = 22,                       /* '|'  */
  YYSYMBOL_23_ = 23,                       /* '<'  */
  YYSYMBOL_24_ = 24,                       /* '>'  */
  YYSYMBOL_25_ = 25,                       /* '+'  */
  YYSYMBOL_26_ = 26,                       /* '-'  */
  YYSYMBOL_27_ = 27,                       /* '*'  */
  YYSYMBOL_28_ = 28,                       /* '/'  */
  YYSYMBOL_29_ = 29,                       /* '%'  */
  YYSYMBOL_UNOP = 30,                      /* UNOP  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* ':'  */
  YYSYMBOL_34_ = 34,                       /* ','  */
  YYSYMBOL_35_ = 35,                       /* '['  */
  YYSYMBOL_36_ = 36,                       /* ']'  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* '='  */
  YYSYMBOL_39_ = 39,                       /* '{'  */
  YYSYMBOL_40_ = 40,                       /* '}'  */
  YYSYMBOL_41_ = 41,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_funcdef = 44,                   /* funcdef  */
  YYSYMBOL_fparlist = 45,                  /* fparlist  */
  YYSYMBOL_fpardef = 46,                   /* fpardef  */
  YYSYMBOL_fpardefs = 47,                  /* fpardefs  */
  YYSYMBOL_datatype = 48,                  /* datatype  */
  YYSYMBOL_type = 49,                      /* type  */
  YYSYMBOL_rtype = 50,                     /* rtype  */
  YYSYMBOL_localdef = 51,                  /* localdef  */
  YYSYMBOL_localdefs = 52,                 /* localdefs  */
  YYSYMBOL_vardef = 53,                    /* vardef  */
  YYSYMBOL_stmt = 54,                      /* stmt  */
  YYSYMBOL_stmts = 55,                     /* stmts  */
  YYSYMBOL_compoundstmt = 56,              /* compoundstmt  */
  YYSYMBOL_funccall = 57,                  /* funccall  */
  YYSYMBOL_exprlist = 58,                  /* exprlist  */
  YYSYMBOL_expr = 59,                      /* expr  */
  YYSYMBOL_exprs = 60,                     /* exprs  */
  YYSYMBOL_lvalue = 61,                    /* lvalue  */
  YYSYMBOL_cond = 62                       /* cond  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  135

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,     2,     2,    29,    21,     2,
      31,    32,    27,    25,    34,    26,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    33,    37,
      23,    38,    24,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,    22,    40,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    90,    90,    99,   100,   103,   106,   107,   110,   111,
     114,   115,   118,   119,   122,   123,   126,   127,   130,   131,
     134,   135,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   149,   150,   153,   156,   157,   160,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   177,
     178,   181,   182,   183,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"byte\"", "\"else\"",
  "\"false\"", "\"if\"", "\"int\"", "\"proc\"", "\"reference\"",
  "\"return\"", "\"while\"", "\"true\"", "\"<=\"", "\">=\"", "\"==\"",
  "\"!=\"", "T_string", "T_const", "T_id", "T_char", "'&'", "'|'", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "UNOP", "'('", "')'", "':'",
  "','", "'['", "']'", "';'", "'='", "'{'", "'}'", "'!'", "$accept",
  "program", "funcdef", "fparlist", "fpardef", "fpardefs", "datatype",
  "type", "rtype", "localdef", "localdefs", "vardef", "stmt", "stmts",
  "compoundstmt", "funccall", "exprlist", "expr", "exprs", "lvalue",
  "cond", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,   -22,    24,  -101,    -4,  -101,    -8,     0,    16,    40,
     100,   113,    34,    74,  -101,  -101,  -101,    82,    53,  -101,
    -101,  -101,    85,   113,    40,  -101,    83,    77,  -101,    85,
      79,  -101,    85,  -101,  -101,    82,  -101,    -3,  -101,    79,
     159,    98,    80,   110,  -101,    33,  -101,    -3,    90,  -101,
     122,   127,  -101,   142,  -101,    61,  -101,  -101,   136,   136,
     136,  -101,  -101,    12,  -101,    61,   132,   136,  -101,  -101,
    -101,   136,   130,  -101,  -101,    61,    61,   119,    50,  -101,
    -101,   158,   136,   136,   136,   136,   136,  -101,    62,  -101,
     146,   148,   143,    28,   144,    99,    69,  -101,   136,   136,
     136,   136,   136,   136,    61,    61,    -3,  -101,   164,   164,
    -101,  -101,  -101,    -3,  -101,   136,  -101,  -101,  -101,  -101,
    -101,   111,   111,   111,   111,   111,   111,  -101,  -101,   176,
    -101,   148,    -3,  -101,  -101
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     0,     0,     0,     8,
       0,     0,     0,     0,     5,    11,    10,     0,    13,     7,
      15,    14,    18,     0,     8,     6,     0,     0,    16,    18,
       0,    17,    18,     9,    12,     0,    19,    31,     4,     0,
       0,     0,     0,     0,    53,    52,    22,    31,     0,    24,
       0,     0,     3,     0,    21,     0,    37,    38,     0,     0,
       0,    30,    41,     0,    39,     0,     0,     0,    32,    33,
      25,     0,     0,    55,    54,     0,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,    29,     0,    35,
       0,    49,     0,     0,     0,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    44,    45,
      46,    47,    48,     0,    34,     0,    36,    51,    23,    20,
      56,    62,    63,    58,    59,    60,    61,    64,    65,    27,
      28,    49,     0,    50,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,   188,  -101,   182,   165,    -6,   180,   175,  -101,
      18,  -101,  -100,   152,    -9,   -37,  -101,   -40,    70,   -36,
     -53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    28,     8,     9,    14,    18,    19,    22,    29,
      30,    31,    47,    48,    49,    62,    90,    77,   116,    64,
      78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      50,    51,    63,    41,     1,    21,   129,    42,    43,     4,
      50,    51,    88,   130,    44,     6,    45,    21,    79,    80,
      81,    38,    96,    97,     5,    10,    91,    92,     7,    40,
      52,    93,   134,    11,    46,    95,    37,    82,    83,    84,
      85,    86,   108,   109,   110,   111,   112,    36,    12,    87,
      39,   127,   128,    82,    83,    84,    85,    86,   121,   122,
     123,   124,   125,   126,    66,   118,    73,    23,    67,    50,
      51,   104,   105,    74,    13,   131,    50,    51,    44,    56,
      45,    57,   106,   104,   105,    15,    58,    59,    26,    16,
     104,   105,    75,     6,   113,    50,    51,    44,    56,    45,
      57,   120,    76,    15,    27,    58,    59,    16,     4,    17,
      35,    60,    98,    99,   100,   101,    15,    61,    37,    34,
      16,    20,   102,   103,    82,    83,    84,    85,    86,    55,
      69,   107,    98,    99,   100,   101,    82,    83,    84,    85,
      86,    65,   102,   103,    82,    83,    84,    85,    86,    44,
      56,    45,    57,    44,    56,    45,    57,    58,    59,    70,
      72,    58,    59,    60,    89,    71,    94,    60,    82,    83,
      84,    85,    86,    82,    83,    84,    85,    86,   114,   117,
     132,   119,   115,    82,    83,    84,    85,    86,     3,    33,
     107,    84,    85,    86,    53,    24,    54,    25,    32,    68,
       0,   133
};

static const yytype_int16 yycheck[] =
{
      37,    37,    42,     6,    19,    11,   106,    10,    11,    31,
      47,    47,    65,   113,    17,    19,    19,    23,    58,    59,
      60,    30,    75,    76,     0,    33,    66,    67,    32,    35,
      39,    71,   132,    33,    37,    75,    39,    25,    26,    27,
      28,    29,    82,    83,    84,    85,    86,    29,    32,    37,
      32,   104,   105,    25,    26,    27,    28,    29,    98,    99,
     100,   101,   102,   103,    31,    37,     5,    33,    35,   106,
     106,    21,    22,    12,    34,   115,   113,   113,    17,    18,
      19,    20,    32,    21,    22,     3,    25,    26,    35,     7,
      21,    22,    31,    19,    32,   132,   132,    17,    18,    19,
      20,    32,    41,     3,    19,    25,    26,     7,    31,     9,
      33,    31,    13,    14,    15,    16,     3,    37,    39,    36,
       7,     8,    23,    24,    25,    26,    27,    28,    29,    31,
      40,    32,    13,    14,    15,    16,    25,    26,    27,    28,
      29,    31,    23,    24,    25,    26,    27,    28,    29,    17,
      18,    19,    20,    17,    18,    19,    20,    25,    26,    37,
      18,    25,    26,    31,    32,    38,    36,    31,    25,    26,
      27,    28,    29,    25,    26,    27,    28,    29,    32,    36,
       4,    37,    34,    25,    26,    27,    28,    29,     0,    24,
      32,    27,    28,    29,    35,    13,    37,    17,    23,    47,
      -1,   131
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    19,    43,    44,    31,     0,    19,    32,    45,    46,
      33,    33,    32,    34,    47,     3,     7,     9,    48,    49,
       8,    48,    50,    33,    46,    49,    35,    19,    44,    51,
      52,    53,    50,    47,    36,    33,    52,    39,    56,    52,
      48,     6,    10,    11,    17,    19,    37,    54,    55,    56,
      57,    61,    56,    35,    37,    31,    18,    20,    25,    26,
      31,    37,    57,    59,    61,    31,    31,    35,    55,    40,
      37,    38,    18,     5,    12,    31,    41,    59,    62,    59,
      59,    59,    25,    26,    27,    28,    29,    37,    62,    32,
      58,    59,    59,    59,    36,    59,    62,    62,    13,    14,
      15,    16,    23,    24,    21,    22,    32,    32,    59,    59,
      59,    59,    59,    32,    32,    34,    60,    36,    37,    37,
      32,    59,    59,    59,    59,    59,    59,    62,    62,    54,
      54,    59,     4,    60,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    56,    57,    57,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    60,
      60,    61,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     8,     7,     2,     4,     3,     0,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     0,     2,
       7,     4,     1,     4,     1,     2,     7,     5,     5,     3,
       2,     0,     2,     3,     4,     3,     2,     1,     1,     1,
       3,     1,     2,     2,     3,     3,     3,     3,     3,     0,
       3,     4,     1,     1,     1,     1,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: funcdef  */
#line 90 "parser.y"
            {   
            /*std::cout << "AST: " << *$1 << std::endl;*/
            (yyvsp[0].funcdef)->sem();

        }
#line 1237 "parser.cpp"
    break;

  case 3: /* funcdef: T_id '(' fparlist ')' ':' rtype localdefs compoundstmt  */
#line 99 "parser.y"
                                                           { (yyval.funcdef) = new FuncDef((yyvsp[-7].str), (yyvsp[-2].type), (yyvsp[-1].localdefs), (yyvsp[0].stmtlist), (yyvsp[-5].fparlist)); }
#line 1243 "parser.cpp"
    break;

  case 4: /* funcdef: T_id '(' ')' ':' rtype localdefs compoundstmt  */
#line 100 "parser.y"
                                                  { (yyval.funcdef) = new FuncDef((yyvsp[-6].str), (yyvsp[-2].type), (yyvsp[-1].localdefs), (yyvsp[0].stmtlist)); }
#line 1249 "parser.cpp"
    break;

  case 5: /* fparlist: fpardef fpardefs  */
#line 103 "parser.y"
                     { (yyvsp[0].fparlist)->append((yyvsp[-1].fpardef)); (yyval.fparlist) = (yyvsp[0].fparlist); }
#line 1255 "parser.cpp"
    break;

  case 6: /* fpardef: T_id ':' "reference" type  */
#line 106 "parser.y"
                              { (yyval.fpardef) = new Fpar((yyvsp[-3].str), (yyvsp[0].type), ParameterType::REFERENCE); }
#line 1261 "parser.cpp"
    break;

  case 7: /* fpardef: T_id ':' type  */
#line 107 "parser.y"
                  { (yyval.fpardef) = new Fpar((yyvsp[-2].str), (yyvsp[0].type), ParameterType::VALUE); }
#line 1267 "parser.cpp"
    break;

  case 8: /* fpardefs: %empty  */
#line 110 "parser.y"
                  { (yyval.fparlist) = new FparList(); }
#line 1273 "parser.cpp"
    break;

  case 9: /* fpardefs: ',' fpardef fpardefs  */
#line 111 "parser.y"
                         { (yyvsp[0].fparlist)->append((yyvsp[-1].fpardef)); (yyval.fparlist) = (yyvsp[0].fparlist); }
#line 1279 "parser.cpp"
    break;

  case 10: /* datatype: "int"  */
#line 114 "parser.y"
          { (yyval.type) = typeInteger; }
#line 1285 "parser.cpp"
    break;

  case 11: /* datatype: "byte"  */
#line 115 "parser.y"
           { (yyval.type) = typeByte; }
#line 1291 "parser.cpp"
    break;

  case 12: /* type: datatype '[' ']'  */
#line 118 "parser.y"
                     {  (yyval.type) = new ArrayType((yyvsp[-2].type));}
#line 1297 "parser.cpp"
    break;

  case 13: /* type: datatype  */
#line 119 "parser.y"
             { (yyval.type) = (yyvsp[0].type); }
#line 1303 "parser.cpp"
    break;

  case 14: /* rtype: datatype  */
#line 122 "parser.y"
             { (yyval.type) = (yyvsp[0].type); }
#line 1309 "parser.cpp"
    break;

  case 15: /* rtype: "proc"  */
#line 123 "parser.y"
           { (yyval.type) = typeVoid; }
#line 1315 "parser.cpp"
    break;

  case 16: /* localdef: funcdef  */
#line 126 "parser.y"
            { (yyval.localdef) = (yyvsp[0].funcdef); }
#line 1321 "parser.cpp"
    break;

  case 17: /* localdef: vardef  */
#line 127 "parser.y"
           { (yyval.localdef) = (yyvsp[0].vardef); }
#line 1327 "parser.cpp"
    break;

  case 18: /* localdefs: %empty  */
#line 130 "parser.y"
                  { (yyval.localdefs) = new LocalDefList(); }
#line 1333 "parser.cpp"
    break;

  case 19: /* localdefs: localdef localdefs  */
#line 131 "parser.y"
                       { (yyvsp[0].localdefs)->append((yyvsp[-1].localdef)); (yyval.localdefs) = (yyvsp[0].localdefs); }
#line 1339 "parser.cpp"
    break;

  case 20: /* vardef: T_id ':' datatype '[' T_const ']' ';'  */
#line 134 "parser.y"
                                          { (yyval.vardef) = new VarDef((yyvsp[-6].str), (yyvsp[-4].type), true, (yyvsp[-2].num)); }
#line 1345 "parser.cpp"
    break;

  case 21: /* vardef: T_id ':' datatype ';'  */
#line 135 "parser.y"
                           { (yyval.vardef) = new VarDef((yyvsp[-3].str), (yyvsp[-1].type), false); }
#line 1351 "parser.cpp"
    break;

  case 22: /* stmt: ';'  */
#line 138 "parser.y"
        { (yyval.stmt) = new Empty();}
#line 1357 "parser.cpp"
    break;

  case 23: /* stmt: lvalue '=' expr ';'  */
#line 139 "parser.y"
                         { (yyval.stmt) = new Let((yyvsp[-3].lvalue), (yyvsp[-1].expr)); }
#line 1363 "parser.cpp"
    break;

  case 24: /* stmt: compoundstmt  */
#line 140 "parser.y"
                  { (yyval.stmt) = (yyvsp[0].stmtlist); }
#line 1369 "parser.cpp"
    break;

  case 25: /* stmt: funccall ';'  */
#line 141 "parser.y"
                  { (yyval.stmt) = new ProcCall((yyvsp[-1].fun)); }
#line 1375 "parser.cpp"
    break;

  case 26: /* stmt: "if" '(' cond ')' stmt "else" stmt  */
#line 142 "parser.y"
                                       { (yyval.stmt) = new If((yyvsp[-4].cond), (yyvsp[-2].stmt), (yyvsp[0].stmt)); }
#line 1381 "parser.cpp"
    break;

  case 27: /* stmt: "if" '(' cond ')' stmt  */
#line 143 "parser.y"
                           { (yyval.stmt) = new If((yyvsp[-2].cond), (yyvsp[0].stmt)); }
#line 1387 "parser.cpp"
    break;

  case 28: /* stmt: "while" '(' cond ')' stmt  */
#line 144 "parser.y"
                              { (yyval.stmt) = new While((yyvsp[-2].cond), (yyvsp[0].stmt)); }
#line 1393 "parser.cpp"
    break;

  case 29: /* stmt: "return" expr ';'  */
#line 145 "parser.y"
                      { (yyval.stmt) = new Return((yyvsp[-1].expr)); }
#line 1399 "parser.cpp"
    break;

  case 30: /* stmt: "return" ';'  */
#line 146 "parser.y"
                 { (yyval.stmt) = new Return(); }
#line 1405 "parser.cpp"
    break;

  case 31: /* stmts: %empty  */
#line 149 "parser.y"
                  { (yyval.stmtlist) = new StmtList(); }
#line 1411 "parser.cpp"
    break;

  case 32: /* stmts: stmt stmts  */
#line 150 "parser.y"
               { (yyvsp[0].stmtlist)->append((yyvsp[-1].stmt)); (yyval.stmtlist) = (yyvsp[0].stmtlist); }
#line 1417 "parser.cpp"
    break;

  case 33: /* compoundstmt: '{' stmts '}'  */
#line 153 "parser.y"
                  { (yyval.stmtlist) = (yyvsp[-1].stmtlist); }
#line 1423 "parser.cpp"
    break;

  case 34: /* funccall: T_id '(' exprlist ')'  */
#line 156 "parser.y"
                             { (yyval.fun) = new FuncCall((yyvsp[-3].str), (yyvsp[-1].exprlist));}
#line 1429 "parser.cpp"
    break;

  case 35: /* funccall: T_id '(' ')'  */
#line 157 "parser.y"
                 { (yyval.fun) = new FuncCall((yyvsp[-2].str)); }
#line 1435 "parser.cpp"
    break;

  case 36: /* exprlist: expr exprs  */
#line 160 "parser.y"
               { (yyvsp[0].exprlist)->append((yyvsp[-1].expr)); (yyval.exprlist) = (yyvsp[0].exprlist); }
#line 1441 "parser.cpp"
    break;

  case 37: /* expr: T_const  */
#line 163 "parser.y"
            { (yyval.expr) = new IntConst((yyvsp[0].num)); }
#line 1447 "parser.cpp"
    break;

  case 38: /* expr: T_char  */
#line 164 "parser.y"
            { (yyval.expr) = new CharConst((yyvsp[0].chr)); }
#line 1453 "parser.cpp"
    break;

  case 39: /* expr: lvalue  */
#line 165 "parser.y"
            { (yyval.expr) = (yyvsp[0].lvalue);}
#line 1459 "parser.cpp"
    break;

  case 40: /* expr: '(' expr ')'  */
#line 166 "parser.y"
                 { (yyval.expr) = (yyvsp[-1].expr);}
#line 1465 "parser.cpp"
    break;

  case 41: /* expr: funccall  */
#line 167 "parser.y"
             { (yyval.expr) = (yyvsp[0].fun);}
#line 1471 "parser.cpp"
    break;

  case 42: /* expr: '+' expr  */
#line 168 "parser.y"
                        { (yyval.expr) = new UnOp((yyvsp[-1].op), (yyvsp[0].expr)); }
#line 1477 "parser.cpp"
    break;

  case 43: /* expr: '-' expr  */
#line 169 "parser.y"
                        { (yyval.expr) = new UnOp((yyvsp[-1].op), (yyvsp[0].expr)); }
#line 1483 "parser.cpp"
    break;

  case 44: /* expr: expr '+' expr  */
#line 170 "parser.y"
                  { (yyval.expr) = new BinOp((yyvsp[-2].expr), (yyvsp[-1].op), (yyvsp[0].expr)); }
#line 1489 "parser.cpp"
    break;

  case 45: /* expr: expr '-' expr  */
#line 171 "parser.y"
                   { (yyval.expr) = new BinOp((yyvsp[-2].expr), (yyvsp[-1].op), (yyvsp[0].expr));  }
#line 1495 "parser.cpp"
    break;

  case 46: /* expr: expr '*' expr  */
#line 172 "parser.y"
                   { (yyval.expr) = new BinOp((yyvsp[-2].expr), (yyvsp[-1].op), (yyvsp[0].expr));  }
#line 1501 "parser.cpp"
    break;

  case 47: /* expr: expr '/' expr  */
#line 173 "parser.y"
                   { (yyval.expr) = new BinOp((yyvsp[-2].expr), (yyvsp[-1].op), (yyvsp[0].expr)); }
#line 1507 "parser.cpp"
    break;

  case 48: /* expr: expr '%' expr  */
#line 174 "parser.y"
                  { (yyval.expr) = new BinOp((yyvsp[-2].expr), (yyvsp[-1].op), (yyvsp[0].expr));  }
#line 1513 "parser.cpp"
    break;

  case 49: /* exprs: %empty  */
#line 177 "parser.y"
                  { (yyval.exprlist) = new ExprList(); }
#line 1519 "parser.cpp"
    break;

  case 50: /* exprs: ',' expr exprs  */
#line 178 "parser.y"
                   { (yyvsp[0].exprlist)->append((yyvsp[-1].expr)); (yyval.exprlist) = (yyvsp[0].exprlist); }
#line 1525 "parser.cpp"
    break;

  case 51: /* lvalue: T_id '[' expr ']'  */
#line 181 "parser.y"
                      { (yyval.lvalue) = new ArrayAccess((yyvsp[-3].str), (yyvsp[-1].expr)); }
#line 1531 "parser.cpp"
    break;

  case 52: /* lvalue: T_id  */
#line 182 "parser.y"
         { (yyval.lvalue) = new Id((yyvsp[0].str)); }
#line 1537 "parser.cpp"
    break;

  case 53: /* lvalue: T_string  */
#line 183 "parser.y"
             { (yyval.lvalue) = new StringConst((yyvsp[0].str)); }
#line 1543 "parser.cpp"
    break;

  case 54: /* cond: "true"  */
#line 186 "parser.y"
           { (yyval.cond) = new BoolConst(true); }
#line 1549 "parser.cpp"
    break;

  case 55: /* cond: "false"  */
#line 187 "parser.y"
            { (yyval.cond) = new BoolConst(false);}
#line 1555 "parser.cpp"
    break;

  case 56: /* cond: '(' cond ')'  */
#line 188 "parser.y"
                 { (yyval.cond) = (yyvsp[-1].cond); }
#line 1561 "parser.cpp"
    break;

  case 57: /* cond: '!' cond  */
#line 189 "parser.y"
                        { (yyval.cond) = new CondUnOp('!',(yyvsp[0].cond)); }
#line 1567 "parser.cpp"
    break;

  case 58: /* cond: expr "==" expr  */
#line 190 "parser.y"
                   { (yyval.cond) = new CondCompOp((yyvsp[-2].expr), (yyvsp[-1].comp), (yyvsp[0].expr)); }
#line 1573 "parser.cpp"
    break;

  case 59: /* cond: expr "!=" expr  */
#line 191 "parser.y"
                    { (yyval.cond) = new CondCompOp((yyvsp[-2].expr), (yyvsp[-1].comp), (yyvsp[0].expr)); }
#line 1579 "parser.cpp"
    break;

  case 60: /* cond: expr '<' expr  */
#line 192 "parser.y"
                  { (yyval.cond) = new CondCompOp((yyvsp[-2].expr), (yyvsp[-1].comp), (yyvsp[0].expr)); }
#line 1585 "parser.cpp"
    break;

  case 61: /* cond: expr '>' expr  */
#line 193 "parser.y"
                  { (yyval.cond) = new CondCompOp((yyvsp[-2].expr), (yyvsp[-1].comp), (yyvsp[0].expr)); }
#line 1591 "parser.cpp"
    break;

  case 62: /* cond: expr "<=" expr  */
#line 194 "parser.y"
                    { (yyval.cond) = new CondCompOp((yyvsp[-2].expr), (yyvsp[-1].comp), (yyvsp[0].expr)); }
#line 1597 "parser.cpp"
    break;

  case 63: /* cond: expr ">=" expr  */
#line 195 "parser.y"
                    { (yyval.cond) = new CondCompOp((yyvsp[-2].expr), (yyvsp[-1].comp), (yyvsp[0].expr)); }
#line 1603 "parser.cpp"
    break;

  case 64: /* cond: cond '&' cond  */
#line 196 "parser.y"
                  { (yyval.cond) = new CondBoolOp((yyvsp[-2].cond), (yyvsp[-1].op), (yyvsp[0].cond)); }
#line 1609 "parser.cpp"
    break;

  case 65: /* cond: cond '|' cond  */
#line 197 "parser.y"
                  { (yyval.cond) = new CondBoolOp((yyvsp[-2].cond), (yyvsp[-1].op), (yyvsp[0].cond)); }
#line 1615 "parser.cpp"
    break;


#line 1619 "parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 200 "parser.y"


int main() {
  int result = yyparse();
  if (result == 0) printf("Success.\n");
  return result;
}
