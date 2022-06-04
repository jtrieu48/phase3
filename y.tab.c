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
#line 4 "miniL.y" /* yacc.c:339  */


    
#include "heading.h"
//#include <stdio.h>
//#define YY_NO_UNPUT
//int yyparse();
int yyerror(const char* s);
int yylex(void);
stringstream *all_code;
FILE * myin;
void print_test(string output);
void print_test(stringstream o);
string gen_code(string *res, string op, string *val1, string *val2);
string to_string(char* s);
string to_string(int s);
int tempi = 0;
int templ = 0;
string * new_temp();
string * new_label();
string go_to(string *s);
string dec_label(string *s);
string dec_temp(string *s);
void expression_code( Terminal &DD,  Terminal D2, Terminal D3,string op);
bool success = true;
bool no_main = false;
void push_map(string name, Var v);
bool check_map(string name);
void check_map_dec(string name);

map<string,Var> var_map;
stack<Loop> loop_stack;


#line 101 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    RETURN = 279,
    AND = 280,
    OR = 281,
    NOT = 282,
    TRUE = 283,
    FALSE = 284,
    SUB = 285,
    ADD = 286,
    MULT = 287,
    DIV = 288,
    MOD = 289,
    EQ = 290,
    NEQ = 291,
    LT = 292,
    GT = 293,
    LTE = 294,
    GTE = 295,
    SEMICOLON = 296,
    COLON = 297,
    COMMA = 298,
    L_PAREN = 299,
    R_PAREN = 300,
    L_SQUARE_BRACKET = 301,
    R_SQUARE_BRACKET = 302,
    ASSIGN = 303,
    NUMBER = 304,
    IDENT = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 39 "miniL.y" /* yacc.c:355  */

    int       int_val;
    char str_val[256];

    //enum Type {INT, INT_ARR};

    struct {
        stringstream *code;
    }NonTerminal;

    struct Terminal Terminal;


//    struct {
//       stringstream *code;
//       //location
//       string *place;
//       string *value;
//       string *offset;
//       // branches
//       string *op;
//       string *begin;
//       string *parent;
//       string *end;
//       // type
//       //uint val;
//       Type type;
//       int length;
//       string *index;
//       // idents and vars
//       vector<string> *ids;
//       vector<Var> *vars; 
//    } Terminal;



#line 229 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   113,   119,   145,   158,   163,   170,   179,
     186,   191,   197,   253,   293,   302,   309,   318,   321,   324,
     327,   330,   334,   337,   351,   358,   384,   402,   407,   414,
     436,   453,   464,   478,   490,   496,   509,   520,   526,   547,
     567,   574,   590,   609,   616,   621,   629,   637,   643,   649,
     656,   662,   668,   674,   680,   686,   694,   711,   733,   752,
     759,   776,   795,   814,   831,   838,   845,   850,   857,   864,
     870,   877,   888,   895,   900,   904,   909,   943,   951
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "READ", "WRITE", "RETURN", "AND", "OR", "NOT",
  "TRUE", "FALSE", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT",
  "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN", "NUMBER", "IDENT",
  "$accept", "program", "function", "b_func", "function_2", "decl_loop",
  "stmt_loop", "declaration", "declaration_2", "declaration_3",
  "statement", "statement_1", "statement_2", "statement_21", "statement_3",
  "b_loop", "statement_4", "statement_5", "statement_51", "statement_6",
  "statement_61", "bool_exp", "bool_exp2", "rel_and_exp", "rel_and_exp2",
  "relation_exp", "relation_exp_s", "comp", "expression", "expression_2",
  "mult_expr", "mult_expr_2", "term", "term_2", "term_3", "term_31",
  "term_32", "var", "var_2", YY_NULLPTR
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
     305
};
# endif

