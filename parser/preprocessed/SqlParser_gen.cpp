/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         quickstep_yyparse
#define yylex           quickstep_yylex
#define yyerror         quickstep_yyerror
#define yydebug         quickstep_yydebug
#define yynerrs         quickstep_yynerrs


/* Copy the first part of user declarations.  */
#line 35 "../SqlParser.ypp" /* yacc.c:339  */


/* Override the default definition, as we only need <first_line> and <first_column>. */
typedef struct YYLTYPE {
  int first_line;
  int first_column;
} YYLTYPE;

#define YYLTYPE_IS_DECLARED 1

/*
 * Modified from the default YYLLOC_DEFAULT
 * (http://www.gnu.org/software/bison/manual/html_node/Location-Default-Action.html).
 * The assignments for last_line and last_column are removed as they are not used.
 */
#define YYLLOC_DEFAULT(current, rhs, n)                         \
  do {                                                          \
    if (n) {                                                    \
      (current).first_line   = YYRHSLOC(rhs, 1).first_line;     \
      (current).first_column = YYRHSLOC(rhs, 1).first_column;   \
    } else {                                                    \
      /* empty RHS */                                           \
      (current).first_line = YYRHSLOC(rhs, 0).first_line;       \
      (current).first_column = YYRHSLOC(rhs, 0).first_column;   \
    }                                                           \
  } while (0)

#line 64 "../SqlParser.ypp" /* yacc.c:339  */

#include <cstdlib>
#include <string>
#include <utility>

#include "catalog/PartitionSchemeHeader.hpp"
#include "parser/ParseAssignment.hpp"
#include "parser/ParseAttributeDefinition.hpp"
#include "parser/ParseBasicExpressions.hpp"
#include "parser/ParseBlockProperties.hpp"
#include "parser/ParseCaseExpressions.hpp"
#include "parser/ParseExpression.hpp"
#include "parser/ParseGeneratorTableReference.hpp"
#include "parser/ParseGroupBy.hpp"
#include "parser/ParseHaving.hpp"
#include "parser/ParseKeyValue.hpp"
#include "parser/ParseLimit.hpp"
#include "parser/ParseLiteralValue.hpp"
#include "parser/ParseOrderBy.hpp"
#include "parser/ParsePartitionClause.hpp"
#include "parser/ParsePredicate.hpp"
#include "parser/ParsePredicateExists.hpp"
#include "parser/ParsePredicateInTableQuery.hpp"
#include "parser/ParserUtil.hpp"
#include "parser/ParseSample.hpp"
#include "parser/ParseSelect.hpp"
#include "parser/ParseSelectionClause.hpp"
#include "parser/ParseSimpleTableReference.hpp"
#include "parser/ParseStatement.hpp"
#include "parser/ParseString.hpp"
#include "parser/ParseSubqueryExpression.hpp"
#include "parser/ParseSubqueryTableReference.hpp"
#include "parser/ParseTableReference.hpp"
#include "storage/StorageBlockInfo.hpp"
#include "types/Type.hpp"
#include "types/TypeFactory.hpp"
#include "types/TypeID.hpp"
#include "types/operations/binary_operations/BinaryOperation.hpp"
#include "types/operations/binary_operations/BinaryOperationFactory.hpp"
#include "types/operations/binary_operations/BinaryOperationID.hpp"
#include "types/operations/comparisons/Comparison.hpp"
#include "types/operations/comparisons/ComparisonFactory.hpp"
#include "types/operations/comparisons/ComparisonID.hpp"
#include "types/operations/unary_operations/UnaryOperation.hpp"
#include "types/operations/unary_operations/UnaryOperationFactory.hpp"
#include "types/operations/unary_operations/UnaryOperationID.hpp"
#include "utility/PtrList.hpp"
#include "utility/PtrVector.hpp"

// Needed for Bison 2.6 and higher, which do not automatically provide this typedef.
typedef void* yyscan_t;

#line 153 "SqlParser_gen.cpp" /* yacc.c:339  */

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
   by #include "SqlParser_gen.hpp".  */
#ifndef YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
# define YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int quickstep_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_COMMAND = 258,
    TOKEN_NAME = 259,
    TOKEN_STRING_SINGLE_QUOTED = 260,
    TOKEN_STRING_DOUBLE_QUOTED = 261,
    TOKEN_UNSIGNED_NUMVAL = 262,
    TOKEN_OR = 263,
    TOKEN_AND = 264,
    TOKEN_NOT = 265,
    TOKEN_EQ = 266,
    TOKEN_LT = 267,
    TOKEN_LEQ = 268,
    TOKEN_GT = 269,
    TOKEN_GEQ = 270,
    TOKEN_NEQ = 271,
    TOKEN_LIKE = 272,
    TOKEN_REGEXP = 273,
    TOKEN_BETWEEN = 274,
    TOKEN_IS = 275,
    UNARY_PLUS = 276,
    UNARY_MINUS = 277,
    TOKEN_ADD = 278,
    TOKEN_ALL = 279,
    TOKEN_ALTER = 280,
    TOKEN_AS = 281,
    TOKEN_ASC = 282,
    TOKEN_BIGINT = 283,
    TOKEN_BIT = 284,
    TOKEN_BLOCKPROPERTIES = 285,
    TOKEN_BLOCKSAMPLE = 286,
    TOKEN_BLOOM_FILTER = 287,
    TOKEN_CSB_TREE = 288,
    TOKEN_BY = 289,
    TOKEN_CASE = 290,
    TOKEN_CHARACTER = 291,
    TOKEN_CHECK = 292,
    TOKEN_COLUMN = 293,
    TOKEN_CONSTRAINT = 294,
    TOKEN_COPY = 295,
    TOKEN_CREATE = 296,
    TOKEN_DATE = 297,
    TOKEN_DATETIME = 298,
    TOKEN_DECIMAL = 299,
    TOKEN_DEFAULT = 300,
    TOKEN_DELETE = 301,
    TOKEN_DELIMITER = 302,
    TOKEN_DESC = 303,
    TOKEN_DISTINCT = 304,
    TOKEN_DOUBLE = 305,
    TOKEN_DROP = 306,
    TOKEN_ELSE = 307,
    TOKEN_END = 308,
    TOKEN_ESCAPE_STRINGS = 309,
    TOKEN_EXISTS = 310,
    TOKEN_EXTRACT = 311,
    TOKEN_FALSE = 312,
    TOKEN_FIRST = 313,
    TOKEN_FLOAT = 314,
    TOKEN_FOREIGN = 315,
    TOKEN_FROM = 316,
    TOKEN_FULL = 317,
    TOKEN_GROUP = 318,
    TOKEN_HASH = 319,
    TOKEN_HAVING = 320,
    TOKEN_IN = 321,
    TOKEN_INDEX = 322,
    TOKEN_INNER = 323,
    TOKEN_INSERT = 324,
    TOKEN_INTEGER = 325,
    TOKEN_INTERVAL = 326,
    TOKEN_INTO = 327,
    TOKEN_JOIN = 328,
    TOKEN_KEY = 329,
    TOKEN_LAST = 330,
    TOKEN_LEFT = 331,
    TOKEN_LIMIT = 332,
    TOKEN_LONG = 333,
    TOKEN_NULL = 334,
    TOKEN_NULLS = 335,
    TOKEN_OFF = 336,
    TOKEN_ON = 337,
    TOKEN_ORDER = 338,
    TOKEN_OUTER = 339,
    TOKEN_PARTITION = 340,
    TOKEN_PARTITIONS = 341,
    TOKEN_PERCENT = 342,
    TOKEN_PRIMARY = 343,
    TOKEN_QUIT = 344,
    TOKEN_RANGE = 345,
    TOKEN_REAL = 346,
    TOKEN_REFERENCES = 347,
    TOKEN_RIGHT = 348,
    TOKEN_ROW_DELIMITER = 349,
    TOKEN_SELECT = 350,
    TOKEN_SET = 351,
    TOKEN_SMA = 352,
    TOKEN_SMALLINT = 353,
    TOKEN_TABLE = 354,
    TOKEN_THEN = 355,
    TOKEN_TIME = 356,
    TOKEN_TIMESTAMP = 357,
    TOKEN_TRUE = 358,
    TOKEN_TUPLESAMPLE = 359,
    TOKEN_UNIQUE = 360,
    TOKEN_UPDATE = 361,
    TOKEN_USING = 362,
    TOKEN_VALUES = 363,
    TOKEN_VARCHAR = 364,
    TOKEN_WHEN = 365,
    TOKEN_WHERE = 366,
    TOKEN_WITH = 367,
    TOKEN_YEAR = 368,
    TOKEN_YEARMONTH = 369,
    TOKEN_EOF = 370,
    TOKEN_LEX_ERROR = 371
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 117 "../SqlParser.ypp" /* yacc.c:355  */

  quickstep::ParseString *string_value_;

  quickstep::PtrList<quickstep::ParseString> *string_list_;

  bool boolean_value_;

  quickstep::NumericParseLiteralValue *numeric_literal_value_;
  quickstep::ParseLiteralValue *literal_value_;
  quickstep::PtrList<quickstep::ParseScalarLiteral> *literal_value_list_;

  quickstep::ParseExpression *expression_;

  quickstep::ParseScalarLiteral *scalar_literal_;
  quickstep::ParseAttribute *attribute_;
  quickstep::PtrList<quickstep::ParseAttribute> *attribute_list_;

  quickstep::ParsePredicate *predicate_;

  quickstep::ParseSubqueryExpression *subquery_expression_;

  quickstep::PtrVector<quickstep::ParseSimpleWhenClause> *simple_when_clause_list_;
  quickstep::ParseSimpleWhenClause *simple_when_clause_;

  quickstep::PtrVector<quickstep::ParseSearchedWhenClause> *searched_when_clause_list_;
  quickstep::ParseSearchedWhenClause *searched_when_clause_;

  quickstep::ParseSelectionClause *selection_;
  quickstep::ParseSelectionItem *selection_item_;
  quickstep::ParseSelectionList *selection_list_;

  quickstep::ParseTableReference *table_reference_;
  quickstep::PtrList<quickstep::ParseTableReference> *table_reference_list_;
  quickstep::ParseTableReferenceSignature *table_reference_signature_;

  quickstep::ParseDataType *data_type_;
  quickstep::ParseAttributeDefinition *attribute_definition_;
  quickstep::ParseColumnConstraint *column_constraint_;
  quickstep::PtrList<quickstep::ParseColumnConstraint> *column_constraint_list_;
  quickstep::PtrList<quickstep::ParseAttributeDefinition> *attribute_definition_list_;

  quickstep::ParseKeyValue *key_value_;
  quickstep::PtrList<quickstep::ParseKeyValue> *key_value_list_;
  quickstep::ParseKeyStringValue *key_string_value_;
  quickstep::ParseKeyStringList *key_string_list_;
  quickstep::ParseKeyIntegerValue *key_integer_value_;

  quickstep::ParseCopyFromParams *copy_from_params_;

  quickstep::ParseAssignment *assignment_;
  quickstep::PtrList<quickstep::ParseAssignment> *assignment_list_;

  quickstep::ParseCommand *command_;
  quickstep::PtrVector<quickstep::ParseString> *command_argument_list_;

  quickstep::ParseStatement *statement_;
  quickstep::ParseStatementSelect *select_statement_;
  quickstep::ParseStatementUpdate *update_statement_;
  quickstep::ParseStatementInsert *insert_statement_;
  quickstep::ParseStatementDelete *delete_statement_;
  quickstep::ParseStatementCopyFrom *copy_from_statement_;
  quickstep::ParseStatementCreateTable *create_table_statement_;
  quickstep::ParsePartitionClause *partition_clause_;
  quickstep::ParseBlockProperties *block_properties_;
  quickstep::ParseStatementDropTable *drop_table_statement_;
  quickstep::ParseStatementQuit *quit_statement_;

  const quickstep::Comparison *comparison_;
  const quickstep::UnaryOperation *unary_operation_;
  const quickstep::BinaryOperation *binary_operation_;

  quickstep::ParseFunctionCall *function_call_;
  quickstep::PtrList<quickstep::ParseExpression> *expression_list_;

  quickstep::ParseSelect *select_query_;
  quickstep::ParseGroupBy *opt_group_by_clause_;
  quickstep::ParseHaving *opt_having_clause_;
  quickstep::ParseOrderBy *opt_order_by_clause_;
  bool *order_direction_;
  quickstep::ParseLimit *opt_limit_clause_;

  quickstep::ParseSample *opt_sample_clause_;

  quickstep::PtrList<quickstep::ParseOrderByItem> *order_commalist_;
  quickstep::ParseOrderByItem *order_item_;

  quickstep::PtrVector<quickstep::ParseSubqueryTableReference> *with_list_;
  quickstep::ParseSubqueryTableReference *with_list_element_;

