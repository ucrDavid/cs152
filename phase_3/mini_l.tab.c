/* A Bison parser, made by GNU Bison 3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "mini_l.y" /* yacc.c:338  */

 #include "header.h"
 #include "classes.h"
 
 extern int currLine;
 extern int currPos;
 extern char* yytext;     // defined and maintained in lex.c
 extern int yylex();
 extern void yyerror(char *);
 extern void yyerror(string);

#line 81 "mini_l.tab.c" /* yacc.c:338  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "mini_l.tab.h".  */
#ifndef YY_YY_MINI_L_TAB_H_INCLUDED
# define YY_YY_MINI_L_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    BEGINLOOP = 274,
    ENDLOOP = 275,
    CONTINUE = 276,
    READ = 277,
    WRITE = 278,
    AND = 279,
    OR = 280,
    NOT = 281,
    TRUE = 282,
    FALSE = 283,
    RETURN = 284,
    IDENT = 285,
    COLON = 286,
    SEMICOLON = 287,
    COMMA = 288,
    NUMBER = 289,
    ASSIGN = 290,
    NEQ = 291,
    EQ = 292,
    GTE = 293,
    GT = 294,
    LTE = 295,
    LT = 296,
    SUB = 297,
    ADD = 298,
    MOD = 299,
    DIV = 300,
    MULT = 301,
    UMINUS = 302,
    L_SQUARE_BRACKET = 303,
    R_SQUARE_BRACKET = 304,
    L_PAREN = 305,
    R_PAREN = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "mini_l.y" /* yacc.c:353  */

    string *myString;
    int myInt;
    CodeBlock *myBlock;

#line 182 "mini_l.tab.c" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   114,   115,   121,   148,   165,   169,   179,
     190,   204,   208,   221,   225,   234,   250,   263,   283,   302,
     317,   329,   341,   351,   361,   381,   385,   416,   438,   442,
     472,   483,   484,   485,   490,   504,   505,   506,   520,   521,
     522,   523,   524,   525,   528,   552,   556,   585,   618,   627,
     633,   642,   646,   660,   674,   690,   713,   735,   749,   765,
     770,   779,   787,   797,   802,   817,   821
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT", "TRUE",
  "FALSE", "RETURN", "IDENT", "COLON", "SEMICOLON", "COMMA", "NUMBER",
  "ASSIGN", "NEQ", "EQ", "GTE", "GT", "LTE", "LT", "SUB", "ADD", "MOD",
  "DIV", "MULT", "UMINUS", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET",
  "L_PAREN", "R_PAREN", "$accept", "program", "functions", "function",
  "params", "declarations", "declaration", "idents", "statements",
  "statement", "bool_expr", "bool_expressions", "relation_and_expr",
  "relation_and_expressions", "relation_expr", "comp", "expression",
  "expression_loop", "expressions", "terms", "multiplicative_expr", "term",
  "var", "vars", YY_NULLPTR
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
     305,   306
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -10,    27,  -111,    11,    14,  -111,  -111,    36,    30,
      59,    62,    72,    65,    30,    74,    81,  -111,    30,   107,
      62,    44,  -111,   108,  -111,  -111,    67,    57,    83,   -18,
     -18,    99,  -111,    89,    89,   -17,    73,    92,    90,    79,
       8,  -111,  -111,    -5,  -111,   -11,   -18,   115,   105,   109,
      70,   -40,    18,  -111,   112,    57,   101,   101,   -17,  -111,
     -17,    57,   -17,   120,  -111,  -111,   -18,    70,   -17,  -111,
     -17,  -111,    84,    52,    57,   -18,  -111,   -18,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,   -17,   -17,   -17,  -111,   -17,
     -17,   -17,  -111,    57,   104,    89,  -111,  -111,    86,    91,
     129,   110,  -111,   131,    88,   -17,   111,    94,    95,  -111,
    -111,   116,   105,   109,  -111,   -40,   -40,    18,    18,    18,
     117,    57,   101,  -111,  -111,    57,  -111,  -111,  -111,   -17,
    -111,  -111,    57,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
      57,   123,  -111,  -111,  -111,    69,   127,   133,  -111,    57,
    -111,   -18,   119,  -111,    57,   137,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     7,
       0,    11,     0,     0,     7,     0,     0,     6,     7,     0,
      11,     0,     8,     0,    12,    10,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,    63,     0,     0,     0,
       0,    31,    32,    63,    57,     0,     0,     0,    25,    28,
       0,    45,    51,    58,     0,     0,    65,    65,     0,    23,
       0,    13,     0,     0,    35,    36,     0,     0,    50,    60,
       0,    61,     0,     0,     0,     0,    24,     0,    27,    39,
      38,    43,    41,    42,    40,     0,     0,     0,    44,     0,
       0,     0,    55,     0,     0,     0,    20,    21,     0,     0,
       0,     0,    15,     0,     0,     0,    49,     0,     0,    33,
      59,     0,    25,    28,    30,    45,    45,    51,    51,    51,
       0,    13,    65,    64,     5,    13,     9,    37,    34,    50,
      56,    62,    13,    26,    29,    47,    46,    52,    53,    54,
      13,     0,    66,    14,    48,     0,     0,     0,    16,     0,
      18,     0,     0,    19,    13,     0,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   149,  -111,  -111,    38,  -111,   134,  -110,   -26,
     -25,    43,    82,    45,    85,    93,    -9,   -16,    32,   -46,
      15,    -8,   -27,   -53
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    12,    13,    16,   100,   101,
      47,    76,    48,    78,    49,    85,    50,    88,   107,    92,
      51,    52,    53,    96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      38,    37,    86,    87,    97,    54,    56,    57,    40,    41,
      42,   141,    43,    43,     1,   143,    44,    44,    71,    36,
       5,    72,   145,    69,    45,    45,    59,     6,    38,    94,
     146,    67,    46,    58,    38,    64,    65,    73,    43,    70,
       9,   104,    44,    60,   155,    68,     8,    38,   111,    98,
      45,    99,    19,   102,    25,    26,    22,    73,    66,   106,
      11,   108,    89,    90,    91,    14,    38,   120,   122,   142,
      29,   137,   138,   139,    30,    31,   114,    17,    32,    33,
      34,   117,   118,   119,   148,   149,    35,    36,    79,    80,
      81,    82,    83,    84,    38,    15,   128,    18,    38,   135,
     136,   115,   116,   110,    20,    38,    79,    80,    81,    82,
      83,    84,    21,    38,    23,    28,    27,    39,    55,    36,
     106,    60,    38,   152,    61,    62,   153,    38,    63,    74,
      75,    93,   103,    77,    95,   109,   121,   110,   124,   127,
     123,   126,   125,   147,   129,   130,   131,   150,   132,   140,
     151,   154,   156,     7,    24,   133,     0,   112,   134,     0,
     105,   144,   113
};

