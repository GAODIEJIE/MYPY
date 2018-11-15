/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "includes/parse.y" /* yacc.c:339  */

	#include "includes/ast.h"
	#include <string>
	int yylex (void);
	extern char *yytext;
	void yyerror (const char *);
	PoolOfNodes& pool = PoolOfNodes::getInstance();

#line 75 "parse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    MINUS = 309,
    NAME = 310,
    NEWLINE = 311,
    NOT = 312,
    NOTEQUAL = 313,
    INTNUMBER = 314,
    FLOATNUMBER = 315,
    IMAGNUMBER = 316,
    OR = 317,
    PASS = 318,
    PERCENT = 319,
    PERCENTEQUAL = 320,
    PLUS = 321,
    PLUSEQUAL = 322,
    PRINT = 323,
    RAISE = 324,
    RBRACE = 325,
    RETURN = 326,
    RIGHTSHIFT = 327,
    RIGHTSHIFTEQUAL = 328,
    RPAR = 329,
    RSQB = 330,
    SEMI = 331,
    SLASH = 332,
    SLASHEQUAL = 333,
    STAR = 334,
    STAREQUAL = 335,
    STRING = 336,
    TILDE = 337,
    TRY = 338,
    VBAREQUAL = 339,
    WHILE = 340,
    WITH = 341,
    YIELD = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "includes/parse.y" /* yacc.c:355  */

	Node* node;
	int intNumber;
	float floatNumber;
	char* str;
	int tokenType;

#line 211 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 242 "parse.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   942

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  315
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  479

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    51,    54,    55,    58,    59,    62,    63,
      66,    67,    70,    71,    74,    75,    78,    81,    82,    85,
      86,    89,    90,    93,    94,    97,    98,   101,   102,   105,
     106,   109,   110,   113,   114,   117,   118,   121,   122,   125,
     126,   129,   130,   133,   136,   137,   138,   139,   140,   141,
     142,   143,   146,   149,   155,   158,   164,   173,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     192,   195,   198,   199,   202,   205,   210,   211,   214,   215,
     218,   221,   224,   225,   226,   227,   228,   231,   234,   237,
     238,   241,   244,   245,   248,   249,   252,   253,   256,   257,
     260,   263,   266,   267,   270,   271,   272,   275,   276,   279,
     280,   283,   284,   287,   288,   291,   292,   295,   296,   299,
     302,   303,   306,   307,   310,   311,   314,   315,   316,   317,
     318,   319,   320,   321,   324,   325,   328,   329,   332,   333,
     336,   337,   340,   341,   344,   345,   348,   349,   352,   353,
     356,   359,   360,   363,   364,   367,   368,   371,   372,   375,
     376,   379,   380,   383,   384,   387,   388,   391,   392,   395,
     396,   399,   400,   403,   407,   412,   415,   420,   423,   426,
     429,   434,   437,   442,   445,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   461,   464,   467,   470,
     473,   476,   479,   482,   485,   486,   489,   493,   505,   506,
     509,   513,   533,   534,   535,   536,   539,   549,   555,   556,
     557,   560,   564,   569,   570,   573,   576,   579,   582,   585,
     590,   594,   598,   601,   607,   608,   613,   616,   621,   622,
     625,   626,   629,   640,   653,   654,   657,   658,   663,   664,
     667,   668,   669,   672,   673,   676,   677,   680,   681,   682,
     685,   686,   689,   690,   693,   694,   697,   698,   701,   702,
     705,   706,   713,   714,   717,   718,   721,   722,   725,   726,
     729,   730,   733,   734,   737,   740,   741,   744,   745,   748,
     749,   752,   753,   754,   757,   758,   761,   762,   765,   766,
     769,   770,   773,   774,   777,   778,   781,   782,   785,   786,
     789,   790,   793,   796,   801,   802
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL",
  "INTNUMBER", "FLOATNUMBER", "IMAGNUMBER", "OR", "PASS", "PERCENT",
  "PERCENTEQUAL", "PLUS", "PLUSEQUAL", "PRINT", "RAISE", "RBRACE",
  "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "RPAR", "RSQB", "SEMI",
  "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL", "STRING", "TILDE", "TRY",
  "VBAREQUAL", "WHILE", "WITH", "YIELD", "$accept", "start", "file_input",
  "pick_NEWLINE_stmt", "star_NEWLINE_stmt", "decorator", "opt_arglist",
  "decorators", "decorated", "funcdef", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "opt_COMMA", "fpdef", "fplist",
  "star_fpdef_notest", "stmt", "simple_stmt", "star_SEMI_small_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "star_COMMA_test", "opt_test",
  "plus_COMMA_test", "opt_test_2", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "opt_COMMA_test", "opt_test_3", "import_stmt", "import_name",
  "import_from", "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "plus_COMMA_old_test", "old_test", "old_lambdef",
  "test", "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -305

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-305)))

