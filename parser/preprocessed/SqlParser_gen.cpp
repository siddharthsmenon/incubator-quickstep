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
#include "parser/ParseJoinedTableReference.hpp"
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

#line 154 "SqlParser_gen.cpp" /* yacc.c:339  */

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
    TOKEN_BITWEAVING = 285,
    TOKEN_BLOCKPROPERTIES = 286,
    TOKEN_BLOCKSAMPLE = 287,
    TOKEN_BLOOM_FILTER = 288,
    TOKEN_CSB_TREE = 289,
    TOKEN_BY = 290,
    TOKEN_CASE = 291,
    TOKEN_CHARACTER = 292,
    TOKEN_CHECK = 293,
    TOKEN_COLUMN = 294,
    TOKEN_CONSTRAINT = 295,
    TOKEN_COPY = 296,
    TOKEN_CREATE = 297,
    TOKEN_DATE = 298,
    TOKEN_DATETIME = 299,
    TOKEN_DAY = 300,
    TOKEN_DECIMAL = 301,
    TOKEN_DEFAULT = 302,
    TOKEN_DELETE = 303,
    TOKEN_DELIMITER = 304,
    TOKEN_DESC = 305,
    TOKEN_DISTINCT = 306,
    TOKEN_DOUBLE = 307,
    TOKEN_DROP = 308,
    TOKEN_ELSE = 309,
    TOKEN_END = 310,
    TOKEN_ESCAPE_STRINGS = 311,
    TOKEN_EXISTS = 312,
    TOKEN_EXTRACT = 313,
    TOKEN_FALSE = 314,
    TOKEN_FIRST = 315,
    TOKEN_FLOAT = 316,
    TOKEN_FOREIGN = 317,
    TOKEN_FROM = 318,
    TOKEN_FULL = 319,
    TOKEN_GROUP = 320,
    TOKEN_HASH = 321,
    TOKEN_HAVING = 322,
    TOKEN_HOUR = 323,
    TOKEN_IN = 324,
    TOKEN_INDEX = 325,
    TOKEN_INNER = 326,
    TOKEN_INSERT = 327,
    TOKEN_INTEGER = 328,
    TOKEN_INTERVAL = 329,
    TOKEN_INTO = 330,
    TOKEN_JOIN = 331,
    TOKEN_KEY = 332,
    TOKEN_LAST = 333,
    TOKEN_LEFT = 334,
    TOKEN_LIMIT = 335,
    TOKEN_LONG = 336,
    TOKEN_MINUTE = 337,
    TOKEN_MONTH = 338,
    TOKEN_NULL = 339,
    TOKEN_NULLS = 340,
    TOKEN_OFF = 341,
    TOKEN_ON = 342,
    TOKEN_ORDER = 343,
    TOKEN_OUTER = 344,
    TOKEN_PARTITION = 345,
    TOKEN_PARTITIONS = 346,
    TOKEN_PERCENT = 347,
    TOKEN_PRIMARY = 348,
    TOKEN_QUIT = 349,
    TOKEN_RANGE = 350,
    TOKEN_REAL = 351,
    TOKEN_REFERENCES = 352,
    TOKEN_RIGHT = 353,
    TOKEN_ROW_DELIMITER = 354,
    TOKEN_SECOND = 355,
    TOKEN_SELECT = 356,
    TOKEN_SET = 357,
    TOKEN_SMA = 358,
    TOKEN_SMALLINT = 359,
    TOKEN_TABLE = 360,
    TOKEN_THEN = 361,
    TOKEN_TIME = 362,
    TOKEN_TIMESTAMP = 363,
    TOKEN_TRUE = 364,
    TOKEN_TUPLESAMPLE = 365,
    TOKEN_UNIQUE = 366,
    TOKEN_UPDATE = 367,
    TOKEN_USING = 368,
    TOKEN_VALUES = 369,
    TOKEN_VARCHAR = 370,
    TOKEN_WHEN = 371,
    TOKEN_WHERE = 372,
    TOKEN_WITH = 373,
    TOKEN_YEAR = 374,
    TOKEN_YEARMONTH = 375,
    TOKEN_EOF = 376,
    TOKEN_LEX_ERROR = 377
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 118 "../SqlParser.ypp" /* yacc.c:355  */

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

  quickstep::ParseJoinedTableReference::JoinType join_type_;

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

#line 409 "SqlParser_gen.cpp" /* yacc.c:355  */
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
#line 210 "../SqlParser.ypp" /* yacc.c:358  */

/* This header needs YYSTYPE, which is defined by the %union directive above */
#include "SqlLexer_gen.hpp"
void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature);

#line 442 "SqlParser_gen.cpp" /* yacc.c:358  */

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
#define YYLAST   1094

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  134
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  261
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  477

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   377

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     129,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   133,     2,     2,
     130,   131,    23,    21,   132,    22,    27,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   128,
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
     120,   121,   122,   123,   124,   125,   126,   127
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   582,   582,   586,   590,   594,   598,   601,   608,   611,
     614,   617,   620,   623,   626,   629,   632,   635,   641,   647,
     654,   660,   667,   676,   681,   690,   695,   700,   704,   710,
     715,   718,   721,   726,   729,   732,   735,   738,   741,   744,
     747,   750,   753,   765,   768,   771,   789,   809,   812,   815,
     820,   825,   831,   837,   846,   850,   856,   859,   864,   869,
     874,   881,   888,   892,   898,   901,   906,   909,   914,   917,
     922,   925,   944,   948,   954,   958,   964,   967,   970,   975,
     978,   985,   990,  1001,  1006,  1010,  1014,  1020,  1023,  1029,
    1037,  1040,  1043,  1049,  1054,  1057,  1062,  1066,  1070,  1074,
    1080,  1085,  1090,  1094,  1100,  1106,  1109,  1114,  1119,  1123,
    1129,  1135,  1141,  1144,  1148,  1154,  1157,  1162,  1166,  1172,
    1175,  1178,  1183,  1188,  1193,  1196,  1199,  1204,  1207,  1210,
    1213,  1216,  1219,  1222,  1225,  1230,  1233,  1238,  1242,  1246,
    1249,  1253,  1256,  1261,  1264,  1269,  1272,  1277,  1281,  1287,
    1290,  1295,  1298,  1303,  1306,  1311,  1314,  1333,  1337,  1343,
    1350,  1353,  1356,  1361,  1364,  1367,  1373,  1376,  1381,  1386,
    1395,  1400,  1409,  1414,  1417,  1422,  1425,  1430,  1436,  1442,
    1445,  1448,  1451,  1454,  1457,  1463,  1472,  1475,  1480,  1483,
    1488,  1491,  1496,  1499,  1502,  1505,  1508,  1511,  1516,  1520,
    1524,  1527,  1532,  1537,  1540,  1545,  1549,  1555,  1560,  1564,
    1570,  1575,  1578,  1583,  1587,  1593,  1596,  1599,  1602,  1614,
    1618,  1637,  1650,  1665,  1668,  1671,  1674,  1677,  1680,  1685,
    1689,  1695,  1698,  1703,  1707,  1714,  1717,  1720,  1723,  1726,
    1729,  1732,  1735,  1738,  1741,  1746,  1757,  1760,  1765,  1768,
    1771,  1777,  1781,  1787,  1790,  1798,  1801,  1804,  1807,  1813,
    1818,  1823
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
  "TOKEN_BIGINT", "TOKEN_BIT", "TOKEN_BITWEAVING", "TOKEN_BLOCKPROPERTIES",
  "TOKEN_BLOCKSAMPLE", "TOKEN_BLOOM_FILTER", "TOKEN_CSB_TREE", "TOKEN_BY",
  "TOKEN_CASE", "TOKEN_CHARACTER", "TOKEN_CHECK", "TOKEN_COLUMN",
  "TOKEN_CONSTRAINT", "TOKEN_COPY", "TOKEN_CREATE", "TOKEN_DATE",
  "TOKEN_DATETIME", "TOKEN_DAY", "TOKEN_DECIMAL", "TOKEN_DEFAULT",
  "TOKEN_DELETE", "TOKEN_DELIMITER", "TOKEN_DESC", "TOKEN_DISTINCT",
  "TOKEN_DOUBLE", "TOKEN_DROP", "TOKEN_ELSE", "TOKEN_END",
  "TOKEN_ESCAPE_STRINGS", "TOKEN_EXISTS", "TOKEN_EXTRACT", "TOKEN_FALSE",
  "TOKEN_FIRST", "TOKEN_FLOAT", "TOKEN_FOREIGN", "TOKEN_FROM",
  "TOKEN_FULL", "TOKEN_GROUP", "TOKEN_HASH", "TOKEN_HAVING", "TOKEN_HOUR",
  "TOKEN_IN", "TOKEN_INDEX", "TOKEN_INNER", "TOKEN_INSERT",
  "TOKEN_INTEGER", "TOKEN_INTERVAL", "TOKEN_INTO", "TOKEN_JOIN",
  "TOKEN_KEY", "TOKEN_LAST", "TOKEN_LEFT", "TOKEN_LIMIT", "TOKEN_LONG",
  "TOKEN_MINUTE", "TOKEN_MONTH", "TOKEN_NULL", "TOKEN_NULLS", "TOKEN_OFF",
  "TOKEN_ON", "TOKEN_ORDER", "TOKEN_OUTER", "TOKEN_PARTITION",
  "TOKEN_PARTITIONS", "TOKEN_PERCENT", "TOKEN_PRIMARY", "TOKEN_QUIT",
  "TOKEN_RANGE", "TOKEN_REAL", "TOKEN_REFERENCES", "TOKEN_RIGHT",
  "TOKEN_ROW_DELIMITER", "TOKEN_SECOND", "TOKEN_SELECT", "TOKEN_SET",
  "TOKEN_SMA", "TOKEN_SMALLINT", "TOKEN_TABLE", "TOKEN_THEN", "TOKEN_TIME",
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
  "subquery_expression", "opt_sample_clause", "join_type",
  "joined_table_reference", "table_reference", "table_reference_signature",
  "table_reference_signature_primary", "joined_table_reference_commalist",
  "opt_group_by_clause", "opt_having_clause", "opt_order_by_clause",
  "opt_limit_clause", "order_commalist", "order_item",
  "opt_order_direction", "opt_nulls_first", "opt_where_clause",
  "where_clause", "or_expression", "and_expression", "not_expression",
  "predicate_expression_base", "add_expression", "multiply_expression",
  "unary_expression", "expression_base", "function_call",
  "extract_function", "case_expression", "simple_when_clause_list",
  "simple_when_clause", "searched_when_clause_list",
  "searched_when_clause", "opt_else_clause", "expression_list",
  "literal_value", "datetime_unit", "literal_value_commalist",
  "attribute_ref", "attribute_ref_list", "comparison_operation",
  "unary_operation", "add_operation", "multiply_operation",
  "name_commalist", "any_name", "boolean_value", "command",
  "command_argument_list", YY_NULLPTR
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
     370,   371,   372,   373,   374,   375,   376,   377,    59,    10,
      40,    41,    44,    37
};
# endif