static const yytype_int16 yycheck[] =
{
      27,    27,    42,    43,    57,    30,    33,    34,    26,    27,
      28,   121,    30,    30,     3,   125,    34,    34,    45,    30,
      30,    46,   132,    34,    42,    42,    35,     0,    55,    55,
     140,    40,    50,    50,    61,    27,    28,    46,    30,    50,
       4,    66,    34,    48,   154,    50,    32,    74,    74,    58,
      42,    60,    14,    62,    10,    11,    18,    66,    50,    68,
      30,    70,    44,    45,    46,     6,    93,    93,    95,   122,
      13,   117,   118,   119,    17,    18,    85,     5,    21,    22,
      23,    89,    90,    91,    15,    16,    29,    30,    36,    37,
      38,    39,    40,    41,   121,    33,   105,    32,   125,   115,
     116,    86,    87,    51,    30,   132,    36,    37,    38,    39,
      40,    41,    31,   140,     7,    48,     8,    34,    19,    30,
     129,    48,   149,   149,    32,    35,   151,   154,    49,    14,
      25,    19,    12,    24,    33,    51,    32,    51,     9,    51,
      49,    10,    32,    20,    33,    51,    51,    20,    32,    32,
      17,    32,    15,     4,    20,   112,    -1,    75,   113,    -1,
      67,   129,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    54,    55,    30,     0,    54,    32,     4,
      56,    30,    57,    58,     6,    33,    59,     5,    32,    57,
      30,    31,    57,     7,    59,    10,    11,     8,    48,    13,
      17,    18,    21,    22,    23,    29,    30,    61,    74,    34,
      26,    27,    28,    30,    34,    42,    50,    62,    64,    66,
      68,    72,    73,    74,    62,    19,    74,    74,    50,    68,
      48,    32,    35,    49,    27,    28,    50,    68,    50,    34,
      50,    74,    62,    68,    14,    25,    63,    24,    65,    36,
      37,    38,    39,    40,    41,    67,    42,    43,    69,    44,
      45,    46,    71,    19,    61,    33,    75,    75,    68,    68,
      60,    61,    68,    12,    62,    67,    68,    70,    68,    51,
      51,    61,    64,    66,    68,    72,    72,    73,    73,    73,
      61,    32,    74,    49,     9,    32,    10,    51,    68,    33,
      51,    51,    32,    63,    65,    69,    69,    71,    71,    71,
      32,    60,    75,    60,    70,    60,    60,    20,    15,    16,
      20,    17,    61,    62,    32,    60,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    63,    63,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    67,    68,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    72,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     3,     0,     3,     9,
       4,     0,     3,     0,     3,     3,     7,    11,     7,     8,
       3,     3,     1,     2,     2,     0,     3,     2,     0,     3,
       3,     1,     1,     3,     4,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     2,     0,     3,     3,     3,     1,
       0,     0,     3,     3,     3,     2,     4,     1,     1,     3,
       2,     2,     4,     1,     4,     0,     3
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
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
                                              );
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
    default: /* Avoid compiler warnings. */
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 108 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("program -> functions\n");*/
                            print();
                        }
#line 1376 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 3:
#line 114 "mini_l.y" /* yacc.c:1645  */
    {/*printf("functions -> epsilon\n");*/}
#line 1382 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 4:
#line 116 "mini_l.y" /* yacc.c:1645  */
    {
                        // /*printf("functions -> function functions\n");*/
                        }