#define YYPACT_NINF -120

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-120)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      25,    -9,    67,    25,  -120,    28,  -120,  -120,    69,    36,
      15,    95,    65,    97,    59,  -120,   104,    36,    66,   101,
      15,    36,  -120,    68,  -120,  -120,   106,    71,   107,   102,
      12,  -120,    26,    26,  -120,  -120,    70,    70,    16,    73,
      75,  -120,  -120,  -120,  -120,  -120,  -120,    74,   -18,  -120,
    -120,    -1,    26,  -120,    -6,   109,    98,   100,  -120,    53,
      64,    51,  -120,  -120,  -120,  -120,   108,    83,    85,    16,
    -120,    16,  -120,     0,    16,  -120,  -120,    84,    42,    16,
      12,    26,  -120,    26,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,    16,    16,    16,  -120,    16,    16,    16,  -120,   111,
      12,    70,  -120,    70,  -120,    86,    87,  -120,  -120,    91,
    -120,  -120,  -120,    90,    92,   119,    99,    98,   100,  -120,
      64,    64,    51,    51,    51,    12,   116,    83,    85,  -120,
       0,    16,  -120,  -120,    12,   123,    12,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,   121,   122,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,    26,  -120
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     3,     5,     0,     1,     2,     0,     9,
       0,     0,     0,    16,     0,    12,     0,     9,     0,     0,
       0,     9,     8,     0,    14,    13,     0,     0,     0,     0,
       0,    15,     0,     0,    30,    23,     0,     0,     0,    78,
       0,    17,    18,    19,    20,    21,    22,     0,     0,    47,
      48,     0,     0,    69,    78,     0,    40,    43,    44,     0,
      59,    64,    66,    67,    68,    30,     0,    34,    37,     0,
      24,     0,    76,     0,     0,    45,    65,     0,     0,    73,
      11,     0,    38,     0,    41,    50,    51,    52,    53,    54,
      55,     0,     0,     0,    56,     0,     0,     0,    60,     0,
      11,     0,    32,     0,    35,     0,     0,     7,     4,     0,
      25,    49,    70,    75,     0,    27,     0,    40,    43,    46,
      59,    59,    64,    64,    64,    11,     0,    34,    37,    77,
       0,    73,    72,    71,    11,     0,    11,    39,    42,    58,
      57,    61,    62,    63,     0,     0,    33,    36,     6,    74,
      28,    26,    10,    29,     0,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,   139,  -120,  -120,    13,    47,   -73,  -120,   124,  -120,
     -28,  -120,  -120,  -120,  -120,    80,  -120,  -120,    19,  -120,
      20,   -33,    30,    72,    31,    76,   103,  -120,   -32,   -23,
      11,  -119,   -81,   105,  -120,    21,  -120,   -29,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,   108,    11,   115,    12,    15,    19,
     116,    41,    42,   135,    43,    66,    44,    45,   102,    46,
     104,    55,    82,    56,    84,    57,    58,    91,    59,    94,
      60,    98,    61,    62,    63,   114,   132,    64,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      65,    47,    40,   141,   142,   143,    70,    67,    68,   107,
      49,    50,    51,    32,   122,   123,   124,    33,    34,    77,
      78,    35,    36,    37,    38,    32,    52,   126,     1,    33,
      34,    53,    54,    35,    36,    37,    38,   105,    79,   106,
      71,     4,   110,    69,    47,   109,    51,   113,    53,    39,
      39,    47,   144,    48,    49,    50,    51,    13,    14,   119,
      69,   150,    39,   152,    22,    53,    54,     6,    26,     8,
      52,    47,   127,     9,   128,    53,    54,    85,    86,    87,
      88,    89,    90,    95,    96,    97,    10,   112,    85,    86,
      87,    88,    89,    90,    92,    93,    47,   139,   140,   113,
      16,    47,   109,   120,   121,    47,    17,    47,    18,    20,
      21,    24,    23,    28,    31,    30,    73,    27,    29,    71,
      39,   155,    74,    80,    81,    83,   101,   100,   103,   111,
     125,   112,   130,   131,   129,   134,   145,   133,   151,   154,
     136,   153,     7,   148,    25,    99,   146,   137,   147,   138,
       0,    75,   149,   117,     0,     0,    76,     0,     0,   118
};