#define YYPACT_NINF -228

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-228)))

#define YYTABLE_NINF -128

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     263,  -228,  -228,   -49,   209,   -24,     2,   -35,     7,  -228,
      56,   209,   209,  -228,    79,    95,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,   -12,  -228,    77,   123,
     209,  -228,  -228,    30,   209,   209,   209,   209,   209,  -228,
    -228,   464,    -3,    33,  -228,   108,    38,  -228,  -228,  -228,
      99,  -228,  -228,  -228,  -228,    39,   178,   110,    78,   104,
    -228,    65,  -228,  -228,   210,   228,  -228,  -228,  -228,   530,
     112,  -228,   161,  -228,  -228,   115,  -228,  -228,   251,  -228,
    -228,  -228,  -228,  -228,  -228,   137,   190,   728,   265,   204,
     144,  -228,   237,    22,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,   794,     0,   209,   209,   160,   209,   209,   129,   189,
     173,   209,   209,   371,  -228,  -228,   164,   209,  -228,  -228,
    -228,   371,    27,   -39,  -228,   291,  -228,   113,   113,   300,
    -228,    -7,  -228,    34,   104,   728,  -228,  -228,   209,   728,
    -228,  -228,  -228,  -228,   728,   228,  -228,   209,   278,    44,
    -228,   307,  -228,   222,  -228,   -10,  -228,   222,   209,    17,
     209,   209,   202,  -228,   217,  -228,   116,   943,   596,   160,
     371,   331,   345,  -228,  -228,  1020,   335,   895,   118,    48,
     728,    -1,  -228,   728,  -228,   298,   229,  -228,  -228,  -228,
    -228,  -228,  -228,   295,  -228,   234,  -228,    19,    70,   -22,
    -228,   227,    70,   -19,   296,  -228,  -228,    22,  -228,  -228,
     239,   728,  -228,   230,   122,   209,  -228,   728,   240,  -228,
     209,  -228,  -228,   238,   290,   292,   243,  -228,  -228,  -228,
     138,   209,   266,    17,   209,  -228,    80,  -228,  -228,     4,
     875,   371,   371,   172,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,   728,   253,   728,    25,  -228,   131,   275,   728,
      31,  -228,   325,   230,  -228,  -228,   728,  -228,   101,   209,
    -228,  -228,   301,  -228,   302,   303,   318,    34,  -228,   394,
     395,    70,   366,   338,  -228,   143,  -228,   728,  -228,   230,
    -228,  -228,   371,   281,   284,   209,   410,   -23,   147,  -228,
     149,   389,    54,  -228,   285,   306,  -228,   329,   293,   895,
    -228,   339,   209,  -228,  -228,    80,  -228,  -228,   345,  -228,
    -228,  -228,   728,   294,   188,   662,  -228,   230,   341,  -228,
    -228,   895,   305,   230,   728,  -228,    21,  -228,  -228,  -228,
    -228,  -228,    34,   -22,   334,   343,  -228,   728,   371,   349,
    -228,   230,    16,   209,   209,   155,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,   151,  -228,   209,  -228,  -228,  -228,  -228,
     308,    17,   396,   348,  -228,   371,  -228,  -228,   315,  -228,
     198,   662,  -228,   728,   157,  -228,  -228,   895,   230,  -228,
     344,  -228,  -228,   314,   331,   407,   363,  -228,   171,   174,
    -228,   446,   -23,  -228,   209,  -228,  -228,   322,   413,  -228,
      20,   209,   728,   183,   230,  -228,   191,   371,   728,   447,
    -228,   353,  -228,  -228,  -228,   193,  -228,  -228,  -228,  -228,
      15,   209,    46,  -228,   327,   230,  -228,  -228,   331,   324,
    -228,    51,  -228,   209,  -228,   209,  -228,  -228,   209,  -228,
     199,  -228,  -228,   332,  -228,   728,  -228,  -228,   374,   336,
    -228,   205,  -228,   209,  -228,    45,  -228,   209,  -228,   211,
    -228,  -228,   214,   365,  -228,   458,  -228
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     6,   261,     0,     0,     0,     0,     0,     0,    18,
     112,     0,     0,     7,     0,     0,    15,     8,    10,    11,
      13,    14,     9,    17,    12,    16,     0,   105,     0,   259,
       0,   253,   254,     0,     0,     0,     0,     0,     0,   113,
     114,     0,     0,   107,   108,     0,   145,     1,     3,     2,
       0,   106,     5,     4,   260,     0,     0,     0,     0,   166,
      25,     0,   219,   216,     0,   245,   115,    40,    29,     0,
       0,    30,    31,    34,    36,     0,    37,    39,     0,    41,
     215,    35,    38,    32,    33,     0,     0,     0,     0,     0,
     116,   117,   121,   187,   189,   191,   194,   195,   196,   193,
     192,     0,   231,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,     0,   101,   167,     0,     0,    91,   217,
     218,     0,     0,   211,   208,     0,    43,     0,   220,     0,
      44,     0,   222,     0,   166,     0,   246,   247,     0,     0,
     120,   249,   250,   248,     0,     0,   190,     0,     0,   166,
     103,     0,   109,     0,   110,     0,   251,     0,     0,     0,
       0,     0,     0,    93,    66,    27,     0,     0,     0,     0,
       0,   168,   170,   172,   174,     0,   192,     0,     0,     0,
       0,   211,   205,     0,   209,     0,     0,   225,   226,   227,
     224,   228,   223,     0,   221,     0,   197,     0,     0,   147,
     136,   122,   141,   124,   149,   118,   119,   186,   188,   232,
       0,     0,   198,   213,     0,     0,   100,     0,     0,   146,
       0,    92,    19,     0,     0,     0,     0,    20,    21,    22,
       0,     0,     0,    64,     0,    42,    56,   173,   181,     0,
       0,     0,     0,     0,   235,   237,   238,   239,   240,   236,
     241,   243,     0,     0,     0,     0,   229,     0,     0,     0,
       0,   206,     0,   212,   204,    45,     0,    46,   127,     0,
     137,   143,   133,   128,   129,   131,     0,     0,   140,     0,
       0,   139,     0,   151,   199,     0,   200,     0,   102,   104,
     123,   252,     0,     0,     0,     0,     0,     0,     0,   233,
       0,   231,     0,    63,    65,    68,    28,     0,     0,     0,
      47,     0,     0,    49,    55,    57,    26,   180,   169,   171,
     242,   244,     0,     0,     0,     0,   182,   179,     0,   178,
      90,     0,     0,   210,     0,   203,     0,   142,   144,   134,
     130,   132,     0,   148,     0,     0,   138,     0,     0,   153,
     201,   214,     0,     0,     0,     0,    96,   257,   258,   256,
     255,    97,    95,     0,    67,     0,    83,    84,    85,    86,
      87,     0,     0,    70,    48,     0,    51,    50,     0,    54,
       0,     0,   184,     0,     0,   177,   230,     0,   207,   202,
       0,   125,   126,   150,   152,     0,   155,    61,     0,     0,
      58,     0,     0,   234,     0,    24,    62,     0,     0,    23,
       0,     0,     0,     0,   175,   183,     0,     0,     0,     0,
     111,     0,    59,    98,    99,     0,    74,    76,    77,    78,
       0,     0,     0,    52,     0,   176,   185,    89,   135,   154,
     157,   160,   156,     0,    88,     0,    82,    80,     0,    79,
       0,    72,    73,     0,    53,     0,   161,   162,   163,     0,
      75,     0,    69,     0,   158,     0,   159,     0,    81,     0,
     164,   165,     0,     0,    60,     0,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -103,  -228,
     309,   152,  -228,  -228,  -227,  -228,  -228,  -228,  -228,  -228,
    -228,    42,    29,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,   260,  -228,  -228,  -228,   373,
      10,  -228,  -228,  -228,   346,  -228,   -92,  -228,  -228,  -168,
     136,  -165,    -9,  -228,  -228,  -228,  -228,  -228,  -228,    24,
    -228,  -228,   -71,  -228,  -120,   241,   246,   321,   -30,   351,
     350,   391,  -117,  -228,  -228,  -228,   312,  -228,   372,   319,
    -206,  -173,   375,   117,  -104,  -228,  -228,  -228,  -228,  -228,
    -115,    -4,    97,  -228,  -228
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,   165,   166,
      88,   314,   315,   316,   227,   304,   305,   232,   373,   409,
     453,   425,   426,   427,   428,   429,   370,   405,    21,    22,
     163,   298,    23,    24,   149,   150,    25,    26,    43,    44,
     218,    41,    89,    90,    91,   134,   198,   281,   276,   199,
     200,   270,   271,   201,   283,   349,   396,   420,   439,   440,
     458,   466,   114,   115,   171,   172,   173,   174,   175,    93,
      94,    95,    96,    97,    98,   181,   182,   123,   124,   185,
     214,    99,   193,   257,   100,   300,   254,   101,   139,   144,
     155,   102,   361,    28,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   179,   178,    45,   256,   285,   303,    42,    46,   176,
      27,    92,   241,   154,   136,   137,   202,   176,   279,    31,
     183,    32,   446,    31,   241,    32,    55,   147,   241,   268,
      57,    58,    59,    60,    61,   328,    51,   278,    31,   122,
      32,   357,   136,   137,   447,   141,   142,   272,   136,   137,
     239,    34,   136,   137,   273,   222,   241,   131,   183,  -127,
     223,    30,   274,   204,   176,    50,   176,   108,   358,   359,
      36,   118,   136,   137,    31,    37,    32,   238,   216,    47,
     202,   275,   121,   456,   224,    39,    35,    38,   140,   366,
     307,   360,   367,   368,    10,    45,   280,   109,    56,   151,
      46,   269,   156,   157,   103,    92,   457,   164,   167,   343,
     470,   148,    40,   156,   329,   225,   346,   451,   213,   384,
     180,   219,   220,   308,   196,    10,    54,   299,   471,   203,
     148,   306,   309,   226,   206,   317,   376,   176,   176,   105,
     240,   393,   334,   209,   406,   448,   452,   397,   180,   197,
     260,   433,   389,   263,   167,   143,   228,   229,   386,   259,
     202,   326,   369,   187,   197,   104,   113,   221,   106,   310,
     272,    10,   352,   158,   159,   413,   215,   273,   311,   107,
     355,   213,   312,   110,   116,   274,   188,   289,   176,   320,
     321,   322,   296,   203,    46,   117,   313,   383,    46,   297,
     189,   190,   111,    52,   275,   401,    53,   412,   112,   136,
     137,   151,   402,    31,   256,    32,   291,   119,   191,   136,
     137,    48,   324,    49,   327,   202,   113,   301,   394,   333,
     167,   382,   337,   160,   161,   120,   336,   192,   398,   399,
     126,    31,   125,    32,   176,   127,   323,   233,   234,   258,
     220,   136,   137,   286,   287,   410,   128,   351,   136,   137,
     338,   403,   330,   331,     1,    46,     2,   129,   138,   130,
     132,   176,   133,   203,   350,   287,   135,    46,   362,   363,
     364,   365,    31,    62,    32,    63,   400,   220,   415,   287,
     153,   156,   380,     3,   177,   213,   162,   438,   186,    64,
      65,   210,   421,   220,   388,   422,   220,   195,   378,     4,
       5,    67,    68,   176,   436,   287,     6,   213,   217,    69,
      70,     7,   437,   331,   444,   445,    71,    72,    10,    73,
     462,   445,   230,   461,   211,    74,   468,   220,   203,   241,
       8,    75,   473,   220,    76,   474,   220,   231,   469,   156,
     156,   213,   472,   414,   242,   255,    77,    78,   264,   277,
     265,   301,     9,   266,    79,   267,   282,    80,   292,    10,
     284,   290,   293,   295,   294,    31,    62,    32,    63,    81,
      11,   168,   435,   325,   302,   335,    12,    82,   441,    13,
      83,    84,    64,    65,   332,   339,   340,   341,    85,   342,
     430,   344,   345,    86,    67,    68,   347,   434,    87,   212,
     348,   353,    69,    70,   354,   356,   147,   371,   374,    71,
      72,   377,    73,   375,   381,   441,   449,   430,    74,   372,
     385,   391,   407,   169,    75,   387,   417,    76,   404,   459,
     392,   430,   395,   408,   156,   411,   287,   418,   419,    77,
      78,   423,   431,   432,   442,   443,   455,    79,   454,   156,
      80,   475,   463,   156,   465,   476,   467,   379,    31,    62,
      32,    63,    81,   450,   460,   288,   236,   152,   390,   464,
      82,   205,   318,    83,    84,    64,    65,    66,   319,   237,
     207,    85,   146,   261,   208,   184,    86,    67,    68,   424,
     262,   170,     0,   194,   416,    69,    70,     0,     0,     0,
       0,     0,    71,    72,     0,    73,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,     0,    75,     0,     0,
      76,     0,     0,     0,    31,    62,    32,    63,     0,     0,
       0,     0,    77,    78,     0,     0,     0,     0,     0,     0,
      79,    64,    65,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    81,     0,     0,     0,     0,
       0,    69,    70,    82,     0,     0,    83,    84,    71,    72,
       0,    73,     0,     0,    85,     0,     0,    74,     0,    86,
       0,     0,     0,    75,    87,     0,    76,     0,     0,     0,
      31,    62,    32,    63,     0,     0,     0,     0,    77,    78,
       0,     0,     0,     0,     0,     0,    79,    64,    65,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    81,     0,     0,     0,     0,     0,    69,    70,    82,
       0,     0,    83,    84,    71,    72,     0,    73,     0,     0,
      85,   121,     0,    74,     0,    86,     0,     0,   169,    75,
      87,     0,    76,     0,     0,     0,    31,    62,    32,    63,
       0,     0,     0,     0,    77,    78,     0,     0,     0,     0,
       0,     0,    79,    64,    65,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    81,     0,     0,
       0,     0,     0,    69,    70,    82,     0,     0,    83,    84,
      71,    72,     0,    73,     0,     0,    85,     0,     0,    74,
       0,    86,     0,     0,     0,    75,   170,     0,    76,     0,
       0,     0,    31,    62,    32,    63,     0,     0,     0,     0,
      77,    78,     0,     0,     0,     0,     0,     0,    79,    64,
      65,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    81,     0,     0,     0,     0,    10,    69,
      70,    82,     0,     0,    83,    84,    71,    72,     0,    73,
       0,     0,    85,     0,     0,    74,     0,    86,     0,     0,
       0,    75,    87,     0,    76,     0,     0,     0,    31,    62,
      32,    63,     0,     0,     0,     0,    77,    78,     0,     0,
       0,     0,     0,     0,    79,    64,   145,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    81,
       0,     0,     0,     0,     0,    69,    70,    82,     0,     0,
      83,    84,    71,    72,     0,    73,     0,     0,    85,     0,
       0,    74,     0,    86,     0,     0,     0,    75,    87,     0,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,     0,     0,     0,     0,     0,     0,
      79,     0,     0,    80,     0,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,    81,   136,   137,     0,     0,
      62,     0,    63,    82,     0,     0,    83,    84,     0,     0,
       0,     0,     0,     0,    85,     0,    64,   145,     0,    86,
       0,     0,     0,     0,    87,     0,     0,     0,    67,    68,
       0,     0,     0,     0,     0,     0,     0,    70,     0,     0,
       0,     0,     0,    71,    72,     0,    73,     0,     0,   253,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    78,     0,    67,    68,     0,     0,
       0,    79,     0,     0,    80,    70,     0,     0,     0,     0,
       0,    71,    72,     0,    73,     0,    81,     0,     0,     0,
      74,     0,     0,     0,    82,     0,   196,    83,    84,    76,
       0,     0,     0,     0,     0,    85,     0,     0,     0,     0,
      86,    77,   235,     0,     0,     0,     0,     0,     0,    79,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
       0,   136,   137,     0,    81,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,    83,    84,     0,     0,     0,
       0,     0,     0,    85,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253
};