#line 1390 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 5:
#line 123 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS
                            BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statement SEMICOLON statements END_BODY\n");*/
                            // funcName($2);
                            // CodeBlock block = *($3);
                            CodeBlock block;
                            // ($4)->push_front("func " + *($2));
                            block.push_back("func " + *((yyvsp[-10].myString)));
                            // ($6)->shipCode();
                            // block = block + *($4) + *($6);
                            // block.shipCode();
                            // genCode(block.getVal());
                            // genCode("************");
                            // genCode(($6)->getVal());
                            // ($6)->shipCode();
                            // genCode("************");

                            block = block + *((yyvsp[-8].myBlock)) + *((yyvsp[-6].myBlock)) + *((yyvsp[-3].myBlock)) + *((yyvsp[-1].myBlock));
                            block.push_back("endfunc");
                            block.shipCode();

                            // cerr << "block " << block.isNull() << endl;
                            func();
                        }
#line 1419 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 6:
#line 149 "mini_l.y" /* yacc.c:1645  */
    {
                            if (!((yyvsp[-1].myBlock))->isNull()) {
                                static int i = 0;
                                CodeBlock tempBlock = *((yyvsp[-1].myBlock));
                                stringstream temp;
                                temp << "= " << ((yyvsp[-1].myBlock))->getVal() << ", $" << i;
                                i++;
                                tempBlock.push_back(temp.str());
                                (yyval.myBlock) = new CodeBlock(tempBlock);
                            } else {
                                (yyval.myBlock) = new CodeBlock();
                            }
                        }
#line 1437 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 7:
#line 165 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("declarations -> epsilon\n");*/
                            (yyval.myBlock) = new CodeBlock();
                        }
#line 1446 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 8:
#line 170 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("declarations -> declaration SEMICOLON declarations\n");*/
                            // ($1)->shipCode();
                            CodeBlock block;
                            block = *((yyvsp[-2].myBlock)) + *((yyvsp[0].myBlock));
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 1458 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 9:
#line 180 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("delcaration -> IDENT idents COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");*/
                            CodeBlock temp;
                            if (addTable(*((yyvsp[-8].myString)))) {
                                temp.push_back(".[] " + *((yyvsp[-8].myString)) + ", " + *((yyvsp[-3].myString)));
                                temp.setVal(*((yyvsp[-8].myString)));
                            };
                            temp += *((yyvsp[-7].myBlock));
                            (yyval.myBlock) = new CodeBlock(temp);
                        }
#line 1473 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 10:
#line 191 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("declaration -> IDENT idents COLON INTEGER\n");*/
                            CodeBlock temp;
                            if (addTable(*((yyvsp[-3].myString)))) {
                                temp.push_back(". " + *((yyvsp[-3].myString)));
                                temp.setVal(*((yyvsp[-3].myString)));
                            };
                            temp += *((yyvsp[-2].myBlock));
                            (yyval.myBlock) = new CodeBlock(temp);
                        }
#line 1488 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 11:
#line 204 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("idents -> epsilon\n");*/
                            (yyval.myBlock) = new CodeBlock();
                        }
#line 1497 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 12:
#line 209 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("idents -> COMMA IDENT idents\n");*/
                            CodeBlock temp;
                            temp = *((yyvsp[0].myBlock));
                            if (addTable(*((yyvsp[-1].myString)))) {
                                temp.push_back(". " + *((yyvsp[-1].myString)));
                            };
                            (yyval.myBlock) = new CodeBlock(temp);
                        }
#line 1511 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 13:
#line 221 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statements -> epsilon\n");*/
                            (yyval.myBlock) = new CodeBlock();
                        }
#line 1520 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 14:
#line 226 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statements -> statement SEMICOLON statements\n");*/
                            CodeBlock block;
                            block = *((yyvsp[-2].myBlock)) + *((yyvsp[0].myBlock));
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 1531 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 15:
#line 235 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statement -> var ASSIGN expression\n");*/
                            CodeBlock block;
                            block = *((yyvsp[-2].myBlock)) + *((yyvsp[0].myBlock));
                            if (exist(((yyvsp[-2].myBlock))->getVal()) && exist(((yyvsp[0].myBlock))->getVal())) {             //if both variables exist, then simple assign statement
                                block.push_back("= " + ((yyvsp[-2].myBlock))->getVal() + ", " + ((yyvsp[0].myBlock))->getVal());
                            } else if (!exist(((yyvsp[-2].myBlock))->getVal()) && exist(((yyvsp[0].myBlock))->getVal())) {     //if left side is an array var and right side is not
                                string code = ((yyvsp[-2].myBlock))->getVal();
                                string toAppend = ((yyvsp[0].myBlock))->getVal();
                                code.insert(0, "[]= ");
                                code.append(", " + toAppend);
                                block.push_back(code);
                            } 
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 1551 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 16:
#line 251 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statement -> IF bool_expr THEN statement SEMICOLON statements ENDIF\n");*/                            
                            CodeBlock tempBlock;
                            string execLabel = newLabel();
                            string skipLabel = newLabel();
                            ((yyvsp[-5].myBlock))->push_back("?:= " + execLabel + ", " + ((yyvsp[-5].myBlock))->getVal());
                            ((yyvsp[-5].myBlock))->push_back(":= " + skipLabel);
                            ((yyvsp[-5].myBlock))->push_back(": " + execLabel);
                            tempBlock = *((yyvsp[-5].myBlock)) + *((yyvsp[-3].myBlock)) + *((yyvsp[-1].myBlock));
                            tempBlock.push_back(": " + skipLabel);
                            (yyval.myBlock) = new CodeBlock(tempBlock);
                        }