static const yytype_int16 yycheck[] =
{
      33,    30,    30,   122,   123,   124,    38,    36,    37,     9,
      28,    29,    30,    13,    95,    96,    97,    17,    18,    52,
      52,    21,    22,    23,    24,    13,    44,   100,     3,    17,
      18,    49,    50,    21,    22,    23,    24,    69,    44,    71,
      46,    50,    74,    44,    73,    73,    30,    79,    49,    50,
      50,    80,   125,    27,    28,    29,    30,    42,    43,    91,
      44,   134,    50,   136,    17,    49,    50,     0,    21,    41,
      44,   100,   101,     4,   103,    49,    50,    35,    36,    37,
      38,    39,    40,    32,    33,    34,    50,    45,    35,    36,
      37,    38,    39,    40,    30,    31,   125,   120,   121,   131,
       5,   130,   130,    92,    93,   134,    41,   136,    11,    50,
       6,    10,    46,     7,    12,     8,    41,    49,    47,    46,
      50,   154,    48,    14,    26,    25,    43,    19,    43,    45,
      19,    45,    41,    43,    47,    16,    20,    45,    15,    17,
      41,    20,     3,   130,    20,    65,   127,   117,   128,   118,
      -1,    48,   131,    81,    -1,    -1,    51,    -1,    -1,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    52,    53,    50,    54,     0,    52,    41,     4,
      50,    56,    58,    42,    43,    59,     5,    41,    11,    60,
      50,     6,    56,    46,    10,    59,    56,    49,     7,    47,
       8,    12,    13,    17,    18,    21,    22,    23,    24,    50,
      61,    62,    63,    65,    67,    68,    70,    88,    27,    28,
      29,    30,    44,    49,    50,    72,    74,    76,    77,    79,
      81,    83,    84,    85,    88,    72,    66,    88,    88,    44,
      79,    46,    89,    41,    48,    77,    84,    72,    79,    44,
      14,    26,    73,    25,    75,    35,    36,    37,    38,    39,
      40,    78,    30,    31,    80,    32,    33,    34,    82,    66,
      19,    43,    69,    43,    71,    79,    79,     9,    55,    61,
      79,    45,    45,    79,    86,    57,    61,    74,    76,    79,
      81,    81,    83,    83,    83,    19,    57,    88,    88,    47,
      41,    43,    87,    45,    16,    64,    41,    73,    75,    80,
      80,    82,    82,    82,    57,    20,    69,    71,    55,    86,
      57,    15,    57,    20,    17,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    54,    55,    55,    56,    56,
      57,    57,    58,    59,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    62,    63,    64,    64,    65,
      66,    67,    68,    69,    69,    70,    71,    71,    72,    73,
      73,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    79,    80,    80,    80,
      81,    82,    82,    82,    82,    83,    83,    83,    84,    84,
      84,    85,    86,    86,    87,    87,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,    13,     1,     3,     1,     3,     0,
       3,     0,     2,     3,     3,     5,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     6,     0,     2,     6,
       0,     7,     3,     3,     0,     3,     3,     0,     2,     3,
       0,     2,     3,     0,     1,     2,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     0,
       2,     3,     3,     3,     0,     2,     1,     1,     1,     1,
       3,     4,     2,     0,     2,     0,     2,     3,     0
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
#line 102 "miniL.y" /* yacc.c:1646  */
    {
                //printf("program -> function program\n");
                (yyval.NonTerminal).code = (yyvsp[-1].Terminal).code;
                *((yyval.NonTerminal).code) << (yyvsp[0].NonTerminal).code->str();
                if(!no_main){
                    yyerror("ERROR: main function not defined.");
                }
                //print_test("program:\n" + $$.code->str());

                all_code = (yyval.NonTerminal).code;
              }
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 113 "miniL.y" /* yacc.c:1646  */
    {
                //printf("program -> EPSILON\n");
                (yyval.NonTerminal).code = new stringstream();
              }
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 119 "miniL.y" /* yacc.c:1646  */
    {
                //printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS decl_loop END_PARAMS BEGIN_LOCALS decl_loop END_LOCALS BEGIN_BODY statement SEMICOLON function_2\n");
                //IDENT = $2
                //decl_loop = $5
                //decl_loop = $8
                //statement = $11
                //func_2 = $13
                (yyval.Terminal).code = new stringstream(); 
                string tmp = *(yyvsp[-11].Terminal).place;
                if( tmp.compare("main") == 0){
                    no_main = true;
                }
                *((yyval.Terminal).code)  << "func " << tmp << "\n" << (yyvsp[-8].Terminal).code->str() << (yyvsp[-5].Terminal).code->str();
                for(int i = 0; i < (yyvsp[-8].Terminal).vars->size(); ++i){
                    if((*(yyvsp[-8].Terminal).vars)[i].type == INT_ARR){
                        yyerror("Error: cannot pass arrays to function.");
                    }
                    else if((*(yyvsp[-8].Terminal).vars)[i].type == INT){
                        *((yyval.Terminal).code) << "= " << *((*(yyvsp[-8].Terminal).vars)[i].place) << ", " << "$"<< to_string(i) << "\n";
                    }else{
                        yyerror("Error: invalid type");
                    }
                }
                 *((yyval.Terminal).code) << (yyvsp[-2].Terminal).code->str() << (yyvsp[0].Terminal).code->str();
            }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 145 "miniL.y" /* yacc.c:1646  */
    {
            //cout << "b_func" << endl;
            string tmp = (yyvsp[0].str_val);
            Var myf = Var();
            myf.type = FUNC;
            if(!check_map(tmp)){
                push_map(tmp,myf); 
            }
            (yyval.Terminal).place = new string();
            *(yyval.Terminal).place = tmp;
            //cout << "end b_func" << endl;
        }
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 158 "miniL.y" /* yacc.c:1646  */
    {
                //printf("function_2 -> statement SEMICOLON function_2\n");
                (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
              }
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 163 "miniL.y" /* yacc.c:1646  */
    {
                //printf("function_2 -> END_BODY\n");
                (yyval.Terminal).code = new stringstream();
                *((yyval.Terminal).code) << "endfunc\n";
              }
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 170 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("decl_loop -> declaration SEMICOLON decl_loop\n");
                (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                (yyval.Terminal).vars = (yyvsp[-2].Terminal).vars;
                for( int i = 0; i < (yyvsp[0].Terminal).vars->size(); ++i){
                    (yyval.Terminal).vars->push_back((*(yyvsp[0].Terminal).vars)[i]);
                }
                *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                }
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 179 "miniL.y" /* yacc.c:1646  */
    {
                //printf("decl_loop -> EPSILON\n");
                (yyval.Terminal).code = new stringstream();
                (yyval.Terminal).vars = new vector<Var>();
              }
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 186 "miniL.y" /* yacc.c:1646  */
    {
                //printf("stmt_loop -> statement SEMICOLON stmt_loop\n");
                (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
              }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 191 "miniL.y" /* yacc.c:1646  */
    {
                //printf("stmt_loop -> EPSILON\n");
                (yyval.Terminal).code = new stringstream();
              }
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 197 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("declaration -> IDENT declaration_2\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).type = (yyvsp[0].Terminal).type;
                    (yyval.Terminal).length = (yyvsp[0].Terminal).length;

                    (yyval.Terminal).vars = (yyvsp[0].Terminal).vars;
                    Var v = Var();
                    v.type = (yyvsp[0].Terminal).type;
                    v.length = (yyvsp[0].Terminal).length;
                    v.place = new string();
                    *v.place = (yyvsp[-1].str_val);
                    (yyval.Terminal).vars->push_back(v);
                    if((yyvsp[0].Terminal).type == INT_ARR){
                        if((yyvsp[0].Terminal).length <= 0){
                            yyerror("ERROR: invalid array size <= 0");
                        }
                        *((yyval.Terminal).code) << ".[] " << (yyvsp[-1].str_val) << ", " << (yyvsp[0].Terminal).length << "\n";
                        string s = (yyvsp[-1].str_val);
                        if(!check_map(s)){
                            push_map(s,v);
                        }
                        else{
                            string tmp = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tmp.c_str());
                        }
                    }

                    else if((yyvsp[0].Terminal).type == INT){
                        *((yyval.Terminal).code) << ". " << (yyvsp[-1].str_val) << "\n";
                        string s = (yyvsp[-1].str_val);
                        if(!check_map(s)){
                            push_map(s,v);
                        }
                        else{
                            string tmp = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tmp.c_str());
                        }
                        //if(var_map.find($1) == var_map.end()){
                        //    string s = $1;
                        //    var_map[s] = v;
                        //}
                        //else{
                        //    yyerror("");
                        //}
                    }else{
                            yyerror("ERROR: invalid type");
                    }
                    //print_test(to_string($$.vars->size()));
                    //for(int i = 0; i < $$.vars->size(); ++i){
                    //    print_test("type:" + to_string((*$$.vars)[i].type) + "\nlength:" + to_string((*$$.vars)[i].length) + "\nplace:" + *(*$$.vars)[i].place);
                    //}

                }
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 253 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("declaration_2 -> COMMA IDENT declaration_2\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).type = (yyvsp[0].Terminal).type;
                    (yyval.Terminal).length = (yyvsp[0].Terminal).length;
                    //TODO: add variable to symbol_table
                    //TODO: check if symbol already exists
                    //TODO: check if array size <= 0
                    (yyval.Terminal).vars = (yyvsp[0].Terminal).vars;
                    Var v = Var();
                    v.type = (yyvsp[0].Terminal).type;
                    v.length = (yyvsp[0].Terminal).length;
                    v.place = new string();
                    *v.place = (yyvsp[-1].str_val);
                    (yyval.Terminal).vars->push_back(v);
                    if((yyvsp[0].Terminal).type == INT_ARR){
                        *((yyval.Terminal).code) << ".[] " << (yyvsp[-1].str_val) << ", " << (yyvsp[0].Terminal).length << "\n";
                        string s = (yyvsp[-1].str_val);
                        if(!check_map(s)){
                            push_map(s,v);
                        }
                        else{
                            string tmp = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tmp.c_str());
                        }
                    }
                    else if((yyvsp[0].Terminal).type == INT){
                        *((yyval.Terminal).code) << ". " << (yyvsp[-1].str_val) << "\n";
                        string s = (yyvsp[-1].str_val);
                        if(!check_map(s)){
                            push_map(s,v);
                        }
                        else{
                            string tmp = "Error: Symbol \"" + s + "\" is multiply-defined";
                            yyerror(tmp.c_str());
                        }
                    }else{
                        //printf("================ ERRRR\n");
                    }
                }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 293 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("declaration_2 -> COLON declaration_3 INTEGER\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    (yyval.Terminal).type = (yyvsp[-1].Terminal).type;
                    (yyval.Terminal).length = (yyvsp[-1].Terminal).length;
                    (yyval.Terminal).vars = (yyvsp[-1].Terminal).vars;
                }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 302 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("declaration_3 -> ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).vars = new vector<Var>();
                    (yyval.Terminal).type = INT_ARR;
                    (yyval.Terminal).length = (yyvsp[-2].int_val);
                }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 309 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("declaration_3 -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).vars = new vector<Var>();
                    (yyval.Terminal).type = INT;
                    (yyval.Terminal).length = 0;
                  }
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 318 "miniL.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 321 "miniL.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 324 "miniL.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 327 "miniL.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 330 "miniL.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    //print_test($$.code->str());
                }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 334 "miniL.y" /* yacc.c:1646  */
    {
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 337 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement -> CONTINUE\n");
                    (yyval.Terminal).code = new stringstream();
                    if(loop_stack.size() <= 0){
                        yyerror("ERROR: continue statement not within a loop");
                    }
                    else{
                        Loop l = loop_stack.top();
                        *((yyval.Terminal).code) << ":= " << *l.parent << "\n";
                        //loop_stack.pop();
                    }
                    //TODO: probably add code to jump to start of loop?
                    //TODO: check if used inside loop
                }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 351 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement -> RETURN expression\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).place = (yyvsp[0].Terminal).place;
                    *((yyval.Terminal).code) << "ret " << *(yyval.Terminal).place << "\n";
                }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 358 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement -> var ASSIGN expression\n");
                    //TODO: check if var was declared?
                    (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                    if((yyvsp[-2].Terminal).type == INT && (yyvsp[0].Terminal).type == INT){
                       *((yyval.Terminal).code) << "= " << *(yyvsp[-2].Terminal).place << ", " << *(yyvsp[0].Terminal).place << "\n";
                    }
                    else if((yyvsp[-2].Terminal).type == INT && (yyvsp[0].Terminal).type == INT_ARR){
                        *((yyval.Terminal).code) << gen_code((yyvsp[-2].Terminal).place, "=[]", (yyvsp[0].Terminal).place, (yyvsp[0].Terminal).index);
                    }
                    else if((yyvsp[-2].Terminal).type == INT_ARR && (yyvsp[0].Terminal).type == INT && (yyvsp[-2].Terminal).value != NULL){
                        *((yyval.Terminal).code) << gen_code((yyvsp[-2].Terminal).value, "[]=", (yyvsp[-2].Terminal).index, (yyvsp[0].Terminal).place);
                    }
                    else if((yyvsp[-2].Terminal).type == INT_ARR && (yyvsp[0].Terminal).type == INT_ARR){
                        string *tmp = new_temp();
                        *((yyval.Terminal).code) << dec_temp(tmp) << gen_code(tmp, "=[]", (yyvsp[0].Terminal).place, (yyvsp[0].Terminal).index);
                        *((yyval.Terminal).code) << gen_code((yyvsp[-2].Terminal).value, "[]=", (yyvsp[-2].Terminal).index, tmp);
                    }
                    else{
                        yyerror("Error: expression is null.");
                    }
                    //print_test($$.code->str());
                }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 384 "miniL.y" /* yacc.c:1646  */
    {
                    //cout << "statement -> IF bool_exp THEN stmt_loop statement_21 ENDIF\n" << endl;
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).begin = new_label();
                    (yyval.Terminal).end = new_label();
                    *((yyval.Terminal).code) << (yyvsp[-4].Terminal).code->str() << "?:= " << *(yyval.Terminal).begin << ", " <<  *(yyvsp[-4].Terminal).place << "\n";
                    if((yyvsp[-1].Terminal).begin != NULL){                       
                        *((yyval.Terminal).code) << go_to((yyvsp[-1].Terminal).begin); 
                        *((yyval.Terminal).code) << dec_label((yyval.Terminal).begin)  << (yyvsp[-2].Terminal).code->str() << go_to((yyval.Terminal).end);
                        *((yyval.Terminal).code) << dec_label((yyvsp[-1].Terminal).begin) << (yyvsp[-1].Terminal).code->str();
                    }
                    else{
                        *((yyval.Terminal).code) << go_to((yyval.Terminal).end)<< dec_label((yyval.Terminal).begin)  << (yyvsp[-2].Terminal).code->str();
                    }
                    *((yyval.Terminal).code) << dec_label((yyval.Terminal).end);
                }
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 402 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement_21 -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).begin = NULL;
                }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 407 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement_21 -> ELSE stmt_loop\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).begin = new_label();
                }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 414 "miniL.y" /* yacc.c:1646  */
    {
                    //cout << "statement -> WHILE bool_exp BEGINLOOP stmt_loop ENDLOOP\n" << endl;
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).begin = (yyvsp[-3].Terminal).begin;
                    (yyval.Terminal).parent = (yyvsp[-3].Terminal).parent;
                    (yyval.Terminal).end = (yyvsp[-3].Terminal).end;
                    //$$.begin = new_label();
                    //$$.parent = new_label();
                    //$$.end = new_label();
                    //Loop l = Loop();
                    //l.parent = $$.parent;
                    //l.begin = $$.begin;
                    //l.end = $$.end;
                    ////cout << "\n\nBEFORE:" << loop_stack.size();
                    //loop_stack.push(l);
                    *((yyval.Terminal).code) << dec_label((yyval.Terminal).parent) << (yyvsp[-4].Terminal).code->str() << "?:= " << *(yyval.Terminal).begin << ", " << *(yyvsp[-4].Terminal).place << "\n" 
                    << go_to((yyval.Terminal).end) << dec_label((yyval.Terminal).begin) << (yyvsp[-1].Terminal).code->str() << go_to((yyval.Terminal).parent) << dec_label((yyval.Terminal).end);
                    loop_stack.pop();

                }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 436 "miniL.y" /* yacc.c:1646  */
    {
                    //cout << "bLOOP" << endl;
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).begin = new_label();
                    (yyval.Terminal).parent = new_label();
                    (yyval.Terminal).end = new_label();
                    //cout << "add loop" << endl;
                    Loop l = Loop();
                    l.parent = (yyval.Terminal).parent;
                    l.begin = (yyval.Terminal).begin;
                    l.end = (yyval.Terminal).end;
                    //cout << "\n\nBEFORE:" << loop_stack.size();
                    //cout << "push loop: " << loop_stack.size() << endl;
                    loop_stack.push(l);
                    //cout << "end bloop" << endl;
                }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 453 "miniL.y" /* yacc.c:1646  */
    {
                    //cout << "statement -> DO BEGINLOOP stmt_loop ENDLOOP WHILE bool_exp\n" << endl;
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).begin = (yyvsp[-5].Terminal).begin;
                    (yyval.Terminal).parent = (yyvsp[-5].Terminal).parent;
                    (yyval.Terminal).end = (yyvsp[-5].Terminal).end;
                    *((yyval.Terminal).code) << dec_label((yyval.Terminal).begin) << (yyvsp[-3].Terminal).code->str() << dec_label((yyval.Terminal).parent) << (yyvsp[0].Terminal).code->str() << "?:= " << *(yyval.Terminal).begin << ", " << *(yyvsp[0].Terminal).place << "\n" << dec_label((yyval.Terminal).end);
                    loop_stack.pop();
                }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 464 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement -> READ var statement_51\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    if((yyvsp[-1].Terminal).type == INT){
                       *((yyval.Terminal).code) << ".< " << *(yyvsp[-1].Terminal).place << "\n"; 
                    }
                    else{
                       *((yyval.Terminal).code) << ".[]< " << *(yyvsp[-1].Terminal).place << ", " << (yyvsp[-1].Terminal).index << "\n"; 
                    }
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                    //print_test($$.code->str());
                }
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 478 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement_51 -> COMMA var statement_51\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    if((yyvsp[-1].Terminal).type == INT){
                       *((yyval.Terminal).code) << ".< " << *(yyvsp[-1].Terminal).place << "\n"; 
                    }
                    else{
                       *((yyval.Terminal).code) << ".[]< " << *(yyvsp[-1].Terminal).place << ", " << (yyvsp[-1].Terminal).index << "\n"; 
                    }
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                    //print_test($$.code->str());
                }
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 490 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement_51 -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream();
                  }
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 496 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement -> WRITE var statement_61\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    if((yyvsp[-1].Terminal).type == INT){
                       *((yyval.Terminal).code) << ".> " << *(yyvsp[-1].Terminal).place << "\n"; 
                    }
                    else{
                       *((yyval.Terminal).code) << ".[]> " << *(yyvsp[-1].Terminal).value << ", " << *(yyvsp[-1].Terminal).index << "\n"; 
                    }
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                  }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 509 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement_61 -> COMMA var statement_61\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    if((yyvsp[-1].Terminal).type == INT){
                       *((yyval.Terminal).code) << ".> " << *(yyvsp[-1].Terminal).place << "\n"; 
                    }
                    else{
                       *((yyval.Terminal).code) << ".[]> " << *(yyvsp[-1].Terminal).value << ", " << *(yyvsp[-1].Terminal).index << "\n"; 
                    }
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                  }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 520 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("statement_61 -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream();
                 }
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 526 "miniL.y" /* yacc.c:1646  */
    {
                    //cout << "bool_exp -> rel_and_exp bool_exp2\n" << endl;
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                    if((yyvsp[0].Terminal).op != NULL && (yyvsp[0].Terminal).place != NULL)
                    {                        
                        (yyval.Terminal).place = new_temp();
                        //cout << "\n\nOP:" << *$2.op << "\nPLACE:" << *$1.place << "\n$2PLACE:" << *$2.place << endl;
                       *((yyval.Terminal).code) << dec_temp((yyval.Terminal).place) << gen_code((yyval.Terminal).place, *(yyvsp[0].Terminal).op, (yyvsp[-1].Terminal).place, (yyvsp[0].Terminal).place);
                        //cout << "\n\nOP:" << $2.op << "\nPLACE:" << $1.place << "\n$2PLACE:" << $2.place << endl;
                    }
                    else{
                        //cout << "ELSE" << endl;
                        (yyval.Terminal).place = (yyvsp[-1].Terminal).place;
                        (yyval.Terminal).op = (yyvsp[-1].Terminal).op;
                    }
                    //print_test($$.code->str());
                    //cout << "END OF BOOL" << endl;
                }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 547 "miniL.y" /* yacc.c:1646  */
    {
                    //cout <<"bool_exp2 -> OR rel_and_exp bool_exp2\n" << endl;
                    //$$.code = $2.code;
                    //*($$.code) << $3.code->str();
                    //if($3.op == NULL){
                    //    $$.place = $2.place;
                    //    $$.op = new string();
                    //    *$$.op = "||";
                    //}
                    //else{
                    //    $$.place = new_temp();
                    //    $$.op = new string();
                    //    *$$.op = "||";

                    //    *($$.code) << dec_temp($$.place) << gen_code($$.place , *$$.op, $2.place, $3.place);
                    //} 
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"||");


                }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 567 "miniL.y" /* yacc.c:1646  */
    {
                    //cout << "bool_exp2 -> EPSILON\n" << endl;
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = NULL;
                 }
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 574 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("rel_and_exp -> relation_exp rel_and_exp2\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                    if((yyvsp[0].Terminal).op != NULL && (yyvsp[0].Terminal).place != NULL)
                    {                        
                        (yyval.Terminal).place = new_temp();
                       *((yyval.Terminal).code) << dec_temp((yyval.Terminal).place) << gen_code((yyval.Terminal).place, *(yyvsp[0].Terminal).op, (yyvsp[-1].Terminal).place, (yyvsp[0].Terminal).place);
                    }
                    else{
                        (yyval.Terminal).place = (yyvsp[-1].Terminal).place;
                        (yyval.Terminal).op = (yyvsp[-1].Terminal).op;
                    }
                }
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 590 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("rel_and_exp2 -> AND relation_exp rel_and_exp2\n");
                    //$$.code = $2.code;
                    //*($$.code) << $3.code->str();
                    //if($3.op == NULL){
                    //    $$.place = $2.place;
                    //    $$.op = new string();
                    //    *$$.op = "&&";
                    //}
                    //else{
                    //    $$.place = new_temp();
                    //    $$.op = new string();
                    //    *$$.op = "&&";

                    //    *($$.code) << dec_temp($$.place) << gen_code($$.place , *$$.op, $2.place, $3.place);
                    //} 
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"&&");

                }
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 609 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("rel_and_exp2 -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = NULL;
                 }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 616 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("relation_exp -> relation_exp_s\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).place = (yyvsp[0].Terminal).place; 
                }
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 621 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("relation_exp -> NOT relation_exp_s\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).place = new_temp();
                    *((yyval.Terminal).code) << dec_temp((yyval.Terminal).place) << gen_code((yyval.Terminal).place, "!", (yyvsp[0].Terminal).place, NULL);
                }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 629 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("relation_exp_s -> expression comp expression\n");
                    (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                    *((yyval.Terminal).code) << (yyvsp[-1].Terminal).code->str();
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                    (yyval.Terminal).place = new_temp();
                    *((yyval.Terminal).code)<< dec_temp((yyval.Terminal).place) << gen_code((yyval.Terminal).place, *(yyvsp[-1].Terminal).op, (yyvsp[-2].Terminal).place, (yyvsp[0].Terminal).place);
                }
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 637 "miniL.y" /* yacc.c:1646  */
    {                    
                    //printf("relation_exp_s -> TRUE\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).place = new string();
                    *(yyval.Terminal).place = "1";
                    }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 643 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("relation_exp_s -> FALSE\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).place = new string();
                    *(yyval.Terminal).place = "0";
                  }
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 649 "miniL.y" /* yacc.c:1646  */
    {
                    //cout << "relation_exp_s -> L_PAREN bool_exp R_PAREN\n" << endl;
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    (yyval.Terminal).place = (yyvsp[-1].Terminal).place;
                }
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 656 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("comp -> EQ\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = "==";
                  }
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 662 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("comp -> NEQ\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = "!=";
                  }
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 668 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("comp -> LT\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = "<";
                  }
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 674 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("comp -> GT\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = ">";
                  }
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 680 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("comp -> LTE\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = "<=";
                  }
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 686 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("comp -> GTE\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = new string();
                    *(yyval.Terminal).op = ">=";
                  }
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 694 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("expression -> mult_expr expression_2\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                    if((yyvsp[0].Terminal).op != NULL && (yyvsp[0].Terminal).place != NULL)
                    {                        
                        (yyval.Terminal).place = new_temp();
                       *((yyval.Terminal).code)<< dec_temp((yyval.Terminal).place) << gen_code((yyval.Terminal).place, *(yyvsp[0].Terminal).op, (yyvsp[-1].Terminal).place, (yyvsp[0].Terminal).place);
                    }
                    else{
                        (yyval.Terminal).place = (yyvsp[-1].Terminal).place;
                        (yyval.Terminal).op = (yyvsp[-1].Terminal).op;
                    }
                    (yyval.Terminal).type = INT;
                  }
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 711 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("expression_2 -> ADD mult_expr expression_2\n");
                    //$$.code = $2.code;
                    //*($$.code) << $3.code->str();
                    //if($3.op == NULL){
                    //    $$.place = $2.place;
                    //    $$.op = new string();
                    //    *$$.op = "+";
                    //}
                    //else{
                    //    $$.place = new_temp();
                    //    $$.op = new string();
                    //    *$$.op = "+";

                    //    *($$.code)<< dec_temp($$.place) << gen_code($$.place , *$$.op, $2.place, $3.place);
                    //} 
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"+");

                    //print_test("ADD\n" +$$.code->str() +"\n");
                    //print_test($$.code->str());

                  }
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 733 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("expression_2 -> SUB mult_expr expression_2\n");
                    //$$.code = $2.code;
                    //*($$.code) << $3.code->str();
                    //if($3.op == NULL){
                    //    $$.place = $2.place;
                    //    $$.op = new string();
                    //    *$$.op = "-";
                    //}
                    //else{
                    //    $$.place = new_temp();
                    //    $$.op = new string();
                    //    *$$.op = "-";

                    //    *($$.code)<< dec_temp($$.place) << gen_code($$.place , *$$.op, $2.place, $3.place);
                    //}
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"-");
                    //print_test("SUB\n" +$$.code->str());
                  }
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 752 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("expression -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = NULL;
                  }
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 759 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("mult_expr -> term mult_expr_2\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                    if((yyvsp[0].Terminal).op != NULL && (yyvsp[0].Terminal).place != NULL)
                    {                        
                        (yyval.Terminal).place = new_temp();
                       *((yyval.Terminal).code)<< dec_temp((yyval.Terminal).place)<< gen_code((yyval.Terminal).place, *(yyvsp[0].Terminal).op, (yyvsp[-1].Terminal).place, (yyvsp[0].Terminal).place);
                    }
                    else{
                        (yyval.Terminal).place = (yyvsp[-1].Terminal).place;
                        (yyval.Terminal).op = (yyvsp[-1].Terminal).op;
                    }
                  }
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 776 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("mult_expr_2 -> MULT mult_expr\n");
                    //$$.code = $2.code;
                    //*($$.code) << $3.code->str();
                    //if($3.op == NULL){
                    //    $$.place = $2.place;
                    //    $$.op = new string();
                    //    *$$.op = "*";
                    //}
                    //else{
                    //    $$.place = new_temp();
                    //    $$.op = new string();
                    //    *$$.op = "*";

                    //    *($$.code) << dec_temp($$.place)<< gen_code($$.place , *$$.op, $2.place, $3.place);
                    //} 
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"*");

                  }
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 795 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("mult_expr_2 -> DIV mult_expr\n");
                    // $$.code = $2.code;
                    //*($$.code) << $3.code->str();
                    //if($3.op == NULL){
                    //    $$.place = $2.place;
                    //    $$.op = new string();
                    //    *$$.op = "/";
                    //}
                    //else{
                    //    $$.place = new_temp();
                    //    $$.op = new string();
                    //    *$$.op = "/";

                    //    *($$.code)<< dec_temp($$.place) << gen_code($$.place , *$$.op, $2.place, $3.place);
                    //} 
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"/");
                    //print_test($$.code->str());
                  }
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 814 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("mult_expr_2 -> MOD mult_expr\n");
                    expression_code((yyval.Terminal),(yyvsp[-1].Terminal),(yyvsp[0].Terminal),"%");
                    // $$.code = $2.code;
                    //*($$.code) << $3.code->str();
                    //if($3.op == NULL){
                    //    $$.place = $2.place;
                    //    $$.op = new string();
                    //    *$$.op = "%";
                    //}
                    //else{
                    //    $$.place = new_temp();
                    //    $$.op = new string();
                    //    *$$.op = "%";
                    //    *($$.code)<< dec_temp($$.place) << gen_code($$.place , *$$.op, $2.place, $3.place);
                    //} 
                  }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 831 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("mult_expr_2 -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).op = NULL;
                 }
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 838 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term -> SUB term_2\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).place = new_temp();
                    string tmp = "-1";
                    *((yyval.Terminal).code)<< dec_temp((yyval.Terminal).place) << gen_code((yyval.Terminal).place, "*",(yyvsp[0].Terminal).place, &tmp );
                  }
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 845 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term -> term_2\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).place = (yyvsp[0].Terminal).place;
                  }
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 850 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term -> term_3\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).place = (yyvsp[0].Terminal).place;
                  }
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 857 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term_2 -> var\n");
                    //TODO: check if var was declared?
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).place= (yyvsp[0].Terminal).place;
                    (yyval.Terminal).index = (yyvsp[0].Terminal).index;
                  }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 864 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term_2 -> NUMBER\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).place = new string();
                    *(yyval.Terminal).place = to_string((yyvsp[0].int_val));
                  }
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 870 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term_2 -> L_PAREN expression R_PAREN\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    (yyval.Terminal).place = (yyvsp[-1].Terminal).place;
                  }
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 877 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term_3 -> IDENT L_PAREN term_31 R_PAREN\n");
                    //TODO: check if var was declared?
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    (yyval.Terminal).place = new_temp();
                    *((yyval.Terminal).code) << dec_temp((yyval.Terminal).place)<< "call " << (yyvsp[-3].str_val) << ", " << *(yyval.Terminal).place << "\n";
                    string tmp = (yyvsp[-3].str_val);
                    check_map_dec(tmp);
                }
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 888 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term_31-> expression term_32\n");
                    //TODO: check if function declared?
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                    *((yyval.Terminal).code) << "param " << *(yyvsp[-1].Terminal).place << "\n";
                }
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 895 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term_31 -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream(); 
                  }
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 900 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term_32 -> COMMA term_31\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 904 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("term_32 -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream();
                  }
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 909 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("var -> IDENT var_2\n");
                    (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                    (yyval.Terminal).type = (yyvsp[0].Terminal).type;
                    //TODO: check if var was declared?
                    string tmp = (yyvsp[-1].str_val);
                    check_map_dec(tmp);
                    if(check_map(tmp) && var_map[tmp].type != (yyvsp[0].Terminal).type){
                        if((yyvsp[0].Terminal).type == INT_ARR){
                            string output ="Error: used variable \"" + tmp + "\" is not an array.";
                            yyerror(output.c_str());
                        }
                        else if((yyvsp[0].Terminal).type == INT){
                            string output ="Error: used array variable \"" + tmp + "\" is missing a specified index.";
                            yyerror(output.c_str());
                        }
                    }

                    if((yyvsp[0].Terminal).index == NULL){
                        (yyval.Terminal).place = new string();
                        *(yyval.Terminal).place = (yyvsp[-1].str_val);
                    }
                    else{
                        (yyval.Terminal).index = (yyvsp[0].Terminal).index;
                        (yyval.Terminal).place = new_temp();
                        string* tmp = new string();
                        *tmp = (yyvsp[-1].str_val);
                        *((yyval.Terminal).code) << dec_temp((yyval.Terminal).place) << gen_code((yyval.Terminal).place, "=[]", tmp,(yyvsp[0].Terminal).index);
                        (yyval.Terminal).value = new string();
                        *(yyval.Terminal).value = (yyvsp[-1].str_val);
                    }
                }
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 943 "miniL.y" /* yacc.c:1646  */
    {
                    //TODO: check if var was declared?
                    //printf("var_2 -> L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");
                    (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                    (yyval.Terminal).place = NULL;
                    (yyval.Terminal).index = (yyvsp[-1].Terminal).place;
                    (yyval.Terminal).type = INT_ARR;
                }
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 951 "miniL.y" /* yacc.c:1646  */
    {
                    //printf("var_2 -> EPSILON\n");
                    (yyval.Terminal).code = new stringstream();
                    (yyval.Terminal).index = NULL;
                    (yyval.Terminal).place = NULL;
                    (yyval.Terminal).type = INT;
                 }
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2606 "y.tab.c" /* yacc.c:1646  */
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
#line 960 "miniL.y" /* yacc.c:1906  */


void print_test(string o){
    cout << "\n---------TEST-----------\n"
        << o
        << "\n----------END -----------\n";
}

//void print_test(stringstream &o){
//    cout << "\n---------TEST-----------\n"
//        << o.str()
//        << "\n----------END -----------\n";
//}

string gen_code(string *res, string op, string *val1, string *val2){
    if(op == "!"){
        return op + " " + *res + ", " + *val1 + "\n";
    }
    else{
        return op + " " + *res + ", " + *val1 + ", "+ *val2 +"\n";
    }
}

string to_string(char* s){
    ostringstream c;
    c << s;
    return c.str();
}

string to_string(int s){
    ostringstream c;
    c << s;
    return c.str();
}
string go_to(string *s){
    return ":= "+ *s + "\n"; 
}
string dec_label(string *s){
    return ": " +*s + "\n"; 
}
string dec_temp(string *s){
    return ". " +*s + "\n"; 
}
string * new_temp(){
    string * t = new string();
    ostringstream conv;
    conv << tempi;
    *t = "__temp__"+ conv.str();
    tempi++;
    return t;
}
string * new_label(){
    string * t = new string();
    ostringstream conv;
    conv << templ;
    *t = "__label__"+ conv.str();
    templ++;
    return t;
}
                    //printf("expression_2 -> ADD mult_expr expression_2\n");
                    //$$.code = $2.code;
                    //*($$.code) << $3.code->str();
                    //if($3.op == NULL){
                    //    $$.place = $2.place;
                    //    $$.op = new string();
                    //    *$$.op = "+";
                    //}
                    //else{
                    //    $$.place = new_temp();
                    //    $$.op = new string();
                    //    *$$.op = "+";

                    //    *($$.code)<< dec_temp($$.place) << gen_code($$.place , *$$.op, $2.place, $3.place);
                    //} 
                    // 1 + i - j
 
void expression_code( Terminal &DD, Terminal D2, Terminal D3, string op){
    DD.code = D2.code;
    *(DD.code) << D3.code->str();
    if(D3.op == NULL){
        DD.place = D2.place;
        DD.op = new string();
        *DD.op = op;
    }
    else{
        //cout << "IN ELSE" << endl;
        DD.place = new_temp();
        DD.op = new string();
        *DD.op = op;

        *(DD.code) << dec_temp(DD.place)<< gen_code(DD.place , *D3.op, D2.place, D3.place);
    } 
}


void push_map(string name, Var v){
    //cout << "pushing map" << endl;
    if(var_map.find(name) == var_map.end()){
        var_map[name] = v;
    }
    else{
        string tmp = "ERROR: " + name + " already exists";
        yyerror(tmp.c_str());
    }
}
bool check_map(string name){
    if(var_map.find(name) == var_map.end()){
        return false;
    }
    return true;
}
void check_map_dec(string name){
    if(!check_map(name)){
        string tmp = "ERROR: \"" + name + "\" does not exist";
        yyerror(tmp.c_str());
    }
}

//void print_error(string s){
//    extern int line_cnt;
//    extern int cursor_pos;
//    cout << ">>> Error
//}


//int main(int argc, char **argv) {
//    if ( (argc > 1) && (yyin = fopen(argv[1],"r")) == NULL){
//        //printf("syntax: %s filename\n", argv[0]);
//        return 1;
//    }
//    yyparse();
//    return 0;
//}
//
int yyerror(const char *s)
{
    extern int line_cnt;
    extern int cursor_pos;
    success = false;
    printf(">>> Line %d, position %d: %s\n",line_cnt,cursor_pos,s);
    return -1;
    //return yyerror(string(s));
}


int main(int argc, char **argv) {

    if ( (argc > 1) && (myin = fopen(argv[1],"r")) == NULL){
        printf("syntax: %s filename\n", argv[0]);
        return 1;
    }

    //    for(int i = 0; i < argc; ++i){
    //        cout << argv[i] << endl;
    //    }

    yyparse();

    //all_code << program_code->str();

    if(success){
        ofstream file;
        file.open("mil_code.mil");
        file << all_code->str();
        file.close();
    }
    else{
        cout << "***Errors exist, fix to compile code***" << endl;
    }


    return 0;
}