static const yytype_int16 yycheck[] =
{
       4,   121,   117,    12,   177,   211,   233,    11,    12,   113,
       0,    41,     8,   105,    21,    22,   133,   121,    37,     4,
      59,     6,     7,     4,     8,     6,    30,    27,     8,   197,
      34,    35,    36,    37,    38,    10,    26,   202,     4,    69,
       6,    64,    21,    22,    29,    23,    24,    69,    21,    22,
     170,    75,    21,    22,    76,   158,     8,    87,    59,    81,
      43,   110,    84,   134,   168,    77,   170,    28,    91,    92,
      68,    61,    21,    22,     4,   110,     6,   169,   149,     0,
     197,   103,   121,    32,    67,    29,   110,    80,    92,    35,
      10,   114,    38,    39,   106,   104,   115,    58,    68,   103,
     104,    31,   106,   107,   107,   135,    55,   111,   112,   277,
      65,   130,    56,   117,    89,    98,   281,    71,   148,   325,
     121,   131,   132,    43,   131,   106,     3,   231,    83,   133,
     130,   234,    52,   116,   138,   131,   309,   241,   242,    31,
     170,   347,   111,   147,   371,   130,   100,   131,   121,   130,
     180,   131,   131,   183,   158,   133,   160,   161,   331,   111,
     277,   253,   108,    50,   130,   132,   122,   157,   130,    89,
      69,   106,   292,    44,    45,   381,   132,    76,    98,    80,
     295,   211,   102,     5,   119,    84,    73,   217,   292,    17,
      18,    19,    54,   197,   198,   130,   116,     9,   202,    61,
      87,    88,    92,   126,   103,    54,   129,     9,   130,    21,
      22,   215,    61,     4,   387,     6,   220,     7,   105,    21,
      22,   126,   252,   128,   254,   342,   122,   231,   348,   259,
     234,   323,   131,    44,    45,     7,   266,   124,   353,   354,
      79,     4,   130,     6,   348,   130,    74,   131,   132,   131,
     132,    21,    22,   131,   132,   375,     5,   287,    21,    22,
     269,   365,   131,   132,     1,   269,     3,   130,    31,    79,
       5,   375,    68,   277,   131,   132,   132,   281,   131,   132,
     131,   132,     4,     5,     6,     7,   131,   132,   131,   132,
     130,   295,   322,    30,   130,   325,   123,   417,     7,    21,
      22,    23,   131,   132,   334,   131,   132,     7,   312,    46,
      47,    33,    34,   417,   131,   132,    53,   347,    11,    41,
      42,    58,   131,   132,   131,   132,    48,    49,   106,    51,
     131,   132,   130,   448,    56,    57,   131,   132,   342,     8,
      77,    63,   131,   132,    66,   131,   132,   130,   463,   353,
     354,   381,   467,   383,     9,    20,    78,    79,    60,   132,
     131,   365,    99,    68,    86,   131,    70,    89,   130,   106,
     131,   131,    82,   130,    82,     4,     5,     6,     7,   101,
     117,    10,   412,   130,   118,    60,   123,   109,   418,   126,
     112,   113,    21,    22,   119,    94,    94,    94,   120,    81,
     404,     7,     7,   125,    33,    34,    40,   411,   130,   131,
      72,   130,    41,    42,   130,     5,    27,   132,    89,    48,
      49,    82,    51,   130,   130,   455,   430,   431,    57,   123,
      89,    97,    36,    62,    63,   130,    92,    66,   130,   443,
      97,   445,    93,    95,   448,   130,   132,    40,    85,    78,
      79,     5,   130,    40,     7,   102,   132,    86,   131,   463,
      89,    96,   130,   467,    90,     7,   130,   315,     4,     5,
       6,     7,   101,   431,   445,   215,   167,   104,   342,   455,
     109,   135,   241,   112,   113,    21,    22,    23,   242,   168,
     139,   120,   101,   181,   144,   123,   125,    33,    34,   402,
     181,   130,    -1,   128,   387,    41,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    -1,    -1,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    21,    22,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,   101,    -1,    -1,    -1,    -1,
      -1,    41,    42,   109,    -1,    -1,   112,   113,    48,    49,
      -1,    51,    -1,    -1,   120,    -1,    -1,    57,    -1,   125,
      -1,    -1,    -1,    63,   130,    -1,    66,    -1,    -1,    -1,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    21,    22,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,   101,    -1,    -1,    -1,    -1,    -1,    41,    42,   109,
      -1,    -1,   112,   113,    48,    49,    -1,    51,    -1,    -1,
     120,   121,    -1,    57,    -1,   125,    -1,    -1,    62,    63,
     130,    -1,    66,    -1,    -1,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    21,    22,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,   101,    -1,    -1,
      -1,    -1,    -1,    41,    42,   109,    -1,    -1,   112,   113,
      48,    49,    -1,    51,    -1,    -1,   120,    -1,    -1,    57,
      -1,   125,    -1,    -1,    -1,    63,   130,    -1,    66,    -1,
      -1,    -1,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    21,
      22,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,   101,    -1,    -1,    -1,    -1,   106,    41,
      42,   109,    -1,    -1,   112,   113,    48,    49,    -1,    51,
      -1,    -1,   120,    -1,    -1,    57,    -1,   125,    -1,    -1,
      -1,    63,   130,    -1,    66,    -1,    -1,    -1,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    21,    22,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,   101,
      -1,    -1,    -1,    -1,    -1,    41,    42,   109,    -1,    -1,
     112,   113,    48,    49,    -1,    51,    -1,    -1,   120,    -1,
      -1,    57,    -1,   125,    -1,    -1,    -1,    63,   130,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    89,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   101,    21,    22,    -1,    -1,
       5,    -1,     7,   109,    -1,    -1,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    21,    22,    -1,   125,
      -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,    74,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    -1,    33,    34,    -1,    -1,
      -1,    86,    -1,    -1,    89,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    51,    -1,   101,    -1,    -1,    -1,
      57,    -1,    -1,    -1,   109,    -1,   131,   112,   113,    66,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
     125,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    30,    46,    47,    53,    58,    77,    99,
     106,   117,   123,   126,   135,   136,   137,   138,   139,   140,
     141,   162,   163,   166,   167,   170,   171,   174,   227,   228,
     110,     4,     6,   225,    75,   110,    68,   110,    80,    29,
      56,   175,   225,   172,   173,   186,   225,     0,   126,   128,
      77,   174,   126,   129,     3,   225,    68,   225,   225,   225,
     225,   225,     5,     7,    21,    22,    23,    33,    34,    41,
      42,    48,    49,    51,    57,    63,    66,    78,    79,    86,
      89,   101,   109,   112,   113,   120,   125,   130,   144,   176,
     177,   178,   202,   203,   204,   205,   206,   207,   208,   215,
     218,   221,   225,   107,   132,    31,   130,    80,    28,    58,
       5,    92,   130,   122,   196,   197,   119,   130,   174,     7,
       7,   121,   202,   211,   212,   130,    79,   130,     5,   130,
      79,   202,     5,    68,   179,   132,    21,    22,    31,   222,
     225,    23,    24,   133,   223,    22,   205,    27,   130,   168,
     169,   225,   173,   130,   180,   224,   225,   225,    44,    45,
      44,    45,   123,   164,   225,   142,   143,   225,    10,    62,
     130,   198,   199,   200,   201,   202,   218,   130,   224,   198,
     121,   209,   210,    59,   212,   213,     7,    50,    73,    87,
      88,   105,   124,   216,   216,     7,   131,   130,   180,   183,
     184,   187,   206,   225,   196,   178,   225,   203,   204,   225,
      23,    56,   131,   202,   214,   132,   196,    11,   174,   131,
     132,   174,   142,    43,    67,    98,   116,   148,   225,   225,
     130,   130,   151,   131,   132,    79,   144,   201,   180,   198,
     202,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    74,   220,    20,   215,   217,   131,   111,
     202,   210,   213,   202,    60,   131,    68,   131,   183,    31,
     185,   186,    69,    76,    84,   103,   182,   132,   185,    37,
     115,   181,    70,   188,   131,   214,   131,   132,   169,   202,
     131,   225,   130,    82,    82,   130,    54,    61,   165,   218,
     219,   225,   118,   148,   149,   150,   142,    10,    43,    52,
      89,    98,   102,   116,   145,   146,   147,   131,   199,   200,
      17,    18,    19,    74,   202,   130,   180,   202,    10,    89,
     131,   132,   119,   202,   111,    60,   202,   131,   186,    94,
      94,    94,    81,   183,     7,     7,   185,    40,    72,   189,
     131,   202,   198,   130,   130,   224,     5,    64,    91,    92,
     114,   226,   131,   132,   131,   132,    35,    38,    39,   108,
     160,   132,   123,   152,    89,   130,   215,    82,   225,   145,
     202,   130,   180,     9,   214,    89,   215,   130,   202,   131,
     184,    97,    97,   214,   198,    93,   190,   131,   224,   224,
     131,    54,    61,   218,   130,   161,   148,    36,    95,   153,
     198,   130,     9,   214,   202,   131,   217,    92,    40,    85,
     191,   131,   131,     5,   226,   155,   156,   157,   158,   159,
     225,   130,    40,   131,   225,   202,   131,   131,   198,   192,
     193,   202,     7,   102,   131,   132,     7,    29,   130,   225,
     155,    71,   100,   154,   131,   132,    32,    55,   194,   225,
     156,   224,   131,   130,   193,    90,   195,   130,   131,   224,
      65,    83,   224,   131,   131,    96,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   134,   135,   135,   135,   135,   135,   135,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   137,   138,
     138,   138,   138,   139,   140,   141,   142,   143,   143,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   145,   145,   145,
     145,   145,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   156,   157,
     157,   158,   159,   160,   160,   160,   160,   161,   161,   162,
     162,   162,   162,   163,   164,   164,   165,   165,   165,   165,
     166,   167,   168,   168,   169,   170,   170,   171,   172,   172,
     173,   174,   175,   175,   175,   176,   176,   177,   177,   178,
     178,   178,   179,   180,   181,   181,   181,   182,   182,   182,
     182,   182,   182,   182,   182,   183,   183,   184,   184,   184,
     184,   184,   184,   185,   185,   186,   186,   187,   187,   188,
     188,   189,   189,   190,   190,   191,   191,   192,   192,   193,
     194,   194,   194,   195,   195,   195,   196,   196,   197,   198,
     198,   199,   199,   200,   200,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   202,   202,   203,   203,
     204,   204,   205,   205,   205,   205,   205,   205,   206,   206,
     206,   206,   207,   208,   208,   209,   209,   210,   211,   211,
     212,   213,   213,   214,   214,   215,   215,   215,   215,   215,
     215,   215,   215,   216,   216,   216,   216,   216,   216,   217,
     217,   218,   218,   219,   219,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   221,   222,   222,   223,   223,
     223,   224,   224,   225,   225,   226,   226,   226,   226,   227,
     228,   228
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
       2,     4,     2,     1,     1,     1,     1,     0,     3,    10,
       7,     4,     5,     5,     0,     4,     2,     2,     4,     4,
       5,     4,     3,     1,     3,     1,     2,     2,     1,     3,
       3,     9,     0,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     2,     3,     0,     3,     3,     0,     1,     1,
       2,     1,     2,     1,     2,     6,     1,     2,     3,     2,
       2,     1,     3,     1,     2,     1,     4,     1,     3,     0,
       3,     0,     2,     0,     3,     0,     2,     1,     3,     3,
       0,     1,     1,     0,     2,     2,     0,     1,     2,     3,
       1,     3,     1,     2,     1,     5,     6,     4,     3,     3,
       3,     2,     3,     5,     4,     6,     3,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       4,     5,     6,     5,     4,     1,     2,     4,     1,     2,
       4,     0,     2,     1,     3,     1,     1,     2,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     0
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
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1873 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOKEN_NAME  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1883 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOKEN_STRING_SINGLE_QUOTED  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1893 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOKEN_STRING_DOUBLE_QUOTED  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1903 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOKEN_UNSIGNED_NUMVAL  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 1913 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 136: /* sql_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1923 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 137: /* quit_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).quit_statement_) != nullptr) {
    delete ((*yyvaluep).quit_statement_);
  }
}
#line 1933 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 138: /* alter_table_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1943 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 139: /* create_table_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).create_table_statement_) != nullptr) {
    delete ((*yyvaluep).create_table_statement_);
  }
}
#line 1953 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 140: /* create_index_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1963 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 141: /* drop_table_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).drop_table_statement_) != nullptr) {
    delete ((*yyvaluep).drop_table_statement_);
  }
}
#line 1973 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 142: /* column_def  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_);
  }
}
#line 1983 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 143: /* column_def_commalist  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_list_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_list_);
  }
}
#line 1993 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 144: /* data_type  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).data_type_) != nullptr) {
    delete ((*yyvaluep).data_type_);
  }
}
#line 2003 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 145: /* column_constraint_def  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_) != nullptr) {
    delete ((*yyvaluep).column_constraint_);
  }
}
#line 2013 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 146: /* column_constraint_def_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2023 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 147: /* opt_column_constraint_def_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2033 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 151: /* opt_column_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2043 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 152: /* opt_block_properties  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).block_properties_) != nullptr) {
    delete ((*yyvaluep).block_properties_);
  }
}
#line 2053 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 153: /* opt_partition_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).partition_clause_) != nullptr) {
    delete ((*yyvaluep).partition_clause_);
  }
}
#line 2063 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 154: /* partition_type  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2073 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 155: /* key_value_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2083 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 156: /* key_value  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_) != nullptr) {
    delete ((*yyvaluep).key_value_);
  }
}
#line 2093 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 157: /* key_string_value  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_value_) != nullptr) {
    delete ((*yyvaluep).key_string_value_);
  }
}
#line 2103 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 158: /* key_string_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_list_) != nullptr) {
    delete ((*yyvaluep).key_string_list_);
  }
}
#line 2113 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 159: /* key_integer_value  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_integer_value_) != nullptr) {
    delete ((*yyvaluep).key_integer_value_);
  }
}
#line 2123 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 160: /* index_type  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2133 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 161: /* opt_index_properties  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2143 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 162: /* insert_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).insert_statement_) != nullptr) {
    delete ((*yyvaluep).insert_statement_);
  }
}
#line 2153 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 163: /* copy_from_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_statement_) != nullptr) {
    delete ((*yyvaluep).copy_from_statement_);
  }
}
#line 2163 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 164: /* opt_copy_from_params  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 2173 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 165: /* copy_from_params  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 2183 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 166: /* update_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).update_statement_) != nullptr) {
    delete ((*yyvaluep).update_statement_);
  }
}
#line 2193 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 167: /* delete_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).delete_statement_) != nullptr) {
    delete ((*yyvaluep).delete_statement_);
  }
}
#line 2203 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 168: /* assignment_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_list_) != nullptr) {
    delete ((*yyvaluep).assignment_list_);
  }
}
#line 2213 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 169: /* assignment_item  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_) != nullptr) {
    delete ((*yyvaluep).assignment_);
  }
}
#line 2223 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 170: /* select_statement  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_statement_) != nullptr) {
    delete ((*yyvaluep).select_statement_);
  }
}
#line 2233 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 171: /* with_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2243 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 172: /* with_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2253 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 173: /* with_list_element  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_element_) != nullptr) {
    delete ((*yyvaluep).with_list_element_);
  }
}
#line 2263 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 174: /* select_query  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_query_) != nullptr) {
    delete ((*yyvaluep).select_query_);
  }
}
#line 2273 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 176: /* selection  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_) != nullptr) {
    delete ((*yyvaluep).selection_);
  }
}
#line 2283 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 177: /* selection_item_commalist  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_list_) != nullptr) {
    delete ((*yyvaluep).selection_list_);
  }
}
#line 2293 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 178: /* selection_item  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_item_) != nullptr) {
    delete ((*yyvaluep).selection_item_);
  }
}
#line 2303 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 179: /* from_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2313 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 180: /* subquery_expression  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).subquery_expression_) != nullptr) {
    delete ((*yyvaluep).subquery_expression_);
  }
}
#line 2323 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 181: /* opt_sample_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_sample_clause_) != nullptr) {
    delete ((*yyvaluep).opt_sample_clause_);
  }
}
#line 2333 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 182: /* join_type  */
#line 571 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2339 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 183: /* joined_table_reference  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2349 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 184: /* table_reference  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2359 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 185: /* table_reference_signature  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2369 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 186: /* table_reference_signature_primary  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2379 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 187: /* joined_table_reference_commalist  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2389 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_group_by_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_group_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_group_by_clause_);
  }
}
#line 2399 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_having_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_having_clause_) != nullptr) {
    delete ((*yyvaluep).opt_having_clause_);
  }
}
#line 2409 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 190: /* opt_order_by_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_order_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_order_by_clause_);
  }
}
#line 2419 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 191: /* opt_limit_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_limit_clause_) != nullptr) {
    delete ((*yyvaluep).opt_limit_clause_);
  }
}
#line 2429 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 192: /* order_commalist  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_commalist_) != nullptr) {
    delete ((*yyvaluep).order_commalist_);
  }
}
#line 2439 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 193: /* order_item  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_item_) != nullptr) {
    delete ((*yyvaluep).order_item_);
  }
}
#line 2449 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_order_direction  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2459 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 195: /* opt_nulls_first  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2469 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_where_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2479 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 197: /* where_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2489 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 198: /* or_expression  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2499 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 199: /* and_expression  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2509 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 200: /* not_expression  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2519 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 201: /* predicate_expression_base  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2529 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 202: /* add_expression  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2539 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 203: /* multiply_expression  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2549 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 204: /* unary_expression  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2559 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 205: /* expression_base  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2569 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 206: /* function_call  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).function_call_) != nullptr) {
    delete ((*yyvaluep).function_call_);
  }
}
#line 2579 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 207: /* extract_function  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2589 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 208: /* case_expression  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2599 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 209: /* simple_when_clause_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_list_);
  }
}
#line 2609 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 210: /* simple_when_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_);
  }
}
#line 2619 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 211: /* searched_when_clause_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_list_);
  }
}
#line 2629 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 212: /* searched_when_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_);
  }
}
#line 2639 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_else_clause  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2649 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 214: /* expression_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_list_) != nullptr) {
    delete ((*yyvaluep).expression_list_);
  }
}
#line 2659 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 215: /* literal_value  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_) != nullptr) {
    delete ((*yyvaluep).literal_value_);
  }
}
#line 2669 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 216: /* datetime_unit  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2679 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 217: /* literal_value_commalist  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_list_) != nullptr) {
    delete ((*yyvaluep).literal_value_list_);
  }
}
#line 2689 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 218: /* attribute_ref  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_) != nullptr) {
    delete ((*yyvaluep).attribute_);
  }
}
#line 2699 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 219: /* attribute_ref_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2709 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 220: /* comparison_operation  */
#line 568 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2715 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 221: /* unary_operation  */
#line 569 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2721 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 222: /* add_operation  */
#line 570 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2727 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 223: /* multiply_operation  */
#line 570 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2733 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 224: /* name_commalist  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_list_) != nullptr) {
    delete ((*yyvaluep).string_list_);
  }
}
#line 2743 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 225: /* any_name  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2753 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 226: /* boolean_value  */
#line 567 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2759 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 227: /* command  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_) != nullptr) {
    delete ((*yyvaluep).command_);
  }
}
#line 2769 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 228: /* command_argument_list  */
#line 573 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_argument_list_) != nullptr) {
    delete ((*yyvaluep).command_argument_list_);
  }
}
#line 2779 "SqlParser_gen.cpp" /* yacc.c:1257  */
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
#line 582 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3076 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 586 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3085 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 590 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3094 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 594 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3103 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 598 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    YYABORT;
  }