#define YYTABLE_NINF -262

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -305,    91,  -305,   376,  -305,   802,    72,   802,  -305,    75,
    -305,    81,   860,  -305,   860,   860,  -305,    95,   802,    72,
     145,   802,    15,   802,  -305,  -305,  -305,   836,  -305,  -305,
    -305,  -305,  -305,   717,   802,   802,    34,  -305,  -305,   155,
     802,   802,   802,  -305,  -305,   134,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,    43,   168,  -305,   193,   165,   167,
     177,     7,    59,    21,  -305,   860,  -305,  -305,   103,  -305,
    -305,  -305,  -305,   169,  -305,    12,  -305,   140,    26,   137,
     165,  -305,    29,   147,   149,    23,  -305,   176,  -305,   178,
      98,   802,   180,     1,    19,   126,  -305,   163,  -305,   125,
    -305,  -305,   166,   127,  -305,  -305,   802,  -305,  -305,   185,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,    15,   620,   192,  -305,   202,  -305,  -305,
    -305,  -305,    32,   195,   836,   836,  -305,   836,  -305,  -305,
    -305,  -305,  -305,   152,  -305,  -305,   172,  -305,   860,   860,
     860,   860,  -305,  -305,   860,  -305,  -305,   860,  -305,  -305,
    -305,  -305,   860,  -305,    41,  -305,   186,   802,   160,   143,
    -305,  -305,   802,   620,   802,   154,   203,   218,   802,   802,
      65,   198,   220,   230,   620,    72,   164,  -305,   802,   194,
      73,  -305,   197,  -305,   217,   802,   860,   232,  -305,  -305,
    -305,   232,  -305,  -305,   860,   232,  -305,  -305,   237,   232,
     802,  -305,  -305,  -305,  -305,   212,  -305,    78,   620,    35,
     860,  -305,   683,   802,    11,   168,  -305,  -305,  -305,   165,
     167,   177,     7,    59,    21,  -305,   201,   860,   143,   736,
    -305,    15,  -305,  -305,   183,  -305,    86,  -305,  -305,  -305,
     188,  -305,   189,   620,   860,   243,   245,   209,   259,  -305,
    -305,  -305,  -305,   211,  -305,  -305,  -305,  -305,  -305,  -305,
     199,   253,   802,   255,   163,   233,   802,  -305,  -305,   234,
    -305,   802,   256,  -305,  -305,   243,   539,   802,   262,   128,
     263,   247,   620,   802,   165,  -305,  -305,  -305,   802,  -305,
    -305,   205,   260,   265,   208,  -305,   269,  -305,   229,   802,
     802,   144,  -305,   273,   275,  -305,  -305,   165,   802,  -305,
     620,   221,   239,   281,  -305,   136,   282,  -305,   276,  -305,
    -305,    16,  -305,   285,  -305,  -305,   836,   819,  -305,   802,
    -305,  -305,  -305,   458,    39,   620,   288,   274,   291,   620,
     294,  -305,  -305,  -305,  -305,   289,  -305,   296,   802,  -305,
    -305,  -305,   802,  -305,  -305,   241,  -305,   620,  -305,   290,
    -305,  -305,   209,   802,   301,    73,   264,   802,  -305,    24,
     303,     6,   304,  -305,   261,  -305,  -305,  -305,  -305,  -305,
     802,  -305,  -305,   620,   306,  -305,   620,  -305,   620,  -305,
     284,  -305,   307,   310,  -305,  -305,   312,  -305,   313,   620,
    -305,  -305,   316,   819,  -305,  -305,  -305,   819,   317,   819,
    -305,  -305,  -305,   819,   318,  -305,  -305,   620,  -305,  -305,
    -305,   802,  -305,  -305,   770,  -305,   620,   620,  -305,   802,
       8,  -305,   819,     6,  -305,   819,  -305,  -305,  -305,   802,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    87,     0,
      88,     0,     0,     3,     0,     0,   315,     0,     0,     0,
      24,   241,   237,   239,   219,   229,     4,     0,   230,   231,
     232,    81,   218,    75,    93,    90,     0,   243,   220,     0,
       0,     0,   313,     6,    13,     0,   133,   131,     5,    37,
      42,    43,    44,    45,    46,    47,    82,    83,    84,    86,
      85,    48,    98,    99,    49,    50,    51,    38,   126,   127,
     128,   129,   130,    73,   176,   177,   179,   182,   183,   196,
     198,   200,   202,   206,   210,     0,   217,   224,   233,   174,
      57,   132,    91,   125,   117,     0,   310,     0,     0,     0,
     269,    80,   123,     0,     0,     0,   121,     0,   115,   100,
     110,     0,     0,     0,    73,     0,   240,    73,   236,     0,
     235,   234,    73,     0,   238,   181,     0,    70,    73,    97,
      89,    63,    65,    69,    68,    66,    59,    62,    58,    67,
      61,    60,    64,     0,     0,     0,   152,   154,   312,    12,
      15,    14,     0,   271,     0,     0,   173,     0,   187,   186,
     188,   190,   192,   194,   185,   189,     0,   191,     0,     0,
       0,     0,   204,   205,     0,   209,   208,     0,   214,   215,
     213,   212,     0,   216,   222,   242,    53,     0,     0,   286,
       9,   228,     0,     0,   283,    24,     0,   267,     0,     0,
       0,   314,   102,   119,     0,     0,     0,   249,     0,     0,
       0,    31,     0,    19,    22,     0,     0,    30,   273,   278,
     227,    30,   246,   225,     0,    30,   244,   226,    79,    30,
       0,    92,    52,    55,    54,     0,   161,     0,     0,     0,
       0,    40,     0,   270,     0,   178,   180,   195,   193,   184,
     197,   199,   201,   203,   207,   211,     0,     0,   286,   261,
     223,     0,   124,   118,     0,    10,     0,   311,   281,   282,
       0,    18,     0,     0,   266,    95,     0,     0,   108,   104,
     101,   114,   106,     0,   137,   116,   109,   248,    28,    36,
       0,    26,     0,    30,   275,     0,    29,   279,   247,     0,
     245,     0,    30,    71,    74,    95,     0,   156,     0,   147,
       0,   139,     0,     0,   153,    39,    41,    72,     0,   252,
     221,     0,     0,   258,     0,   256,     0,    56,     0,     0,
       0,   297,   284,    30,     0,    17,    16,   268,     0,   122,
       0,     0,     0,   112,   120,   135,    34,    32,     0,    27,
      21,    23,    20,    30,   272,   276,     0,     0,    77,    29,
      78,    96,   164,     0,   160,     0,     0,   149,     0,     0,
       0,   150,   151,   175,   250,     0,   251,   254,   261,     8,
     293,   288,     0,   294,   296,   285,   291,     0,    94,   141,
     105,   107,   111,     0,     0,    33,     0,    29,   277,   307,
      24,   301,   166,   170,   169,    76,   162,   163,   157,   158,
       0,   155,   143,     0,     0,   142,     0,   145,     0,   257,
     253,   260,   263,   290,   295,   280,     0,   113,     0,     0,
      35,    25,     0,     0,   306,   304,   305,     0,     0,     0,
     300,   298,   299,     0,    30,   159,   146,     0,   144,   138,
     255,   265,   259,   262,     0,   292,     0,     0,   134,     0,
     309,   172,     0,   303,   168,    29,   165,   148,   264,     0,
     287,   140,   136,   274,   308,   171,   302,   167,   289
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -305,  -305,  -305,  -305,  -305,   292,    82,  -305,  -305,   297,
    -305,  -174,  -305,  -305,  -305,  -305,  -199,  -191,  -305,  -305,
    -274,    -2,  -305,   104,  -305,    87,  -305,  -305,  -305,    55,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,    42,  -305,  -305,  -305,  -305,  -305,  -305,   -43,   146,
      76,  -305,  -305,    17,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,    44,
      46,  -305,  -305,  -189,  -305,  -305,  -305,  -304,  -305,    -5,
    -305,  -151,   204,     0,  -305,  -305,    -4,   187,   182,   191,
    -305,   184,  -305,   190,  -305,   -65,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,   -60,   -15,  -305,  -305,    -3,  -305,   -28,  -305,  -305,
    -305,  -305,   319,  -305,  -305,  -305,  -305,  -305,  -305,   -86,
    -305,   -94,   248,  -305,   -89,  -108,  -305,  -305,   -17,  -305
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    43,     3,    44,   264,    45,    46,    47,
     196,   112,   293,   113,   349,   213,   297,   214,   290,   346,
      48,   236,   152,    50,    51,   232,   186,   143,    52,   153,
     127,   302,   303,    53,    54,    55,    56,    57,    58,    59,
      60,   339,   231,    61,    62,    63,   104,   280,   281,   108,
     282,   343,   109,   110,    64,   203,    65,    66,    67,    68,
     345,    69,    70,    71,   309,   367,   415,    72,   239,   146,
     310,   410,   411,   237,   363,   401,   444,   402,   403,    73,
     156,    74,    75,    76,    77,   168,    78,    79,    80,    81,
     174,    82,   177,    83,   182,    84,    85,    86,   184,    87,
     118,   119,   123,   115,    88,   124,   120,    89,   260,   324,
     377,   325,   326,   452,   453,   101,   197,    90,   116,   353,
     354,   218,    91,   270,   265,   266,   423,   455,   332,   333,
     383,   440,   441,   442,   434,   435,   436,    97,    92,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    49,    96,   244,   268,   121,   219,   130,   100,   222,
     102,   100,   103,   107,   148,   284,   114,   117,   122,   289,
     183,   272,   298,    95,     7,   209,   300,   125,   128,   129,
     304,   -29,   362,   188,   215,   145,   147,   131,   318,   169,
     224,   193,   216,   178,   201,   408,   439,   132,   433,   311,
     312,   313,   210,   216,   172,   409,   211,   133,   216,   134,
      20,    21,   256,   189,   433,   257,    22,    23,   190,    24,
      25,   198,    27,   155,    28,    29,    30,   194,    94,   173,
     212,    32,   135,   154,   336,   179,   155,   136,   241,   407,
     -29,     4,   258,   259,   352,     7,    37,    38,   180,   137,
     181,   138,    42,   360,   206,   155,   207,   139,   242,   307,
     329,   308,   140,   175,   141,   233,   277,   255,   142,   188,
     278,   228,   202,   371,   210,   176,   234,    94,   211,   460,
      98,    20,    21,   461,   386,   463,    99,    22,    23,   464,
      24,    25,     6,    27,   279,    28,    29,    30,     9,   191,
     106,   389,    32,    11,   398,   366,   192,   246,   475,   307,
     111,   477,   393,   394,   249,   330,   269,    37,    38,   217,
     144,   276,   221,   157,   382,   169,   412,   225,   216,   170,
     417,   171,   262,   229,   185,   187,   355,   267,   195,   199,
     200,   204,   320,   275,   205,   208,   220,   216,   425,   223,
     224,   230,   227,   287,   430,   399,   404,   238,   240,   247,
     294,   243,   100,   295,   248,   263,   261,   -11,   273,   286,
     100,   299,   158,   384,   446,   305,   438,   448,   271,   449,
     159,   160,   161,   233,   274,   162,   314,   163,   317,  -103,
     458,   188,   164,   165,   234,   466,   283,   292,   296,   288,
     166,   167,   291,   301,   323,   306,   319,   328,   467,   338,
     340,   331,   334,   335,   278,   342,   344,   471,   472,   348,
     337,   351,   359,   347,   370,   356,   357,   365,   369,   374,
    -260,   375,   404,   376,   378,   379,   404,   350,   404,   385,
     387,   317,   404,     7,   391,   390,   358,   392,   395,  -261,
     396,   397,   364,   413,    49,   322,   416,   414,   147,   418,
     419,   404,   420,   373,   404,   -29,   429,   426,   437,   431,
     443,   447,   451,   155,   380,   381,   454,   456,   457,    20,
      21,   459,   462,   388,   465,    22,    23,   149,    24,    25,
     321,    27,   150,    28,    29,    30,   316,   361,   327,   427,
      32,   285,   251,   341,   405,   368,   250,   372,   253,   245,
     450,    49,   252,   422,   151,    37,    38,   254,   470,   476,
     226,   474,     0,   421,     0,     0,     0,   424,     0,     0,
       0,     0,     0,     5,     6,     7,     0,     8,   428,     0,
       9,     0,   432,    10,     0,    11,    12,     0,     0,     0,
       0,     0,     0,     0,    13,   445,     0,     0,    14,     0,
      15,    16,    17,     0,     0,   323,    18,    19,     0,     0,
       0,    20,    21,     0,     0,     0,     0,    22,    23,     0,
      24,    25,    26,    27,     0,    28,    29,    30,     0,    31,
       0,     0,    32,     0,    33,    34,   468,    35,     0,   331,
       0,     0,    36,     0,   473,     0,     0,    37,    38,    39,
       0,    40,    41,    42,   478,     5,     6,     7,     0,     8,
       0,     0,     9,     0,     0,    10,   406,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,    15,    16,    17,     0,     0,     0,    18,    19,
       0,     0,     0,    20,    21,     0,     0,     0,     0,    22,
      23,     0,    24,    25,     0,    27,     0,    28,    29,    30,
       0,    31,     0,     0,    32,     0,    33,    34,     0,    35,
       0,     0,     0,     0,    36,     0,     0,     0,     0,    37,
      38,    39,     0,    40,    41,    42,     5,     6,     7,     0,
       8,     0,     0,     9,     0,     0,    10,     0,    11,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,     0,    15,    16,    17,     0,     0,     0,    18,
      19,     0,     0,     0,    20,    21,     0,     0,     0,     0,
      22,    23,     0,    24,    25,     0,    27,     0,    28,    29,
      30,     0,    31,     0,     0,    32,     0,    33,    34,     0,
      35,     0,     0,     0,     0,    36,     0,     0,     0,     0,
      37,    38,    39,     0,    40,    41,    42,     5,     0,     7,
       0,     8,     0,     0,     0,     0,     0,    10,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,    16,    17,     0,     0,     0,
       0,    19,     0,     0,     0,    20,    21,     0,     0,     0,
       0,    22,    23,     0,    24,    25,   235,    27,     0,    28,
      29,    30,     0,    31,     0,     0,    32,     0,    33,    34,
       5,    35,     7,     0,     8,     0,    36,     0,     0,     0,
      10,    37,    38,    12,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,    16,    17,
       0,     0,     0,     0,    19,     0,     7,     0,    20,    21,
       0,     0,     0,     0,    22,    23,     0,    24,    25,   315,
      27,     0,    28,    29,    30,     7,    31,     0,     0,    32,
       0,    33,    34,     0,    35,     0,     0,   322,     0,    36,
       0,     0,    20,    21,    37,    38,     0,     0,    22,    23,
      42,    24,    25,     0,    27,     0,    28,    29,    30,     7,
       0,    20,    21,    32,     0,     0,     0,    22,    23,   126,
      24,    25,     0,    27,   469,    28,    29,    30,    37,    38,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,    20,    21,    37,    38,     0,
       0,    22,    23,     0,    24,    25,     0,    27,     7,    28,
      29,    30,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,    20,    21,     0,
       0,    37,    38,    22,    23,     0,    24,    25,     0,    27,
       0,    28,    29,    30,   400,    21,     0,     0,    32,     7,
      22,    23,     0,    24,    25,     0,    27,     0,    28,    29,
      30,     0,    21,    37,    38,    32,     0,    22,    23,     0,
      24,    25,     0,    27,     0,    28,    29,    30,     0,     0,
      37,    38,    32,     0,     0,     0,    21,     0,     0,     0,
       0,    22,    23,     0,    24,    25,     0,    37,    38,    28,
      29,    30,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   154,   193,    22,   114,    35,    12,   117,
      14,    15,    15,    18,    42,   204,    21,    22,    23,   210,
      85,   195,   221,     6,     9,    24,   225,    27,    33,    34,
     229,    15,   306,    21,    15,    40,    41,     3,    27,    10,
      34,    15,    34,    22,    21,     6,    40,    13,    40,   238,
      15,    16,    51,    34,    47,    16,    55,    23,    34,    25,
      45,    46,    21,    51,    40,    24,    51,    52,    56,    54,
      55,    42,    57,    62,    59,    60,    61,    51,    55,    72,
      79,    66,    48,    40,   273,    64,    62,    53,    56,   363,
      74,     0,    51,    52,   293,     9,    81,    82,    77,    65,
      79,    67,    87,   302,     6,    62,   111,    73,    76,    31,
      24,    33,    78,    54,    80,   143,    51,   182,    84,    21,
      55,   126,   105,   312,    51,    66,   143,    55,    55,   433,
      55,    45,    46,   437,   333,   439,    55,    51,    52,   443,
      54,    55,     8,    57,    79,    59,    60,    61,    14,     9,
      55,   340,    66,    19,   353,    27,    16,   157,   462,    31,
      15,   465,    26,    27,   168,    79,   194,    81,    82,   114,
      15,   199,   117,     5,    30,    10,   365,   122,    34,    12,
     369,     4,   187,   128,    81,    16,   294,   192,    51,    42,
      41,    15,   257,   198,    16,    15,    70,    34,   387,    74,
      34,    16,    75,   208,   395,   356,   357,    15,     6,    57,
     215,    16,   216,   216,    42,    55,    30,    74,    15,    55,
     224,   224,    29,   331,   413,   230,   400,   416,    74,   418,
      37,    38,    39,   261,    16,    42,   240,    44,   243,    41,
     429,    21,    49,    50,   261,   444,    16,    30,    16,    55,
      57,    58,    55,    16,   259,    43,    55,    74,   447,    16,
      15,   266,    74,    74,    55,     6,    55,   456,   457,    16,
     274,    16,    16,    74,    27,    42,    42,    15,    15,    74,
      15,    21,   433,    75,    15,    56,   437,   292,   439,    16,
      15,   296,   443,     9,    55,    74,   301,    16,    16,    15,
      24,    16,   307,    15,   306,    21,    15,    33,   313,    15,
      21,   462,    16,   318,   465,    74,    15,    27,    15,    55,
      16,    15,    15,    62,   329,   330,    16,    15,    15,    45,
      46,    15,    15,   338,    16,    51,    52,    45,    54,    55,
     258,    57,    45,    59,    60,    61,   242,   305,   261,   392,
      66,   205,   170,   277,   359,   309,   169,   313,   174,   155,
     420,   363,   171,   378,    45,    81,    82,   177,   454,   463,
     122,   460,    -1,   378,    -1,    -1,    -1,   382,    -1,    -1,
      -1,    -1,    -1,     7,     8,     9,    -1,    11,   393,    -1,
      14,    -1,   397,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,   410,    -1,    -1,    32,    -1,
      34,    35,    36,    -1,    -1,   420,    40,    41,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    55,    56,    57,    -1,    59,    60,    61,    -1,    63,
      -1,    -1,    66,    -1,    68,    69,   451,    71,    -1,   454,
      -1,    -1,    76,    -1,   459,    -1,    -1,    81,    82,    83,
      -1,    85,    86,    87,   469,     7,     8,     9,    -1,    11,
      -1,    -1,    14,    -1,    -1,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    -1,    59,    60,    61,
      -1,    63,    -1,    -1,    66,    -1,    68,    69,    -1,    71,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,    85,    86,    87,     7,     8,     9,    -1,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    -1,    59,    60,
      61,    -1,    63,    -1,    -1,    66,    -1,    68,    69,    -1,
      71,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    85,    86,    87,     7,    -1,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    56,    57,    -1,    59,
      60,    61,    -1,    63,    -1,    -1,    66,    -1,    68,    69,
       7,    71,     9,    -1,    11,    -1,    76,    -1,    -1,    -1,
      17,    81,    82,    20,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    41,    -1,     9,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    56,
      57,    -1,    59,    60,    61,     9,    63,    -1,    -1,    66,
      -1,    68,    69,    -1,    71,    -1,    -1,    21,    -1,    76,
      -1,    -1,    45,    46,    81,    82,    -1,    -1,    51,    52,
      87,    54,    55,    -1,    57,    -1,    59,    60,    61,     9,
      -1,    45,    46,    66,    -1,    -1,    -1,    51,    52,    72,
      54,    55,    -1,    57,    24,    59,    60,    61,    81,    82,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    45,    46,    81,    82,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    57,     9,    59,
      60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    45,    46,    -1,
      -1,    81,    82,    51,    52,    -1,    54,    55,    -1,    57,
      -1,    59,    60,    61,    45,    46,    -1,    -1,    66,     9,
      51,    52,    -1,    54,    55,    -1,    57,    -1,    59,    60,
      61,    -1,    46,    81,    82,    66,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    -1,    59,    60,    61,    -1,    -1,
      81,    82,    66,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    -1,    81,    82,    59,
      60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,    92,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    28,    32,    34,    35,    36,    40,    41,
      45,    46,    51,    52,    54,    55,    56,    57,    59,    60,
      61,    63,    66,    68,    69,    71,    76,    81,    82,    83,
      85,    86,    87,    91,    93,    95,    96,    97,   108,   109,
     111,   112,   116,   121,   122,   123,   124,   125,   126,   127,
     128,   131,   132,   133,   142,   144,   145,   146,   147,   149,
     150,   151,   155,   167,   169,   170,   171,   172,   174,   175,
     176,   177,   179,   181,   183,   184,   185,   187,   192,   195,
     205,   210,   226,   167,    55,   141,   167,   225,    55,    55,
     174,   203,   174,   203,   134,   227,    55,   167,   137,   140,
     141,    15,    99,   101,   167,   191,   206,   167,   188,   189,
     194,   226,   167,   190,   193,   171,    72,   118,   167,   167,
     205,     3,    13,    23,    25,    48,    53,    65,    67,    73,
      78,    80,    84,   115,    15,   167,   157,   167,   205,    93,
      97,   210,   110,   117,    40,    62,   168,     5,    29,    37,
      38,    39,    42,    44,    49,    50,    57,    58,   173,    10,
      12,     4,    47,    72,   178,    54,    66,   180,    22,    64,
      77,    79,   182,   183,   186,    81,   114,    16,    21,    51,
      56,     9,    16,    15,    51,    51,    98,   204,    42,    42,
      41,    21,   141,   143,    15,    16,     6,   167,    15,    24,
      51,    55,    79,   103,   105,    15,    34,   117,   209,   223,
      70,   117,   223,    74,    34,   117,   220,    75,   167,   117,
      16,   130,   113,   205,   226,    56,   109,   161,    15,   156,
       6,    56,    76,    16,   169,   170,   171,    57,    42,   174,
     175,   176,   177,   179,   181,   183,    21,    24,    51,    52,
     196,    30,   167,    55,    94,   212,   213,   167,   161,   205,
     211,    74,    99,    15,    16,   167,   205,    51,    55,    79,
     135,   136,   138,    16,   161,   137,    55,   167,    55,   105,
     106,    55,    30,   100,   167,   203,    16,   104,   104,   203,
     104,    16,   119,   120,   104,   167,    43,    31,    33,   152,
     158,   161,    15,    16,   174,    56,   111,   167,    27,    55,
     183,    94,    21,   167,   197,   199,   200,   113,    74,    24,
      79,   167,   216,   217,    74,    74,   161,   174,    16,   129,
      15,   138,     6,   139,    55,   148,   107,    74,    16,   102,
     167,    16,   104,   207,   208,   223,    42,    42,   167,    16,
     104,   129,   108,   162,   167,    15,    27,   153,   158,    15,
      27,   161,   157,   167,    74,    21,    75,   198,    15,    56,
     167,   167,    30,   218,   223,    16,   104,    15,   167,   161,
      74,    55,    16,    26,    27,    16,    24,    16,   104,   169,
      45,   163,   165,   166,   169,   167,    18,   108,     6,    16,
     159,   160,   161,    15,    33,   154,    15,   161,    15,    21,
      16,   167,   200,   214,   167,   161,    27,   136,   167,    15,
     105,    55,   167,    40,   222,   223,   224,    15,    99,    40,
     219,   220,   221,    16,   164,   167,   161,    15,   161,   161,
     199,    15,   201,   202,    16,   215,    15,    15,   161,    15,
     165,   165,    15,   165,   165,    16,   104,   161,   167,    24,
     217,   161,   161,   167,   222,   165,   219,   165,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   122,   123,   123,   123,   123,   123,   124,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   146,   146,
     146,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   182,   182,   183,   183,   184,   184,
     184,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   188,   188,   189,   189,   190,   190,
     191,   191,   192,   192,   193,   193,   194,   194,   195,   195,
     196,   196,   196,   197,   197,   198,   198,   199,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   213,   213,   214,   214,   215,
     215,   216,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     0,     3,     2,     1,
       0,     1,     3,     3,     2,     3,     0,     1,     1,     4,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     0,     3,     0,     3,     2,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     2,     0,     3,     0,     1,     1,
       2,     4,     2,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     2,     3,     0,     1,     3,     1,     3,     3,
       3,     0,     5,     2,     4,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     8,     5,     5,     0,     7,     4,
       9,     6,     6,     6,     4,     3,     3,     0,     3,     0,
       5,     3,     0,     3,     1,     3,     1,     1,     1,     2,
       0,     1,     4,     2,     1,     3,     1,     3,     2,     1,
       1,     4,     3,     2,     1,     4,     0,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     4,     2,     2,     0,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     2,     1,     2,     3,     2,     3,     4,     3,
       3,     3,     2,     3,     2,     3,     0,     3,     1,     4,
       1,     0,     1,     0,     2,     1,     3,     2,     3,     0,
       3,     2,     4,     2,     5,     0,     1,     2,     1,     2,
       7,     4,     1,     0,     2,     3,     0,     3,     0,     3,
       0,     2,     4,     2,     2,     3,     1,     0,     1,     1,
       5,     4,     3,     2,     1,     1,     5,     4,     3,     2,
       1,     3,     2,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 43:
#line 133 "includes/parse.y" /* yacc.c:1646  */
    {
		std::cout << " 0 " << std::endl;
	}
#line 1913 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 146 "includes/parse.y" /* yacc.c:1646  */
    {
		std::cout << " a " << std::endl;
	}
#line 1921 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 149 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = new AsgBinaryNode((yyvsp[-1].node), (yyvsp[0].node));
		pool.add((yyval.node));
	}
#line 1930 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 155 "includes/parse.y" /* yacc.c:1646  */
    {
		std::cout << " b 3" << (yyvsp[0].node) << std::endl;
	}
#line 1938 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 158 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		std::cout << " b 3" << (yyvsp[0].node) << std::endl;
	}
#line 1947 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 164 "includes/parse.y" /* yacc.c:1646  */
    {
		if((yyvsp[-2].node) == 0){
			(yyval.node) = (yyvsp[0].node);
		}
		else if((yyvsp[-2].node) != 0 && (yyvsp[0].node) != 0){
			(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
	}
#line 1961 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 173 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = 0;
	}
#line 1969 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 178 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 1975 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 179 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 1981 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 180 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 1987 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 181 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 1993 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 182 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 1999 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 183 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 2005 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 184 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 2011 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 185 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 2017 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 186 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 2023 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 187 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 2029 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 188 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 2035 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 189 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUSEQUAL;}
#line 2041 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 192 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyvsp[0].node) -> eval() -> print();
	}