#line 400 "SqlParser_gen.cpp" /* yacc.c:355  */
};
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



int quickstep_yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement);

#endif /* !YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 207 "../SqlParser.ypp" /* yacc.c:358  */

/* This header needs YYSTYPE, which is defined by the %union directive above */
#include "SqlLexer_gen.hpp"
void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature);

#line 433 "SqlParser_gen.cpp" /* yacc.c:358  */

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  128
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  255
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  497

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   371

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     123,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   127,     2,     2,
     124,   125,    23,    21,   126,    22,    27,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   122,
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
      15,    16,    17,    18,    19,    20,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   570,   570,   574,   578,   582,   586,   589,   596,   599,
     602,   605,   608,   611,   614,   617,   620,   623,   629,   635,
     642,   648,   655,   664,   669,   678,   683,   688,   692,   698,
     703,   706,   709,   714,   717,   720,   723,   726,   729,   732,
     735,   738,   741,   753,   756,   759,   777,   797,   800,   803,
     808,   813,   819,   825,   834,   838,   844,   847,   852,   857,
     862,   869,   876,   880,   886,   889,   894,   897,   902,   905,
     910,   913,   932,   936,   942,   946,   952,   955,   958,   963,
     966,   973,   978,   989,   993,   997,  1003,  1006,  1012,  1020,
    1023,  1026,  1032,  1037,  1040,  1045,  1049,  1053,  1057,  1063,
    1068,  1073,  1077,  1083,  1089,  1092,  1097,  1102,  1106,  1112,
    1118,  1124,  1127,  1131,  1137,  1140,  1145,  1149,  1155,  1158,
    1161,  1166,  1171,  1174,  1180,  1184,  1190,  1196,  1202,  1208,
    1214,  1220,  1226,  1232,  1240,  1245,  1248,  1251,  1256,  1260,
    1264,  1267,  1271,  1276,  1279,  1284,  1287,  1292,  1296,  1302,
    1305,  1310,  1313,  1318,  1321,  1326,  1329,  1348,  1352,  1358,
    1365,  1368,  1371,  1376,  1379,  1382,  1388,  1391,  1396,  1401,
    1410,  1415,  1424,  1429,  1432,  1437,  1440,  1445,  1451,  1457,
    1460,  1463,  1466,  1469,  1472,  1478,  1487,  1490,  1495,  1498,
    1503,  1506,  1511,  1514,  1517,  1520,  1523,  1526,  1531,  1535,
    1539,  1542,  1547,  1552,  1555,  1560,  1564,  1570,  1575,  1579,
    1585,  1590,  1593,  1598,  1602,  1608,  1611,  1614,  1617,  1629,
    1633,  1652,  1662,  1677,  1681,  1687,  1690,  1695,  1699,  1706,
    1709,  1712,  1715,  1718,  1721,  1724,  1727,  1730,  1733,  1738,
    1749,  1752,  1757,  1760,  1763,  1769,  1773,  1779,  1782,  1790,
    1793,  1796,  1799,  1805,  1810,  1815
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_COMMAND", "TOKEN_NAME",
  "TOKEN_STRING_SINGLE_QUOTED", "TOKEN_STRING_DOUBLE_QUOTED",
  "TOKEN_UNSIGNED_NUMVAL", "TOKEN_OR", "TOKEN_AND", "TOKEN_NOT",
  "TOKEN_EQ", "TOKEN_LT", "TOKEN_LEQ", "TOKEN_GT", "TOKEN_GEQ",
  "TOKEN_NEQ", "TOKEN_LIKE", "TOKEN_REGEXP", "TOKEN_BETWEEN", "TOKEN_IS",
  "'+'", "'-'", "'*'", "'/'", "UNARY_PLUS", "UNARY_MINUS", "'.'",
  "TOKEN_ADD", "TOKEN_ALL", "TOKEN_ALTER", "TOKEN_AS", "TOKEN_ASC",
  "TOKEN_BIGINT", "TOKEN_BIT", "TOKEN_BLOCKPROPERTIES",
  "TOKEN_BLOCKSAMPLE", "TOKEN_BLOOM_FILTER", "TOKEN_CSB_TREE", "TOKEN_BY",
  "TOKEN_CASE", "TOKEN_CHARACTER", "TOKEN_CHECK", "TOKEN_COLUMN",
  "TOKEN_CONSTRAINT", "TOKEN_COPY", "TOKEN_CREATE", "TOKEN_DATE",
  "TOKEN_DATETIME", "TOKEN_DECIMAL", "TOKEN_DEFAULT", "TOKEN_DELETE",
  "TOKEN_DELIMITER", "TOKEN_DESC", "TOKEN_DISTINCT", "TOKEN_DOUBLE",
  "TOKEN_DROP", "TOKEN_ELSE", "TOKEN_END", "TOKEN_ESCAPE_STRINGS",
  "TOKEN_EXISTS", "TOKEN_EXTRACT", "TOKEN_FALSE", "TOKEN_FIRST",
  "TOKEN_FLOAT", "TOKEN_FOREIGN", "TOKEN_FROM", "TOKEN_FULL",
  "TOKEN_GROUP", "TOKEN_HASH", "TOKEN_HAVING", "TOKEN_IN", "TOKEN_INDEX",
  "TOKEN_INNER", "TOKEN_INSERT", "TOKEN_INTEGER", "TOKEN_INTERVAL",
  "TOKEN_INTO", "TOKEN_JOIN", "TOKEN_KEY", "TOKEN_LAST", "TOKEN_LEFT",
  "TOKEN_LIMIT", "TOKEN_LONG", "TOKEN_NULL", "TOKEN_NULLS", "TOKEN_OFF",
  "TOKEN_ON", "TOKEN_ORDER", "TOKEN_OUTER", "TOKEN_PARTITION",
  "TOKEN_PARTITIONS", "TOKEN_PERCENT", "TOKEN_PRIMARY", "TOKEN_QUIT",
  "TOKEN_RANGE", "TOKEN_REAL", "TOKEN_REFERENCES", "TOKEN_RIGHT",
  "TOKEN_ROW_DELIMITER", "TOKEN_SELECT", "TOKEN_SET", "TOKEN_SMA",
  "TOKEN_SMALLINT", "TOKEN_TABLE", "TOKEN_THEN", "TOKEN_TIME",
  "TOKEN_TIMESTAMP", "TOKEN_TRUE", "TOKEN_TUPLESAMPLE", "TOKEN_UNIQUE",
  "TOKEN_UPDATE", "TOKEN_USING", "TOKEN_VALUES", "TOKEN_VARCHAR",
  "TOKEN_WHEN", "TOKEN_WHERE", "TOKEN_WITH", "TOKEN_YEAR",
  "TOKEN_YEARMONTH", "TOKEN_EOF", "TOKEN_LEX_ERROR", "';'", "'\\n'", "'('",
  "')'", "','", "'%'", "$accept", "start", "sql_statement",
  "quit_statement", "alter_table_statement", "create_table_statement",
  "create_index_statement", "drop_table_statement", "column_def",
  "column_def_commalist", "data_type", "column_constraint_def",
  "column_constraint_def_list", "opt_column_constraint_def_list",
  "table_constraint_def", "table_constraint_def_commalist",
  "opt_table_constraint_def_commalist", "opt_column_list",
  "opt_block_properties", "opt_partition_clause", "partition_type",
  "key_value_list", "key_value", "key_string_value", "key_string_list",
  "key_integer_value", "index_type", "opt_index_properties",
  "insert_statement", "copy_from_statement", "opt_copy_from_params",
  "copy_from_params", "update_statement", "delete_statement",
  "assignment_list", "assignment_item", "select_statement", "with_clause",
  "with_list", "with_list_element", "select_query", "opt_all_distinct",
  "selection", "selection_item_commalist", "selection_item", "from_clause",
  "opt_join_chain", "join_chain", "join", "subquery_expression",
  "opt_sample_clause", "table_reference", "table_reference_signature",
  "table_reference_signature_primary", "table_reference_commalist",
  "opt_group_by_clause", "opt_having_clause", "opt_order_by_clause",
  "opt_limit_clause", "order_commalist", "order_item",
  "opt_order_direction", "opt_nulls_first", "opt_where_clause",
  "where_clause", "or_expression", "and_expression", "not_expression",
  "predicate_expression_base", "add_expression", "multiply_expression",
  "unary_expression", "expression_base", "function_call",
  "extract_function", "case_expression", "simple_when_clause_list",
  "simple_when_clause", "searched_when_clause_list",
  "searched_when_clause", "opt_else_clause", "expression_list",
  "literal_value", "literal_value_commalist", "attribute_ref",
  "attribute_ref_list", "comparison_operation", "unary_operation",
  "add_operation", "multiply_operation", "name_commalist", "any_name",
  "boolean_value", "command", "command_argument_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    43,    45,    42,    47,   276,   277,    46,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,    59,    10,    40,    41,    44,    37
};
# endif