#line 3111 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 601 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    // Regular yyparse() return codes are non-negative, so use a negative one here.
    return -1;
  }
#line 3120 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 608 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3128 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 611 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].copy_from_statement_);
  }
#line 3136 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 614 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].create_table_statement_);
  }
#line 3144 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 617 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3152 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 620 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].delete_statement_);
  }
#line 3160 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 623 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].drop_table_statement_);
  }
#line 3168 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 626 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].insert_statement_);
  }
#line 3176 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 629 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].quit_statement_);
  }
#line 3184 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 632 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].select_statement_);
  }
#line 3192 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 635 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].update_statement_);
  }
#line 3200 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 641 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.quit_statement_) = new quickstep::ParseStatementQuit((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3208 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 647 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].attribute_definition_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3220 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 654 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3231 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 660 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3243 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 667 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3255 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 676 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.create_table_statement_) = new quickstep::ParseStatementCreateTable((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].attribute_definition_list_), (yyvsp[-1].block_properties_), (yyvsp[0].partition_clause_));
  }
#line 3263 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 681 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].key_value_list_)) {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_), (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].key_value_list_));
    } else {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_));
    }
  }
#line 3275 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 690 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.drop_table_statement_) = new quickstep::ParseStatementDropTable((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_));
  }
#line 3283 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 695 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_) = new quickstep::ParseAttributeDefinition((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].data_type_), (yyvsp[0].column_constraint_list_));
  }