#line 1568 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 17:
#line 264 "mini_l.y" /* yacc.c:1645  */
    {
                            /*
                                printf("statement -> IF bool_expr THEN statement 
                                SEMICOLON statements ELSE statement SEMICOLON statements ENDIF\n");
                            */
                            CodeBlock tempBlock;
                            string execLabel = newLabel();
                            string skipIfLabel = newLabel();
                            string skipElseLabel = newLabel();

                            ((yyvsp[-9].myBlock))->push_back("?:= " + execLabel + ", " + ((yyvsp[-9].myBlock))->getVal());
                            ((yyvsp[-9].myBlock))->push_back(":= " + skipIfLabel);
                            ((yyvsp[-9].myBlock))->push_back(": " + execLabel);
                            ((yyvsp[-3].myBlock))->push_front(": " + skipIfLabel);
                            ((yyvsp[-3].myBlock))->push_front(":= " + skipElseLabel);
                            ((yyvsp[-1].myBlock))->push_back(": " + skipElseLabel);
                            tempBlock = *((yyvsp[-9].myBlock)) + *((yyvsp[-7].myBlock)) + *((yyvsp[-5].myBlock)) + *((yyvsp[-3].myBlock)) + *((yyvsp[-1].myBlock));
                            (yyval.myBlock) = new CodeBlock(tempBlock);
                        }
#line 1592 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 18:
#line 284 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statement -> WHILE bool_expr BEGINLOOP statement SEMICOLON statements ENDLOOP\n");*/
                            CodeBlock tempBlock;
                            string execLabel = newLabel();
                            string skipLabel = newLabel();
                            string loopLabel = newLabel();
                            ((yyvsp[-5].myBlock))->push_front(": " + loopLabel);
                            ((yyvsp[-5].myBlock))->pop_back_label_all();
                            ((yyvsp[-3].myBlock))->pop_back_label_all();
                            ((yyvsp[-1].myBlock))->pop_back_label_all();
                            ((yyvsp[-5].myBlock))->push_back("?:= " + execLabel + ", " + ((yyvsp[-5].myBlock))->getVal());
                            ((yyvsp[-5].myBlock))->push_back(":= " + skipLabel);
                            ((yyvsp[-5].myBlock))->push_back(": " + execLabel);
                            ((yyvsp[-1].myBlock))->push_back(":= " + loopLabel);
                            ((yyvsp[-1].myBlock))->push_back(": " + skipLabel);
                            tempBlock = *((yyvsp[-5].myBlock)) + *((yyvsp[-3].myBlock)) + *((yyvsp[-1].myBlock));
                            (yyval.myBlock) = new CodeBlock(tempBlock);
                        }
#line 1615 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 19:
#line 303 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statement -> DO BEGINLOOP statement SEMICOLON statements ENDLOOP WHILE bool_expr\n");*/ 
                            CodeBlock tempBlock;
                            string execLabel = newLabel();
                            // string loopLabel = newLabel();
                            tempBlock = *((yyvsp[-5].myBlock)) + *((yyvsp[-3].myBlock));
                            tempBlock.push_front(": " + execLabel);
                            tempBlock.pop_back_label_all();
                            tempBlock += *((yyvsp[0].myBlock));
                            tempBlock.push_back("?:= " + execLabel + ", " + ((yyvsp[0].myBlock))->getVal());
                            // tempBlock = *($3) + *($5) + *($8);
                            // tempBlock.push_back("should be right above me");
                            (yyval.myBlock) = new CodeBlock(tempBlock);
                        }
#line 1634 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 20:
#line 318 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statement ->  READ var vars\n");*/
                            CodeBlock tempBlock;
                            tempBlock = *((yyvsp[-1].myBlock));
                            if (!((yyvsp[0].myBlock))->isNull()) {
                                tempBlock += *((yyvsp[0].myBlock));
                            }
                            tempBlock.push_var(((yyvsp[-1].myBlock))->getVal());
                            tempBlock.pop_var("<");
                            (yyval.myBlock) = new CodeBlock(tempBlock);
                        }
#line 1650 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 21:
#line 330 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statement -> WRITE var vars\n");*/
                            CodeBlock tempBlock;
                            tempBlock = *((yyvsp[-1].myBlock));
                            if (!((yyvsp[0].myBlock))->isNull()) {
                                tempBlock += *((yyvsp[0].myBlock));
                            }
                            tempBlock.push_var(((yyvsp[-1].myBlock))->getVal());
                            tempBlock.pop_var(">");
                            (yyval.myBlock) = new CodeBlock(tempBlock);
                        }
#line 1666 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 22:
#line 342 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statement -> CONTINUE\n");*/
                            //THIS WOULD BE A GOTO STATEMENT
                            CodeBlock temp;
                            string label = newLabel();
                            temp.push_back_label(label);
                            temp.push_back(":= " + label);
                            (yyval.myBlock) = new CodeBlock(temp);
                        }