#define YYPACT_NINF -223

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-223)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     235,  -223,  -223,   -48,   236,   -10,    24,   -27,    29,  -223,
     134,   236,   236,  -223,   221,   154,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,     5,  -223,   -51,   179,
     236,  -223,  -223,   119,   236,   236,   236,   236,   236,  -223,
    -223,   600,   111,    99,  -223,   197,   115,  -223,  -223,  -223,
     167,  -223,  -223,  -223,  -223,    48,   258,   181,   151,   161,
    -223,    51,  -223,  -223,   272,   275,  -223,  -223,  -223,   687,
     160,  -223,   225,  -223,  -223,   164,  -223,  -223,   285,  -223,
    -223,  -223,  -223,  -223,  -223,   188,   241,   948,   310,   267,
     213,  -223,   231,    -2,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  1035,    -9,   236,   236,   217,   236,   236,   207,   215,
     234,   236,   236,   513,  -223,  -223,   232,   236,  -223,  -223,
    -223,   513,     3,   -20,  -223,   338,  -223,   236,   243,   350,
    -223,    33,  -223,    11,   161,   948,  -223,  -223,   236,   948,
    -223,  -223,  -223,  -223,   948,   275,  -223,   236,   426,   -30,
    -223,   355,  -223,   268,  -223,   141,  -223,   268,   236,    49,
     236,   236,   246,  -223,   250,  -223,   168,  1133,   774,   217,
     513,   364,   367,  -223,  -223,  1209,   361,  1080,   170,    15,
     948,   -18,  -223,   948,  -223,   325,   260,   320,  -223,   262,
    -223,   214,  -223,    98,   214,    17,   324,  -223,  -223,    -2,
    -223,  -223,   269,   948,  -223,   276,   174,   236,  -223,   948,
     273,  -223,   236,  -223,  -223,   278,   318,   321,   279,  -223,
    -223,  -223,    26,   236,   293,    49,   236,  -223,   120,  -223,
    -223,     2,    30,   513,   513,    46,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,   948,   282,   948,    40,  -223,   178,
     294,   948,     6,  -223,   351,   276,  -223,  -223,   948,  -223,
     236,  -223,  -223,   121,   330,   236,   137,   145,    11,  -223,
     116,  -223,  -223,   403,   405,   214,   375,   345,  -223,   180,
    -223,   948,  -223,   276,  -223,  -223,   513,   292,   295,   236,
     412,    87,   182,  -223,   185,   393,    37,  -223,   296,   307,
    -223,   341,   303,  1080,  -223,   349,   236,  -223,  -223,   120,
    -223,  -223,   367,  -223,  -223,  -223,   948,   305,   248,   861,
    -223,   276,   352,  -223,  -223,  1080,   311,   276,   948,  -223,
      36,  -223,   236,   356,   236,   -28,   236,   362,   236,   363,
    -223,  -223,   347,   353,  -223,   948,   513,   354,  -223,   276,
       8,   236,   236,   194,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,   146,  -223,   236,  -223,  -223,  -223,   319,    49,   409,
     360,  -223,   513,  -223,  -223,   322,  -223,   251,   861,  -223,
     948,   196,  -223,  -223,  1080,   276,  -223,   -14,   236,    -7,
     513,    -5,   236,    60,   236,  -223,  -223,   326,   364,   414,
     369,  -223,   198,   201,  -223,   449,    87,  -223,   236,  -223,
    -223,   331,   418,  -223,    12,   236,   948,   212,   276,  -223,
     218,   513,    66,   513,   364,   513,    81,   513,    85,   948,
     455,  -223,   366,  -223,  -223,  -223,   224,  -223,  -223,  -223,
    -223,     7,   236,    14,  -223,   339,   276,  -223,  -223,   364,
     513,   364,   364,   513,   364,   513,   342,  -223,    39,  -223,
     236,  -223,   236,  -223,  -223,   236,  -223,   228,  -223,  -223,
     346,  -223,   364,   364,   364,   948,  -223,  -223,   380,   358,
    -223,   237,  -223,   236,  -223,    89,  -223,   236,  -223,   239,
    -223,  -223,   254,   378,  -223,   464,  -223
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,   255,     0,     0,     0,     0,     0,     0,    18,
     111,     0,     0,     7,     0,     0,    15,     8,    10,    11,
      13,    14,     9,    17,    12,    16,     0,   104,     0,   253,
       0,   247,   248,     0,     0,     0,     0,     0,     0,   112,
     113,     0,     0,   106,   107,     0,   145,     1,     3,     2,
       0,   105,     5,     4,   254,     0,     0,     0,     0,   166,
      25,     0,   219,   216,     0,   239,   114,    40,    29,     0,
       0,    30,    31,    34,    36,     0,    37,    39,     0,    41,
     215,    35,    38,    32,    33,     0,     0,     0,     0,     0,
     115,   116,   120,   187,   189,   191,   194,   195,   196,   193,
     192,     0,   225,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,   100,   167,     0,     0,    90,   217,
     218,     0,     0,   211,   208,     0,    43,     0,   220,     0,
      44,     0,   222,     0,   166,     0,   240,   241,     0,     0,
     119,   243,   244,   242,     0,     0,   190,     0,     0,   166,
     102,     0,   108,     0,   109,     0,   245,     0,     0,     0,
       0,     0,     0,    92,    66,    27,     0,     0,     0,     0,
       0,   168,   170,   172,   174,     0,   192,     0,     0,     0,
       0,   211,   205,     0,   209,     0,     0,     0,   221,     0,
     197,     0,   147,   122,   142,   135,   149,   117,   118,   186,
     188,   226,     0,     0,   198,   213,     0,     0,    99,     0,
       0,   146,     0,    91,    19,     0,     0,     0,     0,    20,
      21,    22,     0,     0,     0,    64,     0,    42,    56,   173,
     181,     0,     0,     0,     0,     0,   229,   231,   232,   233,
     234,   230,   235,   237,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   206,     0,   212,   204,    45,     0,    46,
       0,   138,   143,     0,     0,     0,     0,     0,     0,   121,
     123,   125,   141,     0,     0,   140,     0,   151,   199,     0,
     200,     0,   101,   103,   134,   246,     0,     0,     0,     0,
       0,     0,     0,   227,     0,   225,     0,    63,    65,    68,
      28,     0,     0,     0,    47,     0,     0,    49,    55,    57,
      26,   180,   169,   171,   236,   238,     0,     0,     0,     0,
     182,   179,     0,   178,    89,     0,     0,   210,     0,   203,
       0,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     148,   124,     0,     0,   139,     0,     0,   153,   201,   214,
       0,     0,     0,     0,    95,   251,   252,   250,   249,    96,
      94,     0,    67,     0,    83,    84,    85,    86,     0,     0,
      70,    48,     0,    51,    50,     0,    54,     0,     0,   184,
       0,     0,   177,   224,     0,   207,   202,     0,     0,     0,
       0,     0,     0,     0,     0,   136,   137,   150,   152,     0,
     155,    61,     0,     0,    58,     0,     0,   228,     0,    24,
      62,     0,     0,    23,     0,     0,     0,     0,   175,   183,
       0,     0,     0,     0,   127,     0,     0,     0,     0,     0,
       0,   110,     0,    59,    97,    98,     0,    74,    76,    77,
      78,     0,     0,     0,    52,     0,   176,   185,    88,   133,
       0,   126,   129,     0,   131,     0,   154,   157,   160,   156,
       0,    87,     0,    82,    80,     0,    79,     0,    72,    73,
       0,    53,   132,   128,   130,     0,   161,   162,   163,     0,
      75,     0,    69,     0,   158,     0,   159,     0,    81,     0,
     164,   165,     0,     0,    60,     0,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -139,  -223,
     309,   169,  -223,  -223,  -222,  -223,  -223,  -223,  -223,  -223,
    -223,    35,    22,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,   281,  -223,  -223,  -223,   381,
       9,  -223,  -223,  -223,   357,  -223,  -223,  -223,   216,  -101,
    -223,   223,  -165,   -11,  -223,  -223,  -223,  -223,  -223,  -223,
      18,  -223,  -223,    44,  -223,   -54,   256,   261,   328,    -3,
     359,   368,   396,  -128,  -223,  -223,  -223,   313,  -223,   376,
     323,  -197,  -175,   122,   -32,  -223,  -223,  -223,  -223,  -223,
    -105,    -4,    94,  -223,  -223
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,   165,   166,
      88,   308,   309,   310,   219,   298,   299,   224,   370,   413,
     470,   436,   437,   438,   439,   440,   367,   409,    21,    22,
     163,   292,    23,    24,   149,   150,    25,    26,    43,    44,
     210,    41,    89,    90,    91,   134,   269,   270,   271,   191,
     275,   192,   261,   262,   193,   277,   347,   400,   431,   456,
     457,   478,   486,   114,   115,   171,   172,   173,   174,   175,
      93,    94,    95,    96,    97,    98,   181,   182,   123,   124,
     185,   206,    99,   249,   100,   294,   246,   101,   139,   144,
     155,   102,   359,    28,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      33,    45,   248,   297,   154,   194,   279,    42,    46,    27,
     233,    31,   178,    32,   463,    31,   233,    32,   147,   214,
     233,   141,   142,   233,   136,   137,    55,   136,   137,   272,
      57,    58,    59,    60,    61,    51,   464,   183,    92,   183,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     322,   136,   137,   273,   136,   137,    30,   136,   137,   390,
     136,   137,    34,   314,   315,   316,   122,   179,   230,    52,
     118,   476,    53,   421,   364,   365,   108,    37,   290,    50,
     423,   176,   425,   468,   131,   291,   113,   300,   140,   176,
      36,   215,   477,    45,    35,   121,   207,   180,   212,   151,
      46,   245,   156,   157,   109,    10,    38,   164,   167,   469,
     344,   328,   212,   156,   216,   148,   231,   317,   180,   212,
     251,   212,   381,   187,   323,   143,   274,   311,   373,   195,
     301,   465,    92,   401,   198,   153,   176,   444,   176,   366,
     194,   148,   217,   201,   320,   205,   410,   427,   397,   355,
     383,    10,   490,   450,   167,   190,   220,   221,   190,   218,
     335,   386,   302,    39,   116,   263,   213,   232,   453,   491,
     303,   264,   455,   356,   357,   117,   265,   252,   196,   266,
     255,   417,    54,   263,   353,    56,   212,    46,    40,   264,
      46,   293,   212,   208,   265,   358,   267,   266,   405,   332,
     205,   176,   176,   151,   304,   406,   283,   212,   285,   248,
     333,   212,   103,   305,   267,   336,   379,   306,    31,   295,
      32,    47,   167,   338,   268,   104,   337,   387,   105,   389,
     307,   391,   350,   393,   339,    31,     1,    32,     2,   106,
      31,   318,    32,   321,   107,   260,   402,   403,   327,   331,
     158,   159,   136,   137,   176,   330,    46,   380,   160,   161,
     416,   156,   138,   110,   195,     3,   211,   212,   111,   136,
     137,    46,   136,   137,    48,   112,    49,   113,   349,   119,
       4,     5,   120,   422,   125,   156,     6,   426,   127,   428,
     128,     7,   398,   225,   226,   250,   212,   136,   137,   280,
     281,   126,   375,   324,   325,   348,   281,   360,   361,     8,
     362,   363,   129,   377,   176,   132,   205,   130,   414,   404,
     212,   419,   281,   432,   212,   385,   433,   212,   156,     9,
     156,   407,   156,   133,   156,    10,   424,   447,   281,   135,
     176,   153,   205,   448,   325,   186,    11,   156,   156,   461,
     462,   162,    12,   482,   462,    13,   177,   189,   176,   295,
     481,   188,   488,   212,   493,   212,   209,   449,    10,   451,
     222,   452,   233,   454,   223,   205,   234,   418,   489,   494,
     212,   247,   492,   256,   156,   257,   258,   259,   156,   176,
     156,   176,   276,   176,   278,   176,   472,   287,   284,   473,
     288,   474,   286,   289,   441,   296,   319,   326,   334,   329,
     342,   445,   343,   446,   345,   346,   351,   354,   176,   352,
     147,   176,   368,   176,   369,   371,   458,   372,   374,   378,
      31,    62,    32,    63,   388,   384,   382,   466,   441,   395,
     392,   394,   399,   408,   411,   396,   415,    64,    65,   202,
     412,   430,   281,   429,   434,   442,   479,   443,   441,    67,
      68,   156,   459,   460,   471,   485,    69,    70,   475,   495,
     483,   496,   458,    71,    72,    73,   228,   467,   376,   156,
     203,    74,   487,   156,   480,   152,   341,    75,   282,   312,
      76,   340,   197,   484,   253,   313,   229,   146,   199,   184,
     435,    77,    78,     0,   254,     0,   420,     0,     0,    79,
      80,     0,   200,     0,     0,     0,     0,    31,    62,    32,
      63,     0,    81,   168,     0,     0,     0,     0,     0,    82,
       0,     0,    83,    84,    64,    65,     0,     0,     0,     0,
      85,     0,     0,     0,     0,    86,    67,    68,     0,     0,
      87,   204,     0,    69,    70,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,     0,     0,     0,    74,     0,
       0,     0,     0,   169,    75,     0,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
       0,     0,     0,     0,     0,     0,    79,    80,     0,     0,
       0,     0,     0,     0,    31,    62,    32,    63,     0,    81,
       0,     0,     0,     0,     0,     0,    82,     0,     0,    83,
      84,    64,    65,    66,     0,     0,     0,    85,     0,     0,
       0,     0,    86,    67,    68,     0,     0,   170,     0,     0,
      69,    70,     0,     0,     0,     0,     0,    71,    72,    73,
       0,     0,     0,     0,     0,    74,     0,     0,     0,     0,
       0,    75,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,    78,     0,     0,     0,
       0,     0,     0,    79,    80,     0,     0,     0,     0,     0,
       0,    31,    62,    32,    63,     0,    81,     0,     0,     0,
       0,     0,     0,    82,     0,     0,    83,    84,    64,    65,
       0,     0,     0,     0,    85,     0,     0,     0,     0,    86,
      67,    68,     0,     0,    87,     0,     0,    69,    70,     0,
       0,     0,     0,     0,    71,    72,    73,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,    75,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,     0,     0,     0,     0,     0,     0,
      79,    80,     0,     0,     0,     0,     0,     0,    31,    62,
      32,    63,     0,    81,     0,     0,     0,     0,     0,     0,
      82,     0,     0,    83,    84,    64,    65,     0,     0,     0,
       0,    85,   121,     0,     0,     0,    86,    67,    68,     0,
       0,    87,     0,     0,    69,    70,     0,     0,     0,     0,
       0,    71,    72,    73,     0,     0,     0,     0,     0,    74,
       0,     0,     0,     0,   169,    75,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
      78,     0,     0,     0,     0,     0,     0,    79,    80,     0,
       0,     0,     0,     0,     0,    31,    62,    32,    63,     0,
      81,     0,     0,     0,     0,     0,     0,    82,     0,     0,
      83,    84,    64,    65,     0,     0,     0,     0,    85,     0,
       0,     0,     0,    86,    67,    68,     0,     0,   170,     0,
       0,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,     0,     0,     0,
       0,     0,    75,     0,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    78,     0,     0,
       0,     0,     0,     0,    79,    80,     0,     0,     0,     0,
       0,     0,    31,    62,    32,    63,     0,    81,     0,     0,
       0,    10,     0,     0,    82,     0,     0,    83,    84,    64,
      65,     0,     0,     0,     0,    85,     0,     0,     0,     0,
      86,    67,    68,     0,     0,    87,     0,     0,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
       0,     0,     0,    74,     0,     0,     0,     0,     0,    75,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    78,     0,     0,     0,     0,     0,
       0,    79,    80,     0,     0,     0,     0,     0,     0,    31,
      62,    32,    63,     0,    81,     0,     0,     0,     0,     0,
       0,    82,     0,     0,    83,    84,    64,   145,     0,     0,
       0,     0,    85,     0,     0,     0,     0,    86,    67,    68,
       0,     0,    87,     0,     0,    69,    70,     0,     0,     0,
       0,     0,    71,    72,    73,    62,     0,    63,     0,     0,
      74,     0,     0,     0,     0,     0,    75,     0,     0,    76,
       0,    64,   145,     0,     0,     0,     0,     0,     0,     0,
      77,    78,     0,    67,    68,     0,     0,     0,    79,    80,
       0,    70,     0,     0,     0,     0,     0,    71,    72,    73,
       0,    81,     0,     0,     0,    74,     0,     0,    82,     0,
       0,    83,    84,     0,    76,     0,     0,     0,     0,    85,
       0,     0,     0,     0,    86,    77,    78,     0,     0,    87,
       0,     0,     0,    79,    80,     0,    67,    68,     0,     0,
       0,     0,     0,     0,    70,     0,    81,     0,     0,     0,
      71,    72,    73,    82,     0,     0,    83,    84,    74,     0,
       0,     0,     0,     0,    85,     0,     0,    76,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,    77,   227,
       0,     0,     0,     0,     0,     0,    79,     0,     0,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,    81,
     136,   137,     0,     0,     0,     0,    82,     0,     0,    83,
      84,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245
};