#line 3291 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 700 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_list_) = new quickstep::PtrList<quickstep::ParseAttributeDefinition>();
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3300 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 704 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_list_) = (yyvsp[-2].attribute_definition_list_);
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3309 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 710 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "BIT data type");
    YYERROR;
  }
#line 3319 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 715 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3327 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 718 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3335 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 721 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "TIME data type");
    YYERROR;
  }
#line 3345 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 726 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3353 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 729 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3361 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 732 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3369 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 735 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3377 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 738 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kFloat));
  }
#line 3385 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 741 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3393 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 744 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3401 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 747 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3409 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 750 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3417 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 753 "../SqlParser.ypp" /* yacc.c:1646  */
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
#line 3434 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 765 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetimeInterval));
  }
#line 3442 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 768 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kYearMonthInterval));
  }
#line 3450 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 771 "../SqlParser.ypp" /* yacc.c:1646  */
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
#line 3473 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 789 "../SqlParser.ypp" /* yacc.c:1646  */
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
#line 3496 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 809 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNull((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3504 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 812 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNotNull((yylsp[-1]).first_line, (yylsp[-1]).first_column);
  }
#line 3512 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 815 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "Column Constraints (UNIQUE)");
    YYERROR;
  }
#line 3522 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 820 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3532 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 825 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[0].literal_value_);
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (DEFAULT)");
    YYERROR;
  }
