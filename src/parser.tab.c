/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);

/* Line 371 of yacc.c  */
#line 77 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INCLUIR = 258,
     CONFIG = 259,
     FIM = 260,
     REPITA = 261,
     ESPERAR = 262,
     CONFIGURAR_SERIAL = 263,
     CONFIGURAR = 264,
     LER_DIGITAL = 265,
     LIGAR = 266,
     DESLIGAR = 267,
     MUDAR = 268,
     VAR = 269,
     ESCREVER_SERIAL = 270,
     LER_SERIAL = 271,
     CONSTANTE = 272,
     LER_ANALOGICO = 273,
     ESCREVER_ANALOGICO = 274,
     INTEIRO = 275,
     BOOLEANO = 276,
     TEXTO = 277,
     SAIDA = 278,
     ENTRADA = 279,
     SSID = 280,
     SENHA = 281,
     HOST = 282,
     CONECTAR_WIFI = 283,
     CHECAR_WIFI = 284,
     IGUAL = 285,
     DOISPONTOS = 286,
     SE = 287,
     SENAO = 288,
     ENTAO = 289,
     ENQUANTO = 290,
     TRUE = 291,
     FALSE = 292,
     INICIAR_HTTP = 293,
     RECEBER_HTTP = 294,
     NUMERO = 295,
     IDENT = 296,
     STRING = 297,
     COMENTARIO = 298,
     OPERADOR = 299,
     OPERADOR_COMPARACAO = 300
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 10 "parser.y"

    int int_val;    /* Para NUMERO */
    char* str_val;  /* Para IDENT e STRING */