#line 1680 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 23:
#line 352 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("statement -> RETURN expression\n");*/
                            CodeBlock temp;
                            temp = *((yyvsp[0].myBlock));
                            temp.push_back("ret " + ((yyvsp[0].myBlock))->getVal());
                            (yyval.myBlock) = new CodeBlock(temp);
                        }
#line 1692 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 24:
#line 362 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("bool_expr -> relation_and_expr bool_expressions\n");*/
                            if (!((yyvsp[0].myBlock))->isNull()) {           //if an bool_expression loop exists
                                string code = ((yyvsp[0].myBlock))->getVal();
                                string temp = newTemp();
                                CodeBlock block;
                                block.push_back(". " + temp);
                                block += *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                                code.insert(2, " " + temp + ", " + ((yyvsp[-1].myBlock))->getVal());
                                block.push_back(code);
                                block.setVal(temp);
                                (yyval.myBlock) = new CodeBlock(block);
                            } else {                        //if expression loop does not exist; i.e. just a number
                                (yyval.myBlock) = (yyvsp[-1].myBlock);
                            }
                        }
#line 1713 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 25:
#line 381 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("bool_expressions -> epsilon\n");*/
                            (yyval.myBlock) = new CodeBlock();
                        }
#line 1722 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 26:
#line 386 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("bool_expressions -> OR relation_and_expr bool_expressions\n");*/

                            //declare base string to "return"
                            string base = (string) "||" +  (string) ", ";

                            if (!((yyvsp[0].myBlock))->isNull()) {   //expression loop is not epsilon
                                CodeBlock block;
                                block = *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                                //store addition result into generated temp
                                string temp = newTemp();
                                block.push_back(". " + temp);
                                //code returned by the loop that is NOT empty
                                string code = ((yyvsp[0].myBlock))->getVal();
                                //need to add current $2 and $3 together and store in generated temp
                                code.insert(2, " " + temp + ", " + ((yyvsp[-1].myBlock))->getVal());
                                block.push_back(code);
                                block.setVal(base + temp);
                                //now "return" the base + temp
                                //value of expression generated above is in the generated temp
                                (yyval.myBlock) = new CodeBlock(block);
                            } else {                        //expression loop is epsilon
                                CodeBlock block;
                                block = *((yyvsp[-1].myBlock));
                                block.setVal(base + ((yyvsp[-1].myBlock))->getVal());
                                (yyval.myBlock) = new CodeBlock(block);
                            }
                        }
#line 1755 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 27:
#line 417 "mini_l.y" /* yacc.c:1645  */
    {
                                /*printf("relation_and_expr -> relation_expr relation_and_expressions\n");*/
                                if (!((yyvsp[0].myBlock))->isNull()) {
                                    //local vars
                                    string temp = newTemp();
                                    string code = ((yyvsp[0].myBlock))->getVal();
                                    CodeBlock block;
                                    block.push_back(". " + temp);
                                    block += *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                                    //insert code 
                                    code.insert(2, " " + temp + ", " + ((yyvsp[-1].myBlock))->getVal());
                                    block.push_back(code);
                                    block.setVal(temp);
                                    (yyval.myBlock) = new CodeBlock(block);
                                } else {
                                    (yyval.myBlock) = (yyvsp[-1].myBlock);
                                }
                            }
#line 1778 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 28:
#line 438 "mini_l.y" /* yacc.c:1645  */
    {
                                    /*printf("relation_and_expressions -> epsilon\n");*/
                                    (yyval.myBlock) = new CodeBlock();
                                }
#line 1787 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 29:
#line 443 "mini_l.y" /* yacc.c:1645  */
    {
                                    /*printf("relation_and_expressions -> AND relation_expr relation_and_expressions\n");*/
                                    //declare base string to "return"
                                    string base = (string) "&&" +  (string) ", ";

                                    if (!((yyvsp[0].myBlock))->isNull()) {   //expression loop is not epsilon
                                        CodeBlock block;
                                        block = *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                                        //store addition result into generated temp
                                        string temp = newTemp();
                                        block.push_back(". " + temp);
                                        //code returned by the loop that is NOT empty
                                        string code = ((yyvsp[0].myBlock))->getVal();
                                        //need to add current $2 and $3 together and store in generated temp
                                        code.insert(2, " " + temp + ", " + ((yyvsp[-1].myBlock))->getVal());
                                        block.push_back(code);
                                        block.setVal(base + temp);
                                        //now "return" the base + temp
                                        //value of expression generated above is in the generated temp
                                        (yyval.myBlock) = new CodeBlock(block);
                                    } else {                        //expression loop is epsilon
                                        //"return" base + $2
                                        CodeBlock block;
                                        block = *((yyvsp[-1].myBlock));
                                        block.setVal(base + ((yyvsp[-1].myBlock))->getVal());
                                        (yyval.myBlock) = new CodeBlock(block);
                                    }
                                }
