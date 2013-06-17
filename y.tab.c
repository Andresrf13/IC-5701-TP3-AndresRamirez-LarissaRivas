/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "parser.y"
 
  #include <stdio.h>
  #include <assert.h>
  #include <string.h>
  #include "clases.h"   /* contiene las estructuras y metodos de las funciones que se utilizan para construir el arbol e imprimirlo en consola */
  #include "revisaTag.h"/* contiene las funciones que revisan los tokens*/
  void yyerror (char const *s);
  void get_tag (nodo *nodo, char *contenido);
  void get_atributo (nodo *Nodo, char *contenido); 


/* Line 268 of yacc.c  */
#line 83 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_URL = 258,
     T_NUM = 259,
     T_ENTER = 260,
     T_SPACE = 261,
     T_COMMENT_IN = 262,
     T_COMMENT_END = 263,
     T_CDATA_I = 264,
     T_CDATA_F = 265,
     CONT_DATA = 266,
     T_XMLDEC = 267,
     T_F_XMLDEC = 268,
     T_EQ = 269,
     T_ENCOD = 270,
     T_ENDID = 271,
     T_VNUMBER = 272,
     T_VS = 273,
     T_DOCTYPE = 274,
     T_SYSTEM = 275,
     T_PULIC = 276,
     T_NAME = 277,
     T_ENDDOCTYPE = 278,
     T_PUBIDLIT = 279,
     T_SYSTLIT = 280,
     T_ETAG = 281,
     T_TAG = 282,
     T_FTAG = 283,
     T_ESTAG = 284,
     T_CONTENT = 285,
     T_ATRIBUTO = 286,
     T_FIN_ETAG = 287,
     T_FIN_STAG = 288,
     T_CONTENIDO = 289
   };
#endif
/* Tokens.  */
#define T_URL 258
#define T_NUM 259
#define T_ENTER 260
#define T_SPACE 261
#define T_COMMENT_IN 262
#define T_COMMENT_END 263
#define T_CDATA_I 264
#define T_CDATA_F 265
#define CONT_DATA 266
#define T_XMLDEC 267
#define T_F_XMLDEC 268
#define T_EQ 269
#define T_ENCOD 270
#define T_ENDID 271
#define T_VNUMBER 272
#define T_VS 273
#define T_DOCTYPE 274
#define T_SYSTEM 275
#define T_PULIC 276
#define T_NAME 277
#define T_ENDDOCTYPE 278
#define T_PUBIDLIT 279
#define T_SYSTLIT 280
#define T_ETAG 281
#define T_TAG 282
#define T_FTAG 283
#define T_ESTAG 284
#define T_CONTENT 285
#define T_ATRIBUTO 286
#define T_FIN_ETAG 287
#define T_FIN_STAG 288
#define T_CONTENIDO 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 15 "parser.y"

  char *contenido;  
  struct Nodo *node;