static const yytype_int16 yycheck[] =
{
       4,    12,   177,   225,   105,   133,   203,    11,    12,     0,
       8,     4,   117,     6,     7,     4,     8,     6,    27,   158,
       8,    23,    24,     8,    21,    22,    30,    21,    22,   194,
      34,    35,    36,    37,    38,    26,    29,    57,    41,    57,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      10,    21,    22,    36,    21,    22,   104,    21,    22,    87,
      21,    22,    72,    17,    18,    19,    69,   121,   169,   120,
      61,    32,   123,    87,    37,    38,    28,   104,    52,    74,
      87,   113,    87,    69,    87,    59,   116,   226,    92,   121,
      66,    42,    53,   104,   104,   115,   126,   115,   126,   103,
     104,    71,   106,   107,    56,   100,    77,   111,   112,    95,
     275,   105,   126,   117,    65,   124,   170,    71,   115,   126,
     105,   126,   319,   127,    84,   127,   109,   125,   303,   133,
      10,   124,   135,   125,   138,   124,   168,   125,   170,   102,
     268,   124,    93,   147,   245,   148,   368,    87,   345,    62,
     325,   100,    63,    87,   158,   125,   160,   161,   125,   110,
     265,   125,    42,    29,   113,    67,   157,   170,    87,    80,
      50,    73,    87,    86,    87,   124,    78,   180,   134,    81,
     183,   378,     3,    67,   289,    66,   126,   191,    54,    73,
     194,   223,   126,   149,    78,   108,    98,    81,    52,    78,
     203,   233,   234,   207,    84,    59,   209,   126,   212,   384,
      89,   126,   101,    93,    98,    78,   317,    97,     4,   223,
       6,     0,   226,    78,   126,   126,    89,   332,    31,   334,
     110,   336,   286,   338,    89,     4,     1,     6,     3,   124,
       4,   244,     6,   246,    77,    31,   351,   352,   251,   260,
      43,    44,    21,    22,   286,   258,   260,     9,    43,    44,
       9,   265,    31,     5,   268,    30,   125,   126,    87,    21,
      22,   275,    21,    22,   120,   124,   122,   116,   281,     7,
      45,    46,     7,   388,   124,   289,    51,   392,   124,   394,
       5,    56,   346,   125,   126,   125,   126,    21,    22,   125,
     126,    76,   306,   125,   126,   125,   126,   125,   126,    74,
     125,   126,   124,   316,   346,     5,   319,    76,   372,   125,
     126,   125,   126,   125,   126,   328,   125,   126,   332,    94,
     334,   363,   336,    66,   338,   100,   390,   125,   126,   126,
     372,   124,   345,   125,   126,     7,   111,   351,   352,   125,
     126,   117,   117,   125,   126,   120,   124,     7,   390,   363,
     465,   118,   125,   126,   125,   126,    11,   421,   100,   423,
     124,   425,     8,   427,   124,   378,     9,   380,   483,   125,
     126,    20,   487,    58,   388,   125,    66,   125,   392,   421,
     394,   423,    68,   425,   125,   427,   450,    79,   125,   453,
      79,   455,   124,   124,   408,   112,   124,   113,    78,    58,
       7,   415,     7,   416,    39,    70,   124,     5,   450,   124,
      27,   453,   126,   455,   117,    84,   429,   124,    79,   124,
       4,     5,     6,     7,    78,   124,    84,   441,   442,    92,
      78,    78,    88,   124,    35,    92,   124,    21,    22,    23,
      90,    82,   126,    39,     5,   124,   460,    39,   462,    33,
      34,   465,     7,    97,   125,    85,    40,    41,   126,    91,
     124,     7,   475,    47,    48,    49,   167,   442,   309,   483,
      54,    55,   124,   487,   462,   104,   270,    61,   207,   233,
      64,   268,   135,   475,   181,   234,   168,   101,   139,   123,
     406,    75,    76,    -1,   181,    -1,   384,    -1,    -1,    83,
      84,    -1,   144,    -1,    -1,    -1,    -1,     4,     5,     6,
       7,    -1,    96,    10,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,   106,   107,    21,    22,    -1,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    -1,   119,    33,    34,    -1,    -1,
     124,   125,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,   106,
     107,    21,    22,    23,    -1,    -1,    -1,   114,    -1,    -1,
      -1,    -1,   119,    33,    34,    -1,    -1,   124,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,   106,   107,    21,    22,
      -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,   119,
      33,    34,    -1,    -1,   124,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
       6,     7,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,   106,   107,    21,    22,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,    -1,   119,    33,    34,    -1,
      -1,   124,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,     6,     7,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
     106,   107,    21,    22,    -1,    -1,    -1,    -1,   114,    -1,
      -1,    -1,    -1,   119,    33,    34,    -1,    -1,   124,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,    -1,    96,    -1,    -1,
      -1,   100,    -1,    -1,   103,    -1,    -1,   106,   107,    21,
      22,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,
     119,    33,    34,    -1,    -1,   124,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,     7,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,   106,   107,    21,    22,    -1,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,   119,    33,    34,
      -1,    -1,   124,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    47,    48,    49,     5,    -1,     7,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    -1,    33,    34,    -1,    -1,    -1,    83,    84,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    96,    -1,    -1,    -1,    55,    -1,    -1,   103,    -1,
      -1,   106,   107,    -1,    64,    -1,    -1,    -1,    -1,   114,
      -1,    -1,    -1,    -1,   119,    75,    76,    -1,    -1,   124,
      -1,    -1,    -1,    83,    84,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    96,    -1,    -1,    -1,
      47,    48,    49,   103,    -1,    -1,   106,   107,    55,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,    64,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    96,
      21,    22,    -1,    -1,    -1,    -1,   103,    -1,    -1,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    30,    45,    46,    51,    56,    74,    94,
     100,   111,   117,   120,   129,   130,   131,   132,   133,   134,
     135,   156,   157,   160,   161,   164,   165,   168,   221,   222,
     104,     4,     6,   219,    72,   104,    66,   104,    77,    29,
      54,   169,   219,   166,   167,   181,   219,     0,   120,   122,
      74,   168,   120,   123,     3,   219,    66,   219,   219,   219,
     219,   219,     5,     7,    21,    22,    23,    33,    34,    40,
      41,    47,    48,    49,    55,    61,    64,    75,    76,    83,
      84,    96,   103,   106,   107,   114,   119,   124,   138,   170,
     171,   172,   197,   198,   199,   200,   201,   202,   203,   210,
     212,   215,   219,   101,   126,    31,   124,    77,    28,    56,
       5,    87,   124,   116,   191,   192,   113,   124,   168,     7,
       7,   115,   197,   206,   207,   124,    76,   124,     5,   124,
      76,   197,     5,    66,   173,   126,    21,    22,    31,   216,
     219,    23,    24,   127,   217,    22,   200,    27,   124,   162,
     163,   219,   167,   124,   177,   218,   219,   219,    43,    44,
      43,    44,   117,   158,   219,   136,   137,   219,    10,    60,
     124,   193,   194,   195,   196,   197,   212,   124,   218,   193,
     115,   204,   205,    57,   207,   208,     7,   219,   118,     7,
     125,   177,   179,   182,   201,   219,   191,   172,   219,   198,
     199,   219,    23,    54,   125,   197,   209,   126,   191,    11,
     168,   125,   126,   168,   136,    42,    65,    93,   110,   142,
     219,   219,   124,   124,   145,   125,   126,    76,   138,   196,
     177,   193,   197,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    71,   214,    20,   210,   211,
     125,   105,   197,   205,   208,   197,    58,   125,    66,   125,
      31,   180,   181,    67,    73,    78,    81,    98,   126,   174,
     175,   176,   180,    36,   109,   178,    68,   183,   125,   209,
     125,   126,   163,   197,   125,   219,   124,    79,    79,   124,
      52,    59,   159,   212,   213,   219,   112,   142,   143,   144,
     136,    10,    42,    50,    84,    93,    97,   110,   139,   140,
     141,   125,   194,   195,    17,    18,    19,    71,   197,   124,
     177,   197,    10,    84,   125,   126,   113,   197,   105,    58,
     197,   181,    78,    89,    78,   218,    78,    89,    78,    89,
     179,   176,     7,     7,   180,    39,    70,   184,   125,   197,
     193,   124,   124,   218,     5,    62,    86,    87,   108,   220,
     125,   126,   125,   126,    37,    38,   102,   154,   126,   117,
     146,    84,   124,   210,    79,   219,   139,   197,   124,   177,
       9,   209,    84,   210,   124,   197,   125,   218,    78,   218,
      87,   218,    78,   218,    78,    92,    92,   209,   193,    88,
     185,   125,   218,   218,   125,    52,    59,   212,   124,   155,
     142,    35,    90,   147,   193,   124,     9,   209,   197,   125,
     211,    87,   218,    87,   193,    87,   218,    87,   218,    39,
      82,   186,   125,   125,     5,   220,   149,   150,   151,   152,
     153,   219,   124,    39,   125,   219,   197,   125,   125,   193,
      87,   193,   193,    87,   193,    87,   187,   188,   197,     7,
      97,   125,   126,     7,    29,   124,   219,   149,    69,    95,
     148,   125,   193,   193,   193,   126,    32,    53,   189,   219,
     150,   218,   125,   124,   188,    85,   190,   124,   125,   218,
      63,    80,   218,   125,   125,    91,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   128,   129,   129,   129,   129,   129,   129,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   132,
     132,   132,   132,   133,   134,   135,   136,   137,   137,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   151,
     151,   152,   153,   154,   154,   154,   155,   155,   156,   156,
     156,   156,   157,   158,   158,   159,   159,   159,   159,   160,
     161,   162,   162,   163,   164,   164,   165,   166,   166,   167,
     168,   169,   169,   169,   170,   170,   171,   171,   172,   172,
     172,   173,   174,   174,   175,   175,   176,   176,   176,   176,
     176,   176,   176,   176,   177,   178,   178,   178,   179,   179,
     179,   179,   179,   180,   180,   181,   181,   182,   182,   183,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   188,
     189,   189,   189,   190,   190,   190,   191,   191,   192,   193,
     193,   194,   194,   195,   195,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   197,   197,   198,   198,
     199,   199,   200,   200,   200,   200,   200,   200,   201,   201,
     201,   201,   202,   203,   203,   204,   204,   205,   206,   206,
     207,   208,   208,   209,   209,   210,   210,   210,   210,   210,
     210,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   215,
     216,   216,   217,   217,   217,   218,   218,   219,   219,   220,
     220,   220,   220,   221,   222,   222
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     6,     6,     9,     9,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     4,     1,     2,     1,
       2,     2,     4,     5,     2,     1,     0,     1,     4,     5,
      10,     4,     3,     1,     0,     1,     0,     3,     0,     5,
       0,     8,     1,     1,     1,     3,     1,     1,     1,     2,
       2,     4,     2,     1,     1,     1,     0,     3,    10,     7,
       4,     5,     5,     0,     4,     2,     2,     4,     4,     5,
       4,     3,     1,     3,     1,     2,     2,     1,     3,     3,
       9,     0,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     3,     0,     1,     2,     1,     5,     4,     6,     5,
       6,     5,     6,     5,     3,     0,     3,     3,     2,     3,
       2,     2,     1,     1,     2,     1,     4,     1,     3,     0,
       3,     0,     2,     0,     3,     0,     2,     1,     3,     3,
       0,     1,     1,     0,     2,     2,     0,     1,     2,     3,
       1,     3,     1,     2,     1,     5,     6,     4,     3,     3,
       3,     2,     3,     5,     4,     6,     3,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     5,     6,     5,     4,     1,     2,     4,     1,     2,
       4,     0,     2,     1,     3,     1,     1,     2,     2,     1,
       2,     3,     2,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     2,     2,     0
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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error: cannot back up")); \
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
                  Type, Value, Location, yyscanner, parsedStatement); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, yyscanner, parsedStatement);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , yyscanner, parsedStatement);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, yyscanner, parsedStatement); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* TOKEN_COMMAND  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1902 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOKEN_NAME  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1912 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOKEN_STRING_SINGLE_QUOTED  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1922 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOKEN_STRING_DOUBLE_QUOTED  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1932 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOKEN_UNSIGNED_NUMVAL  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 1942 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 130: /* sql_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1952 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 131: /* quit_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).quit_statement_) != nullptr) {
    delete ((*yyvaluep).quit_statement_);
  }
}
#line 1962 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 132: /* alter_table_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1972 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 133: /* create_table_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).create_table_statement_) != nullptr) {
    delete ((*yyvaluep).create_table_statement_);
  }
}
#line 1982 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 134: /* create_index_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1992 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 135: /* drop_table_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).drop_table_statement_) != nullptr) {
    delete ((*yyvaluep).drop_table_statement_);
  }
}
#line 2002 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 136: /* column_def  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_);
  }
}
#line 2012 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 137: /* column_def_commalist  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_list_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_list_);
  }
}
#line 2022 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 138: /* data_type  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).data_type_) != nullptr) {
    delete ((*yyvaluep).data_type_);
  }
}
#line 2032 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 139: /* column_constraint_def  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_) != nullptr) {
    delete ((*yyvaluep).column_constraint_);
  }
}
#line 2042 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 140: /* column_constraint_def_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2052 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 141: /* opt_column_constraint_def_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2062 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 145: /* opt_column_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2072 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 146: /* opt_block_properties  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).block_properties_) != nullptr) {
    delete ((*yyvaluep).block_properties_);
  }
}
#line 2082 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 147: /* opt_partition_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).partition_clause_) != nullptr) {
    delete ((*yyvaluep).partition_clause_);
  }
}
#line 2092 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 148: /* partition_type  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2102 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 149: /* key_value_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2112 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 150: /* key_value  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_) != nullptr) {
    delete ((*yyvaluep).key_value_);
  }
}
#line 2122 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 151: /* key_string_value  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_value_) != nullptr) {
    delete ((*yyvaluep).key_string_value_);
  }
}
#line 2132 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 152: /* key_string_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_list_) != nullptr) {
    delete ((*yyvaluep).key_string_list_);
  }
}
#line 2142 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 153: /* key_integer_value  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_integer_value_) != nullptr) {
    delete ((*yyvaluep).key_integer_value_);
  }
}
#line 2152 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 154: /* index_type  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2162 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 155: /* opt_index_properties  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2172 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 156: /* insert_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).insert_statement_) != nullptr) {
    delete ((*yyvaluep).insert_statement_);
  }
}
#line 2182 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 157: /* copy_from_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_statement_) != nullptr) {
    delete ((*yyvaluep).copy_from_statement_);
  }
}
#line 2192 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 158: /* opt_copy_from_params  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 2202 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 159: /* copy_from_params  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 2212 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 160: /* update_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).update_statement_) != nullptr) {
    delete ((*yyvaluep).update_statement_);
  }
}
#line 2222 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 161: /* delete_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).delete_statement_) != nullptr) {
    delete ((*yyvaluep).delete_statement_);
  }
}
#line 2232 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 162: /* assignment_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_list_) != nullptr) {
    delete ((*yyvaluep).assignment_list_);
  }
}
#line 2242 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 163: /* assignment_item  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_) != nullptr) {
    delete ((*yyvaluep).assignment_);
  }
}
#line 2252 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 164: /* select_statement  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_statement_) != nullptr) {
    delete ((*yyvaluep).select_statement_);
  }
}
#line 2262 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 165: /* with_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2272 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 166: /* with_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2282 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 167: /* with_list_element  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_element_) != nullptr) {
    delete ((*yyvaluep).with_list_element_);
  }
}
#line 2292 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 168: /* select_query  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_query_) != nullptr) {
    delete ((*yyvaluep).select_query_);
  }
}
#line 2302 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 170: /* selection  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_) != nullptr) {
    delete ((*yyvaluep).selection_);
  }
}
#line 2312 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 171: /* selection_item_commalist  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_list_) != nullptr) {
    delete ((*yyvaluep).selection_list_);
  }
}
#line 2322 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 172: /* selection_item  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_item_) != nullptr) {
    delete ((*yyvaluep).selection_item_);
  }
}
#line 2332 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 173: /* from_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2342 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 177: /* subquery_expression  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).subquery_expression_) != nullptr) {
    delete ((*yyvaluep).subquery_expression_);
  }
}
#line 2352 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 178: /* opt_sample_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_sample_clause_) != nullptr) {
    delete ((*yyvaluep).opt_sample_clause_);
  }
}
#line 2362 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 179: /* table_reference  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2372 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 180: /* table_reference_signature  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2382 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 181: /* table_reference_signature_primary  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2392 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 182: /* table_reference_commalist  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2402 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_group_by_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_group_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_group_by_clause_);
  }
}
#line 2412 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 184: /* opt_having_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_having_clause_) != nullptr) {
    delete ((*yyvaluep).opt_having_clause_);
  }
}
#line 2422 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_order_by_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_order_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_order_by_clause_);
  }
}
#line 2432 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_limit_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_limit_clause_) != nullptr) {
    delete ((*yyvaluep).opt_limit_clause_);
  }
}
#line 2442 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 187: /* order_commalist  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_commalist_) != nullptr) {
    delete ((*yyvaluep).order_commalist_);
  }
}
#line 2452 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 188: /* order_item  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_item_) != nullptr) {
    delete ((*yyvaluep).order_item_);
  }
}
#line 2462 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_order_direction  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2472 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 190: /* opt_nulls_first  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2482 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 191: /* opt_where_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2492 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 192: /* where_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2502 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 193: /* or_expression  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2512 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 194: /* and_expression  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2522 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 195: /* not_expression  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2532 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 196: /* predicate_expression_base  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2542 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 197: /* add_expression  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2552 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 198: /* multiply_expression  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2562 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 199: /* unary_expression  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2572 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 200: /* expression_base  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2582 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 201: /* function_call  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).function_call_) != nullptr) {
    delete ((*yyvaluep).function_call_);
  }
}
#line 2592 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 202: /* extract_function  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2602 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 203: /* case_expression  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2612 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 204: /* simple_when_clause_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_list_);
  }
}
#line 2622 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 205: /* simple_when_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_);
  }
}
#line 2632 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 206: /* searched_when_clause_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_list_);
  }
}
#line 2642 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 207: /* searched_when_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_);
  }
}
#line 2652 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_else_clause  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2662 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 209: /* expression_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_list_) != nullptr) {
    delete ((*yyvaluep).expression_list_);
  }
}
#line 2672 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 210: /* literal_value  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_) != nullptr) {
    delete ((*yyvaluep).literal_value_);
  }
}
#line 2682 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 211: /* literal_value_commalist  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_list_) != nullptr) {
    delete ((*yyvaluep).literal_value_list_);
  }
}
#line 2692 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 212: /* attribute_ref  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_) != nullptr) {
    delete ((*yyvaluep).attribute_);
  }
}
#line 2702 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 213: /* attribute_ref_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2712 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 214: /* comparison_operation  */
#line 557 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2718 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 215: /* unary_operation  */
#line 558 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2724 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 216: /* add_operation  */
#line 559 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2730 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 217: /* multiply_operation  */
#line 559 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2736 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 218: /* name_commalist  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_list_) != nullptr) {
    delete ((*yyvaluep).string_list_);
  }
}
#line 2746 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 219: /* any_name  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2756 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 220: /* boolean_value  */
#line 556 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2762 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 221: /* command  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_) != nullptr) {
    delete ((*yyvaluep).command_);
  }
}
#line 2772 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 222: /* command_argument_list  */
#line 561 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_argument_list_) != nullptr) {
    delete ((*yyvaluep).command_argument_list_);
  }
}
#line 2782 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval, &yylloc, yyscanner);
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
        case 2:
#line 570 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3079 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 574 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3088 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 578 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3097 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 582 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3106 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 586 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    YYABORT;
  }
#line 3114 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 589 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    // Regular yyparse() return codes are non-negative, so use a negative one here.
    return -1;
  }
#line 3123 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 596 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3131 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 599 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].copy_from_statement_);
  }
#line 3139 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 602 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].create_table_statement_);
  }
#line 3147 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 605 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3155 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 608 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].delete_statement_);
  }
#line 3163 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 611 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].drop_table_statement_);
  }
#line 3171 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 614 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].insert_statement_);
  }
#line 3179 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 617 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].quit_statement_);
  }
#line 3187 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 620 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].select_statement_);
  }
#line 3195 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 623 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].update_statement_);
  }
#line 3203 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 629 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.quit_statement_) = new quickstep::ParseStatementQuit((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3211 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 635 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].attribute_definition_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3223 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 642 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3234 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 648 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3246 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 655 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3258 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 664 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.create_table_statement_) = new quickstep::ParseStatementCreateTable((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].attribute_definition_list_), (yyvsp[-1].block_properties_), (yyvsp[0].partition_clause_));
  }
#line 3266 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 669 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].key_value_list_)) {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_), (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].key_value_list_));
    } else {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_));
    }
  }
#line 3278 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 678 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.drop_table_statement_) = new quickstep::ParseStatementDropTable((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_));
  }