#line 1820 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 30:
#line 473 "mini_l.y" /* yacc.c:1645  */
    {
                                    /*printf("relation_expr -> expression comp expression\n");*/
                                    CodeBlock block;
                                    block = *((yyvsp[-2].myBlock)) + *((yyvsp[0].myBlock));
                                    string temp = newTemp();
                                    block.push_back(". " + temp);
                                    block.push_back(*((yyvsp[-1].myString)) + temp + ", " + ((yyvsp[-2].myBlock))->getVal() + ", " + ((yyvsp[0].myBlock))->getVal());
                                    block.setVal(temp);
                                    (yyval.myBlock) = new CodeBlock(block);                                   
                                }
#line 1835 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 31:
#line 483 "mini_l.y" /* yacc.c:1645  */
    {/*printf("relation_expr -> TRUE\n");*/ (yyval.myBlock) = new CodeBlock("1");}
#line 1841 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 32:
#line 484 "mini_l.y" /* yacc.c:1645  */
    {/*printf("relation_expr -> FALSE\n");*/ (yyval.myBlock) = new CodeBlock("0");}
#line 1847 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 33:
#line 486 "mini_l.y" /* yacc.c:1645  */
    {
                                    /*printf("relation_expr -> L_PAREN bool_expr R_PAREN\n");*/
                                    (yyval.myBlock) = (yyvsp[-1].myBlock);
                                }
#line 1856 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 34:
#line 491 "mini_l.y" /* yacc.c:1645  */
    {
                                    /*printf("relation_expr -> NOT expression comp expression\n");*/
                                    CodeBlock block;
                                    block = *((yyvsp[-2].myBlock)) + *((yyvsp[0].myBlock));
                                    string temp = newTemp();
                                    block.push_back(". " + temp);
                                    string notTemp = newTemp();
                                    block.push_back(". " + notTemp);
                                    block.push_back(*((yyvsp[-1].myString)) + temp + ", " + ((yyvsp[-2].myBlock))->getVal() + ", " + ((yyvsp[0].myBlock))->getVal());
                                    block.push_back("! " + notTemp + ", " + temp);
                                    block.setVal(notTemp);
                                    (yyval.myBlock) = new CodeBlock(block);                                   
                                }
#line 1874 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 35:
#line 504 "mini_l.y" /* yacc.c:1645  */
    {/*printf("relation_expr -> NOT TRUE\n");*/ (yyval.myBlock) = new CodeBlock("0");}
#line 1880 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 36:
#line 505 "mini_l.y" /* yacc.c:1645  */
    {/*printf("relation_expr -> NOT FALSE\n");*/ (yyval.myBlock) = new CodeBlock("1");}
#line 1886 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 37:
#line 507 "mini_l.y" /* yacc.c:1645  */
    {
                                    /*printf("relation_expr -> NOT L_PAREN b ool_expr R_PAREN\n");*/
                                    CodeBlock block;
                                    block = *((yyvsp[-1].myBlock));
                                    string temp = newTemp();
                                    block.push_back(". " + temp);
                                    block.push_back("! " + temp + ", " + ((yyvsp[-1].myBlock))->getVal());
                                    block.setVal(temp);
                                    (yyval.myBlock) = new CodeBlock(block);

                                }
#line 1902 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 38:
#line 520 "mini_l.y" /* yacc.c:1645  */
    {/*printf("comp -> EQ\n");*/ (yyval.myString) = new string("== ");}
#line 1908 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 39:
#line 521 "mini_l.y" /* yacc.c:1645  */
    {/*printf("comp -> NEQ\n");*/ (yyval.myString) = new string("!= ");}
#line 1914 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 40:
#line 522 "mini_l.y" /* yacc.c:1645  */
    {/*printf("comp -> LT\n");*/ (yyval.myString) = new string("< ");}
#line 1920 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 41:
#line 523 "mini_l.y" /* yacc.c:1645  */
    {/*printf("comp -> GT\n");*/ (yyval.myString) = new string("> ");}
#line 1926 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 42:
#line 524 "mini_l.y" /* yacc.c:1645  */
    {/*printf("comp -> LTE\n");*/ (yyval.myString) = new string("<= ");}
#line 1932 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 43:
#line 525 "mini_l.y" /* yacc.c:1645  */
    {/*printf("comp -> GTE\n");*/ (yyval.myString) = new string(">= ");}
#line 1938 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 44:
#line 529 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("expression -> multiplicative_expr expression_loop\n");*/

                            if (!((yyvsp[0].myBlock))->isNull()) {   //if an expression loop exists
                                //local vars
                                CodeBlock block;
                                block = *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                                string code = ((yyvsp[0].myBlock))->getVal();
                                string temp = newTemp();
                                block.push_back(". " + temp);
                                //only applies to local code
                                code.insert(1, " " + temp + ", " + ((yyvsp[-1].myBlock))->getVal());
                                block.push_back(code);
                                block.setVal(temp);
                                //"return" code
                                (yyval.myBlock) = new CodeBlock(block);
                            } else {                        //if expression loop does not exist; i.e. just a number
                                (yyval.myBlock) = (yyvsp[-1].myBlock);
                            }
                        }
#line 1963 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 45:
#line 552 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("expression_loop -> epsilon\n");*/
                            (yyval.myBlock) = new CodeBlock();
                        }