#line 3543 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 831 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Column Constraints (CHECK)");
    YYERROR;
  }
#line 3554 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 837 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_value_);
    NotSupported(&(yylsp[-4]), yyscanner, "Foreign Keys");
    YYERROR;
  }
#line 3566 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 846 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = (yyvsp[-1].column_constraint_list_);
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3575 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 850 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = new quickstep::PtrList<quickstep::ParseColumnConstraint>();
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3584 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 856 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = nullptr;
  }
#line 3592 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 859 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = (yyvsp[0].column_constraint_list_);
  }
#line 3600 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 864 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (UNIQUE)");
    YYERROR;
  }
#line 3610 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 869 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-4]), yyscanner, "Table Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3620 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 874 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-6].string_list_);
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-9]), yyscanner, "Table Constraints (FOREIGN KEY)");
    YYERROR;
  }
#line 3632 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 881 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (CHECK)");
    YYERROR;
  }
#line 3642 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 888 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[-2]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3651 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 892 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3660 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 898 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 3668 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 901 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = $1; */
  }
#line 3676 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 906 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = nullptr;
  }
#line 3684 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 909 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = (yyvsp[-1].attribute_list_);
  }
#line 3692 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 914 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_properties_) = nullptr;
  }
#line 3700 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 917 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_properties_) = new quickstep::ParseBlockProperties((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].key_value_list_));
  }
