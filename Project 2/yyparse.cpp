/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_VOID = 258,
     TOK_CHAR = 259,
     TOK_INT = 260,
     TOK_STRING = 261,
     TOK_IF = 262,
     TOK_ELSE = 263,
     TOK_WHILE = 264,
     TOK_RETURN = 265,
     TOK_STRUCT = 266,
     TOK_NULL = 267,
     TOK_NEW = 268,
     TOK_ARRAY = 269,
     TOK_EQ = 270,
     TOK_NE = 271,
     TOK_LT = 272,
     TOK_LE = 273,
     TOK_GT = 274,
     TOK_GE = 275,
     TOK_IDENT = 276,
     TOK_INTCON = 277,
     TOK_CHARCON = 278,
     TOK_STRINGCON = 279,
     TOK_BLOCK = 280,
     TOK_CALL = 281,
     TOK_IFELSE = 282,
     TOK_INITDECL = 283,
     TOK_POS = 284,
     TOK_NEG = 285,
     TOK_NEWARRAY = 286,
     TOK_TYPEID = 287,
     TOK_FIELD = 288,
     TOK_ORD = 289,
     TOK_CHR = 290,
     TOK_ROOT = 291,
     TOK_RETURNVOID = 292,
     TOK_PARAMLIST = 293,
     TOK_PROTOTYPE = 294,
     TOK_DECLID = 295,
     TOK_NEWSTRING = 296,
     TOK_VARDECL = 297,
     TOK_INDEX = 298,
     TOK_FUNCTION = 299,
     TOK_PARENS = 300
   };
#endif
/* Tokens.  */
#define TOK_VOID 258
#define TOK_CHAR 259
#define TOK_INT 260
#define TOK_STRING 261
#define TOK_IF 262
#define TOK_ELSE 263
#define TOK_WHILE 264
#define TOK_RETURN 265
#define TOK_STRUCT 266
#define TOK_NULL 267
#define TOK_NEW 268
#define TOK_ARRAY 269
#define TOK_EQ 270
#define TOK_NE 271
#define TOK_LT 272
#define TOK_LE 273
#define TOK_GT 274
#define TOK_GE 275
#define TOK_IDENT 276
#define TOK_INTCON 277
#define TOK_CHARCON 278
#define TOK_STRINGCON 279
#define TOK_BLOCK 280
#define TOK_CALL 281
#define TOK_IFELSE 282
#define TOK_INITDECL 283
#define TOK_POS 284
#define TOK_NEG 285
#define TOK_NEWARRAY 286
#define TOK_TYPEID 287
#define TOK_FIELD 288
#define TOK_ORD 289
#define TOK_CHR 290
#define TOK_ROOT 291
#define TOK_RETURNVOID 292
#define TOK_PARAMLIST 293
#define TOK_PROTOTYPE 294
#define TOK_DECLID 295
#define TOK_NEWSTRING 296
#define TOK_VARDECL 297
#define TOK_INDEX 298
#define TOK_FUNCTION 299
#define TOK_PARENS 300




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

// Dummy parser for scanner project.

// Nathan Monahelis (nmonahel@ucsc.edu)
// Tarik Zeid (tzeid@ucsc.edu)

#include <cassert>