#line 1972 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 46:
#line 557 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("expression_loop -> ADD multiplicative_expr expression_loop\n");*/

                            //declare base string to "return"
                            string base = (string) "+" +  (string) ", ";

                            if (!((yyvsp[0].myBlock))->isNull()) {   //expression loop is not epsilon
                                CodeBlock block;
                                block = *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                                //store addition result into generated temp
                                string temp = newTemp();
                                block.push_back(". " + temp);
                                //code returned by the loop that is NOT empty
                                string code = ((yyvsp[0].myBlock))->getVal();
                                //need to add current $2 and $3 together and store in generated temp
                                code.insert(1, " " + temp + ", " + ((yyvsp[-1].myBlock))->getVal());
                                block.push_back(code);
                                block.setVal(base + temp);
                                //now "return" the base + temp
                                //value of expression generated above is in the generated temp
                                (yyval.myBlock) = new CodeBlock(block);
                            } else {                        //expression loop is epsilon
                                //"return" base + $2
                                CodeBlock block = *((yyvsp[-1].myBlock));
                                block.setVal(base + ((yyvsp[-1].myBlock))->getVal());
                                (yyval.myBlock) = new CodeBlock(block);
                            }
                        }
#line 2005 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 47:
#line 586 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("expression_loop -> SUB  multiplicative_expr expression_loop\n");*/

                            //declare base string to "return"
                            string base = (string) "-" +  (string) ", ";

                            if (!((yyvsp[0].myBlock))->isNull()) {   //expression loop is not epsilon
                                CodeBlock block;
                                block = *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                                //store addition result into generated temp
                                string temp = newTemp();
                                block.push_back(". " + temp);
                                //code returned by the loop that is NOT empty
                                string code = ((yyvsp[0].myBlock))->getVal();
                                //need to add current $2 and $3 together and store in generated temp
                                code.insert(1, " " + temp + ", " + ((yyvsp[-1].myBlock))->getVal());
                                //generate code
                                block.push_back(code);
                                block.setVal(base + temp);
                                //now "return" the base + temp
                                //value of expression generated above is in the generated temp
                                (yyval.myBlock) = new CodeBlock(block);
                            } else {                        //expression loop is epsilon
                                //"return" base + $2
                                CodeBlock block = *((yyvsp[-1].myBlock));
                                block.setVal(base + ((yyvsp[-1].myBlock))->getVal());
                                (yyval.myBlock) = new CodeBlock(block);
                            }
                        }
#line 2039 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 48:
#line 619 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("expressions -> expression COMMA expressions\n");*/

                            //not sure if this is right
                            CodeBlock block;
                            block = *((yyvsp[-2].myBlock)) + *((yyvsp[0].myBlock));
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 2052 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 49:
#line 628 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("expressions -> expression\n");*/
                            (yyval.myBlock) = (yyvsp[0].myBlock);
                        }
#line 2061 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 50:
#line 633 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("expressions -> epsilon\n");*/

                            //might need later but works w/o it atm
                            (yyval.myBlock) = new CodeBlock();
                        }
#line 2072 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 51:
#line 642 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("terms -> epsilon\n");*/
                            (yyval.myBlock) = new CodeBlock();
                        }
#line 2081 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 52:
#line 647 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("terms -> MOD term terms\n");*/
                            CodeBlock block;
                            block = *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                            if (!((yyvsp[0].myBlock))->isNull()) {
                                string code = ((yyvsp[0].myBlock))->getVal();
                                code.insert(1, " " + ((yyvsp[-1].myBlock))->getVal());
                                block.push_back(code);
                            }
                            string temp = (string) "%" + (string) ", " + ((yyvsp[-1].myBlock))->getVal();
                            block.setVal(temp);
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 2099 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 53:
#line 661 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("terms -> DIV term terms\n");*/
                            CodeBlock block;
                            block = *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                            if (!((yyvsp[0].myBlock))->isNull()) {
                                string code = ((yyvsp[0].myBlock))->getVal();
                                code.insert(1, " " + ((yyvsp[-1].myBlock))->getVal());
                                block.push_back(code);
                            }
                            string temp = (string) "/" + (string) ", " + ((yyvsp[-1].myBlock))->getVal();
                            block.setVal(temp);
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 2117 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 54:
#line 675 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("terms -> MULT term terms\n");*/
                            CodeBlock block;
                            block = *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                            if (!((yyvsp[0].myBlock))->isNull()) {
                                string code = ((yyvsp[0].myBlock))->getVal();
                                code.insert(1, " " + ((yyvsp[-1].myBlock))->getVal());
                                block.push_back(code);
                            }
                            string temp = (string) "*" + (string) ", " + ((yyvsp[-1].myBlock))->getVal();
                            block.setVal(temp);
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 2135 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 55:
#line 691 "mini_l.y" /* yacc.c:1645  */
    {
                                    /*printf("multiplicative_expr -> term terms\n");*/
                                    if (!((yyvsp[0].myBlock))->isNull()) {
                                        //local var
                                        CodeBlock block;
                                        block = *((yyvsp[-1].myBlock)) + *((yyvsp[0].myBlock));
                                        string code = ((yyvsp[0].myBlock))->getVal();
                                        string temp = newTemp();
                                        block.push_back(". " + temp);
                                        //inserting code
                                        code.insert(1," " + temp + ", " + ((yyvsp[-1].myBlock))->getVal());
                                        block.push_back(code);
                                        block.setVal(temp);

                                        //"return" statement
                                        (yyval.myBlock) = new CodeBlock(block);
                                    } else {
                                        (yyval.myBlock) = (yyvsp[-1].myBlock);
                                    }
                                }