#line 2049 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 202 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
	}
#line 2057 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 205 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2065 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 403 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		std::cout << "b 1" << std::endl;
	}
#line 2074 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 407 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2082 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 412 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
	}
#line 2090 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 415 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2098 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 420 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2106 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 426 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2114 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 429 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2122 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 434 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2130 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 437 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2138 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 442 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2146 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 461 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2154 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 467 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2162 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 473 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2170 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 479 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2178 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 489 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		std::cout << "b" << std::endl;
	}
#line 2187 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 493 "includes/parse.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].tokenType) == PLUS){
			(yyval.node) = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
		else if((yyvsp[-1].tokenType) == MINUS){
			(yyval.node) = new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
	}
#line 2202 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 505 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUS; }
#line 2208 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 506 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = MINUS;}
#line 2214 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 509 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		std::cout << "c" << std::endl;
	}
#line 2223 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 513 "includes/parse.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].tokenType) == STAR){
			(yyval.node) = new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
		else if((yyvsp[-1].tokenType) == SLASH){
			(yyval.node) = new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
		else if((yyvsp[-1].tokenType) == DOUBLESLASH){
			(yyval.node) = new dblDivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
		else if((yyvsp[-1].tokenType) == PERCENT){
			(yyval.node) = new ModBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
	}
#line 2246 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 533 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = STAR; }
#line 2252 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 534 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = SLASH; }
#line 2258 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 535 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = DOUBLESLASH; }
#line 2264 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 536 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PERCENT; }
#line 2270 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 539 "includes/parse.y" /* yacc.c:1646  */
    {
		if((yyvsp[-1].tokenType) == PLUS){
			(yyval.node) = new PlusUnaryNode((yyvsp[0].node));
			pool.add((yyval.node));
		}
		else if((yyvsp[-1].tokenType) == MINUS){
			(yyval.node) = new MinusUnaryNode((yyvsp[0].node));
			pool.add((yyval.node));
		}
	}
#line 2285 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 549 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		std::cout << "d" << std::endl;
	}
#line 2294 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 555 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = PLUS; }
#line 2300 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 556 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = MINUS;}
#line 2306 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 557 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.tokenType) = TILDE;}
#line 2312 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 560 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = new PowBinaryNode((yyvsp[-3].node), (yyvsp[0].node));
		pool.add((yyval.node));
	}
