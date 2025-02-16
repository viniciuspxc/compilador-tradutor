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
     LER_ANALOGICO = 269,
     ESCREVER_ANALOGICO = 270,
     VAR = 271,
     ESCREVER_SERIAL = 272,
     LER_SERIAL = 273,
     CONSTANTE = 274,
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
     DEFINIR = 291,
     TRUE = 292,
     FALSE = 293,
     INICIAR_HTTP = 294,
     RECEBER_HTTP = 295,
     NUMERO = 296,
     IDENT = 297,
     STRING = 298,
     COMENTARIO = 299,
     OPERADOR = 300,
     OPERADOR_COMPARACAO = 301
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
#line 172 "parser.tab.c"
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
#line 200 "parser.tab.c"

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
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   123

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    10,    11,    14,    15,    19,    21,
      23,    25,    29,    30,    35,    36,    41,    42,    46,    47,
      49,    52,    55,    56,    60,    61,    66,    68,    69,    74,
      79,    87,    92,   100,   101,   106,   108,   110,   112,   114,
     116,   118,   120,   124,   128,   132,   136,   138,   140,   142,
     143,   147,   148,   152,   154,   156,   158,   160,   162,   164,
     165,   170,   171,   176,   183,   188,   193,   198,   199,   207,
     208,   216,   217,   225,   226,   227,   235,   236,   237,   244,
     245,   246,   252,   254,   255
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    52,    54,    -1,    50,    49,    -1,
      -1,     3,    42,    -1,    -1,    19,    51,    74,    -1,    74,
      -1,    44,    -1,    64,    -1,    36,    42,    41,    -1,    -1,
       4,    53,    56,     5,    -1,    -1,     6,    55,    56,     5,
      -1,    -1,    57,    58,    56,    -1,    -1,    78,    -1,     7,
      41,    -1,     8,    41,    -1,    -1,    17,    59,    69,    -1,
      -1,     9,    42,    60,    65,    -1,    66,    -1,    -1,    13,
      42,    61,    69,    -1,    42,    30,    10,    42,    -1,    16,
      21,    31,    42,    30,    10,    42,    -1,    42,    30,    14,
      42,    -1,    16,    20,    31,    42,    30,    14,    42,    -1,
      -1,    15,    42,    62,    69,    -1,    74,    -1,    72,    -1,
      44,    -1,    64,    -1,    63,    -1,    39,    -1,    40,    -1,
      25,    30,    43,    -1,    26,    30,    43,    -1,    27,    30,
      43,    -1,    28,    25,    26,    -1,    29,    -1,    24,    -1,
      23,    -1,    -1,    11,    67,    69,    -1,    -1,    12,    68,
      69,    -1,    42,    -1,    41,    -1,    37,    -1,    38,    -1,
      43,    -1,    69,    -1,    -1,    69,    45,    71,    69,    -1,
      -1,    42,    30,    73,    70,    -1,    16,    22,    31,    42,
      30,    18,    -1,    16,    20,    31,    42,    -1,    16,    21,
      31,    42,    -1,    16,    22,    31,    42,    -1,    -1,    16,
      20,    31,    42,    30,    75,    70,    -1,    -1,    16,    21,
      31,    42,    30,    76,    70,    -1,    -1,    16,    22,    31,
      42,    30,    77,    70,    -1,    -1,    -1,    32,    79,    83,
      34,    80,    56,    86,    -1,    -1,    -1,    35,    81,    83,
      82,    56,    86,    -1,    -1,    -1,    84,    69,    46,    85,
      69,    -1,     5,    -1,    -1,    33,    87,    56,    86,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    27,    27,    31,    32,    36,    40,    40,    41,    42,
      43,    44,    48,    48,    57,    57,    65,    65,    66,    70,
      71,    73,    75,    75,    76,    76,    77,    78,    78,    79,
      81,    83,    85,    87,    87,    88,    89,    90,    91,    92,
      96,    97,   114,   115,   116,   117,   118,   121,   122,   126,
     126,   127,   127,   131,   132,   133,   134,   135,   140,   141,
     141,   148,   148,   149,   156,   160,   164,   168,   168,   172,
     172,   176,   176,   184,   184,   184,   186,   186,   186,   190,
     190,   190,   197,   200,   200
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUIR", "CONFIG", "FIM", "REPITA",
  "ESPERAR", "CONFIGURAR_SERIAL", "CONFIGURAR", "LER_DIGITAL", "LIGAR",
  "DESLIGAR", "MUDAR", "LER_ANALOGICO", "ESCREVER_ANALOGICO", "VAR",
  "ESCREVER_SERIAL", "LER_SERIAL", "CONSTANTE", "INTEIRO", "BOOLEANO",
  "TEXTO", "SAIDA", "ENTRADA", "SSID", "SENHA", "HOST", "CONECTAR_WIFI",
  "CHECAR_WIFI", "IGUAL", "DOISPONTOS", "SE", "SENAO", "ENTAO", "ENQUANTO",
  "DEFINIR", "TRUE", "FALSE", "INICIAR_HTTP", "RECEBER_HTTP", "NUMERO",
  "IDENT", "STRING", "COMENTARIO", "OPERADOR", "OPERADOR_COMPARACAO",
  "$accept", "entrada", "inclusao_list", "inclusao", "$@1", "configuracao",
  "$@2", "repeticao", "$@3", "comando_list", "$@4", "comando", "$@5",
  "$@6", "$@7", "$@8", "comando_http", "comando_wifi", "entrada_saida",
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    51,    50,    50,    50,
      50,    50,    53,    52,    55,    54,    57,    56,    56,    58,
      58,    58,    59,    58,    60,    58,    58,    61,    58,    58,
      58,    58,    58,    62,    58,    58,    58,    58,    58,    58,
      63,    63,    64,    64,    64,    64,    64,    65,    65,    67,
      66,    68,    66,    69,    69,    69,    69,    69,    70,    71,
      70,    73,    72,    72,    74,    74,    74,    75,    74,    76,
      74,    77,    74,    79,    80,    78,    81,    82,    78,    84,
      85,    83,    86,    87,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     0,     2,     0,     3,     1,     1,
       1,     3,     0,     4,     0,     4,     0,     3,     0,     1,
       2,     2,     0,     3,     0,     4,     1,     0,     4,     4,
       7,     4,     7,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     1,     1,     1,     0,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     0,
       4,     0,     4,     6,     4,     4,     4,     0,     7,     0,
       7,     0,     7,     0,     0,     7,     0,     0,     6,     0,
       0,     5,     1,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     6,     0,     0,     0,     0,    46,     0,
       9,     0,     0,     4,    10,     8,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    12,     0,     3,
       0,     0,     0,     7,    42,    43,    44,    45,    11,    16,
      14,     2,    64,    65,    66,     0,     0,    16,    67,    69,
      71,    13,     0,     0,     0,    49,    51,     0,     0,     0,
      22,    73,    76,    40,    41,     0,    37,    16,    39,    38,
      26,    36,    35,    19,     0,     0,     0,     0,    20,    21,
      24,     0,     0,    27,    33,     0,     0,     0,     0,    79,
      79,    61,    17,    15,    55,    56,    54,    53,    57,    58,
      68,    70,    72,     0,    50,    52,     0,     0,     0,     0,
       0,    23,     0,     0,    77,     0,     0,     0,    59,    48,
      47,    25,    28,    34,    64,    65,    66,    74,     0,    16,
      29,    31,    62,     0,    67,    69,    71,    16,    80,     0,
      60,     0,     0,    63,     0,     0,    82,    83,    78,    32,
      30,    75,    81,    16,     0,    84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    20,    28,    39,    41,    47,    45,
      46,    67,    88,   103,   106,   107,    68,    14,   121,    70,
      81,    82,    99,   100,   133,    71,   117,    15,    75,    76,
      77,    73,    89,   137,    90,   129,   112,   113,   145,   148,
     153
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
static const yytype_int16 yypact[] =
{
       3,   -31,    20,  -140,   -16,     8,    13,     9,  -140,    10,
    -140,    45,    42,     3,  -140,  -140,  -140,    23,    24,    25,
      35,    14,    15,    16,    34,    21,  -140,  -140,    55,  -140,
      22,    27,    31,  -140,  -140,  -140,  -140,  -140,  -140,    58,
    -140,  -140,    47,    48,    49,    75,    59,    58,  -140,  -140,
    -140,  -140,    40,    51,    41,  -140,  -140,    53,    54,    28,
    -140,  -140,  -140,  -140,  -140,    63,  -140,     2,  -140,  -140,
    -140,  -140,  -140,  -140,    84,   -25,   -25,   -25,  -140,  -140,
    -140,   -25,   -25,  -140,  -140,    66,    69,    71,   -25,  -140,
    -140,    11,  -140,  -140,  -140,  -140,  -140,  -140,  -140,    60,
    -140,  -140,  -140,     0,  -140,  -140,   -25,   -25,    62,    65,
      67,  -140,    74,   -25,  -140,    68,    70,   -25,  -140,  -140,
    -140,  -140,  -140,  -140,    81,    83,    85,  -140,    72,     2,
    -140,  -140,  -140,   -25,   100,   106,    99,     2,  -140,     4,
    -140,    77,    78,  -140,     4,   -25,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,     2,     4,  -140
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,   108,  -140,  -140,  -140,  -140,  -140,  -140,   -47,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,    76,  -140,  -140,
    -140,  -140,   -80,   -73,  -140,  -140,  -140,   -10,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,    33,  -140,  -140,  -139,
    -140
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -19
static const yytype_int16 yytable[] =
{
      74,   104,   105,   101,   102,   151,     1,   -18,   111,   146,
      33,    16,    94,    95,    21,   155,    96,    97,    98,     2,
      92,   115,     3,   119,   120,   116,   122,   123,     4,     5,
       6,     7,     8,   128,    24,   -18,    72,   147,    22,     9,
      17,    18,    19,    23,   132,    26,    27,    10,    85,    86,
      87,     2,    25,   140,    30,    31,    32,    34,    35,    36,
      37,    40,    38,   -18,    42,   152,    52,    53,    54,    43,
      55,    56,    57,    44,    58,    59,    60,    48,    49,    50,
      51,    78,   139,    80,     4,     5,     6,     7,     8,    93,
     144,    61,    79,    91,    62,    83,    84,   108,    63,    64,
     109,    65,   110,    66,   124,   118,   154,   125,   127,   126,
     130,   134,   131,   135,   141,   136,   142,   143,   138,   149,
     150,    29,    69,   114
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      47,    81,    82,    76,    77,   144,     3,     5,    88,     5,
      20,    42,    37,    38,    30,   154,    41,    42,    43,    16,
      67,    10,    19,    23,    24,    14,   106,   107,    25,    26,
      27,    28,    29,   113,    25,    33,    46,    33,    30,    36,
      20,    21,    22,    30,   117,     0,     4,    44,    20,    21,
      22,    16,    42,   133,    31,    31,    31,    43,    43,    43,
      26,     6,    41,     5,    42,   145,     7,     8,     9,    42,
      11,    12,    13,    42,    15,    16,    17,    30,    30,    30,
       5,    41,   129,    42,    25,    26,    27,    28,    29,     5,
     137,    32,    41,    30,    35,    42,    42,    31,    39,    40,
      31,    42,    31,    44,    42,    45,   153,    42,    34,    42,
      42,    30,    42,    30,    14,    30,    10,    18,    46,    42,
      42,    13,    46,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    16,    19,    25,    26,    27,    28,    29,    36,
      44,    48,    49,    50,    64,    74,    42,    20,    21,    22,
      51,    30,    30,    30,    25,    42,     0,     4,    52,    49,
      31,    31,    31,    74,    43,    43,    43,    26,    41,    53,
       6,    54,    42,    42,    42,    56,    57,    55,    30,    30,
      30,     5,     7,     8,     9,    11,    12,    13,    15,    16,
      17,    32,    35,    39,    40,    42,    44,    58,    63,    64,
      66,    72,    74,    78,    56,    75,    76,    77,    41,    41,
      42,    67,    68,    42,    42,    20,    21,    22,    59,    79,
      81,    30,    56,     5,    37,    38,    41,    42,    43,    69,
      70,    70,    70,    60,    69,    69,    61,    62,    31,    31,
      31,    69,    83,    84,    83,    10,    14,    73,    45,    23,
      24,    65,    69,    69,    42,    42,    42,    34,    69,    82,
      42,    42,    70,    71,    30,    30,    30,    80,    46,    56,
      69,    14,    10,    18,    56,    85,     5,    33,    86,    42,
      42,    86,    69,    87,    56,    86
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
#line 36 "parser.y"
    { 
        printf("#include <%s.h>\n", (yyvsp[(2) - (2)].str_val));  
        free((yyvsp[(2) - (2)].str_val));
    }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 40 "parser.y"
    { printf("const "); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 42 "parser.y"
    { printf("%s\n", (yyvsp[(1) - (1)].str_val)); free((yyvsp[(1) - (1)].str_val)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 44 "parser.y"
    { printf("#define %s %d\n", (yyvsp[(2) - (3)].str_val), (yyvsp[(3) - (3)].int_val)); free((yyvsp[(2) - (3)].str_val)); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 48 "parser.y"
    { 
        printf("\nvoid setup() {\n");
    }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 51 "parser.y"
    {
        printf("}\n");
    }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 57 "parser.y"
    { 
        printf("\nvoid loop() {\n");
    }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 59 "parser.y"
    {
        printf("}\n");
    }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 65 "parser.y"
    { printf("  "); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 72 "parser.y"
    { printf("delay(%d);\n", (yyvsp[(2) - (2)].int_val)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 74 "parser.y"
    { printf("Serial.begin(%d);\n", (yyvsp[(2) - (2)].int_val)); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 75 "parser.y"
    { printf("Serial.print("); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 75 "parser.y"
    { printf(");\n"); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 76 "parser.y"
    { printf("pinMode(%s, ", (yyvsp[(2) - (2)].str_val)); free((yyvsp[(2) - (2)].str_val)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 76 "parser.y"
    { printf(");\n"); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 78 "parser.y"
    { printf("digitalWrite(%s, ", (yyvsp[(2) - (2)].str_val)); free((yyvsp[(2) - (2)].str_val)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 78 "parser.y"
    { printf(");\n"); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 80 "parser.y"
    { printf("%s = digitalRead(%s);\n", (yyvsp[(1) - (4)].str_val), (yyvsp[(4) - (4)].str_val)); free((yyvsp[(1) - (4)].str_val)); free((yyvsp[(4) - (4)].str_val)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 82 "parser.y"
    { printf("bool %s = digitalRead(%s);\n", (yyvsp[(4) - (7)].str_val), (yyvsp[(7) - (7)].str_val)); free((yyvsp[(4) - (7)].str_val)); free((yyvsp[(7) - (7)].str_val)); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 84 "parser.y"
    { printf("%s = analogRead(%s);\n", (yyvsp[(1) - (4)].str_val), (yyvsp[(4) - (4)].str_val)); free((yyvsp[(1) - (4)].str_val)); free((yyvsp[(4) - (4)].str_val)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 86 "parser.y"
    { printf("int %s = analogRead(%s);\n", (yyvsp[(4) - (7)].str_val), (yyvsp[(7) - (7)].str_val)); free((yyvsp[(4) - (7)].str_val)); free((yyvsp[(7) - (7)].str_val)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 87 "parser.y"
    { printf("analogWrite(%s, ", (yyvsp[(2) - (2)].str_val)); free((yyvsp[(2) - (2)].str_val)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 87 "parser.y"
    { printf(");\n"); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 90 "parser.y"
    { printf("%s\n", (yyvsp[(1) - (1)].str_val)); free((yyvsp[(1) - (1)].str_val)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 96 "parser.y"
    { printf("  HTTPClient http;\n  http.begin(url);\n"); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 97 "parser.y"
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

  case 42:
/* Line 1792 of yacc.c  */
#line 114 "parser.y"
    { printf("const char* ssid = %s;\n", (yyvsp[(3) - (3)].str_val)); free((yyvsp[(3) - (3)].str_val)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 115 "parser.y"
    { printf("const char* password = %s;\n", (yyvsp[(3) - (3)].str_val)); free((yyvsp[(3) - (3)].str_val)); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 116 "parser.y"
    { printf("const char* host = %s;\n", (yyvsp[(3) - (3)].str_val)); free((yyvsp[(3) - (3)].str_val)); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 117 "parser.y"
    { printf("WiFi.begin(ssid, password);\n"); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 118 "parser.y"
    { printf("while (WiFi.status() != WL_CONNECTED) {\n    delay(500);\n}\n"); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 121 "parser.y"
    { printf("INPUT"); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 122 "parser.y"
    { printf("OUTPUT"); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 126 "parser.y"
    { printf("digitalWrite("); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 126 "parser.y"
    { printf(", true);\n"); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 127 "parser.y"
    { printf("digitalWrite("); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 127 "parser.y"
    { printf(", false);\n"); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 131 "parser.y"
    { printf("%s", (yyvsp[(1) - (1)].str_val)); free((yyvsp[(1) - (1)].str_val)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 132 "parser.y"
    { printf("%d", (yyvsp[(1) - (1)].int_val)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 133 "parser.y"
    { printf("true"); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 134 "parser.y"
    { printf("false"); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 135 "parser.y"
    { printf("%s", (yyvsp[(1) - (1)].str_val)); free((yyvsp[(1) - (1)].str_val)); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 141 "parser.y"
    {
        printf(" %s ", (yyvsp[(2) - (2)].str_val));
        free((yyvsp[(2) - (2)].str_val));
    }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 148 "parser.y"
    { printf("%s = ", (yyvsp[(1) - (2)].str_val)); free((yyvsp[(1) - (2)].str_val)); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 148 "parser.y"
    { printf(";\n"); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 149 "parser.y"
    {
        printf("String %s = Serial.readString();\n", (yyvsp[(4) - (6)].str_val));
        free((yyvsp[(4) - (6)].str_val));
    }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 156 "parser.y"
    { 
        printf("int %s;\n", (yyvsp[(4) - (4)].str_val)); 
        free((yyvsp[(4) - (4)].str_val)); 
    }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 160 "parser.y"
    { 
        printf("bool %s;\n", (yyvsp[(4) - (4)].str_val)); 
        free((yyvsp[(4) - (4)].str_val)); 
    }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 164 "parser.y"
    { 
        printf("String %s;\n", (yyvsp[(4) - (4)].str_val)); 
        free((yyvsp[(4) - (4)].str_val)); 
    }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 168 "parser.y"
    { 
        printf("int %s = ", (yyvsp[(4) - (5)].str_val));
        free((yyvsp[(4) - (5)].str_val));
    }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 171 "parser.y"
    { printf(";\n"); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 172 "parser.y"
    { 
        printf("bool %s = ", (yyvsp[(4) - (5)].str_val));
        free((yyvsp[(4) - (5)].str_val));
    }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 175 "parser.y"
    { printf(";\n"); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 176 "parser.y"
    { 
        printf("String %s = ", (yyvsp[(4) - (5)].str_val));
        free((yyvsp[(4) - (5)].str_val));
    }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 179 "parser.y"
    { printf(";\n"); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 184 "parser.y"
    {printf("if ");}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 184 "parser.y"
    {printf("{\n");}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 186 "parser.y"
    {printf("while ");}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 186 "parser.y"
    {printf("{\n");}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 190 "parser.y"
    { printf("(");}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 190 "parser.y"
    { printf("%s ", (yyvsp[(3) - (3)].str_val));}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 190 "parser.y"
    {
        printf(") ");
        free((yyvsp[(3) - (5)].str_val));
    }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 197 "parser.y"
    { 
        printf("}\n");
    }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 200 "parser.y"
    {
        printf("else {\n");
    }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 202 "parser.y"
    { 
        printf("}\n");
    }
    break;


/* Line 1792 of yacc.c  */
#line 1978 "parser.tab.c"
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
#line 207 "parser.y"


int main() {
    yyparse();
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Erro: %s\n", s);
}