#include "lyutils.h"
#include "astree.h"



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 1
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 209 "yyparse.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,     2,     2,    51,     2,     2,
      58,    59,    49,    47,    60,    48,    52,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    56,
       2,    45,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    55,     2,     2,     2,     2,
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
      54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    18,    22,    23,
      29,    34,    38,    41,    44,    48,    50,    52,    54,    56,
      58,    60,    65,    70,    75,    80,    83,    87,    91,    94,
      97,   100,   103,   106,   108,   110,   112,   114,   116,   119,
     124,   130,   136,   144,   148,   151,   155,   159,   163,   167,
     171,   175,   179,   183,   187,   191,   195,   199,   203,   206,
     209,   212,   214,   216,   220,   222,   224,   229,   235,   241,
     245,   249,   252,   256,   258,   263,   267,   269,   271,   273
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    64,    -1,    64,    65,    -1,    64,    69,
      -1,    64,    74,    -1,    64,     1,    55,    -1,    64,     1,
      56,    -1,    -1,    11,    21,    57,    66,    55,    -1,    11,
      21,    57,    55,    -1,    66,    67,    56,    -1,    67,    56,
      -1,    68,    21,    -1,    68,    14,    21,    -1,     3,    -1,
       5,    -1,     6,    -1,     4,    -1,    21,    -1,    32,    -1,
      71,    58,    59,    56,    -1,    71,    58,    59,    72,    -1,
      71,    70,    59,    56,    -1,    71,    70,    59,    72,    -1,
      58,    71,    -1,    70,    60,    71,    -1,    68,    14,    21,
      -1,    68,    21,    -1,    57,    55,    -1,    73,    55,    -1,
      73,    74,    -1,    57,    74,    -1,    72,    -1,    75,    -1,
      76,    -1,    77,    -1,    78,    -1,    79,    56,    -1,    71,
      45,    79,    56,    -1,     9,    58,    79,    59,    74,    -1,
       7,    58,    79,    59,    74,    -1,     7,    58,    79,    59,
      74,     8,    74,    -1,    10,    79,    56,    -1,    10,    56,
      -1,    79,    27,    79,    -1,    79,    15,    79,    -1,    79,
      16,    79,    -1,    79,    17,    79,    -1,    79,    18,    79,
      -1,    79,    19,    79,    -1,    79,    20,    79,    -1,    79,
      47,    79,    -1,    79,    48,    79,    -1,    79,    49,    79,
      -1,    79,    50,    79,    -1,    79,    51,    79,    -1,    79,
      45,    79,    -1,    46,    79,    -1,    48,    79,    -1,    47,
      79,    -1,    80,    -1,    81,    -1,    58,    79,    59,    -1,
      83,    -1,    84,    -1,    13,    21,    58,    59,    -1,    13,
       6,    58,    79,    59,    -1,    13,    68,    53,    79,    61,
      -1,    21,    58,    59,    -1,    21,    82,    59,    -1,    58,
      79,    -1,    82,    60,    79,    -1,    21,    -1,    79,    53,
      79,    61,    -1,    79,    52,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    53,    54,    55,    56,    57,    58,    60,
      63,    67,    70,    74,    76,    80,    81,    82,    83,    84,
      85,    88,    93,    99,   104,   112,   114,   118,   120,   124,
     126,   131,   133,   137,   138,   139,   140,   141,   142,   146,
     150,   156,   161,   169,   171,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   199,   201,   205,   211,
     213,   217,   218,   221,   223,   227,   232,   233,   234,   235
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_VOID", "TOK_CHAR", "TOK_INT",
  "TOK_STRING", "TOK_IF", "TOK_ELSE", "TOK_WHILE", "TOK_RETURN",
  "TOK_STRUCT", "TOK_NULL", "TOK_NEW", "TOK_ARRAY", "TOK_EQ", "TOK_NE",
  "TOK_LT", "TOK_LE", "TOK_GT", "TOK_GE", "TOK_IDENT", "TOK_INTCON",
  "TOK_CHARCON", "TOK_STRINGCON", "TOK_BLOCK", "TOK_CALL", "TOK_IFELSE",
  "TOK_INITDECL", "TOK_POS", "TOK_NEG", "TOK_NEWARRAY", "TOK_TYPEID",
  "TOK_FIELD", "TOK_ORD", "TOK_CHR", "TOK_ROOT", "TOK_RETURNVOID",
  "TOK_PARAMLIST", "TOK_PROTOTYPE", "TOK_DECLID", "TOK_NEWSTRING",
  "TOK_VARDECL", "TOK_INDEX", "TOK_FUNCTION", "'='", "'!'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'.'", "'['", "TOK_PARENS", "'}'", "';'", "'{'",
  "'('", "')'", "','", "']'", "$accept", "start", "program", "structdef",
  "fielddecl_list", "fielddecl", "type", "function", "params", "identdecl",
  "block", "blockhead", "statement", "vardecl", "while", "ifelse",
  "return", "expr", "allocator", "call", "callargs", "variable",
  "constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    61,    33,    43,    45,    42,
      47,    37,    46,    91,   300,   125,    59,   123,    40,    41,
      44,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    69,    69,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    75,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    80,    81,
      81,    82,    82,    83,    83,    83,    84,    84,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     3,     0,     5,
       4,     3,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     2,     3,     3,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     2,     4,
       5,     5,     7,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     1,     1,     3,     1,     1,     4,     5,     5,     3,
       3,     2,     3,     1,     4,     3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,     0,    15,    18,    16,    17,     0,
       0,     0,     0,    79,     0,    73,    76,    77,    78,    20,
       0,     0,     0,     0,     0,     3,     0,     4,     0,    33,
       0,     5,    34,    35,    36,    37,     0,    61,    62,    64,
      65,     6,     7,     0,     0,    73,    44,     0,     0,    17,
      19,     0,     0,     0,    58,    60,    59,    29,     0,    32,
       0,     0,    28,     0,     0,     0,    30,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,    43,     0,     0,     0,
       0,    69,    71,    70,     0,    63,    27,     0,    19,     0,
      25,     0,     0,    46,    47,    48,    49,    50,    51,    45,
      57,    52,    53,    54,    55,    56,    75,     0,     0,     0,
      10,     0,     0,     0,     0,    66,     0,    72,    39,    21,
      22,    23,    24,    26,    74,    41,    40,     9,     0,    12,
       0,    13,    67,    68,     0,    11,    14,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    25,   121,   122,    26,    27,    65,    58,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      53,    39,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -97