#line 2160 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 56:
#line 714 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("term -> IDENT L_PAREN expressions R_PAREN\n");*/

                            //THIS IS A FUNCTION CALL
                            //SHOULD HANDLE MAYBE AT THE END WITH A STACK OR SOMETHING?
                            //IDK ATM
                            CodeBlock block;
                            block = *((yyvsp[-1].myBlock));
                            string temp = newTemp();
                            block.push_back(". " + temp);
                            string paramTemp = newTemp();
                            block.push_back(". " + paramTemp);
                            string expr = ((yyvsp[-1].myBlock))->getVal();
                            block.push_back("= " + paramTemp + ", " + expr);
                            block.push_back("param " + paramTemp);
                            string code = "call " + *((yyvsp[-3].myString)) + ", " + temp;
                            block.push_back(code);
                            block.setVal(temp);
                            (yyval.myBlock) = new CodeBlock(block);
                            //TODO: ADD GO TO STATEMENT
                        }
#line 2186 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 57:
#line 736 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("term -> NUMBER\n");*/

                            //generate temp
                            CodeBlock block;
                            string temp = newTemp();
                            block.push_back(". " + temp);
                            //generate the code to store $1 into temp
                            block.push_back("= " + temp + ", " + *((yyvsp[0].myString)));
                            block.setVal(temp);
                            //"return" temp b/c it now stores the number
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 2204 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 58:
#line 750 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("term -> var\n");*/
                            CodeBlock block;
                            block = *((yyvsp[0].myBlock));
                            if (!exist(((yyvsp[0].myBlock))->getVal())) {        //if $1 isn't just an identifier
                                string temp = newTemp();
                                block.push_back(". " + temp);
                                block.push_back("=[] " + temp + ", " + ((yyvsp[0].myBlock))->getVal());
                                block.setVal(temp);
                                (yyval.myBlock) = new CodeBlock(block);
                            } else {    
                                block.setVal(((yyvsp[0].myBlock))->getVal());
                                (yyval.myBlock) = new CodeBlock(block);
                            }
                        }
#line 2224 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 59:
#line 766 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("term -> L_PAREN expression R_PAREN\n");*/
                            (yyval.myBlock) = (yyvsp[-1].myBlock);
                        }
#line 2233 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 60:
#line 771 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("term -> SUB NUMBER\n");*/

                            //have to static cast cause compiler optimizes to char* or something
                            CodeBlock block;
                            block.setVal((string) "-" + *((yyvsp[0].myString)));
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 2246 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 61:
#line 780 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("term -> SUB var\n");*/
                            CodeBlock block;
                            block = *((yyvsp[0].myBlock));
                            block.setVal((string) "-" + ((yyvsp[0].myBlock))->getVal());
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 2258 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 62:
#line 788 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("term -> SUB L_PAREN expression R_PAREN\n");*/
                            //SUB A FUNCTION CALL
                            CodeBlock block = *((yyvsp[-1].myBlock));
                            block.setVal((string) "-" + ((yyvsp[-1].myBlock))->getVal());
                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 2270 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 63:
#line 798 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("var -> IDENT\n");*/
                            (yyval.myBlock) = new CodeBlock(*((yyvsp[0].myString)));
                        }
#line 2279 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 64:
#line 803 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("var -> IDENT L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");*/ 
                            //arr is $1; index is $3
                            CodeBlock block;
                            block = *((yyvsp[-1].myBlock));
                            string base = *((yyvsp[-3].myString)) + ", " + ((yyvsp[-1].myBlock))->getVal();
                            block.setVal(base);
                            //"return" temp b/c it now stores the array value
                            (yyval.myBlock) = new CodeBlock(block);

                        }
#line 2295 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 65:
#line 817 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("vars -> epsilon\n");*/
                            (yyval.myBlock) = new CodeBlock();
                        }
#line 2304 "mini_l.tab.c" /* yacc.c:1645  */
    break;

  case 66:
#line 822 "mini_l.y" /* yacc.c:1645  */
    {
                            /*printf("vars -> COMMA var vars \n");*/
                            CodeBlock block;
                            block = *((yyvsp[-1].myBlock));
                            if (!((yyvsp[0].myBlock))->isNull()) {
                                block += *((yyvsp[0].myBlock));
                            }
                            block.push_var(((yyvsp[-1].myBlock))->getVal());

                            (yyval.myBlock) = new CodeBlock(block);
                        }
#line 2320 "mini_l.tab.c" /* yacc.c:1645  */
    break;


#line 2324 "mini_l.tab.c" /* yacc.c:1645  */
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 835 "mini_l.y" /* yacc.c:1903  */



void yyerror( string s ) {  // error handler routine
  extern int  yylineno;    // defined and maintained in lex.c
  extern char* yytext;     // defined and maintained in lex.c
  cerr << "ERROR: " << s << " at symbol \"" << yytext;
  cerr << "\" on line " << currLine << " column " << currPos << endl;
  exit( 1 );
}

void yyerror( char* s ) { yyerror( string(s) ); }