#line 3708 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 922 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.partition_clause_) = nullptr;
  }
#line 3716 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 925 "../SqlParser.ypp" /* yacc.c:1646  */
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
#line 3738 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 944 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::PartitionSchemeHeader::PartitionType::kHash));
  }
#line 3747 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 948 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::PartitionSchemeHeader::PartitionType::kRange));
  }
#line 3756 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 954 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = new quickstep::PtrList<quickstep::ParseKeyValue>();
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 3765 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 958 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = (yyvsp[-2].key_value_list_);
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 3774 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 964 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_value_);
  }
#line 3782 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 967 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_list_);
  }
#line 3790 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 970 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_) = (yyvsp[0].key_integer_value_);
  }
#line 3798 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 975 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].string_value_));
  }
#line 3806 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 978 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    // This is a special case to handle the COMPRESS ALL option of the BLOCK PROPERTIES.
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_),
        new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, "ALL"));
  }
#line 3816 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 985 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_string_list_) = new quickstep::ParseKeyStringList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 3824 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 990 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.key_integer_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Value must be an integer");
      YYERROR;
    }
    (yyval.key_integer_value_) = new quickstep::ParseKeyIntegerValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].numeric_literal_value_));
  }
#line 3838 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 1001 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    // Defaults to BitWeavingV, but IndexProperties can change this to H.
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kBitWeavingV));
  }
#line 3848 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 1006 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kBloomFilter));
  }
#line 3857 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 1010 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kCSBTree));
  }
#line 3866 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 1014 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kSMA));
  }
#line 3875 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1020 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = nullptr;
  }
#line 3883 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1023 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.key_value_list_) = (yyvsp[-1].key_value_list_);
  }
#line 3891 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1029 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-7].string_value_);
    delete (yyvsp[-5].string_list_);
    delete (yyvsp[-1].literal_value_list_);
    (yyval.insert_statement_) = nullptr;
    NotSupported(&(yylsp[-6]), yyscanner, "list of column names in INSERT statement");
    YYERROR;
  }
#line 3904 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1037 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertTuple((yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-4].string_value_), (yyvsp[-1].literal_value_list_));
  }
#line 3912 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1040 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-3]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), nullptr);
  }
#line 3920 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1043 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-4]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), (yyvsp[-4].with_list_));
  }
#line 3928 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1049 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_statement_) = new quickstep::ParseStatementCopyFrom((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_value_), (yyvsp[0].copy_from_params_));
  }
#line 3936 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1054 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = nullptr;
  }
#line 3944 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1057 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-1].copy_from_params_);
  }
#line 3952 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1062 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 3961 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1066 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 3970 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1070 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 3979 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1074 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 3988 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1080 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.update_statement_) = new quickstep::ParseStatementUpdate((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].assignment_list_), (yyvsp[0].predicate_));
  }
#line 3996 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1085 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.delete_statement_) = new quickstep::ParseStatementDelete((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].predicate_));
  }
#line 4004 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1090 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_list_) = (yyvsp[-2].assignment_list_);
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4013 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1094 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_list_) = new quickstep::PtrList<quickstep::ParseAssignment>();
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4022 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1100 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_) = new quickstep::ParseAssignment((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[0].expression_));
  }
#line 4030 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1106 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_statement_) = new quickstep::ParseStatementSelect((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].select_query_), nullptr);
  }
#line 4038 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1109 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_statement_) = new quickstep::ParseStatementSelect((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].select_query_), (yyvsp[-1].with_list_));
  }
#line 4046 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1114 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = (yyvsp[0].with_list_);
  }
#line 4054 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1119 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = new quickstep::PtrVector<quickstep::ParseSubqueryTableReference>();
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4063 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1123 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = (yyvsp[-2].with_list_);
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4072 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1129 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_element_) = new quickstep::ParseSubqueryTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].subquery_expression_));
    (yyval.with_list_element_)->set_table_reference_signature((yyvsp[-2].table_reference_signature_));
  }
#line 4081 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1136 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_query_) = new quickstep::ParseSelect((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].selection_), (yyvsp[-5].table_reference_list_), (yyvsp[-4].predicate_), (yyvsp[-3].opt_group_by_clause_), (yyvsp[-2].opt_having_clause_), (yyvsp[-1].opt_order_by_clause_), (yyvsp[0].opt_limit_clause_));
  }
#line 4089 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1141 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 4097 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1144 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "ALL in selection");
    YYERROR;
  }
#line 4106 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1148 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "DISTINCT in selection");
    YYERROR;
  }
#line 4115 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1154 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_) = new quickstep::ParseSelectionStar((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 4123 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1157 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_) = (yyvsp[0].selection_list_);
  }
#line 4131 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1162 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_list_) = new quickstep::ParseSelectionList((yylsp[0]).first_line, (yylsp[0]).first_column);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4140 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1166 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_list_) = (yyvsp[-2].selection_list_);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4149 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1172 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[0].string_value_));
  }
#line 4157 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1175 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].expression_), (yyvsp[0].string_value_));
  }
#line 4165 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1178 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].expression_));
  }
#line 4173 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1183 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = (yyvsp[0].table_reference_list_);
  }
#line 4181 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1188 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.subquery_expression_) = new quickstep::ParseSubqueryExpression((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].select_query_));
  }
#line 4189 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1193 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_sample_clause_) = NULL;
  }
#line 4197 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1196 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, true, (yyvsp[-1].numeric_literal_value_));
  }
#line 4205 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1199 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-1].numeric_literal_value_));
  }
#line 4213 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1204 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kInnerJoin;
  }
#line 4221 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1207 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kInnerJoin;
  }
#line 4229 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1210 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kLeftOuterJoin;
  }
#line 4237 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1213 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kLeftOuterJoin;
  }
#line 4245 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1216 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kRightOuterJoin;
  }
#line 4253 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1219 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kRightOuterJoin;
  }
#line 4261 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1222 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kFullOuterJoin;
  }
#line 4269 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1225 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kFullOuterJoin;
  }
#line 4277 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1230 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseJoinedTableReference((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].join_type_), (yyvsp[-5].table_reference_), (yyvsp[-2].table_reference_), (yyvsp[0].predicate_));
  }
#line 4285 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1233 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = (yyvsp[0].table_reference_);
  }
#line 4293 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1238 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSubqueryTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].subquery_expression_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4302 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1242 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].opt_sample_clause_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4311 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1246 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].opt_sample_clause_));
  }
#line 4319 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1249 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].function_call_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4328 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1253 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].function_call_));
  }
#line 4336 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1256 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = (yyvsp[-1].table_reference_);
  }
#line 4344 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1261 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4352 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1264 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4360 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1269 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 4368 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1272 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 4376 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1277 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = new quickstep::PtrList<quickstep::ParseTableReference>();
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4385 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1281 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = (yyvsp[-2].table_reference_list_);
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4394 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1287 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_group_by_clause_) = nullptr;
  }