static const yytype_int16 yypact[] =
{
     -97,     8,   106,   -97,   -19,   -97,   -97,   -97,   -97,   -54,
     -45,   273,     5,   -97,   129,     4,   -97,   -97,   -97,   -97,
     277,   277,   277,   136,   277,   -97,    14,   -97,   -39,   -97,
     166,   -97,   -97,   -97,   -97,   -97,   405,   -97,   -97,   -97,
     -97,   -97,   -97,   277,   277,   -18,   -97,   447,   -15,    -9,
      -7,     1,    46,    -4,   522,   522,   522,   -97,    12,   -97,
     289,    39,   -97,   277,     6,    16,   -97,   -97,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,    42,   277,   -97,   334,   347,   -97,    11,   277,    31,
     277,   -97,   502,   -97,   277,   -97,   -97,   460,   -97,    44,
     -97,    66,   573,   221,   221,   221,   221,   221,   221,   502,
     515,    -5,    -5,    72,    72,    72,   -97,   214,   196,   196,
     -97,    18,    15,    20,   392,   -97,   231,   502,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,    90,   -97,   -97,    58,   -97,
      99,   -97,   -97,   -97,   196,   -97,   -97,   -97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   -97,   -97,   -97,    10,   -13,   -97,   -97,     0,
     -96,   -97,   -23,   -97,   -97,   -97,   -97,     9,   -97,   -97,
     -97,   -97,   -97
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -20
static const yytype_int16 yytable[] =
{
      59,    51,    28,   130,    43,   132,    63,    67,     3,     5,
       6,     7,     8,    44,     5,     6,     7,     8,   -19,    64,
      47,     5,     6,     7,     8,   -19,    48,    98,    61,    54,
      55,    56,    98,    60,   140,    62,    41,    42,    19,    98,
      52,   141,    87,    19,    78,    79,    80,    81,    82,    88,
      19,    89,    84,    85,    90,    93,    94,    63,    13,    14,
      96,    92,    52,   116,   100,    99,   120,    45,    16,    17,
      18,   139,    97,   137,   123,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     125,   117,    20,    21,    22,   135,   136,   124,   144,   126,
     129,    23,   133,   127,    24,    91,    -2,     4,   123,     5,
       6,     7,     8,     9,   145,    10,    11,    12,    13,    14,
     146,   147,   131,    23,    81,    82,     0,    15,    16,    17,
      18,   138,     5,     6,     7,    49,     0,     0,    19,     5,
       6,     7,     8,     9,     0,    10,    11,     0,    13,    14,
      50,     0,    20,    21,    22,     0,     0,    15,    16,    17,
      18,    19,     0,    23,    24,     0,     0,     0,    19,     5,
       6,     7,     8,     9,     0,    10,    11,     0,    13,    14,
       0,     0,    20,    21,    22,     0,     0,    15,    16,    17,
      18,    57,     0,    23,    24,     0,     0,     0,    19,     5,
       6,     7,     8,     9,     0,    10,    11,     0,    13,    14,
       0,     0,    20,    21,    22,     0,     0,    15,    16,    17,
      18,    66,     0,    23,    24,     0,     0,     0,    19,    68,
      69,    70,    71,    72,    73,     0,     0,     0,     0,     0,
       0,    74,    20,    21,    22,     0,    68,    69,    70,    71,
      72,    73,     0,    23,    24,     0,     0,     0,    74,    75,
       0,    76,    77,    78,    79,    80,    81,    82,    76,    77,
      78,    79,    80,    81,    82,   134,    75,     0,    76,    77,
      78,    79,    80,    81,    82,    13,    14,     0,     0,    13,
      14,     0,   143,     0,    45,    16,    17,    18,    45,    16,
      17,    18,     0,     0,    68,    69,    70,    71,    72,    73,
       0,     0,     0,     0,     0,     0,    74,     0,     0,    20,
      21,    22,     0,    20,    21,    22,     0,     0,     0,    46,
       0,    24,     0,     0,    75,    24,    76,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,    95,    68,
      69,    70,    71,    72,    73,     0,     0,     0,     0,     0,
       0,    74,    68,    69,    70,    71,    72,    73,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    75,
       0,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,    75,   118,    76,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,   119,    68,    69,    70,
      71,    72,    73,     0,     0,     0,     0,     0,     0,    74,
      68,    69,    70,    71,    72,    73,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,    75,     0,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
      75,   142,    76,    77,    78,    79,    80,    81,    82,     0,
       0,    83,    68,    69,    70,    71,    72,    73,     0,     0,
       0,     0,     0,     0,    74,    68,    69,    70,    71,    72,
      73,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,     0,    75,     0,    76,    77,    78,    79,    80,    81,
      82,     0,     0,    86,     0,    75,     0,    76,    77,    78,
      79,    80,    81,    82,     0,     0,   128,    68,    69,    70,
      71,    72,    73,     0,     0,     0,     0,     0,     0,    74,
      68,    69,    70,    71,    72,    73,     0,    68,    69,    70,
      71,    72,    73,     0,     0,     0,     0,    75,     0,    76,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
      75,     0,    76,    77,    78,    79,    80,    81,    82,    76,
      77,    78,    79,    80,    81,    82,     5,     6,     7,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19
};

static const yytype_int16 yycheck[] =
{
      23,    14,     2,    99,    58,   101,    45,    30,     0,     3,
       4,     5,     6,    58,     3,     4,     5,     6,    14,    58,
      11,     3,     4,     5,     6,    21,    21,    21,    14,    20,
      21,    22,    21,    24,    14,    21,    55,    56,    32,    21,
      58,    21,    57,    32,    49,    50,    51,    52,    53,    58,
      32,    58,    43,    44,    53,    59,    60,    45,    12,    13,
      21,    52,    58,    21,    64,    59,    55,    21,    22,    23,
      24,    56,    63,    55,    87,    59,    60,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      59,    82,    46,    47,    48,   118,   119,    88,     8,    90,
      56,    57,   102,    94,    58,    59,     0,     1,   121,     3,
       4,     5,     6,     7,    56,     9,    10,    11,    12,    13,
      21,   144,    56,    57,    52,    53,    -1,    21,    22,    23,
      24,   121,     3,     4,     5,     6,    -1,    -1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    12,    13,
      21,    -1,    46,    47,    48,    -1,    -1,    21,    22,    23,
      24,    32,    -1,    57,    58,    -1,    -1,    -1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    -1,    46,    47,    48,    -1,    -1,    21,    22,    23,
      24,    55,    -1,    57,    58,    -1,    -1,    -1,    32,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    12,    13,
      -1,    -1,    46,    47,    48,    -1,    -1,    21,    22,    23,
      24,    55,    -1,    57,    58,    -1,    -1,    -1,    32,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    46,    47,    48,    -1,    15,    16,    17,    18,
      19,    20,    -1,    57,    58,    -1,    -1,    -1,    27,    45,
      -1,    47,    48,    49,    50,    51,    52,    53,    47,    48,
      49,    50,    51,    52,    53,    61,    45,    -1,    47,    48,
      49,    50,    51,    52,    53,    12,    13,    -1,    -1,    12,
      13,    -1,    61,    -1,    21,    22,    23,    24,    21,    22,
      23,    24,    -1,    -1,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    46,
      47,    48,    -1,    46,    47,    48,    -1,    -1,    -1,    56,
      -1,    58,    -1,    -1,    45,    58,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    45,
      -1,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    45,    59,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      45,    59,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    56,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    45,    -1,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    45,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    56,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      15,    16,    17,    18,    19,    20,    -1,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      45,    -1,    47,    48,    49,    50,    51,    52,    53,    47,
      48,    49,    50,    51,    52,    53,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    64,     0,     1,     3,     4,     5,     6,     7,
       9,    10,    11,    12,    13,    21,    22,    23,    24,    32,
      46,    47,    48,    57,    58,    65,    68,    69,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    83,
      84,    55,    56,    58,    58,    21,    56,    79,    21,     6,
      21,    68,    58,    82,    79,    79,    79,    55,    71,    74,
      79,    14,    21,    45,    58,    70,    55,    74,    15,    16,
      17,    18,    19,    20,    27,    45,    47,    48,    49,    50,
      51,    52,    53,    56,    79,    79,    56,    57,    58,    58,
      53,    59,    79,    59,    60,    59,    21,    79,    21,    59,
      71,    59,    60,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    21,    79,    59,    59,
      55,    66,    67,    68,    79,    59,    79,    79,    56,    56,
      72,    56,    72,    71,    61,    74,    74,    55,    67,    56,
      14,    21,    59,    61,     8,    56,    21,    74
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;


  /* User initialization code.  */
#line 20 "parser.y"
{
  parser::root = new astree (TOK_ROOT, {0, 0, 0}, "<<ROOT>>");
}
/* Line 1078 of yacc.c.  */
#line 1457 "yyparse.cpp"
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 50 "parser.y"
    { parser::root = (yyvsp[(1) - (1)]); ;}
    break;

  case 3:
#line 53 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); ;}
    break;

  case 4:
#line 54 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); ;}
    break;

  case 5:
#line 55 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); ;}
    break;

  case 6:
#line 56 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 7:
#line 57 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 8:
#line 58 "parser.y"
    { (yyval) = parser::root; ;}
    break;

  case 9:
#line 61 "parser.y"
    { destroy((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])); 
              (yyval) = (yyvsp[(1) - (5)])->adopt_sym((yyvsp[(2) - (5)]), TOK_TYPEID)->adopt((yyvsp[(3) - (5)])); ;}
    break;

  case 10:
#line 64 "parser.y"
    { destroy((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)])); (yyval) = (yyvsp[(1) - (4)])->adopt_sym((yyvsp[(2) - (4)]), TOK_TYPEID); ;}
    break;

  case 11:
#line 68 "parser.y"
    { destroy((yyvsp[(3) - (3)])); 
                (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(2) - (3)])); ;}
    break;

  case 12:
#line 71 "parser.y"
    { destroy((yyvsp[(2) - (2)])); (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 13:
#line 75 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt_sym((yyvsp[(2) - (2)]), TOK_FIELD); ;}
    break;

  case 14:
#line 77 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]))->adopt_sym((yyvsp[(3) - (3)]), TOK_FIELD); ;}
    break;

  case 15:
#line 80 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 16:
#line 81 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 17:
#line 82 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 18:
#line 83 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 19:
#line 84 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 20:
#line 85 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 21:
#line 89 "parser.y"
    { astree* as = new astree(TOK_PROTOTYPE, (yyvsp[(1) - (4)])->lloc, "");
            (yyval) = as->adopt((yyvsp[(1) - (4)]));
            (yyval) = as->adopt_next((yyvsp[(2) - (4)]), TOK_PARAMLIST); 
            destroy((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 22:
#line 94 "parser.y"
    { astree* as = new astree(TOK_FUNCTION, (yyvsp[(1) - (4)])->lloc, "");
            (yyval) = as->adopt((yyvsp[(1) - (4)])); 
            (yyval) = as->adopt_next((yyvsp[(2) - (4)]), TOK_PARAMLIST); 
            (yyval) = as->adopt((yyvsp[(4) - (4)])); 
            destroy((yyvsp[(3) - (4)]), nullptr); ;}
    break;

  case 23:
#line 100 "parser.y"
    { astree* as = new astree(TOK_PROTOTYPE, (yyvsp[(1) - (4)])->lloc, ""); 
            (yyval) = as->adopt((yyvsp[(1) - (4)]));
            (yyval) = as->adopt((yyvsp[(2) - (4)])); 
            destroy((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)])); ;}
    break;

  case 24:
#line 105 "parser.y"
    { astree* as = new astree(TOK_FUNCTION, (yyvsp[(1) - (4)])->lloc, "");
            (yyval) = as->adopt((yyvsp[(1) - (4)]));
            (yyval) = as->adopt((yyvsp[(2) - (4)]));
            (yyval) = as->adopt((yyvsp[(4) - (4)])); 
            destroy((yyvsp[(3) - (4)]), nullptr); ;}
    break;

  case 25:
#line 113 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt_sym((yyvsp[(2) - (2)]), TOK_PARAMLIST); ;}
    break;

  case 26:
#line 115 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(3) - (3)])); 
            destroy((yyvsp[(2) - (3)]), nullptr); ;}
    break;

  case 27:
#line 118 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]));
                                              (yyval) = (yyvsp[(2) - (3)])->adopt_next((yyvsp[(3) - (3)]), TOK_DECLID); ;}
    break;

  case 28:
#line 120 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt_next((yyvsp[(2) - (2)]), TOK_DECLID); ;}
    break;

  case 29:
#line 124 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt_sym(nullptr, TOK_BLOCK); 
                                              destroy((yyvsp[(2) - (2)]), nullptr); ;}
    break;

  case 30:
#line 126 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt_sym(nullptr, TOK_BLOCK); 
                                              destroy((yyvsp[(2) - (2)]), nullptr); ;}
    break;

  case 31:
#line 132 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); ;}
    break;

  case 32:
#line 134 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); ;}
    break;

  case 33:
#line 137 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 34:
#line 138 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 35:
#line 139 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 36:
#line 140 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 37:
#line 141 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 38:
#line 142 "parser.y"
    { destroy((yyvsp[(2) - (2)])); 
                                                 (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 39:
#line 146 "parser.y"
    { (yyval) = (yyvsp[(2) - (4)])->adopt_sym((yyvsp[(1) - (4)]), TOK_VARDECL); 
                                              (yyval) = (yyvsp[(2) - (4)])->adopt((yyvsp[(3) - (4)])); 
                                              destroy((yyvsp[(4) - (4)]), nullptr); ;}
    break;

  case 40:
#line 151 "parser.y"
    { (yyval) = (yyvsp[(1) - (5)])->adopt((yyvsp[(3) - (5)]));
                       (yyval) = (yyvsp[(1) - (5)])->adopt((yyvsp[(5) - (5)])); 
                      destroy((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)])); ;}
    break;

  case 41:
#line 158 "parser.y"
    { (yyval) = (yyvsp[(1) - (5)])->adopt((yyvsp[(3) - (5)]));
              (yyval) = (yyvsp[(1) - (5)])->adopt((yyvsp[(5) - (5)])); 
              destroy((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)])); ;}
    break;

  case 42:
#line 163 "parser.y"
    { (yyval) = (yyvsp[(1) - (7)])->adopt_sym((yyvsp[(3) - (7)]), TOK_IFELSE); 
              (yyval) = (yyvsp[(1) - (7)])->adopt((yyvsp[(5) - (7)]));
              (yyval) = (yyvsp[(1) - (7)])->adopt((yyvsp[(7) - (7)])); 
              destroy((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)])); ;}
    break;

  case 43:
#line 170 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(2) - (3)])); ;}
    break;

  case 44:
#line 172 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt_sym((yyvsp[(2) - (2)]), TOK_RETURNVOID); ;}
    break;

  case 45:
#line 175 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 46:
#line 176 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 47:
#line 177 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 48:
#line 178 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 49:
#line 179 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 50:
#line 180 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 51:
#line 181 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 52:
#line 182 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 53:
#line 183 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 54:
#line 184 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 55:
#line 185 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 56:
#line 186 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 57:
#line 187 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;

  case 58:
#line 188 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); ;}
    break;

  case 59:
#line 189 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt_sym((yyvsp[(2) - (2)]), TOK_NEG); ;}
    break;

  case 60:
#line 190 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt_sym((yyvsp[(2) - (2)]), TOK_POS); ;}
    break;

  case 61:
#line 191 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 62:
#line 192 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 63:
#line 193 "parser.y"
    { destroy((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 64:
#line 194 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 65:
#line 195 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 66:
#line 200 "parser.y"
    { destroy((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)])); (yyval) = (yyvsp[(1) - (4)])->adopt_sym((yyvsp[(2) - (4)]), TOK_TYPEID); ;}
    break;

  case 67:
#line 202 "parser.y"
    { destroy((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])); 
              destroy((yyvsp[(2) - (5)])); 
              (yyval) = (yyvsp[(1) - (5)])->adopt_sym((yyvsp[(4) - (5)]), TOK_NEWSTRING ); ;}
    break;

  case 68:
#line 206 "parser.y"
    { destroy((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])); 
              (yyval) = (yyvsp[(1) - (5)])->adopt_sym((yyvsp[(2) - (5)]), TOK_NEWARRAY)->adopt_sym
              ((yyvsp[(4) - (5)]), TOK_NEWARRAY);;}
    break;

  case 69:
#line 212 "parser.y"
    { destroy((yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)])->adopt_sym((yyvsp[(2) - (3)]), TOK_CALL); ;}
    break;

  case 70:
#line 214 "parser.y"
    { destroy((yyvsp[(3) - (3)])); (yyval) = (yyvsp[(2) - (3)])->adopt_sym((yyvsp[(1) - (3)]), TOK_CALL); ;}
    break;

  case 71:
#line 217 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)])->adopt((yyvsp[(2) - (2)])); ;}
    break;

  case 72:
#line 218 "parser.y"
    { destroy((yyvsp[(2) - (3)])); (yyval) = (yyvsp[(1) - (3)])->adopt((yyvsp[(3) - (3)])); ;}
    break;

  case 73:
#line 222 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 74:
#line 224 "parser.y"
    { (yyval) = (yyvsp[(2) - (4)])->adopt_sym((yyvsp[(1) - (4)]), TOK_INDEX); 
              (yyval) = (yyvsp[(2) - (4)])->adopt((yyvsp[(3) - (4)])); 
              destroy((yyvsp[(4) - (4)]), nullptr); ;}
    break;

  case 75:
#line 228 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)])->adopt((yyvsp[(1) - (3)]));
              (yyval) = (yyvsp[(2) - (3)])->adopt_next((yyvsp[(3) - (3)]), TOK_FIELD); ;}
    break;

  case 76:
#line 232 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 77:
#line 233 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 78:
#line 234 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 79:
#line 235 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2068 "yyparse.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 238 "parser.y"



const char *parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}


bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}

/*
static void* yycalloc (size_t size) {
   void* result = calloc (1, size);
   assert (result != nullptr);
   return result;
}
*/