#line 2321 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 564 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2329 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 573 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2337 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 576 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2345 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 579 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2353 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 582 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2361 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 585 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = new IdentNode((yyvsp[0].str));
		pool.add((yyval.node));
		std::cout << "e" << std::endl;
	}
#line 2371 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 590 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = new IntLiteral((yyvsp[0].intNumber));
		pool.add((yyval.node));
	}
#line 2380 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 594 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = new FloatLiteral((yyvsp[0].floatNumber));
		pool.add((yyval.node));
	}
#line 2389 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 598 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2397 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 601 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
		//$1 ->eval() ->print();
	}
#line 2406 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 608 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2414 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 613 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2422 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 616 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2430 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 629 "includes/parse.y" /* yacc.c:1646  */
    {
		std::string s2((yyvsp[0].str)), t("");
		for(unsigned int i = 1; i < s2.size() - 1; i++)
		{
			t += s2[i];
		}
		Literal* tt = new StringLiteral(t);
		(yyval.node) = new AddBinaryNode((yyvsp[-1].node), tt);
		pool.add((yyval.node));
		delete [] (yyvsp[0].str);
	}
#line 2446 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 640 "includes/parse.y" /* yacc.c:1646  */
    {
		std::string s = (yyvsp[0].str), t = "";
		for(unsigned int i = 1; i < s.size() - 1;i++)
		{
			t += s[i];
		}
		(yyval.node) = new StringLiteral(t);
		//$$ ->eval() ->print();
		pool.add((yyval.node));
		delete [] (yyvsp[0].str);
	}
#line 2462 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 658 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-2].node);
	}
#line 2470 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 706 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[-1].node);
		//if($1!= nullptr) {$1 -> eval() -> print();}
		std::cout << "b 2" << (yyvsp[-1].node) <<std::endl;
	}
#line 2480 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 793 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2488 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 796 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = nullptr;
	}
#line 2496 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2500 "parse.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 805 "includes/parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}