/* Line 293 of yacc.c  */
#line 194 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 219 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   74

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  38
/* YYNRULES -- Number of states.  */
#define YYNSTATES  78

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,     9,    11,    15,    18,    19,    21,
      23,    25,    27,    33,    39,    40,    46,    52,    58,    62,
      65,    66,    68,    70,    77,    83,    88,    95,    97,    98,
     104,   109,   114,   119,   124,   127,   129,   132,   135
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    44,    56,    37,    -1,    42,    -1,    38,
      -1,    41,    39,    53,    -1,    39,    40,    -1,    -1,    54,
      -1,    55,    -1,    37,    -1,    34,    -1,    29,    27,    43,
      56,    33,    -1,    29,    27,    43,    56,    32,    -1,    -1,
      43,    55,    31,    14,     4,    -1,    43,    55,    31,    14,
       3,    -1,    43,    55,    31,    14,    30,    -1,    49,    45,
      47,    -1,    45,    46,    -1,    -1,    54,    -1,     6,    -1,
      19,    55,    22,    48,    56,    23,    -1,    19,    55,    22,
      56,    23,    -1,    55,    20,    55,    25,    -1,    55,    21,
      55,    24,    56,    25,    -1,    50,    -1,    -1,    12,    51,
      52,    56,    13,    -1,    12,    51,    56,    13,    -1,    55,
      18,    14,    17,    -1,    55,    15,    14,    16,    -1,    26,
      27,    56,    28,    -1,     7,     8,    -1,     6,    -1,     6,
      55,    -1,     6,    56,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    58,    62,    68,    78,    83,    86,    89,
      92,    95,   102,   122,   142,   145,   161,   178,   196,   207,
     212,   217,   221,   229,   241,   256,   266,   282,   286,   291,
     300,   313,   328,   343,   360,   370,   375,   385,   391
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_URL", "T_NUM", "T_ENTER", "T_SPACE",
  "T_COMMENT_IN", "T_COMMENT_END", "T_CDATA_I", "T_CDATA_F", "CONT_DATA",
  "T_XMLDEC", "T_F_XMLDEC", "T_EQ", "T_ENCOD", "T_ENDID", "T_VNUMBER",
  "T_VS", "T_DOCTYPE", "T_SYSTEM", "T_PULIC", "T_NAME", "T_ENDDOCTYPE",
  "T_PUBIDLIT", "T_SYSTLIT", "T_ETAG", "T_TAG", "T_FTAG", "T_ESTAG",
  "T_CONTENT", "T_ATRIBUTO", "T_FIN_ETAG", "T_FIN_STAG", "T_CONTENIDO",
  "$accept", "Document", "Element", "SCTAG", "CONTENT", "OPCIONES",
  "ESTAG", "EETAG", "T_ATRIB", "Prolog", "Misc", "OPCIONESMisc", "Doctype",
  "ExternalID_E", "XMLdec", "XMLdec_E", "VersionINfo", "EncoDecl", "ETAG",
  "T_COMMENT", "T_SS", "T_S", 0
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
     285,   286,   287,   288,   289
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    39,    39,    40,    40,
      40,    40,    41,    42,    43,    43,    43,    43,    44,    45,
      45,    46,    46,    47,    47,    48,    48,    49,    49,    50,
      50,    51,    52,    53,    54,    55,    55,    56,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     3,     2,     0,     1,     1,
       1,     1,     5,     5,     0,     5,     5,     5,     3,     2,
       0,     1,     1,     6,     5,     4,     6,     1,     0,     5,
       4,     4,     4,     4,     2,     1,     2,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      28,     0,     0,    38,    20,    27,    35,    38,     0,     1,
      38,     0,     0,    36,    35,    38,     0,     0,     0,    37,
       0,     2,     4,     7,     3,    22,     0,     0,    19,    18,
      21,     0,     0,    30,     0,    14,     0,    34,     0,    29,
       0,    31,    38,     0,    11,    10,     6,     5,     8,     9,
      38,    32,     0,     0,    38,    38,     0,     0,     0,    13,
      12,     0,     0,     0,     0,    24,     0,    33,    23,     0,
       0,    16,    15,    17,    25,    38,     0,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    21,    22,    36,    46,    23,    24,    42,     3,
      12,    28,    29,    55,     4,     5,     7,    15,    47,    30,
      13,    19
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -25
static const yytype_int8 yypact[] =
{
      -2,    11,    19,    14,   -25,   -25,   -25,    15,     6,   -25,
      14,    -6,     7,   -25,     5,    14,    16,    20,    21,   -25,
      13,   -25,   -25,   -25,   -25,   -25,    26,    11,   -25,   -25,
     -25,    28,    29,   -25,    12,   -25,    -4,   -25,    22,   -25,
      30,   -25,    15,    18,   -25,   -25,   -25,   -25,   -25,   -25,
      15,   -25,    17,   -24,    14,    14,    -5,    31,    35,   -25,
     -25,    25,    32,    11,    11,   -25,     2,   -25,   -25,    33,
      36,   -25,   -25,   -25,   -25,    14,    34,   -25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,    37,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,    38,
       0,    -3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -39
static const yytype_int8 yytable[] =
{
      11,     8,     6,    26,    17,    71,    72,    16,    59,    60,
       1,    14,    31,    25,    26,    63,    64,     6,   -38,     9,
      10,    14,    43,    20,    18,    20,    27,    38,   -38,    41,
      44,    32,    73,    33,    37,    34,    49,   -38,   -38,    53,
      35,    39,    52,    40,    50,    54,    51,    57,    58,    66,
      56,    61,    62,    67,    65,    68,     0,     0,    74,    77,
      75,     0,     0,    69,    70,     0,     0,     0,     0,     0,
       0,     0,    76,    45,    48
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-25))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       3,     1,     6,     7,     7,     3,     4,     7,    32,    33,
      12,     6,    15,     6,     7,    20,    21,     6,    13,     0,
       6,     6,    26,    29,    18,    29,    19,    27,    23,    17,
      34,    15,    30,    13,     8,    14,    36,    32,    33,    42,
      27,    13,    42,    14,    22,    27,    16,    50,    31,    14,
      50,    54,    55,    28,    23,    23,    -1,    -1,    25,    25,
      24,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    36,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    36,    44,    49,    50,     6,    51,    55,     0,
       6,    56,    45,    55,     6,    52,    55,    56,    18,    56,
      29,    37,    38,    41,    42,     6,     7,    19,    46,    47,
      54,    56,    15,    13,    14,    27,    39,     8,    55,    13,
      14,    17,    43,    26,    34,    37,    40,    53,    54,    55,
      22,    16,    55,    56,    27,    48,    55,    56,    31,    32,
      33,    56,    56,    20,    21,    23,    14,    28,    23,    55,
      55,     3,     4,    30,    25,    24,    56,    25
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
  *++yyvsp = yylval;
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
     `$$ = $1'.

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
        case 2:

/* Line 1806 of yacc.c  */
#line 48 "parser.y"
    {
								 nodo* padre = crear_padre("Document"); /*se concluye con la construccion del arbol y la gramatica*/
								 (yyvsp[(1) - (3)].node)->hermano = (yyvsp[(2) - (3)].node);
								 (yyvsp[(2) - (3)].node)->hermano=(yyvsp[(3) - (3)].node);
								 padre->hijo=(yyvsp[(1) - (3)].node);
								 printf("\n");
								 imprimir(padre); /*se invoca al metodo imprimir para mostrar en consola el arbol construido*/
								 }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 58 "parser.y"
    {
								 nodo* padre = crear_padre("ELEMENT");
								 padre->hijo=(yyvsp[(1) - (1)].node);
								 (yyval.node)=padre;}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 62 "parser.y"
    {
								 nodo* padre = crear_padre("ELEMENT");
								 padre->hijo=(yyvsp[(1) - (1)].node);
								 (yyval.node)=padre;}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 68 "parser.y"
    { 
								  nodo* padre = crear_padre("SCTAG");
								  nodo* nodo2 = crear_padre("CONTENT");
								  nodo2->hijo = (yyvsp[(2) - (3)].node);
								  (yyvsp[(1) - (3)].node)->hermano=nodo2;
								  nodo2->hermano=(yyvsp[(3) - (3)].node);
								  padre->hijo=(yyvsp[(1) - (3)].node);
								  (yyval.node)=padre;}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 78 "parser.y"
    {								 
								 nodo* ultimo = encontrar_ultimo((yyvsp[(1) - (2)].node));
								 ultimo->hermano = (yyvsp[(2) - (2)].node);
								 (yyval.node) = (yyvsp[(1) - (2)].node);
								 }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 83 "parser.y"
    {nodo* nodo_padre = crear_padre ("vacio");
								(yyval.node) = nodo_padre;}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 86 "parser.y"
    {nodo* padre = crear_padre("OPCIONES");
								 padre->hijo=(yyvsp[(1) - (1)].node);
								 (yyval.node)=padre;}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 89 "parser.y"
    {nodo* padre = crear_padre("OPCIONES");
								 padre->hijo=(yyvsp[(1) - (1)].node);
								 (yyval.node)=padre;}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 92 "parser.y"
    {nodo* padre = crear_padre("OPCIONES");
								 padre->hijo=(yyvsp[(1) - (1)].node);
								 (yyval.node)=padre;}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 95 "parser.y"
    {
								 nodo* nodo1 = crear_nodo("T_CONTENIDO",(yyvsp[(1) - (1)].contenido));
								 nodo* padre = crear_padre("OPCIONES");
								 padre->hijo=nodo1;
								 (yyval.node)=padre;}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 102 "parser.y"
    {
								 nodo* nodo1 = crear_nodo("T_ESTAG", (yyvsp[(1) - (5)].contenido)); 								  
								 nodo* nodo2 = crear_padre("T_TAG");
								 get_tag(nodo2, (yyvsp[(2) - (5)].contenido));          
								 int fila = yylloc.first_line;
								 int col = yylloc.first_column;
								 nodo* nodo3 = crear_padre("T_ATRIB");
								 nodo* nodo5 = crear_nodo("T_FIN_STAG", (yyvsp[(5) - (5)].contenido));
								 nodo* padre = crear_padre("ESTAG");
								 nodo3->hijo = (yyvsp[(3) - (5)].node);
								 nodo1->hermano=nodo2;
								 nodo2->hermano=nodo3;
								 nodo3->hermano=(yyvsp[(4) - (5)].node);
								 (yyvsp[(4) - (5)].node)->hermano=nodo5;
								 padre->hijo=nodo1;
								 (yyval.node)=padre;
								 hayhijo(nodo2->content,nodo3,col,fila); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 122 "parser.y"
    {
								nodo* nodo1 = crear_nodo("T_ESTAG", (yyvsp[(1) - (5)].contenido));
								nodo* nodo2 = crear_padre("T_TAG");
								get_tag(nodo2,(yyvsp[(2) - (5)].contenido));
								int fila = yylloc.first_line;
								int col = yylloc.first_column;
								nodo* nodo3 = crear_padre("T_ATRIB");
								nodo* nodo5 = crear_nodo("T_FIN_ETAG", (yyvsp[(5) - (5)].contenido));
								nodo* padre = crear_padre("EETAG");
	 							nodo3->hijo = (yyvsp[(3) - (5)].node);
								nodo1->hermano=nodo2;								
								nodo2->hermano=nodo3;
								nodo3->hermano = (yyvsp[(4) - (5)].node);
								(yyvsp[(4) - (5)].node)->hermano = nodo5;
								padre->hijo=nodo1;
								(yyval.node)=padre;
								hayhijo(nodo2->content,nodo3,col,fila); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 142 "parser.y"
    { 
								nodo* nodo_padre = crear_padre ("vacio");
								(yyval.node) = nodo_padre;}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 145 "parser.y"
    {
								 nodo* nodo3 = crear_padre("T_Atributo");
								 get_atributo(nodo3, (yyvsp[(3) - (5)].contenido));
								 nodo* nodo4 = crear_nodo("T_EQ", "=");
								 //printf(" FIla: %i Columna: %i \n", yylloc.first_line, yylloc.first_column);
								 int fila = yylloc.first_line;
								 int col = yylloc.first_column;
								 nodo* nodo5 = crear_nodo("T_NUM", (yyvsp[(5) - (5)].contenido));								 
								 (yyvsp[(2) - (5)].node)->hermano = nodo3;
								 nodo3->hermano=nodo4;
								 nodo4->hermano=nodo5;
								 nodo *ultimo = encontrar_ultimo((yyvsp[(1) - (5)].node));
								 ultimo->hermano = (yyvsp[(2) - (5)].node);								 
								 (yyval.node)=(yyvsp[(1) - (5)].node);
								 revisa_contenido(0,nodo3, col, fila);}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 161 "parser.y"
    { 
								 nodo* nodo3 = crear_padre("T_Atributo");
								 get_atributo(nodo3, (yyvsp[(3) - (5)].contenido));
								 nodo* nodo4 = crear_nodo("T_EQ", "=");	
								 //printf(" FIla: %i Columna: %i \n", yylloc.first_line, yylloc.first_column);
								 int fila = yylloc.first_line;
								 int col = yylloc.first_column;
								 nodo* nodo5 = crear_nodo("T_URL", (yyvsp[(5) - (5)].contenido));									 
								 (yyvsp[(2) - (5)].node)->hermano = nodo3;
								 nodo3->hermano=nodo4;
								 nodo4->hermano=nodo5;
								 nodo *ultimo = encontrar_ultimo((yyvsp[(1) - (5)].node));
								 ultimo->hermano = (yyvsp[(2) - (5)].node);								 
								 (yyval.node)=(yyvsp[(1) - (5)].node);
								 revisa_contenido(1,nodo3, col, fila);}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 178 "parser.y"
    {					  			
								 nodo* nodo3 = crear_padre("T_Atributo");
								 get_atributo(nodo3, (yyvsp[(3) - (5)].contenido));							 
								 nodo* nodo4 = crear_nodo("T_EQ", "=");					
								 //printf(" FIla: %i Columna: %i \n", yylloc.first_line, yylloc.first_column);
								 int fila = yylloc.first_line;
								 int col = yylloc.first_column;
								 nodo* nodo5 = crear_nodo("T_CONTENT", (yyvsp[(5) - (5)].contenido));								 
								 (yyvsp[(2) - (5)].node)->hermano = nodo3;
								 nodo3->hermano=nodo4;
								 nodo4->hermano=nodo5;
								 nodo *ultimo = encontrar_ultimo((yyvsp[(1) - (5)].node));
								 ultimo->hermano = (yyvsp[(2) - (5)].node);								 
								 (yyval.node)=(yyvsp[(1) - (5)].node);
								 revisa_contenido(2,nodo3, col, fila);}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 196 "parser.y"
    {
								nodo* padre = crear_padre("Prolog");
								(yyvsp[(1) - (3)].node)->hermano=(yyvsp[(2) - (3)].node);
								(yyvsp[(2) - (3)].node)->hermano=(yyvsp[(3) - (3)].node);
								padre->hijo=(yyvsp[(1) - (3)].node);
								(yyval.node)=padre;
								}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 207 "parser.y"
    {nodo* padre = crear_padre("Misc");
								(yyvsp[(1) - (2)].node)->hermano=(yyvsp[(2) - (2)].node);
								padre->hijo=(yyvsp[(1) - (2)].node);
								(yyval.node)=padre;
								}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 212 "parser.y"
    {
								nodo* nodo_padre = crear_padre ("vacio");
								(yyval.node) = nodo_padre;}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 217 "parser.y"
    {
								 nodo* padre = crear_padre("OpcionesMisc");
								 padre->hijo=(yyvsp[(1) - (1)].node);
								 (yyval.node)=padre;}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 221 "parser.y"
    {
								nodo* nodo_padre = crear_padre("OpcionesMisc");
								nodo* nodo1 = crear_nodo("T_SPACE", (yyvsp[(1) - (1)].contenido));
								nodo_padre->hijo=nodo1;
								(yyval.node) = nodo_padre;}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 229 "parser.y"
    {								 
								 nodo* nodo1 = crear_nodo("T_DOCTYPE",(yyvsp[(1) - (6)].contenido));
								 nodo* nodo3 = crear_nodo("T_NAME", (yyvsp[(3) - (6)].contenido));
								 nodo* nodo6 = crear_nodo("T_ENDOCTYPE", (yyvsp[(6) - (6)].contenido));
								 nodo* padre = crear_padre("DOCTYPE");
								 nodo1->hermano = (yyvsp[(2) - (6)].node);
								 (yyvsp[(2) - (6)].node)->hermano=nodo3;
								 nodo3->hermano=(yyvsp[(4) - (6)].node);
								 (yyvsp[(4) - (6)].node)->hermano=(yyvsp[(5) - (6)].node);
								 (yyvsp[(5) - (6)].node)->hermano=nodo6;
								 padre->hijo=nodo1;
								 (yyval.node)=padre;}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 241 "parser.y"
    {   								  
								 nodo* nodo1 = crear_nodo("T_DOCTYPE",(yyvsp[(1) - (5)].contenido));
								 nodo* nodo3 = crear_nodo("T_NAME", (yyvsp[(3) - (5)].contenido));
								 nodo* nodo5 = crear_nodo("T_ENDOCTYPE", (yyvsp[(5) - (5)].contenido));
								 nodo* padre = crear_padre("DOCTYPE");
								 nodo1->hermano = (yyvsp[(2) - (5)].node);
								 (yyvsp[(2) - (5)].node)->hermano=nodo3;
								 nodo3->hermano=(yyvsp[(4) - (5)].node);
								 (yyvsp[(4) - (5)].node)->hermano=nodo5;
								 padre->hijo=nodo1;
								 (yyval.node)=padre;}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 256 "parser.y"
    {
								nodo* nodo2 = crear_nodo("T_SYSTEM", (yyvsp[(2) - (4)].contenido));
								nodo* nodo4 = crear_nodo("T_SYSTLIT", (yyvsp[(4) - (4)].contenido));
								nodo* padre = crear_padre("ExternalID_E");
								(yyvsp[(1) - (4)].node)->hermano = nodo2;
								nodo2->hermano = (yyvsp[(3) - (4)].node);
								(yyvsp[(3) - (4)].node)->hermano = nodo4;
								padre->hijo=(yyvsp[(1) - (4)].node);
								(yyval.node)=padre;
								}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 266 "parser.y"
    { 
								nodo* nodo2 = crear_nodo("T_PUBLIC", (yyvsp[(2) - (6)].contenido));
								nodo* nodo4 = crear_nodo("T_PUBIDLIT", (yyvsp[(4) - (6)].contenido));
								nodo* nodo6 = crear_nodo("T_SYSTLIT", (yyvsp[(6) - (6)].contenido));
								nodo* padre = crear_padre("ExternalID_E");
								(yyvsp[(1) - (6)].node)->hermano = nodo2;
								nodo2->hermano = (yyvsp[(3) - (6)].node);
								(yyvsp[(3) - (6)].node)->hermano = nodo4;
								nodo4->hermano = (yyvsp[(5) - (6)].node);
								(yyvsp[(5) - (6)].node)->hermano = nodo6;
								padre->hijo=(yyvsp[(1) - (6)].node);
								(yyval.node)=padre;}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 282 "parser.y"
    {
								 nodo* padre = crear_padre("XMLdec");
								 padre -> hijo=(yyvsp[(1) - (1)].node);
								 (yyval.node) = padre;}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 286 "parser.y"
    {nodo* nodo_padre = crear_padre ("vacio");
								(yyval.node) = nodo_padre;}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 291 "parser.y"
    {nodo* nodo1 = crear_nodo("T_XMLDEC", (yyvsp[(1) - (5)].contenido));
								 nodo* nodo5 = crear_nodo("T_F_XMLDEC", (yyvsp[(5) - (5)].contenido));
								 nodo* padre = crear_padre("XMLdec_E");
								 nodo1->hermano = (yyvsp[(2) - (5)].node);
								 (yyvsp[(2) - (5)].node) -> hermano = (yyvsp[(3) - (5)].node);
								 (yyvsp[(3) - (5)].node) -> hermano = (yyvsp[(4) - (5)].node);
								 (yyvsp[(4) - (5)].node) -> hermano = nodo5;
								 padre->hijo = nodo1;
								 (yyval.node) = padre;}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 300 "parser.y"
    { nodo* nodo1 = crear_nodo("T_XMLDEC", (yyvsp[(1) - (4)].contenido));
								 nodo* nodo4 = crear_nodo("T_F_XMLDEC", (yyvsp[(4) - (4)].contenido));
								 nodo* padre = crear_padre("XMLdec_E");
								 nodo1->hermano = (yyvsp[(2) - (4)].node);
								 (yyvsp[(2) - (4)].node) -> hermano = (yyvsp[(3) - (4)].node);
								 (yyvsp[(3) - (4)].node) -> hermano = nodo4;
								 padre->hijo = nodo1;
								 (yyval.node) = padre;}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 313 "parser.y"
    {								
								nodo* nodo2 = crear_nodo("Version", (yyvsp[(2) - (4)].contenido));
								nodo* nodo3 = crear_nodo("EQ", "=");
								nodo* nodo4 = crear_nodo("NumVersion", (yyvsp[(4) - (4)].contenido));
								nodo* padre = crear_padre("Info_Version");
								(yyvsp[(1) - (4)].node)->hermano = nodo2;
								nodo2->hermano = nodo3;
								nodo3->hermano = nodo4;
								padre->hijo = (yyvsp[(1) - (4)].node);
								(yyval.node) = padre;
								}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 328 "parser.y"
    {
								 nodo* nodo2 = crear_nodo("Encod", (yyvsp[(2) - (4)].contenido));
								 nodo* nodo3 = crear_nodo("EQ", "=");
								 nodo* nodo4 = crear_nodo("ENDID", (yyvsp[(4) - (4)].contenido));
								 nodo* padre = crear_padre("EncodingDecl");
								 (yyvsp[(1) - (4)].node)->hermano = nodo2;
								 nodo2->hermano = nodo3;
								 nodo3->hermano = nodo4;
								 padre->hijo=(yyvsp[(1) - (4)].node);
								 (yyval.node) = padre;}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 343 "parser.y"
    { 
								  nodo* nodo1 = crear_nodo("tag de inicio", (yyvsp[(1) - (4)].contenido));
								  nodo* nodo2 = crear_padre("T_TAG");
								  get_tag(nodo2,(yyvsp[(2) - (4)].contenido));
								  nodo* nodo4 = crear_nodo("tag de cierre", (yyvsp[(4) - (4)].contenido));
								  nodo* padre = crear_padre("Etag");
								  nodo1->hermano = nodo2;
								  nodo2->hermano = (yyvsp[(3) - (4)].node);
								  (yyvsp[(3) - (4)].node)->hermano = nodo4;
								  padre->hijo=nodo1;
								  (yyval.node) = padre;
								}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 360 "parser.y"
    { nodo* nodo1 = crear_nodo("comentario inicio", (yyvsp[(1) - (2)].contenido));
								  nodo* nodo2 = crear_nodo("comentario cerrar", (yyvsp[(2) - (2)].contenido));
								  nodo1->hermano = nodo2;
								  nodo* nodo_padre = crear_padre("comentario");
								  nodo_padre->hijo = nodo1;
								  (yyval.node) =  nodo_padre;}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 370 "parser.y"
    { 
								nodo* nodo_padre = crear_padre("T_SS");
								nodo* nodo1 = crear_nodo("T_SPACE", " ");
								nodo_padre->hijo=nodo1;
								(yyval.node) = nodo_padre;}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 375 "parser.y"
    {  
								nodo* nodo_padre = crear_padre("T_SS");
								nodo* nodo1 = crear_nodo("T_SPACE", " ");
								nodo1->hermano = (yyvsp[(2) - (2)].node);
								nodo_padre->hijo=nodo1;
								(yyval.node) = nodo_padre; }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 385 "parser.y"
    { 
								nodo* nodo_padre = crear_padre("T_S");
								nodo* nodo1 = crear_nodo("T_SPACE", " ");
								nodo1->hermano = (yyvsp[(2) - (2)].node);
								nodo_padre->hijo=nodo1;
								(yyval.node) = nodo_padre; }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 391 "parser.y"
    { 
								nodo* nodo_padre = crear_padre ("vacio");
								(yyval.node) = nodo_padre;}
    break;



/* Line 1806 of yacc.c  */
#line 2052 "y.tab.c"
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

  *++yyvsp = yylval;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 398 "parser.y"


/*  funcion de error que cuando se intenta hacer un elemento que no este correcto se llama a yyerror con un puntero que indicara el tipo de error presentado, 
    ademas imprime  el numero de linea y columna donde se encuentra el error, que son variables del yylloc */
void yyerror (char const *s)
     {
       fprintf (stderr, "ERROR EN POSICION: %d, %d: %s\n", yylloc.first_line, yylloc.first_column, s);
     }   
    
void get_tag (nodo *Nodo, char *contenido){
   char cadena[]="";    
   
   int posicion = 0;
   int y = strlen(contenido);
   int  x = 0;         
   while (x < y)
    {
      if(contenido[x] !=' ' && contenido[x] !='>' && contenido[x] != '/'){        	
/* 	printf("%c", contenido[x]); */
      }
      else
      {
	strncat( cadena, contenido, x);
/*  	printf("cadena: %s", cadena);  */
 	Nodo->content = (char *)malloc(sizeof(cadena)+1);
 	strcpy(Nodo->content, cadena);
        break;
      }
      x++;
    }
  
}

void get_atributo (nodo *Nodo, char *contenido){
   char cadena[]="";    
   /*printf("%s", contenido);*/
   int posicion = 0;
   int y = strlen(contenido);
   int  x = 0;         
   while (x < y)
    {
      if(contenido[x] !=' ' && contenido[x] !='='){        	
/* 	printf("%c", contenido[x]); */
      }
      else
      {
	strncat( cadena, contenido, x);
/*  	printf("cadena: %s", cadena);  */
 	Nodo->content = (char *)malloc(sizeof(cadena)+1);
 	strcpy(Nodo->content, cadena);
        break;
      }
      x++;
    } 
}
    
/*      la funcion main se encarga de llamar el yyparse el cual se encarga de llamar a su vez al scanner y comienza a pedir tokens
	los cuales son procesados en la gramatica. la funcion termina cuando el scanner no le envie mas tokens*/

int main() {
	return yyparse();
} 