/* Line 387 of yacc.c  */
#line 171 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 199 "parser.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   124

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  153

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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    10,    11,    14,    15,    19,    21,
      23,    25,    26,    31,    32,    37,    38,    42,    43,    45,
      48,    51,    52,    56,    57,    62,    64,    65,    70,    75,
      83,    88,    96,    97,   102,   104,   106,   108,   110,   112,
     114,   116,   120,   124,   128,   132,   134,   136,   138,   139,
     143,   144,   148,   150,   152,   154,   156,   158,   160,   161,
     166,   167,   172,   179,   184,   189,   194,   195,   203,   204,
     212,   213,   221,   222,   223,   231,   232,   233,   240,   241,
     242,   248,   250,   251
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    51,    53,    -1,    49,    48,    -1,
      -1,     3,    41,    -1,    -1,    17,    50,    73,    -1,    73,
      -1,    43,    -1,    63,    -1,    -1,     4,    52,    55,     5,
      -1,    -1,     6,    54,    55,     5,    -1,    -1,    56,    57,
      55,    -1,    -1,    77,    -1,     7,    40,    -1,     8,    40,
      -1,    -1,    15,    58,    68,    -1,    -1,     9,    41,    59,
      64,    -1,    65,    -1,    -1,    13,    41,    60,    68,    -1,
      41,    30,    10,    41,    -1,    14,    21,    31,    41,    30,
      10,    41,    -1,    41,    30,    18,    41,    -1,    14,    20,
      31,    41,    30,    18,    41,    -1,    -1,    19,    41,    61,
      68,    -1,    73,    -1,    71,    -1,    43,    -1,    63,    -1,
      62,    -1,    38,    -1,    39,    -1,    25,    30,    42,    -1,
      26,    30,    42,    -1,    27,    30,    42,    -1,    28,    25,
      26,    -1,    29,    -1,    24,    -1,    23,    -1,    -1,    11,
      66,    68,    -1,    -1,    12,    67,    68,    -1,    41,    -1,
      40,    -1,    36,    -1,    37,    -1,    42,    -1,    68,    -1,
      -1,    68,    44,    70,    68,    -1,    -1,    41,    30,    72,
      69,    -1,    14,    22,    31,    41,    30,    16,    -1,    14,
      20,    31,    41,    -1,    14,    21,    31,    41,    -1,    14,
      22,    31,    41,    -1,    -1,    14,    20,    31,    41,    30,
      74,    69,    -1,    -1,    14,    21,    31,    41,    30,    75,
      69,    -1,    -1,    14,    22,    31,    41,    30,    76,    69,
      -1,    -1,    -1,    32,    78,    82,    34,    79,    55,    85,
      -1,    -1,    -1,    35,    80,    82,    81,    55,    85,    -1,
      -1,    -1,    83,    68,    45,    84,    68,    -1,     5,    -1,
      -1,    33,    86,    55,    85,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    30,    31,    35,    39,    39,    40,    41,
      42,    46,    46,    55,    55,    63,    63,    64,    68,    69,
      71,    73,    73,    74,    74,    75,    76,    76,    77,    79,
      81,    83,    85,    85,    86,    87,    88,    89,    90,    94,
      95,   112,   113,   114,   115,   116,   119,   120,   124,   124,
     125,   125,   129,   130,   131,   132,   133,   138,   139,   139,
     146,   146,   147,   154,   158,   162,   166,   166,   170,   170,
     174,   174,   182,   182,   182,   184,   184,   184,   188,   188,
     188,   195,   198,   198
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUIR", "CONFIG", "FIM", "REPITA",
  "ESPERAR", "CONFIGURAR_SERIAL", "CONFIGURAR", "LER_DIGITAL", "LIGAR",
  "DESLIGAR", "MUDAR", "VAR", "ESCREVER_SERIAL", "LER_SERIAL", "CONSTANTE",
  "LER_ANALOGICO", "ESCREVER_ANALOGICO", "INTEIRO", "BOOLEANO", "TEXTO",
  "SAIDA", "ENTRADA", "SSID", "SENHA", "HOST", "CONECTAR_WIFI",
  "CHECAR_WIFI", "IGUAL", "DOISPONTOS", "SE", "SENAO", "ENTAO", "ENQUANTO",
  "TRUE", "FALSE", "INICIAR_HTTP", "RECEBER_HTTP", "NUMERO", "IDENT",
  "STRING", "COMENTARIO", "OPERADOR", "OPERADOR_COMPARACAO", "$accept",
  "entrada", "inclusao_list", "inclusao", "$@1", "configuracao", "$@2",
  "repeticao", "$@3", "comando_list", "$@4", "comando", "$@5", "$@6",
  "$@7", "$@8", "comando_http", "comando_wifi", "entrada_saida",
  "ligar_desligar", "$@9", "$@10", "item", "expressao", "$@11",
  "atribuicao", "$@12", "declaracao", "$@13", "$@14", "$@15",
  "controle_fluxo", "$@16", "$@17", "$@18", "$@19", "condicao", "$@20",
  "$@21", "fim_fluxo", "$@22", YY_NULL
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    50,    49,    49,    49,
      49,    52,    51,    54,    53,    56,    55,    55,    57,    57,
      57,    58,    57,    59,    57,    57,    60,    57,    57,    57,
      57,    57,    61,    57,    57,    57,    57,    57,    57,    62,
      62,    63,    63,    63,    63,    63,    64,    64,    66,    65,
      67,    65,    68,    68,    68,    68,    68,    69,    70,    69,
      72,    71,    71,    73,    73,    73,    74,    73,    75,    73,
      76,    73,    78,    79,    77,    80,    81,    77,    83,    84,
      82,    85,    86,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     2,     0,     3,     1,     1,
       1,     0,     4,     0,     4,     0,     3,     0,     1,     2,
       2,     0,     3,     0,     4,     1,     0,     4,     4,     7,
       4,     7,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     1,     1,     1,     0,     3,
       0,     3,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     4,     6,     4,     4,     4,     0,     7,     0,     7,
       0,     7,     0,     0,     7,     0,     0,     6,     0,     0,
       5,     1,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     6,     0,     0,     0,     0,    45,     9,
       0,     0,     4,    10,     8,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     1,    11,     0,     3,     0,     0,
       0,     7,    41,    42,    43,    44,    15,    13,     2,    63,
      64,    65,     0,     0,    15,    66,    68,    70,    12,     0,
       0,     0,    48,    50,     0,     0,    21,     0,    72,    75,
      39,    40,     0,    36,    15,    38,    37,    25,    35,    34,
      18,     0,     0,     0,     0,    19,    20,    23,     0,     0,
      26,     0,     0,     0,     0,    32,    78,    78,    60,    16,
      14,    54,    55,    53,    52,    56,    57,    67,    69,    71,
       0,    49,    51,     0,     0,     0,     0,    22,     0,     0,
       0,    76,     0,     0,     0,    58,    47,    46,    24,    27,
      63,    64,    65,    33,    73,     0,    15,    28,    30,    61,
       0,    66,    68,    70,    15,    79,     0,    59,     0,     0,
      62,     0,     0,    81,    82,    77,    31,    29,    74,    80,
      15,     0,    83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    19,    26,    36,    38,    44,    42,
      43,    64,    84,   100,   103,   108,    65,    13,   118,    67,
      78,    79,    96,    97,   130,    68,   114,    14,    72,    73,
      74,    70,    86,   134,    87,   126,   109,   110,   142,   145,
     150
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -134
static const yytype_int16 yypact[] =
{
      11,   -22,   -10,  -134,    -9,    -3,     0,     7,  -134,  -134,
      35,    41,    11,  -134,  -134,  -134,    18,    19,    20,    38,
      16,    22,    24,    42,  -134,  -134,    63,  -134,    29,    30,
      31,  -134,  -134,  -134,  -134,  -134,    73,  -134,  -134,    49,
      51,    54,    80,    48,    73,  -134,  -134,  -134,  -134,    52,
      53,    47,  -134,  -134,    55,     2,  -134,    56,  -134,  -134,
    -134,  -134,    64,  -134,     1,  -134,  -134,  -134,  -134,  -134,
    -134,    90,     6,     6,     6,  -134,  -134,  -134,     6,     6,
    -134,    67,    68,    69,     6,  -134,  -134,  -134,    -1,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,    57,  -134,  -134,  -134,
      -8,  -134,  -134,     6,    61,    62,    66,  -134,     6,    70,
       6,  -134,    71,    72,     6,  -134,  -134,  -134,  -134,  -134,
      75,    78,    79,  -134,  -134,    65,     1,  -134,  -134,  -134,
       6,    93,   104,    99,     1,  -134,     8,  -134,    76,    77,
    -134,     8,     6,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
       1,     8,  -134
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,   107,  -134,  -134,  -134,  -134,  -134,  -134,   -44,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,    81,  -134,  -134,
    -134,  -134,   -77,   -70,  -134,  -134,  -134,   -14,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,    33,  -134,  -134,  -133,
    -134
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -18
static const yytype_int16 yytable[] =
{
      71,   101,   102,    98,    99,    31,   -17,   107,   148,   112,
      16,    17,    18,   143,     1,   116,   117,   113,   152,    15,
      89,    20,    81,    82,    83,     2,   119,    21,     3,    69,
      22,   123,    23,   125,   -17,    24,     4,     5,     6,     7,
       8,   144,    91,    92,   129,    25,    93,    94,    95,    28,
      29,    30,     2,   137,     9,    49,    50,    51,    32,    52,
      53,    54,    55,    56,    33,   149,    34,    57,    35,    37,
      39,    40,    41,     4,     5,     6,     7,     8,   -17,    45,
      58,    46,   136,    59,    47,    48,    60,    61,    77,    62,
     141,    63,    75,    76,    88,    90,    80,    85,   104,   105,
     106,   115,   120,   121,   124,   131,   151,   122,   132,   133,
     135,   138,   127,   128,   139,   140,     0,   146,   147,    27,
     111,     0,     0,     0,    66
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-134)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      44,    78,    79,    73,    74,    19,     5,    84,   141,    10,
      20,    21,    22,     5,     3,    23,    24,    18,   151,    41,
      64,    30,    20,    21,    22,    14,   103,    30,    17,    43,
      30,   108,    25,   110,    33,     0,    25,    26,    27,    28,
      29,    33,    36,    37,   114,     4,    40,    41,    42,    31,
      31,    31,    14,   130,    43,     7,     8,     9,    42,    11,
      12,    13,    14,    15,    42,   142,    42,    19,    26,     6,
      41,    41,    41,    25,    26,    27,    28,    29,     5,    30,
      32,    30,   126,    35,    30,     5,    38,    39,    41,    41,
     134,    43,    40,    40,    30,     5,    41,    41,    31,    31,
      31,    44,    41,    41,    34,    30,   150,    41,    30,    30,
      45,    18,    41,    41,    10,    16,    -1,    41,    41,    12,
      87,    -1,    -1,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    14,    17,    25,    26,    27,    28,    29,    43,
      47,    48,    49,    63,    73,    41,    20,    21,    22,    50,
      30,    30,    30,    25,     0,     4,    51,    48,    31,    31,
      31,    73,    42,    42,    42,    26,    52,     6,    53,    41,
      41,    41,    55,    56,    54,    30,    30,    30,     5,     7,
       8,     9,    11,    12,    13,    14,    15,    19,    32,    35,
      38,    39,    41,    43,    57,    62,    63,    65,    71,    73,
      77,    55,    74,    75,    76,    40,    40,    41,    66,    67,
      41,    20,    21,    22,    58,    41,    78,    80,    30,    55,
       5,    36,    37,    40,    41,    42,    68,    69,    69,    69,
      59,    68,    68,    60,    31,    31,    31,    68,    61,    82,
      83,    82,    10,    18,    72,    44,    23,    24,    64,    68,
      41,    41,    41,    68,    34,    68,    81,    41,    41,    69,
      70,    30,    30,    30,    79,    45,    55,    68,    18,    10,
      16,    55,    84,     5,    33,    85,    41,    41,    85,    68,
      86,    55,    85
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
        case 5:
/* Line 1792 of yacc.c  */
#line 35 "parser.y"
    { 
        printf("#include <%s.h>\n", (yyvsp[(2) - (2)].str_val));  
        free((yyvsp[(2) - (2)].str_val));
    }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 39 "parser.y"
    { printf("const "); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 41 "parser.y"
    { printf("%s\n", (yyvsp[(1) - (1)].str_val)); free((yyvsp[(1) - (1)].str_val)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 46 "parser.y"
    { 
        printf("\nvoid setup() {\n");
    }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 49 "parser.y"
    {
        printf("}\n");
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 55 "parser.y"
    { 
        printf("\nvoid loop() {\n");
    }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 57 "parser.y"
    {
        printf("}\n");
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 63 "parser.y"
    { printf("  "); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 70 "parser.y"
    { printf("delay(%d);\n", (yyvsp[(2) - (2)].int_val)); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 72 "parser.y"
    { printf("Serial.begin(%d);\n", (yyvsp[(2) - (2)].int_val)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 73 "parser.y"
    { printf("Serial.print("); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 73 "parser.y"
    { printf(");\n"); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 74 "parser.y"
    { printf("pinMode(%s, ", (yyvsp[(2) - (2)].str_val)); free((yyvsp[(2) - (2)].str_val)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 74 "parser.y"
    { printf(");\n"); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 76 "parser.y"
    { printf("digitalWrite(%s, ", (yyvsp[(2) - (2)].str_val)); free((yyvsp[(2) - (2)].str_val)); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 76 "parser.y"
    { printf(");\n"); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 78 "parser.y"
    { printf("%s = digitalRead(%s);\n", (yyvsp[(1) - (4)].str_val), (yyvsp[(4) - (4)].str_val)); free((yyvsp[(1) - (4)].str_val)); free((yyvsp[(4) - (4)].str_val)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 80 "parser.y"
    { printf("bool %s = digitalRead(%s);\n", (yyvsp[(4) - (7)].str_val), (yyvsp[(7) - (7)].str_val)); free((yyvsp[(4) - (7)].str_val)); free((yyvsp[(7) - (7)].str_val)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 82 "parser.y"
    { printf("%s = analogRead(%s);\n", (yyvsp[(1) - (4)].str_val), (yyvsp[(4) - (4)].str_val)); free((yyvsp[(1) - (4)].str_val)); free((yyvsp[(4) - (4)].str_val)); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 84 "parser.y"
    { printf("int %s = analogRead(%s);\n", (yyvsp[(4) - (7)].str_val), (yyvsp[(7) - (7)].str_val)); free((yyvsp[(4) - (7)].str_val)); free((yyvsp[(7) - (7)].str_val)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 85 "parser.y"
    { printf("analogWrite(%s, ", (yyvsp[(2) - (2)].str_val)); free((yyvsp[(2) - (2)].str_val)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 85 "parser.y"
    { printf(");\n"); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 88 "parser.y"
    { printf("%s\n", (yyvsp[(1) - (1)].str_val)); free((yyvsp[(1) - (1)].str_val)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 94 "parser.y"
    { printf("  HTTPClient http;\n  http.begin(url);\n"); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 95 "parser.y"
    { printf(
                            "  int httpResponseCode = http.GET();\n"
                            "  if (httpResponseCode > 0) {\n"
                            "    Serial.print(\"HTTP \");\n"
                            "    Serial.println(httpResponseCode);\n"
                            "    String payload = http.getString();\n"
                            "    Serial.println();\n"
                            "    Serial.println(payload);\n"
                            "  }\n"
                            "  else {\n"
                            "    Serial.print(\"Error code: \");\n"
                            "    Serial.println(httpResponseCode);\n"
                            "  }\n");
     }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 112 "parser.y"
    { printf("const char* ssid = %s;\n", (yyvsp[(3) - (3)].str_val)); free((yyvsp[(3) - (3)].str_val)); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 113 "parser.y"
    { printf("const char* password = %s;\n", (yyvsp[(3) - (3)].str_val)); free((yyvsp[(3) - (3)].str_val)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 114 "parser.y"
    { printf("const char* host = %s;\n", (yyvsp[(3) - (3)].str_val)); free((yyvsp[(3) - (3)].str_val)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 115 "parser.y"
    { printf("WiFi.begin(ssid, password);\n"); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 116 "parser.y"
    { printf("while (WiFi.status() != WL_CONNECTED) {\n    delay(500);\n}\n"); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 119 "parser.y"
    { printf("INPUT"); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 120 "parser.y"
    { printf("OUTPUT"); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 124 "parser.y"
    { printf("digitalWrite("); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 124 "parser.y"
    { printf(", true);\n"); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 125 "parser.y"
    { printf("digitalWrite("); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 125 "parser.y"
    { printf(", false);\n"); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 129 "parser.y"
    { printf("%s", (yyvsp[(1) - (1)].str_val)); free((yyvsp[(1) - (1)].str_val)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 130 "parser.y"
    { printf("%d", (yyvsp[(1) - (1)].int_val)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 131 "parser.y"
    { printf("true"); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 132 "parser.y"
    { printf("false"); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 133 "parser.y"
    { printf("%s", (yyvsp[(1) - (1)].str_val)); free((yyvsp[(1) - (1)].str_val)); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 139 "parser.y"
    {
        printf(" %s ", (yyvsp[(2) - (2)].str_val));
        free((yyvsp[(2) - (2)].str_val));
    }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 146 "parser.y"
    { printf("%s = ", (yyvsp[(1) - (2)].str_val)); free((yyvsp[(1) - (2)].str_val)); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 146 "parser.y"
    { printf(";\n"); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 147 "parser.y"
    {
        printf("String %s = Serial.readString();\n", (yyvsp[(4) - (6)].str_val));
        free((yyvsp[(4) - (6)].str_val));
    }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 154 "parser.y"
    { 
        printf("int %s;\n", (yyvsp[(4) - (4)].str_val)); 
        free((yyvsp[(4) - (4)].str_val)); 
    }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 158 "parser.y"
    { 
        printf("bool %s;\n", (yyvsp[(4) - (4)].str_val)); 
        free((yyvsp[(4) - (4)].str_val)); 
    }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 162 "parser.y"
    { 
        printf("String %s;\n", (yyvsp[(4) - (4)].str_val)); 
        free((yyvsp[(4) - (4)].str_val)); 
    }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 166 "parser.y"
    { 
        printf("int %s = ", (yyvsp[(4) - (5)].str_val));
        free((yyvsp[(4) - (5)].str_val));
    }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 169 "parser.y"
    { printf(";\n"); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 170 "parser.y"
    { 
        printf("bool %s = ", (yyvsp[(4) - (5)].str_val));
        free((yyvsp[(4) - (5)].str_val));
    }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 173 "parser.y"
    { printf(";\n"); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 174 "parser.y"
    { 
        printf("String %s = ", (yyvsp[(4) - (5)].str_val));
        free((yyvsp[(4) - (5)].str_val));
    }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 177 "parser.y"
    { printf(";\n"); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 182 "parser.y"
    {printf("if ");}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 182 "parser.y"
    {printf("{\n");}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 184 "parser.y"
    {printf("while ");}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 184 "parser.y"
    {printf("{\n");}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 188 "parser.y"
    { printf("(");}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 188 "parser.y"
    { printf("%s ", (yyvsp[(3) - (3)].str_val));}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 188 "parser.y"
    {
        printf(") ");
        free((yyvsp[(3) - (5)].str_val));
    }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 195 "parser.y"
    { 
        printf("}\n");
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 198 "parser.y"
    {
        printf("else {\n");
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 200 "parser.y"
    { 
        printf("}\n");
    }
    break;


/* Line 1792 of yacc.c  */
#line 1971 "parser.tab.c"
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


/* Line 2055 of yacc.c  */
#line 205 "parser.y"


int main() {
    yyparse();
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}