#line 3286 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 683 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_) = new quickstep::ParseAttributeDefinition((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].data_type_), (yyvsp[0].column_constraint_list_));
  }
#line 3294 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 688 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_list_) = new quickstep::PtrList<quickstep::ParseAttributeDefinition>();
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3303 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 692 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_list_) = (yyvsp[-2].attribute_definition_list_);
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3312 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 698 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "BIT data type");
    YYERROR;
  }
#line 3322 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 703 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3330 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 706 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3338 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 709 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "TIME data type");
    YYERROR;
  }
#line 3348 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 714 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3356 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 717 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3364 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 720 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3372 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 723 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3380 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 726 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kFloat));
  }
#line 3388 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 729 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3396 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 732 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3404 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 735 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3412 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 738 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3420 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 741 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This pattern exhibits a shift/reduce conflict with the
     * TOKEN_INTERVAL case in 'literal_value'. Bison prefers to shift rather
     * than reduce, so the case in 'literal_value' has precedence over this.
     **/
    (yyval.data_type_) = nullptr;
    quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr,
        "INTERVAL is ambiguous as a column type. Specify either DATETIME INTERVAL "
        "or YEARMONTH INTERVAL");
    YYERROR;
  }
#line 3437 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 753 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetimeInterval));
  }
#line 3445 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 756 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kYearMonthInterval));
  }