#line 4402 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1290 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_group_by_clause_) = new quickstep::ParseGroupBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].expression_list_));
  }
#line 4410 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1295 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_having_clause_) = nullptr;
  }
#line 4418 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1298 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_having_clause_) = new quickstep::ParseHaving((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 4426 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1303 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_order_by_clause_) = nullptr;
  }
#line 4434 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1306 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_order_by_clause_) = new quickstep::ParseOrderBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].order_commalist_));
  }
#line 4442 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1311 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_limit_clause_) = nullptr;
  }
#line 4450 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1314 "../SqlParser.ypp" /* yacc.c:1646  */
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
#line 4472 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1333 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_commalist_) = new quickstep::PtrList<quickstep::ParseOrderByItem>();
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 4481 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1337 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_commalist_) = (yyvsp[-2].order_commalist_);
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 4490 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1343 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_item_) = new quickstep::ParseOrderByItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[-1].order_direction_), (yyvsp[0].order_direction_));
    delete (yyvsp[-1].order_direction_);
    delete (yyvsp[0].order_direction_);
  }
#line 4500 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1350 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 4508 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1353 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 4516 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1356 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 4524 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1361 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 4532 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1364 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 4540 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1367 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 4548 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1373 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = nullptr;
  }
#line 4556 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1376 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4564 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1381 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4572 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1386 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kDisjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateDisjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 4586 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1395 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4594 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1400 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kConjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateConjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 4608 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1409 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4616 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1414 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 4624 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1417 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4632 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1422 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4640 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1425 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line, (yylsp[-4]).first_column,
        new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_)));
  }
#line 4650 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1430 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-2]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 4661 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1436 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 4672 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1442 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateComparison((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].comparison_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4680 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1445 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[-1].predicate_);
  }
#line 4688 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1448 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateExists((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].subquery_expression_));
  }
#line 4696 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1451 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-2].expression_), (yyvsp[0].subquery_expression_));
  }
#line 4704 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1454 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-1].expression_list_));
  }
#line 4712 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1457 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-2]).first_line,
        (yylsp[-2]).first_column,
        new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-3].expression_), (yyvsp[0].subquery_expression_)));
  }
#line 4723 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1463 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line,
        (yylsp[-4]).first_column,
        new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-1].expression_list_)));
  }
#line 4734 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1472 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4742 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1475 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4750 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1480 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4758 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1483 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4766 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1488 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseUnaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].unary_operation_), (yyvsp[0].expression_));
  }
#line 4774 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1491 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4782 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1496 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].attribute_);
  }
#line 4790 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1499 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_));
  }
#line 4798 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1502 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].function_call_);
  }
#line 4806 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1505 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4814 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1508 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4822 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1511 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[-1].expression_);
  }
#line 4830 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1516 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-2].string_value_), new quickstep::PtrList<quickstep::ParseExpression>());
  }
#line 4839 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1520 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), new quickstep::ParseStar((yylsp[-1]).first_line, (yylsp[-1]).first_column));
  }
#line 4848 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1524 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-3]).first_line, (yylsp[-3]).first_column, false, (yyvsp[-3].string_value_), (yyvsp[-1].expression_list_));
  }
#line 4856 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1527 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-4]).first_line, (yylsp[-4]).first_column, true, (yyvsp[-4].string_value_), (yyvsp[-1].expression_list_));
  }
#line 4864 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1532 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseExtractFunction((yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].expression_));
  }
#line 4872 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1537 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseSimpleCaseExpression((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].expression_), (yyvsp[-2].simple_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 4880 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1540 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseSearchedCaseExpression((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].searched_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 4888 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1545 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.simple_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSimpleWhenClause>;
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 4897 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1549 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.simple_when_clause_list_) = (yyvsp[-1].simple_when_clause_list_);
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 4906 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1555 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.simple_when_clause_) = new quickstep::ParseSimpleWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4914 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1560 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.searched_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSearchedWhenClause>;
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 4923 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1564 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.searched_when_clause_list_) = (yyvsp[-1].searched_when_clause_list_);
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 4932 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1570 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.searched_when_clause_) = new quickstep::ParseSearchedWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].predicate_), (yyvsp[0].expression_));
  }
#line 4940 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1575 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = NULL;
  }
#line 4948 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1578 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4956 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1583 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_list_) = new quickstep::PtrList<quickstep::ParseExpression>();
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 4965 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1587 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_list_) = (yyvsp[-2].expression_list_);
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 4974 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1593 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = new quickstep::NullParseLiteralValue((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 4982 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1596 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 4990 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1599 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 4998 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1602 "../SqlParser.ypp" /* yacc.c:1646  */
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
#line 5015 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1614 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_),
                                                nullptr);  // No explicit type.
  }
#line 5024 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1618 "../SqlParser.ypp" /* yacc.c:1646  */
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
#line 5048 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1637 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    quickstep::StringParseLiteralValue *parse_value;
    const std::string& datetime_type_value = (yyvsp[0].string_value_)->value();
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval(&((yyvsp[-1].string_value_)->append((" " +
        datetime_type_value).c_str(), datetime_type_value.length() + 1)),
        &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 5066 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1650 "../SqlParser.ypp" /* yacc.c:1646  */
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
#line 5084 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1665 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("year"));
  }
#line 5092 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1668 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("month"));
  }
#line 5100 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1671 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("day"));
  }
#line 5108 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1674 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("hour"));
  }
#line 5116 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1677 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("minute"));
  }
#line 5124 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1680 "../SqlParser.ypp" /* yacc.c:1646  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("second"));
  }
#line 5132 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1685 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_list_) = new quickstep::PtrList<quickstep::ParseScalarLiteral>();
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5141 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1689 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_list_) = (yyvsp[-2].literal_value_list_);
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5150 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1695 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 5158 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1698 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_), (yyvsp[-2].string_value_));
  }
#line 5166 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1703 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = new quickstep::PtrList<quickstep::ParseAttribute>();
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5175 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1707 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_list_) = (yyvsp[-2].attribute_list_);
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5184 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1714 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kEqual);
  }
#line 5192 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1717 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotEqual);
  }
#line 5200 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1720 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLess);
  }
#line 5208 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1723 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLessOrEqual);
  }
#line 5216 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1726 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreater);
  }
#line 5224 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1729 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreaterOrEqual);
  }
#line 5232 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1732 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLike);
  }
#line 5240 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1735 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotLike);
  }
#line 5248 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1738 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kRegexMatch);
  }
#line 5256 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1741 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotRegexMatch);
  }
#line 5264 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1746 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * '-' TOKEN_UNSIGNED_NUMVAL case in 'literal_value'. Because Bison prefers
     * to shift rather than reduce, the case in 'literal_value' has precedence
     * over this one.
     **/
    (yyval.unary_operation_) = &quickstep::UnaryOperationFactory::GetUnaryOperation(quickstep::UnaryOperationID::kNegate);
  }
#line 5278 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1757 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kAdd);
  }
#line 5286 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1760 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kSubtract);
  }
#line 5294 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1765 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kModulo);
  }
#line 5302 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1768 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kMultiply);
  }
#line 5310 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1771 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kDivide);
  }
#line 5318 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1777 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_list_) = new quickstep::PtrList<quickstep::ParseString>();
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5327 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1781 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_list_) = (yyvsp[-2].string_list_);
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5336 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1787 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5344 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1790 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].string_value_)->value().empty()) {
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Zero-length identifier");
    }
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5355 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1798 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = true;
  }
#line 5363 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1801 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = true;
  }
#line 5371 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1804 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = false;
  }
#line 5379 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1807 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = false;
  }
#line 5387 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1813 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.command_) = new quickstep::ParseCommand((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].command_argument_list_));
  }
#line 5395 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1818 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    quickstep::PtrVector<quickstep::ParseString> *argument_list = (yyvsp[-1].command_argument_list_);
    argument_list->push_back((yyvsp[0].string_value_));
    (yyval.command_argument_list_) = argument_list;
  }
#line 5405 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1823 "../SqlParser.ypp" /* yacc.c:1646  */
    { /* Epsilon, an empy match. */
    (yyval.command_argument_list_) = new quickstep::PtrVector<quickstep::ParseString>();
  }
#line 5413 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;


#line 5417 "SqlParser_gen.cpp" /* yacc.c:1646  */
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
#line 1827 "../SqlParser.ypp" /* yacc.c:1906  */


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