#line 3453 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 759 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for CHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Length for CHAR type must be at least 1");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3476 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 777 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for VARCHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() < 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Negative length supplied for VARCHAR type");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kVarChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3499 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 797 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNull((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3507 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 800 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNotNull((yylsp[-1]).first_line, (yylsp[-1]).first_column);
  }
#line 3515 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 803 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "Column Constraints (UNIQUE)");
    YYERROR;
  }
#line 3525 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 808 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3535 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 813 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[0].literal_value_);
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (DEFAULT)");
    YYERROR;
  }
#line 3546 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 819 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Column Constraints (CHECK)");
    YYERROR;
  }
#line 3557 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 825 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_value_);
    NotSupported(&(yylsp[-4]), yyscanner, "Foreign Keys");
    YYERROR;
  }
#line 3569 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 834 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = (yyvsp[-1].column_constraint_list_);
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3578 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 838 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = new quickstep::PtrList<quickstep::ParseColumnConstraint>();
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3587 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 844 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = nullptr;
  }
#line 3595 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 847 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = (yyvsp[0].column_constraint_list_);
  }
#line 3603 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 852 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (UNIQUE)");
    YYERROR;
  }
#line 3613 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 857 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-4]), yyscanner, "Table Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3623 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 862 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-6].string_list_);
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-9]), yyscanner, "Table Constraints (FOREIGN KEY)");
    YYERROR;
  }
#line 3635 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 869 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (CHECK)");
    YYERROR;
  }
#line 3645 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 876 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[-2]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3654 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 880 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3663 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 886 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 3671 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 889 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = $1; */
  }
#line 3679 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 894 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = nullptr;
  }
#line 3687 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 897 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = (yyvsp[-1].attribute_list_);
  }
#line 3695 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 902 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_properties_) = nullptr;
  }
#line 3703 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 905 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_properties_) = new quickstep::ParseBlockProperties((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].key_value_list_));
  }
#line 3711 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 910 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.partition_clause_) = nullptr;
  }
#line 3719 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 913 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.partition_clause_) = NULL;
      quickstep_yyerror(&(yylsp[0]), yyscanner, NULL, "NUMBER OF PARTITIONS must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0 || (yyvsp[0].numeric_literal_value_)->long_value() > 64) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.partition_clause_) = NULL;
        quickstep_yyerror(&(yylsp[0]), yyscanner, NULL, "NUMBER OF PARITIONS must be between 1 and 64");
        YYERROR;
      } else {
        (yyval.partition_clause_) = new quickstep::ParsePartitionClause((yylsp[-7]).first_line, (yylsp[-7]).first_column, (yyvsp[-5].string_value_), (yyvsp[-3].string_list_), (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 3741 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 932 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::PartitionSchemeHeader::PartitionType::kHash));
  }
#line 3750 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 936 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::PartitionSchemeHeader::PartitionType::kRange));
  }
#line 3759 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 942 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = new quickstep::PtrList<quickstep::ParseKeyValue>();
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 3768 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 946 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = (yyvsp[-2].key_value_list_);
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 3777 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 952 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_value_);
  }
#line 3785 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 955 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_list_);
  }
#line 3793 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 958 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_) = (yyvsp[0].key_integer_value_);
  }
#line 3801 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 963 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].string_value_));
  }
#line 3809 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 966 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    // This is a special case to handle the COMPRESS ALL option of the BLOCK PROPERTIES.
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_),
        new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, "ALL"));
  }
#line 3819 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 973 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_string_list_) = new quickstep::ParseKeyStringList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 3827 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 978 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.key_integer_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Value must be an integer");
      YYERROR;
    }
    (yyval.key_integer_value_) = new quickstep::ParseKeyIntegerValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].numeric_literal_value_));
  }
#line 3841 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 989 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kBloomFilter));
  }
#line 3850 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 993 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kCSBTree));
  }
#line 3859 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 997 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kSMA));
  }
#line 3868 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1003 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = nullptr;
  }
#line 3876 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1006 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = (yyvsp[-1].key_value_list_);
  }
#line 3884 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1012 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-7].string_value_);
    delete (yyvsp[-5].string_list_);
    delete (yyvsp[-1].literal_value_list_);
    (yyval.insert_statement_) = nullptr;
    NotSupported(&(yylsp[-6]), yyscanner, "list of column names in INSERT statement");
    YYERROR;
  }
#line 3897 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1020 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertTuple((yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-4].string_value_), (yyvsp[-1].literal_value_list_));
  }
#line 3905 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1023 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-3]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), nullptr);
  }
#line 3913 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1026 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-4]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), (yyvsp[-4].with_list_));
  }
#line 3921 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1032 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_statement_) = new quickstep::ParseStatementCopyFrom((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_value_), (yyvsp[0].copy_from_params_));
  }
#line 3929 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1037 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = nullptr;
  }
#line 3937 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1040 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-1].copy_from_params_);
  }
#line 3945 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1045 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 3954 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1049 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 3963 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1053 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 3972 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1057 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 3981 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1063 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.update_statement_) = new quickstep::ParseStatementUpdate((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].assignment_list_), (yyvsp[0].predicate_));
  }
#line 3989 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1068 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.delete_statement_) = new quickstep::ParseStatementDelete((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].predicate_));
  }
#line 3997 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1073 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_list_) = (yyvsp[-2].assignment_list_);
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4006 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1077 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_list_) = new quickstep::PtrList<quickstep::ParseAssignment>();
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4015 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1083 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_) = new quickstep::ParseAssignment((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[0].expression_));
  }
#line 4023 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1089 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_statement_) = new quickstep::ParseStatementSelect((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].select_query_), nullptr);
  }
#line 4031 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1092 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_statement_) = new quickstep::ParseStatementSelect((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].select_query_), (yyvsp[-1].with_list_));
  }
#line 4039 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1097 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = (yyvsp[0].with_list_);
  }
#line 4047 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1102 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = new quickstep::PtrVector<quickstep::ParseSubqueryTableReference>();
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4056 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1106 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = (yyvsp[-2].with_list_);
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4065 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1112 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_element_) = new quickstep::ParseSubqueryTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].subquery_expression_));
    (yyval.with_list_element_)->set_table_reference_signature((yyvsp[-2].table_reference_signature_));
  }
#line 4074 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1119 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_query_) = new quickstep::ParseSelect((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].selection_), (yyvsp[-5].table_reference_list_), (yyvsp[-4].predicate_), (yyvsp[-3].opt_group_by_clause_), (yyvsp[-2].opt_having_clause_), (yyvsp[-1].opt_order_by_clause_), (yyvsp[0].opt_limit_clause_));
  }
#line 4082 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1124 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 4090 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1127 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "ALL in selection");
    YYERROR;
  }
#line 4099 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1131 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "DISTINCT in selection");
    YYERROR;
  }
#line 4108 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1137 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_) = new quickstep::ParseSelectionStar((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 4116 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1140 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_) = (yyvsp[0].selection_list_);
  }
#line 4124 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1145 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_list_) = new quickstep::ParseSelectionList((yylsp[0]).first_line, (yylsp[0]).first_column);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4133 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1149 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_list_) = (yyvsp[-2].selection_list_);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4142 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1155 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[0].string_value_));
  }
#line 4150 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1158 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].expression_), (yyvsp[0].string_value_));
  }
#line 4158 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1161 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].expression_));
  }
#line 4166 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1166 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = (yyvsp[-1].table_reference_list_);
  }
#line 4174 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1171 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 4182 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1174 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 4191 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1180 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[-1]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 4200 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1184 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 4209 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1190 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 4220 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1196 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 4231 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1202 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-5]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 4242 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1208 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 4253 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1214 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-5]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 4264 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1220 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 4275 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1226 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-5]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 4286 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1232 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 4297 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1240 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.subquery_expression_) = new quickstep::ParseSubqueryExpression((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].select_query_));
  }
#line 4305 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1245 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_sample_clause_) = NULL;
  }
#line 4313 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1248 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, true, (yyvsp[-1].numeric_literal_value_));
  }
#line 4321 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1251 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-1].numeric_literal_value_));
  }
#line 4329 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1256 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSubqueryTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].subquery_expression_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4338 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1260 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].opt_sample_clause_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4347 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1264 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].opt_sample_clause_));
  }
#line 4355 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1267 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].function_call_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4364 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1271 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].function_call_));
  }
#line 4372 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1276 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4380 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1279 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4388 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1284 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 4396 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1287 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 4404 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1292 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = new quickstep::PtrList<quickstep::ParseTableReference>();
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4413 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1296 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = (yyvsp[-2].table_reference_list_);
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4422 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1302 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_group_by_clause_) = nullptr;
  }
#line 4430 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1305 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_group_by_clause_) = new quickstep::ParseGroupBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].expression_list_));
  }
#line 4438 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1310 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_having_clause_) = nullptr;
  }
#line 4446 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1313 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_having_clause_) = new quickstep::ParseHaving((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 4454 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1318 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_order_by_clause_) = nullptr;
  }
#line 4462 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1321 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_order_by_clause_) = new quickstep::ParseOrderBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].order_commalist_));
  }
#line 4470 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1326 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_limit_clause_) = nullptr;
  }
#line 4478 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1329 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.opt_limit_clause_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.opt_limit_clause_) = nullptr;
        quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be positive");
        YYERROR;
      } else {
        (yyval.opt_limit_clause_) = new quickstep::ParseLimit((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4500 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1348 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_commalist_) = new quickstep::PtrList<quickstep::ParseOrderByItem>();
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 4509 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1352 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_commalist_) = (yyvsp[-2].order_commalist_);
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 4518 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1358 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_item_) = new quickstep::ParseOrderByItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[-1].order_direction_), (yyvsp[0].order_direction_));
    delete (yyvsp[-1].order_direction_);
    delete (yyvsp[0].order_direction_);
  }
#line 4528 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1365 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 4536 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1368 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 4544 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1371 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 4552 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1376 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 4560 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1379 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 4568 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1382 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 4576 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1388 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = nullptr;
  }
#line 4584 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1391 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4592 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1396 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4600 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1401 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kDisjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateDisjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 4614 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1410 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4622 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1415 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kConjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateConjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 4636 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1424 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4644 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1429 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 4652 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1432 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4660 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1437 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4668 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1440 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line, (yylsp[-4]).first_column,
        new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_)));
  }
#line 4678 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1445 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-2]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 4689 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1451 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 4700 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1457 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateComparison((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].comparison_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4708 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1460 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[-1].predicate_);
  }
#line 4716 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1463 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateExists((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].subquery_expression_));
  }
#line 4724 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1466 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-2].expression_), (yyvsp[0].subquery_expression_));
  }
#line 4732 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1469 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-1].expression_list_));
  }
#line 4740 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1472 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-2]).first_line,
        (yylsp[-2]).first_column,
        new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-3].expression_), (yyvsp[0].subquery_expression_)));
  }
#line 4751 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1478 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line,
        (yylsp[-4]).first_column,
        new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-1].expression_list_)));
  }
#line 4762 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1487 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4770 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1490 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4778 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1495 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4786 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1498 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4794 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1503 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseUnaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].unary_operation_), (yyvsp[0].expression_));
  }
#line 4802 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1506 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4810 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1511 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].attribute_);
  }
#line 4818 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1514 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_));
  }
#line 4826 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1517 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].function_call_);
  }
#line 4834 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1520 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4842 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1523 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4850 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1526 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[-1].expression_);
  }
#line 4858 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1531 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-2].string_value_), new quickstep::PtrList<quickstep::ParseExpression>());
  }
#line 4867 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1535 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), new quickstep::ParseStar((yylsp[-1]).first_line, (yylsp[-1]).first_column));
  }
#line 4876 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1539 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-3]).first_line, (yylsp[-3]).first_column, false, (yyvsp[-3].string_value_), (yyvsp[-1].expression_list_));
  }
#line 4884 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1542 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-4]).first_line, (yylsp[-4]).first_column, true, (yyvsp[-4].string_value_), (yyvsp[-1].expression_list_));
  }
#line 4892 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1547 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseExtractFunction((yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].expression_));
  }
#line 4900 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1552 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseSimpleCaseExpression((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].expression_), (yyvsp[-2].simple_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 4908 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1555 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseSearchedCaseExpression((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].searched_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 4916 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1560 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.simple_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSimpleWhenClause>;
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 4925 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1564 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.simple_when_clause_list_) = (yyvsp[-1].simple_when_clause_list_);
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 4934 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1570 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.simple_when_clause_) = new quickstep::ParseSimpleWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4942 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1575 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.searched_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSearchedWhenClause>;
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 4951 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1579 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.searched_when_clause_list_) = (yyvsp[-1].searched_when_clause_list_);
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 4960 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1585 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.searched_when_clause_) = new quickstep::ParseSearchedWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].predicate_), (yyvsp[0].expression_));
  }
#line 4968 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1590 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = NULL;
  }
#line 4976 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1593 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4984 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1598 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_list_) = new quickstep::PtrList<quickstep::ParseExpression>();
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 4993 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1602 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_list_) = (yyvsp[-2].expression_list_);
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 5002 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1608 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = new quickstep::NullParseLiteralValue((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 5010 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1611 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5018 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1614 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5026 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1617 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * minus character as a 'unary_operation' followed by a numeric literal.
     * Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the parser will prefer to interpret the ambiguous
     * pattern as a negative number literal rather than a unary minus operation
     * applied to a non-negative number literal).
     **/
    (yyvsp[0].numeric_literal_value_)->prependMinus();
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5043 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1629 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_),
                                                nullptr);  // No explicit type.
  }
#line 5052 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1633 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * plain TOKEN_INTERVAL case in 'data_type' reduced and used in the case
     * below. Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the special
     * StringParseLiteralValue::ParseAmbiguousInterval() method will be used to
     * parse the string as either one of the interval types, rather than an
     * error being emitted because of an ambiguous type).
     **/
    quickstep::StringParseLiteralValue *parse_value;
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval((yyvsp[0].string_value_), &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 5076 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1652 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    quickstep::StringParseLiteralValue *parse_value;
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval(&((yyvsp[-1].string_value_)->append(" year", 5)), &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 5091 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1662 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    quickstep::StringParseLiteralValue *parse_value
        = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_), &((yyvsp[-1].data_type_)->getType()));
    delete (yyvsp[-1].data_type_);
    if (!parse_value->tryExplicitTypeParse()) {
      delete parse_value;
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    } else {
      (yyval.literal_value_) = parse_value;
    }
  }
#line 5109 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1677 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_list_) = new quickstep::PtrList<quickstep::ParseScalarLiteral>();
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5118 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1681 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_list_) = (yyvsp[-2].literal_value_list_);
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5127 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1687 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 5135 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1690 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_), (yyvsp[-2].string_value_));
  }
#line 5143 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1695 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = new quickstep::PtrList<quickstep::ParseAttribute>();
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5152 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1699 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = (yyvsp[-2].attribute_list_);
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5161 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1706 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kEqual);
  }
#line 5169 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1709 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotEqual);
  }
#line 5177 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1712 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLess);
  }
#line 5185 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1715 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLessOrEqual);
  }
#line 5193 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1718 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreater);
  }
#line 5201 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1721 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreaterOrEqual);
  }
#line 5209 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1724 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLike);
  }
#line 5217 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1727 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotLike);
  }
#line 5225 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1730 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kRegexMatch);
  }
#line 5233 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1733 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotRegexMatch);
  }
#line 5241 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1738 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * '-' TOKEN_UNSIGNED_NUMVAL case in 'literal_value'. Because Bison prefers
     * to shift rather than reduce, the case in 'literal_value' has precedence
     * over this one.
     **/
    (yyval.unary_operation_) = &quickstep::UnaryOperationFactory::GetUnaryOperation(quickstep::UnaryOperationID::kNegate);
  }
#line 5255 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1749 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kAdd);
  }
#line 5263 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1752 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kSubtract);
  }
#line 5271 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1757 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kModulo);
  }
#line 5279 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1760 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kMultiply);
  }
#line 5287 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1763 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kDivide);
  }
#line 5295 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1769 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_list_) = new quickstep::PtrList<quickstep::ParseString>();
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5304 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1773 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_list_) = (yyvsp[-2].string_list_);
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5313 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1779 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5321 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1782 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].string_value_)->value().empty()) {
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Zero-length identifier");
    }
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5332 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1790 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = true;
  }
#line 5340 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1793 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = true;
  }
#line 5348 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1796 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = false;
  }
#line 5356 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1799 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = false;
  }
#line 5364 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1805 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.command_) = new quickstep::ParseCommand((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].command_argument_list_));
  }
#line 5372 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1810 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    quickstep::PtrVector<quickstep::ParseString> *argument_list = (yyvsp[-1].command_argument_list_);
    argument_list->push_back((yyvsp[0].string_value_));
    (yyval.command_argument_list_) = argument_list;
  }
#line 5382 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1815 "../SqlParser.ypp" /* yacc.c:1646  */
    { /* Epsilon, an empy match. */
    (yyval.command_argument_list_) = new quickstep::PtrVector<quickstep::ParseString>();
  }
#line 5390 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;


#line 5394 "SqlParser_gen.cpp" /* yacc.c:1646  */
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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error"));
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
        yyerror (&yylloc, yyscanner, parsedStatement, yymsgp);
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
                      yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
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
                  yystos[yystate], yyvsp, yylsp, yyscanner, parsedStatement);
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
  yyerror (&yylloc, yyscanner, parsedStatement, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, yyscanner, parsedStatement);
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
#line 1819 "../SqlParser.ypp" /* yacc.c:1906  */


void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature) {
  std::string msg;
  msg.append(feature);
  msg.append(" is not supported yet");

  quickstep_yyerror(location, yyscanner, nullptr, msg.c_str());
}

int quickstep_yyget_line_number(const YYLTYPE *yyloc) {
  return yyloc->first_line;
}

int quickstep_yyget_column_number(const YYLTYPE *yyloc) {
  return yyloc->first_column;
}
