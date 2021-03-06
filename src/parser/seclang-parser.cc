// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "seclang-parser.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "seclang-parser.hh"

// User implementation prologue.

#line 51 "seclang-parser.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 345 "seclang-parser.yy" // lalr1.cc:413

#include "src/parser/driver.h"

#line 57 "seclang-parser.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 143 "seclang-parser.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  seclang_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  seclang_parser::seclang_parser (modsecurity::Parser::Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  seclang_parser::~seclang_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  seclang_parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  seclang_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  seclang_parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  seclang_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  seclang_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  seclang_parser::symbol_number_type
  seclang_parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  seclang_parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  seclang_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 93: // "Accuracy"
      case 94: // "Allow"
      case 95: // "Append"
      case 96: // "AuditLog"
      case 97: // "Block"
      case 98: // "Capture"
      case 99: // "Chain"
      case 100: // "ACTION_CTL_AUDIT_ENGINE"
      case 101: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 102: // "ACTION_CTL_BDY_JSON"
      case 103: // "ACTION_CTL_BDY_XML"
      case 104: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 105: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 106: // "ACTION_CTL_RULE_ENGINE"
      case 107: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 108: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 109: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 110: // "Deny"
      case 111: // "DeprecateVar"
      case 112: // "Drop"
      case 113: // "Exec"
      case 114: // "ExpireVar"
      case 115: // "Id"
      case 116: // "InitCol"
      case 117: // "Log"
      case 118: // "LogData"
      case 119: // "Maturity"
      case 120: // "Msg"
      case 121: // "MultiMatch"
      case 122: // "NoAuditLog"
      case 123: // "NoLog"
      case 124: // "Pass"
      case 125: // "Pause"
      case 126: // "Phase"
      case 127: // "Prepend"
      case 128: // "Proxy"
      case 129: // "Redirect"
      case 130: // "Rev"
      case 131: // "SanatiseArg"
      case 132: // "SanatiseMatched"
      case 133: // "SanatiseMatchedBytes"
      case 134: // "SanatiseRequestHeader"
      case 135: // "SanatiseResponseHeader"
      case 136: // "SetEnv"
      case 137: // "SetSrc"
      case 138: // "SetSid"
      case 139: // "SetUID"
      case 140: // "Severity"
      case 141: // "Skip"
      case 142: // "SkipAfter"
      case 143: // "Status"
      case 144: // "Tag"
      case 145: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 146: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 147: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 148: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 149: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 150: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 151: // "ACTION_TRANSFORMATION_LENGTH"
      case 152: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 153: // "ACTION_TRANSFORMATION_MD5"
      case 154: // "ACTION_TRANSFORMATION_NONE"
      case 155: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 156: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 157: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 158: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 159: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 160: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 161: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 162: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 163: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 164: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 165: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 166: // "ACTION_TRANSFORMATION_SHA1"
      case 167: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 168: // "ACTION_TRANSFORMATION_TRIM"
      case 169: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 170: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 171: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 172: // "Ver"
      case 173: // "xmlns"
      case 174: // "CONFIG_COMPONENT_SIG"
      case 175: // "CONFIG_DIR_AUDIT_DIR"
      case 176: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 177: // "CONFIG_DIR_AUDIT_ENG"
      case 178: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 179: // "CONFIG_DIR_AUDIT_LOG"
      case 180: // "CONFIG_DIR_AUDIT_LOG2"
      case 181: // "CONFIG_DIR_AUDIT_LOG_P"
      case 182: // "CONFIG_DIR_AUDIT_STS"
      case 183: // "CONFIG_DIR_AUDIT_TPE"
      case 184: // "CONFIG_DIR_DEBUG_LOG"
      case 185: // "CONFIG_DIR_DEBUG_LVL"
      case 186: // "CONFIG_DIR_GEO_DB"
      case 187: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 188: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 189: // "CONFIG_DIR_REQ_BODY"
      case 190: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 191: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 192: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 193: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 194: // "CONFIG_DIR_RES_BODY"
      case 195: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 196: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 197: // "CONFIG_DIR_RULE_ENG"
      case 198: // "CONFIG_DIR_SEC_ACTION"
      case 199: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 200: // "CONFIG_DIR_SEC_MARKER"
      case 201: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 202: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 203: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 204: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 205: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 206: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 207: // "CONFIG_UPLOAD_DIR"
      case 208: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 209: // "CONFIG_UPLOAD_FILE_MODE"
      case 210: // "CONFIG_VALUE_ABORT"
      case 211: // "CONFIG_VALUE_DETC"
      case 212: // "CONFIG_VALUE_HTTPS"
      case 213: // "CONFIG_VALUE_OFF"
      case 214: // "CONFIG_VALUE_ON"
      case 215: // "CONFIG_VALUE_PARALLEL"
      case 216: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 217: // "CONFIG_VALUE_REJECT"
      case 218: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 219: // "CONFIG_VALUE_SERIAL"
      case 220: // "CONFIG_VALUE_WARN"
      case 221: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 222: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 223: // "CONGIG_DIR_SEC_ARG_SEP"
      case 224: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 225: // "CONGIG_DIR_SEC_DATA_DIR"
      case 226: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 227: // "CONGIG_DIR_SEC_TMP_DIR"
      case 228: // "DIRECTIVE"
      case 229: // "DIRECTIVE_SECRULESCRIPT"
      case 230: // "FREE_TEXT"
      case 231: // "OPERATOR"
      case 232: // "OPERATOR_BEGINS_WITH"
      case 233: // "OPERATOR_CONTAINS"
      case 234: // "OPERATOR_CONTAINS_WORD"
      case 235: // "OPERATOR_DETECT_SQLI"
      case 236: // "OPERATOR_DETECT_XSS"
      case 237: // "OPERATOR_ENDS_WITH"
      case 238: // "OPERATOR_EQ"
      case 239: // "OPERATOR_FUZZY_HASH"
      case 240: // "OPERATOR_GE"
      case 241: // "OPERATOR_GEOLOOKUP"
      case 242: // "OPERATOR_GSB_LOOKUP"
      case 243: // "OPERATOR_GT"
      case 244: // "OPERATOR_INSPECT_FILE"
      case 245: // "OPERATOR_IP_MATCH"
      case 246: // "OPERATOR_IP_MATCH_FROM_FILE"
      case 247: // "OPERATOR_LE"
      case 248: // "OPERATOR_LT"
      case 249: // "OPERATOR_PM"
      case 250: // "OPERATOR_PM_FROM_FILE"
      case 251: // "OPERATOR_RBL"
      case 252: // "OPERATOR_RSUB"
      case 253: // "OPERATOR_RX"
      case 254: // "Operator RX (content only)"
      case 255: // "OPERATOR_STR_EQ"
      case 256: // "OPERATOR_STR_MATCH"
      case 257: // "OPERATOR_UNCONDITIONAL_MATCH"
      case 258: // "OPERATOR_VALIDATE_BYTE_RANGE"
      case 259: // "OPERATOR_VALIDATE_DTD"
      case 260: // "OPERATOR_VALIDATE_HASH"
      case 261: // "OPERATOR_VALIDATE_SCHEMA"
      case 262: // "OPERATOR_VALIDATE_URL_ENCODING"
      case 263: // "OPERATOR_VALIDATE_UTF8_ENCODING"
      case 264: // "OPERATOR_VERIFY_CC"
      case 265: // "OPERATOR_VERIFY_CPF"
      case 266: // "OPERATOR_VERIFY_SSN"
      case 267: // "OPERATOR_WITHIN"
      case 268: // "OP_QUOTE"
      case 269: // "QUOTATION_MARK"
      case 270: // "RUN_TIME_VAR_BLD"
      case 271: // "RUN_TIME_VAR_DUR"
      case 272: // "RUN_TIME_VAR_HSV"
      case 273: // "RUN_TIME_VAR_REMOTE_USER"
      case 274: // "RUN_TIME_VAR_TIME"
      case 275: // "RUN_TIME_VAR_TIME_DAY"
      case 276: // "RUN_TIME_VAR_TIME_EPOCH"
      case 277: // "RUN_TIME_VAR_TIME_HOUR"
      case 278: // "RUN_TIME_VAR_TIME_MIN"
      case 279: // "RUN_TIME_VAR_TIME_MON"
      case 280: // "RUN_TIME_VAR_TIME_SEC"
      case 281: // "RUN_TIME_VAR_TIME_WDAY"
      case 282: // "RUN_TIME_VAR_TIME_YEAR"
      case 283: // "VARIABLE"
      case 284: // "Dictionary element"
      case 285: // "Dictionary element, selected by regexp"
        value.move< std::string > (that.value);
        break;

      case 292: // op
      case 293: // op_before_init
        value.move< std::unique_ptr<Operator> > (that.value);
        break;

      case 297: // var
        value.move< std::unique_ptr<Variable> > (that.value);
        break;

      case 298: // act
        value.move< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 295: // variables
      case 296: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 290: // actions
      case 291: // actions_may_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  seclang_parser::stack_symbol_type&
  seclang_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 93: // "Accuracy"
      case 94: // "Allow"
      case 95: // "Append"
      case 96: // "AuditLog"
      case 97: // "Block"
      case 98: // "Capture"
      case 99: // "Chain"
      case 100: // "ACTION_CTL_AUDIT_ENGINE"
      case 101: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 102: // "ACTION_CTL_BDY_JSON"
      case 103: // "ACTION_CTL_BDY_XML"
      case 104: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 105: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 106: // "ACTION_CTL_RULE_ENGINE"
      case 107: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 108: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 109: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 110: // "Deny"
      case 111: // "DeprecateVar"
      case 112: // "Drop"
      case 113: // "Exec"
      case 114: // "ExpireVar"
      case 115: // "Id"
      case 116: // "InitCol"
      case 117: // "Log"
      case 118: // "LogData"
      case 119: // "Maturity"
      case 120: // "Msg"
      case 121: // "MultiMatch"
      case 122: // "NoAuditLog"
      case 123: // "NoLog"
      case 124: // "Pass"
      case 125: // "Pause"
      case 126: // "Phase"
      case 127: // "Prepend"
      case 128: // "Proxy"
      case 129: // "Redirect"
      case 130: // "Rev"
      case 131: // "SanatiseArg"
      case 132: // "SanatiseMatched"
      case 133: // "SanatiseMatchedBytes"
      case 134: // "SanatiseRequestHeader"
      case 135: // "SanatiseResponseHeader"
      case 136: // "SetEnv"
      case 137: // "SetSrc"
      case 138: // "SetSid"
      case 139: // "SetUID"
      case 140: // "Severity"
      case 141: // "Skip"
      case 142: // "SkipAfter"
      case 143: // "Status"
      case 144: // "Tag"
      case 145: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 146: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 147: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 148: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 149: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 150: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 151: // "ACTION_TRANSFORMATION_LENGTH"
      case 152: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 153: // "ACTION_TRANSFORMATION_MD5"
      case 154: // "ACTION_TRANSFORMATION_NONE"
      case 155: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 156: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 157: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 158: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 159: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 160: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 161: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 162: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 163: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 164: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 165: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 166: // "ACTION_TRANSFORMATION_SHA1"
      case 167: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 168: // "ACTION_TRANSFORMATION_TRIM"
      case 169: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 170: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 171: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 172: // "Ver"
      case 173: // "xmlns"
      case 174: // "CONFIG_COMPONENT_SIG"
      case 175: // "CONFIG_DIR_AUDIT_DIR"
      case 176: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 177: // "CONFIG_DIR_AUDIT_ENG"
      case 178: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 179: // "CONFIG_DIR_AUDIT_LOG"
      case 180: // "CONFIG_DIR_AUDIT_LOG2"
      case 181: // "CONFIG_DIR_AUDIT_LOG_P"
      case 182: // "CONFIG_DIR_AUDIT_STS"
      case 183: // "CONFIG_DIR_AUDIT_TPE"
      case 184: // "CONFIG_DIR_DEBUG_LOG"
      case 185: // "CONFIG_DIR_DEBUG_LVL"
      case 186: // "CONFIG_DIR_GEO_DB"
      case 187: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 188: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 189: // "CONFIG_DIR_REQ_BODY"
      case 190: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 191: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 192: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 193: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 194: // "CONFIG_DIR_RES_BODY"
      case 195: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 196: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 197: // "CONFIG_DIR_RULE_ENG"
      case 198: // "CONFIG_DIR_SEC_ACTION"
      case 199: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 200: // "CONFIG_DIR_SEC_MARKER"
      case 201: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 202: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 203: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 204: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 205: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 206: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 207: // "CONFIG_UPLOAD_DIR"
      case 208: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 209: // "CONFIG_UPLOAD_FILE_MODE"
      case 210: // "CONFIG_VALUE_ABORT"
      case 211: // "CONFIG_VALUE_DETC"
      case 212: // "CONFIG_VALUE_HTTPS"
      case 213: // "CONFIG_VALUE_OFF"
      case 214: // "CONFIG_VALUE_ON"
      case 215: // "CONFIG_VALUE_PARALLEL"
      case 216: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 217: // "CONFIG_VALUE_REJECT"
      case 218: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 219: // "CONFIG_VALUE_SERIAL"
      case 220: // "CONFIG_VALUE_WARN"
      case 221: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 222: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 223: // "CONGIG_DIR_SEC_ARG_SEP"
      case 224: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 225: // "CONGIG_DIR_SEC_DATA_DIR"
      case 226: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 227: // "CONGIG_DIR_SEC_TMP_DIR"
      case 228: // "DIRECTIVE"
      case 229: // "DIRECTIVE_SECRULESCRIPT"
      case 230: // "FREE_TEXT"
      case 231: // "OPERATOR"
      case 232: // "OPERATOR_BEGINS_WITH"
      case 233: // "OPERATOR_CONTAINS"
      case 234: // "OPERATOR_CONTAINS_WORD"
      case 235: // "OPERATOR_DETECT_SQLI"
      case 236: // "OPERATOR_DETECT_XSS"
      case 237: // "OPERATOR_ENDS_WITH"
      case 238: // "OPERATOR_EQ"
      case 239: // "OPERATOR_FUZZY_HASH"
      case 240: // "OPERATOR_GE"
      case 241: // "OPERATOR_GEOLOOKUP"
      case 242: // "OPERATOR_GSB_LOOKUP"
      case 243: // "OPERATOR_GT"
      case 244: // "OPERATOR_INSPECT_FILE"
      case 245: // "OPERATOR_IP_MATCH"
      case 246: // "OPERATOR_IP_MATCH_FROM_FILE"
      case 247: // "OPERATOR_LE"
      case 248: // "OPERATOR_LT"
      case 249: // "OPERATOR_PM"
      case 250: // "OPERATOR_PM_FROM_FILE"
      case 251: // "OPERATOR_RBL"
      case 252: // "OPERATOR_RSUB"
      case 253: // "OPERATOR_RX"
      case 254: // "Operator RX (content only)"
      case 255: // "OPERATOR_STR_EQ"
      case 256: // "OPERATOR_STR_MATCH"
      case 257: // "OPERATOR_UNCONDITIONAL_MATCH"
      case 258: // "OPERATOR_VALIDATE_BYTE_RANGE"
      case 259: // "OPERATOR_VALIDATE_DTD"
      case 260: // "OPERATOR_VALIDATE_HASH"
      case 261: // "OPERATOR_VALIDATE_SCHEMA"
      case 262: // "OPERATOR_VALIDATE_URL_ENCODING"
      case 263: // "OPERATOR_VALIDATE_UTF8_ENCODING"
      case 264: // "OPERATOR_VERIFY_CC"
      case 265: // "OPERATOR_VERIFY_CPF"
      case 266: // "OPERATOR_VERIFY_SSN"
      case 267: // "OPERATOR_WITHIN"
      case 268: // "OP_QUOTE"
      case 269: // "QUOTATION_MARK"
      case 270: // "RUN_TIME_VAR_BLD"
      case 271: // "RUN_TIME_VAR_DUR"
      case 272: // "RUN_TIME_VAR_HSV"
      case 273: // "RUN_TIME_VAR_REMOTE_USER"
      case 274: // "RUN_TIME_VAR_TIME"
      case 275: // "RUN_TIME_VAR_TIME_DAY"
      case 276: // "RUN_TIME_VAR_TIME_EPOCH"
      case 277: // "RUN_TIME_VAR_TIME_HOUR"
      case 278: // "RUN_TIME_VAR_TIME_MIN"
      case 279: // "RUN_TIME_VAR_TIME_MON"
      case 280: // "RUN_TIME_VAR_TIME_SEC"
      case 281: // "RUN_TIME_VAR_TIME_WDAY"
      case 282: // "RUN_TIME_VAR_TIME_YEAR"
      case 283: // "VARIABLE"
      case 284: // "Dictionary element"
      case 285: // "Dictionary element, selected by regexp"
        value.copy< std::string > (that.value);
        break;

      case 292: // op
      case 293: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case 297: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case 298: // act
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 295: // variables
      case 296: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 290: // actions
      case 291: // actions_may_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  seclang_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  seclang_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  seclang_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  seclang_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  seclang_parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  seclang_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  seclang_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  seclang_parser::debug_level_type
  seclang_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  seclang_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline seclang_parser::state_type
  seclang_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  seclang_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  seclang_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  seclang_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 338 "/home/zimmerle/core-trustwave/ModSecurity/src/parser/seclang-parser.yy" // lalr1.cc:741
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 855 "seclang-parser.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 93: // "Accuracy"
      case 94: // "Allow"
      case 95: // "Append"
      case 96: // "AuditLog"
      case 97: // "Block"
      case 98: // "Capture"
      case 99: // "Chain"
      case 100: // "ACTION_CTL_AUDIT_ENGINE"
      case 101: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 102: // "ACTION_CTL_BDY_JSON"
      case 103: // "ACTION_CTL_BDY_XML"
      case 104: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 105: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 106: // "ACTION_CTL_RULE_ENGINE"
      case 107: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 108: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 109: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 110: // "Deny"
      case 111: // "DeprecateVar"
      case 112: // "Drop"
      case 113: // "Exec"
      case 114: // "ExpireVar"
      case 115: // "Id"
      case 116: // "InitCol"
      case 117: // "Log"
      case 118: // "LogData"
      case 119: // "Maturity"
      case 120: // "Msg"
      case 121: // "MultiMatch"
      case 122: // "NoAuditLog"
      case 123: // "NoLog"
      case 124: // "Pass"
      case 125: // "Pause"
      case 126: // "Phase"
      case 127: // "Prepend"
      case 128: // "Proxy"
      case 129: // "Redirect"
      case 130: // "Rev"
      case 131: // "SanatiseArg"
      case 132: // "SanatiseMatched"
      case 133: // "SanatiseMatchedBytes"
      case 134: // "SanatiseRequestHeader"
      case 135: // "SanatiseResponseHeader"
      case 136: // "SetEnv"
      case 137: // "SetSrc"
      case 138: // "SetSid"
      case 139: // "SetUID"
      case 140: // "Severity"
      case 141: // "Skip"
      case 142: // "SkipAfter"
      case 143: // "Status"
      case 144: // "Tag"
      case 145: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 146: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 147: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 148: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 149: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 150: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 151: // "ACTION_TRANSFORMATION_LENGTH"
      case 152: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 153: // "ACTION_TRANSFORMATION_MD5"
      case 154: // "ACTION_TRANSFORMATION_NONE"
      case 155: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 156: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 157: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 158: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 159: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 160: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 161: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 162: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 163: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 164: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 165: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 166: // "ACTION_TRANSFORMATION_SHA1"
      case 167: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 168: // "ACTION_TRANSFORMATION_TRIM"
      case 169: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 170: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 171: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 172: // "Ver"
      case 173: // "xmlns"
      case 174: // "CONFIG_COMPONENT_SIG"
      case 175: // "CONFIG_DIR_AUDIT_DIR"
      case 176: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 177: // "CONFIG_DIR_AUDIT_ENG"
      case 178: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 179: // "CONFIG_DIR_AUDIT_LOG"
      case 180: // "CONFIG_DIR_AUDIT_LOG2"
      case 181: // "CONFIG_DIR_AUDIT_LOG_P"
      case 182: // "CONFIG_DIR_AUDIT_STS"
      case 183: // "CONFIG_DIR_AUDIT_TPE"
      case 184: // "CONFIG_DIR_DEBUG_LOG"
      case 185: // "CONFIG_DIR_DEBUG_LVL"
      case 186: // "CONFIG_DIR_GEO_DB"
      case 187: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 188: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 189: // "CONFIG_DIR_REQ_BODY"
      case 190: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 191: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 192: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 193: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 194: // "CONFIG_DIR_RES_BODY"
      case 195: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 196: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 197: // "CONFIG_DIR_RULE_ENG"
      case 198: // "CONFIG_DIR_SEC_ACTION"
      case 199: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 200: // "CONFIG_DIR_SEC_MARKER"
      case 201: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 202: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 203: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 204: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 205: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 206: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 207: // "CONFIG_UPLOAD_DIR"
      case 208: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 209: // "CONFIG_UPLOAD_FILE_MODE"
      case 210: // "CONFIG_VALUE_ABORT"
      case 211: // "CONFIG_VALUE_DETC"
      case 212: // "CONFIG_VALUE_HTTPS"
      case 213: // "CONFIG_VALUE_OFF"
      case 214: // "CONFIG_VALUE_ON"
      case 215: // "CONFIG_VALUE_PARALLEL"
      case 216: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 217: // "CONFIG_VALUE_REJECT"
      case 218: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 219: // "CONFIG_VALUE_SERIAL"
      case 220: // "CONFIG_VALUE_WARN"
      case 221: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 222: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 223: // "CONGIG_DIR_SEC_ARG_SEP"
      case 224: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 225: // "CONGIG_DIR_SEC_DATA_DIR"
      case 226: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 227: // "CONGIG_DIR_SEC_TMP_DIR"
      case 228: // "DIRECTIVE"
      case 229: // "DIRECTIVE_SECRULESCRIPT"
      case 230: // "FREE_TEXT"
      case 231: // "OPERATOR"
      case 232: // "OPERATOR_BEGINS_WITH"
      case 233: // "OPERATOR_CONTAINS"
      case 234: // "OPERATOR_CONTAINS_WORD"
      case 235: // "OPERATOR_DETECT_SQLI"
      case 236: // "OPERATOR_DETECT_XSS"
      case 237: // "OPERATOR_ENDS_WITH"
      case 238: // "OPERATOR_EQ"
      case 239: // "OPERATOR_FUZZY_HASH"
      case 240: // "OPERATOR_GE"
      case 241: // "OPERATOR_GEOLOOKUP"
      case 242: // "OPERATOR_GSB_LOOKUP"
      case 243: // "OPERATOR_GT"
      case 244: // "OPERATOR_INSPECT_FILE"
      case 245: // "OPERATOR_IP_MATCH"
      case 246: // "OPERATOR_IP_MATCH_FROM_FILE"
      case 247: // "OPERATOR_LE"
      case 248: // "OPERATOR_LT"
      case 249: // "OPERATOR_PM"
      case 250: // "OPERATOR_PM_FROM_FILE"
      case 251: // "OPERATOR_RBL"
      case 252: // "OPERATOR_RSUB"
      case 253: // "OPERATOR_RX"
      case 254: // "Operator RX (content only)"
      case 255: // "OPERATOR_STR_EQ"
      case 256: // "OPERATOR_STR_MATCH"
      case 257: // "OPERATOR_UNCONDITIONAL_MATCH"
      case 258: // "OPERATOR_VALIDATE_BYTE_RANGE"
      case 259: // "OPERATOR_VALIDATE_DTD"
      case 260: // "OPERATOR_VALIDATE_HASH"
      case 261: // "OPERATOR_VALIDATE_SCHEMA"
      case 262: // "OPERATOR_VALIDATE_URL_ENCODING"
      case 263: // "OPERATOR_VALIDATE_UTF8_ENCODING"
      case 264: // "OPERATOR_VERIFY_CC"
      case 265: // "OPERATOR_VERIFY_CPF"
      case 266: // "OPERATOR_VERIFY_SSN"
      case 267: // "OPERATOR_WITHIN"
      case 268: // "OP_QUOTE"
      case 269: // "QUOTATION_MARK"
      case 270: // "RUN_TIME_VAR_BLD"
      case 271: // "RUN_TIME_VAR_DUR"
      case 272: // "RUN_TIME_VAR_HSV"
      case 273: // "RUN_TIME_VAR_REMOTE_USER"
      case 274: // "RUN_TIME_VAR_TIME"
      case 275: // "RUN_TIME_VAR_TIME_DAY"
      case 276: // "RUN_TIME_VAR_TIME_EPOCH"
      case 277: // "RUN_TIME_VAR_TIME_HOUR"
      case 278: // "RUN_TIME_VAR_TIME_MIN"
      case 279: // "RUN_TIME_VAR_TIME_MON"
      case 280: // "RUN_TIME_VAR_TIME_SEC"
      case 281: // "RUN_TIME_VAR_TIME_WDAY"
      case 282: // "RUN_TIME_VAR_TIME_YEAR"
      case 283: // "VARIABLE"
      case 284: // "Dictionary element"
      case 285: // "Dictionary element, selected by regexp"
        yylhs.value.build< std::string > ();
        break;

      case 292: // op
      case 293: // op_before_init
        yylhs.value.build< std::unique_ptr<Operator> > ();
        break;

      case 297: // var
        yylhs.value.build< std::unique_ptr<Variable> > ();
        break;

      case 298: // act
        yylhs.value.build< std::unique_ptr<actions::Action> > ();
        break;

      case 295: // variables
      case 296: // variables_may_be_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ();
        break;

      case 290: // actions
      case 291: // actions_may_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 665 "seclang-parser.yy" // lalr1.cc:859
    {
        return 0;
      }
#line 1186 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 6:
#line 678 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDirMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1194 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 7:
#line 684 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDir(yystack_[0].value.as< std::string > ());
      }
#line 1202 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 8:
#line 690 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::RelevantOnlyAuditLogStatus);
      }
#line 1210 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 9:
#line 694 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OffAuditLogStatus);
      }
#line 1218 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 10:
#line 698 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OnAuditLogStatus);
      }
#line 1226 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 11:
#line 704 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFileMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1234 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 12:
#line 710 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath2(yystack_[0].value.as< std::string > ());
      }
#line 1242 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 13:
#line 716 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setParts(yystack_[0].value.as< std::string > ());
      }
#line 1250 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 14:
#line 722 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath1(yystack_[0].value.as< std::string > ());
      }
#line 1258 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 15:
#line 728 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string relevant_status(yystack_[0].value.as< std::string > ());
        relevant_status.pop_back();
        relevant_status.erase(0, 1);
        driver.m_auditLog->setRelevantStatus(relevant_status);
      }
#line 1269 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 16:
#line 737 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::SerialAuditLogType);
      }
#line 1277 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 17:
#line 741 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::ParallelAuditLogType);
      }
#line 1285 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 18:
#line 745 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::HttpsAuditLogType);
      }
#line 1293 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 19:
#line 751 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1301 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 20:
#line 755 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1309 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 21:
#line 759 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileLimit.m_set = true;
        driver.m_uploadFileLimit.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 10);
      }
#line 1318 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 22:
#line 764 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileMode.m_set = true;
        driver.m_uploadFileMode.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8);
      }
#line 1327 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 23:
#line 769 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadDirectory.m_set = true;
        driver.m_uploadDirectory.m_value = yystack_[0].value.as< std::string > ();
      }
#line 1336 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 24:
#line 774 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1344 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 25:
#line 778 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1352 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 26:
#line 785 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1360 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 27:
#line 789 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1368 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 28:
#line 796 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[3].location)
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1378 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 29:
#line 802 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<actions::Action>>> b(new std::vector<std::unique_ptr<actions::Action>>());
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[1].location)
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(b);
      }
#line 1389 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 30:
#line 812 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1402 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 31:
#line 821 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1416 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 32:
#line 831 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1429 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 33:
#line 840 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx("!" + utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1442 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 34:
#line 852 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::UnconditionalMatch());
      }
#line 1450 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 35:
#line 856 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectSQLi());
      }
#line 1458 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 36:
#line 860 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectXSS());
      }
#line 1466 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 37:
#line 864 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUrlEncoding());
      }
#line 1474 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 38:
#line 868 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUtf8Encoding());
      }
#line 1482 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 39:
#line 872 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::InspectFile($1); */
        OPERATOR_NOT_SUPPORTED("InspectFile", yystack_[2].location);
      }
#line 1491 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 40:
#line 877 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::FuzzyHash(); */
        OPERATOR_NOT_SUPPORTED("FuzzyHash", yystack_[2].location);
      }
#line 1500 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 41:
#line 882 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateByteRange(yystack_[0].value.as< std::string > ()));
      }
#line 1508 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 42:
#line 886 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateDTD(yystack_[0].value.as< std::string > ()));
      }
#line 1516 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 43:
#line 890 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::ValidateHash($1); */
        OPERATOR_NOT_SUPPORTED("ValidateHash", yystack_[2].location);
      }
#line 1525 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 44:
#line 895 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateSchema(yystack_[0].value.as< std::string > ()));
      }
#line 1533 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 45:
#line 899 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCC(yystack_[0].value.as< std::string > ()));
      }
#line 1541 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 46:
#line 903 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::VerifyCPF($1); */
        OPERATOR_NOT_SUPPORTED("VerifyCPF", yystack_[2].location);
      }
#line 1550 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 47:
#line 908 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::VerifySSN($1); */
        OPERATOR_NOT_SUPPORTED("VerifySSN", yystack_[2].location);
      }
#line 1559 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 48:
#line 913 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::GsbLookup($1); */
        OPERATOR_NOT_SUPPORTED("GsbLookup", yystack_[2].location);
      }
#line 1568 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 49:
#line 918 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::Rsub($1); */
        OPERATOR_NOT_SUPPORTED("Rsub", yystack_[2].location);
      }
#line 1577 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 50:
#line 923 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Within(yystack_[0].value.as< std::string > ()));
      }
#line 1585 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 51:
#line 927 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ContainsWord(yystack_[0].value.as< std::string > ()));
      }
#line 1593 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 52:
#line 931 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Contains(yystack_[0].value.as< std::string > ()));
      }
#line 1601 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 53:
#line 935 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::EndsWith(yystack_[0].value.as< std::string > ()));
      }
#line 1609 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 54:
#line 939 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Eq(yystack_[0].value.as< std::string > ()));
      }
#line 1617 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 55:
#line 943 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Ge(yystack_[0].value.as< std::string > ()));
      }
#line 1625 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 56:
#line 947 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Gt(yystack_[0].value.as< std::string > ()));
      }
#line 1633 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 57:
#line 951 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatchF(yystack_[0].value.as< std::string > ()));
      }
#line 1641 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 58:
#line 955 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatch(yystack_[0].value.as< std::string > ()));
      }
#line 1649 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 59:
#line 959 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Le(yystack_[0].value.as< std::string > ()));
      }
#line 1657 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 60:
#line 963 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Lt(yystack_[0].value.as< std::string > ()));
      }
#line 1665 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 61:
#line 967 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::PmFromFile(yystack_[0].value.as< std::string > ()));
      }
#line 1673 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 62:
#line 971 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Pm(yystack_[0].value.as< std::string > ()));
      }
#line 1681 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 63:
#line 975 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rbl(yystack_[0].value.as< std::string > ()));
      }
#line 1689 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 64:
#line 979 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(yystack_[0].value.as< std::string > ()));
      }
#line 1697 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 65:
#line 983 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrEq(yystack_[0].value.as< std::string > ()));
      }
#line 1705 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 66:
#line 987 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrMatch(yystack_[0].value.as< std::string > ()));
      }
#line 1713 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 67:
#line 991 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::BeginsWith(yystack_[0].value.as< std::string > ()));
      }
#line 1721 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 68:
#line 995 "seclang-parser.yy" // lalr1.cc:859
    {
#ifdef WITH_GEOIP
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::GeoLookup());
#else
        std::stringstream ss;
            ss << "This version of ModSecurity was not compiled with GeoIP support.";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
#endif  // WITH_GEOIP
      }
#line 1736 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 70:
#line 1010 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        std::vector<Variable *> *v = new std::vector<Variable *>();
        for (auto &i : *yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Operator *op = yystack_[1].value.as< std::unique_ptr<Operator> > ().release();
        Rule *rule = new Rule(
            /* op */ op,
            /* variables */ v,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[4].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 1764 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 71:
#line 1034 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<Variable *> *v = new std::vector<Variable *>();
        for (auto &i : *yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Rule *rule = new Rule(
            /* op */ yystack_[0].value.as< std::unique_ptr<Operator> > ().release(),
            /* variables */ v,
            /* actions */ NULL,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[3].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 1787 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 72:
#line 1053 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        Rule *rule = new Rule(
            /* op */ NULL,
            /* variables */ NULL,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[2].location.end.line
            );
        driver.addSecAction(rule);
      }
#line 1806 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 73:
#line 1068 "seclang-parser.yy" // lalr1.cc:859
    {
        /*

        TODO: implement the SecRuleScript directive

        */
      }
#line 1818 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 74:
#line 1076 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *actions = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            actions->push_back(i.release());
        }
        std::vector<actions::Action *> checkedActions;
        int definedPhase = -1;
        int secRuleDefinedPhase = -1;
        for (actions::Action *a : *actions) {
            actions::Phase *phase = dynamic_cast<actions::Phase *>(a);
            if (phase != NULL) {
                definedPhase = phase->m_phase;
                secRuleDefinedPhase = phase->m_secRulesPhase;
                delete phase;
            } else if (a->action_kind == actions::Action::RunTimeOnlyIfMatchKind ||
                a->action_kind == actions::Action::RunTimeBeforeMatchAttemptKind) {
                actions::transformations::None *none = dynamic_cast<actions::transformations::None *>(a);
                if (none != NULL) {
                    driver.error(yystack_[2].location, "The transformation none is not suitable to be part of the SecDefaultActions");
                    YYERROR;
                }
                checkedActions.push_back(a);
            } else {
                driver.error(yystack_[2].location, "The action '" + a->m_name + "' is not suitable to be part of the SecDefaultActions");
                YYERROR;
            }
        }
        if (definedPhase == -1) {
            definedPhase = modsecurity::Phases::RequestHeadersPhase;
        }

        if (!driver.m_defaultActions[definedPhase].empty()) {
            std::stringstream ss;
            ss << "SecDefaultActions can only be placed once per phase and configuration context. Phase ";
            ss << secRuleDefinedPhase;
            ss << " was informed already.";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        for (actions::Action *a : checkedActions) {
            driver.m_defaultActions[definedPhase].push_back(a);
        }

        delete actions;
      }
#line 1869 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 75:
#line 1123 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.addSecMarker(modsecurity::utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ()));
      }
#line 1877 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 76:
#line 1127 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = modsecurity::Rules::DisabledRuleEngine;
      }
#line 1885 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 77:
#line 1131 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = modsecurity::Rules::EnabledRuleEngine;
      }
#line 1893 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 78:
#line 1135 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = modsecurity::Rules::DetectionOnlyRuleEngine;
      }
#line 1901 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 79:
#line 1139 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1909 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 80:
#line 1143 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1917 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 81:
#line 1147 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1925 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 82:
#line 1151 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1933 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 83:
#line 1155 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_components.push_back(yystack_[0].value.as< std::string > ());
      }
#line 1941 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 84:
#line 1159 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.load(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveById: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 1958 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 85:
#line 1173 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
          driver.m_debugLog->setDebugLogLevel(atoi(yystack_[0].value.as< std::string > ().c_str()));
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 1974 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 86:
#line 1185 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
            std::string error;
            driver.m_debugLog->setDebugLogFile(yystack_[0].value.as< std::string > (), &error);
            if (error.size() > 0) {
                std::stringstream ss;
                ss << "Failed to start DebugLog: " << error;
                driver.error(yystack_[1].location, ss.str());
                YYERROR;
            }
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 1997 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 87:
#line 1205 "seclang-parser.yy" // lalr1.cc:859
    {
#ifdef WITH_GEOIP
        std::string err;
        std::string file = modsecurity::utils::find_resource(yystack_[0].value.as< std::string > (),
            driver.ref.back(), &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to load locate the GeoDB file from: " << yystack_[0].value.as< std::string > () << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        if (GeoLookup::getInstance().setDataBase(file) == false) {
            std::stringstream ss;
            ss << "Failed to load the GeoDB from: ";
            ss << file;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
#else
        std::stringstream ss;
        ss << "This version of ModSecurity was not compiled with GeoIP support.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
#endif  // WITH_GEOIP
      }
#line 2028 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 88:
#line 1233 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimit.m_set = true;
        driver.m_requestBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2037 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 89:
#line 1238 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyNoFilesLimit.m_set = true;
        driver.m_requestBodyNoFilesLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2046 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 90:
#line 1243 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyInMemoryLimit.m_set = true;
        driver.m_requestBodyInMemoryLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2055 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 91:
#line 1248 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimit.m_set = true;
        driver.m_responseBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2064 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 92:
#line 1253 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2072 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 93:
#line 1257 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2080 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 94:
#line 1261 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2088 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 95:
#line 1265 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2096 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 96:
#line 1269 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::AbortOnFailedRemoteRulesAction;
      }
#line 2104 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 97:
#line 1273 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::WarnOnFailedRemoteRulesAction;
      }
#line 2112 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 100:
#line 1279 "seclang-parser.yy" // lalr1.cc:859
    {
        std::istringstream buf(yystack_[0].value.as< std::string > ());
        std::istream_iterator<std::string> beg(buf), end;
        std::set<std::string> tokens(beg, end);
        for (std::set<std::string>::iterator it=tokens.begin();
            it!=tokens.end(); ++it)
        {
            driver.m_responseBodyTypeToBeInspected.insert(*it);
        }
      }
#line 2127 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 101:
#line 1290 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 2135 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 102:
#line 1294 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 2143 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 109:
#line 1304 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2150 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 110:
#line 1310 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2158 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 111:
#line 1314 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2166 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 112:
#line 1321 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2175 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 113:
#line 1326 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2185 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 114:
#line 1332 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2195 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 115:
#line 1338 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2205 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 116:
#line 1344 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2216 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 117:
#line 1351 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2227 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 118:
#line 1361 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2235 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 119:
#line 1365 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2243 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 120:
#line 1369 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_NoDictElement());
      }
#line 2251 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 121:
#line 1373 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2259 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 122:
#line 1377 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2267 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 123:
#line 1381 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_NoDictElement());
      }
#line 2275 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 124:
#line 1385 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2283 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 125:
#line 1389 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2291 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 126:
#line 1393 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_NoDictElement());
      }
#line 2299 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 127:
#line 1397 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2307 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 128:
#line 1401 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2315 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 129:
#line 1405 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_NoDictElement());
      }
#line 2323 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 130:
#line 1409 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2331 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 131:
#line 1413 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2339 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 132:
#line 1417 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_NoDictElement());
      }
#line 2347 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 133:
#line 1421 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2355 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 134:
#line 1425 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2363 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 135:
#line 1429 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_NoDictElement());
      }
#line 2371 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 136:
#line 1433 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2379 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 137:
#line 1437 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2387 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 138:
#line 1441 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_NoDictElement());
      }
#line 2395 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 139:
#line 1445 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2403 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 140:
#line 1449 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2411 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 141:
#line 1453 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_NoDictElement());
      }
#line 2419 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 142:
#line 1457 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2427 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 143:
#line 1461 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2435 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 144:
#line 1465 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_NoDictElement());
      }
#line 2443 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 145:
#line 1469 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2451 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 146:
#line 1473 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2459 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 147:
#line 1477 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_NoDictElement());
      }
#line 2467 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 148:
#line 1481 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2475 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 149:
#line 1485 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2483 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 150:
#line 1489 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_NoDictElement());
      }
#line 2491 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 151:
#line 1493 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2499 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 152:
#line 1497 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2507 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 153:
#line 1501 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_NoDictElement());
      }
#line 2515 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 154:
#line 1505 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2523 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 155:
#line 1509 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2531 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 156:
#line 1513 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_NoDictElement());
      }
#line 2539 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 157:
#line 1517 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2547 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 158:
#line 1521 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2555 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 159:
#line 1525 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_NoDictElement());
      }
#line 2563 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 160:
#line 1529 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2571 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 161:
#line 1533 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2579 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 162:
#line 1537 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_NoDictElement());
      }
#line 2587 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 163:
#line 1541 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2595 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 164:
#line 1545 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2603 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 165:
#line 1549 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_NoDictElement());
      }
#line 2611 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 166:
#line 1553 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2619 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 167:
#line 1557 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2627 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 168:
#line 1561 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_NoDictElement());
      }
#line 2635 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 169:
#line 1565 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 2643 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 170:
#line 1569 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 2651 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 171:
#line 1573 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV"));
      }
#line 2659 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 172:
#line 1577 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 2667 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 173:
#line 1581 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 2675 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 174:
#line 1585 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML_NoDictElement());
      }
#line 2683 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 175:
#line 1589 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2691 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 176:
#line 1593 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2699 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 177:
#line 1597 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_NoDictElement());
      }
#line 2707 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 178:
#line 1602 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2715 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 179:
#line 1606 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2723 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 180:
#line 1610 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_NoDictElement());
      }
#line 2731 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 181:
#line 1615 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2739 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 182:
#line 1619 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2747 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 183:
#line 1623 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_NoDictElement());
      }
#line 2755 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 184:
#line 1628 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2763 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 185:
#line 1632 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2771 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 186:
#line 1636 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_NoDictElement());
      }
#line 2779 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 187:
#line 1641 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2787 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 188:
#line 1645 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2795 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 189:
#line 1649 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_NoDictElement());
      }
#line 2803 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 190:
#line 1656 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsNames());
      }
#line 2811 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 191:
#line 1660 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGetNames());
      }
#line 2819 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 192:
#line 1664 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPostNames());
      }
#line 2827 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 193:
#line 1668 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeadersNames());
      }
#line 2835 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 194:
#line 1672 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentType());
      }
#line 2843 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 195:
#line 1676 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeadersNames());
      }
#line 2851 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 196:
#line 1680 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsCombinedSize());
      }
#line 2859 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 197:
#line 1684 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::AuthType());
      }
#line 2867 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 198:
#line 1688 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesCombinedSize());
      }
#line 2875 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 199:
#line 1692 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequest());
      }
#line 2883 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 200:
#line 1696 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequestLength());
      }
#line 2891 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 201:
#line 1700 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::InboundDataError());
      }
#line 2899 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 202:
#line 1704 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVar());
      }
#line 2907 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 203:
#line 1708 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarName());
      }
#line 2915 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 204:
#line 1712 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartCrlfLFLines());
      }
#line 2923 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 205:
#line 1716 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartDateAfter());
      }
#line 2931 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 206:
#line 1720 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartFileLimitExceeded());
      }
#line 2939 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 207:
#line 1724 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartHeaderFolding());
      }
#line 2947 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 208:
#line 1728 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidHeaderFolding());
      }
#line 2955 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 209:
#line 1732 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidQuoting());
      }
#line 2963 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 210:
#line 1736 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartStrictError());
      }
#line 2971 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 211:
#line 1740 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartUnmatchedBoundary());
      }
#line 2979 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 212:
#line 1744 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::OutboundDataError());
      }
#line 2987 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 213:
#line 1748 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::PathInfo());
      }
#line 2995 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 214:
#line 1752 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::QueryString());
      }
#line 3003 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 215:
#line 1756 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteAddr());
      }
#line 3011 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 216:
#line 1760 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteHost());
      }
#line 3019 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 217:
#line 1764 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemotePort());
      }
#line 3027 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 218:
#line 1768 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyError());
      }
#line 3035 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 219:
#line 1772 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyErrorMsg());
      }
#line 3043 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 220:
#line 1776 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessor());
      }
#line 3051 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 221:
#line 1780 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorError());
      }
#line 3059 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 222:
#line 1784 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorErrorMsg());
      }
#line 3067 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 223:
#line 1788 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBasename());
      }
#line 3075 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 224:
#line 1792 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBody());
      }
#line 3083 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 225:
#line 1796 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBodyLength());
      }
#line 3091 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 226:
#line 1800 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestFilename());
      }
#line 3099 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 227:
#line 1804 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestLine());
      }
#line 3107 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 228:
#line 1808 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestMethod());
      }
#line 3115 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 229:
#line 1812 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestProtocol());
      }
#line 3123 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 230:
#line 1816 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURI());
      }
#line 3131 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 231:
#line 1820 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURIRaw());
      }
#line 3139 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 232:
#line 1824 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource());
      }
#line 3147 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 233:
#line 1828 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseBody());
      }
#line 3155 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 234:
#line 1832 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentLength());
      }
#line 3163 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 235:
#line 1836 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseProtocol());
      }
#line 3171 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 236:
#line 1840 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseStatus());
      }
#line 3179 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 237:
#line 1844 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerAddr());
      }
#line 3187 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 238:
#line 1848 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerName());
      }
#line 3195 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 239:
#line 1852 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerPort());
      }
#line 3203 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 240:
#line 1856 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::SessionID());
      }
#line 3211 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 241:
#line 1860 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UniqueID());
      }
#line 3219 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 242:
#line 1864 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UrlEncodedError());
      }
#line 3227 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 243:
#line 1868 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UserID());
      }
#line 3235 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 244:
#line 1872 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Status());
      }
#line 3243 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 245:
#line 1876 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Duration(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3254 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 246:
#line 1884 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new ModsecBuild(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3265 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 247:
#line 1891 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new HighestSeverity(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3276 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 248:
#line 1898 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new RemoteUser(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3287 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 249:
#line 1905 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Time(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3298 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 250:
#line 1912 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3309 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 251:
#line 1919 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeEpoch(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3320 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 252:
#line 1926 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeHour(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3331 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 253:
#line 1933 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMin(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3342 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 254:
#line 1940 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMon(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3353 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 255:
#line 1947 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
            std::unique_ptr<Variable> c(new TimeSec(name));
            yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3364 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 256:
#line 1954 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeWDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3375 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 257:
#line 1961 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeYear(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3386 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 258:
#line 1971 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Accuracy(yystack_[0].value.as< std::string > ()));
      }
#line 3394 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 259:
#line 1975 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Allow(yystack_[0].value.as< std::string > ()));
      }
#line 3402 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 260:
#line 1979 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Append", yystack_[1].location);
      }
#line 3410 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 261:
#line 1983 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::AuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 3418 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 262:
#line 1987 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Block(yystack_[0].value.as< std::string > ()));
      }
#line 3426 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 263:
#line 1991 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Capture(yystack_[0].value.as< std::string > ()));
      }
#line 3434 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 264:
#line 1995 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Chain(yystack_[0].value.as< std::string > ()));
      }
#line 3442 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 265:
#line 1999 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3451 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 266:
#line 2004 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3460 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 267:
#line 2009 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3469 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 268:
#line 2014 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditLogParts(yystack_[0].value.as< std::string > ()));
      }
#line 3477 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 269:
#line 2018 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorJSON(yystack_[0].value.as< std::string > ()));
      }
#line 3485 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 270:
#line 2022 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorXML(yystack_[0].value.as< std::string > ()));
      }
#line 3493 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 271:
#line 2026 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3502 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 272:
#line 2031 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3511 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 273:
#line 2036 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "true"));
      }
#line 3519 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 274:
#line 2040 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "false"));
      }
#line 3527 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 275:
#line 2044 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlRuleEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3536 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 276:
#line 2049 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlRuleEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3545 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 277:
#line 2054 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlRuleEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3554 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 278:
#line 2059 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveById(yystack_[0].value.as< std::string > ()));
      }
#line 3562 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 279:
#line 2063 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetById(yystack_[0].value.as< std::string > ()));
      }
#line 3570 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 280:
#line 2067 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetByTag(yystack_[0].value.as< std::string > ()));
      }
#line 3578 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 281:
#line 2071 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Deny(yystack_[0].value.as< std::string > ()));
      }
#line 3586 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 282:
#line 2075 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("DeprecateVar", yystack_[1].location);
      }
#line 3594 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 283:
#line 2079 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("Drop", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 3603 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 284:
#line 2084 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Exec", yystack_[1].location);
      }
#line 3611 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 285:
#line 2088 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("ExpireVar", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 3620 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 286:
#line 2093 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::RuleId(yystack_[0].value.as< std::string > ()));
      }
#line 3628 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 287:
#line 2097 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::InitCol(yystack_[0].value.as< std::string > ()));
      }
#line 3636 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 288:
#line 2101 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::LogData(yystack_[0].value.as< std::string > ()));
      }
#line 3644 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 289:
#line 2105 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Log(yystack_[0].value.as< std::string > ()));
      }
#line 3652 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 290:
#line 2109 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Maturity(yystack_[0].value.as< std::string > ()));
      }
#line 3660 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 291:
#line 2113 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Msg(yystack_[0].value.as< std::string > ()));
      }
#line 3668 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 292:
#line 2117 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::MultiMatch(yystack_[0].value.as< std::string > ()));
      }
#line 3676 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 293:
#line 2121 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoAuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 3684 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 294:
#line 2125 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoLog(yystack_[0].value.as< std::string > ()));
      }
#line 3692 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 295:
#line 2129 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Pass(yystack_[0].value.as< std::string > ()));
      }
#line 3700 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 296:
#line 2133 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Pause", yystack_[1].location);
      }
#line 3708 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 297:
#line 2137 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Phase(yystack_[0].value.as< std::string > ()));
      }
#line 3716 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 298:
#line 2141 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Prepend", yystack_[1].location);
      }
#line 3724 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 299:
#line 2145 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Proxy", yystack_[1].location);
      }
#line 3732 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 300:
#line 2149 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Redirect(yystack_[0].value.as< std::string > ()));
      }
#line 3740 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 301:
#line 2153 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Rev(yystack_[0].value.as< std::string > ()));
      }
#line 3748 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 302:
#line 2157 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseArg", yystack_[1].location);
      }
#line 3756 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 303:
#line 2161 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseMatched", yystack_[1].location);
      }
#line 3764 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 304:
#line 2165 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseMatchedBytes", yystack_[1].location);
      }
#line 3772 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 305:
#line 2169 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseRequestHeader", yystack_[1].location);
      }
#line 3780 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 306:
#line 2173 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseResponseHeader", yystack_[1].location);
      }
#line 3788 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 307:
#line 2177 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SetEnv", yystack_[1].location);
      }
#line 3796 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 308:
#line 2181 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SetRSC", yystack_[1].location);
      }
#line 3804 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 309:
#line 2185 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetSID(yystack_[0].value.as< std::string > ()));
      }
#line 3812 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 310:
#line 2189 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetUID(yystack_[0].value.as< std::string > ()));
      }
#line 3820 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 311:
#line 2193 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::unsetOperation, yystack_[0].value.as< std::string > ()));
      }
#line 3828 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 312:
#line 2197 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setToOneOperation, yystack_[0].value.as< std::string > ()));
      }
#line 3836 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 313:
#line 2201 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setOperation, yystack_[2].value.as< std::string > (), yystack_[0].value.as< std::string > ()));
      }
#line 3844 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 314:
#line 2205 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::sumAndSetOperation, yystack_[2].value.as< std::string > (), yystack_[0].value.as< std::string > ()));
      }
#line 3852 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 315:
#line 2209 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::substractAndSetOperation, yystack_[2].value.as< std::string > (), yystack_[0].value.as< std::string > ()));
      }
#line 3860 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 316:
#line 2213 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Severity(yystack_[0].value.as< std::string > ()));
      }
#line 3868 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 317:
#line 2217 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Skip(yystack_[0].value.as< std::string > ()));
      }
#line 3876 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 318:
#line 2221 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SkipAfter(yystack_[0].value.as< std::string > ()));
      }
#line 3884 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 319:
#line 2225 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::data::Status(yystack_[0].value.as< std::string > ()));
      }
#line 3892 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 320:
#line 2229 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Tag(yystack_[0].value.as< std::string > ()));
      }
#line 3900 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 321:
#line 2233 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Ver(yystack_[0].value.as< std::string > ()));
      }
#line 3908 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 322:
#line 2237 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::XmlNS(yystack_[0].value.as< std::string > ()));
      }
#line 3916 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 323:
#line 2241 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityZero7bit(yystack_[0].value.as< std::string > ()));
      }
#line 3924 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 324:
#line 2245 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityOdd7bit(yystack_[0].value.as< std::string > ()));
      }
#line 3932 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 325:
#line 2249 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityEven7bit(yystack_[0].value.as< std::string > ()));
      }
#line 3940 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 326:
#line 2253 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::SqlHexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 3948 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 327:
#line 2257 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CmdLine(yystack_[0].value.as< std::string > ()));
      }
#line 3956 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 328:
#line 2261 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Sha1(yystack_[0].value.as< std::string > ()));
      }
#line 3964 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 329:
#line 2265 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Md5(yystack_[0].value.as< std::string > ()));
      }
#line 3972 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 330:
#line 2269 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexEncode(yystack_[0].value.as< std::string > ()));
      }
#line 3980 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 331:
#line 2273 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::LowerCase(yystack_[0].value.as< std::string > ()));
      }
#line 3988 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 332:
#line 2277 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecodeUni(yystack_[0].value.as< std::string > ()));
      }
#line 3996 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 333:
#line 2281 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4004 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 334:
#line 2285 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::None(yystack_[0].value.as< std::string > ()));
      }
#line 4012 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 335:
#line 2289 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CompressWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4020 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 336:
#line 2293 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4028 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 337:
#line 2297 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceNulls(yystack_[0].value.as< std::string > ()));
      }
#line 4036 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 338:
#line 2301 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveNulls(yystack_[0].value.as< std::string > ()));
      }
#line 4044 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 339:
#line 2305 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HtmlEntityDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4052 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 340:
#line 2309 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::JsDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4060 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 341:
#line 2313 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CssDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4068 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 342:
#line 2317 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Trim(yystack_[0].value.as< std::string > ()));
      }
#line 4076 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 343:
#line 2321 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePathWin(yystack_[0].value.as< std::string > ()));
      }
#line 4084 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 344:
#line 2325 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePath(yystack_[0].value.as< std::string > ()));
      }
#line 4092 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 345:
#line 2329 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Length(yystack_[0].value.as< std::string > ()));
      }
#line 4100 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 346:
#line 2333 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Utf8ToUnicode(yystack_[0].value.as< std::string > ()));
      }
#line 4108 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 347:
#line 2337 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveCommentsChar(yystack_[0].value.as< std::string > ()));
      }
#line 4116 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 348:
#line 2341 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveComments(yystack_[0].value.as< std::string > ()));
      }
#line 4124 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 349:
#line 2345 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceComments(yystack_[0].value.as< std::string > ()));
      }
#line 4132 "seclang-parser.cc" // lalr1.cc:859
    break;


#line 4136 "seclang-parser.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  seclang_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  seclang_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int seclang_parser::yypact_ninf_ = -278;

  const signed char seclang_parser::yytable_ninf_ = -1;

  const short int
  seclang_parser::yypact_[] =
  {
     406,  -278,  -278,  -278,  -278,  -203,  -278,  -278,  -278,  -278,
    -278,  -206,  -278,  -278,  -278,  -278,  -278,  -209,  -278,  -278,
      56,  -278,    68,  -278,   119,  -197,   548,   548,  -278,  -278,
    -278,  -208,  -278,   124,   127,  -278,  -278,  -278,   129,  -278,
    -278,  -278,  -278,  -278,  -278,    14,   548,   562,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,   258,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,    57,  -278,  -278,  -278,
     131,   133,    63,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
     725,  -278,    15,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,   453,   453,  -277,    64,    67,    69,    71,
      73,    75,    77,    79,    95,    97,    99,   101,   103,   105,
     107,  -278,  -278,   109,  -278,  -278,  -278,  -278,   111,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,   113,   115,
     117,   120,   123,   161,    96,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,   177,   259,
    -278,  -278,  -278,  -278,  -184,   189,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,    -2,   725,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,    -1,    65,
     -49,    36,   135,  -278,  -278,   173,   217,   312,   313,  -278,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,  -278,   326,   327,  -278,   328,   329,   330,   331,
    -278,  -278,   333,   334,   335,   336,   548,  -278,   178,  -278,
     337,   338,   339,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,   453,   453,
    -278,  -278,  -278,  -278,  -278,  -278
  };

  const unsigned short int
  seclang_parser::yydefact_[] =
  {
       0,     2,    83,     7,     6,     0,    11,    14,    12,    13,
      15,     0,    86,    85,    87,    99,    98,     0,    90,    88,
       0,    89,     0,    91,     0,     0,     0,     0,    75,   108,
     109,     0,    84,     0,     0,    23,    21,    22,     0,   100,
     105,   106,   104,   107,   103,     0,     0,     0,     4,    69,
       5,     9,    10,     8,    18,    17,    16,    80,    79,    92,
      93,    82,    81,    94,    95,    78,    76,    77,     0,   258,
     259,   260,   261,   262,   263,   264,     0,   268,   269,   270,
       0,     0,     0,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   289,   288,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   316,   317,   318,   319,
     320,   327,   335,   341,   330,   339,   340,   345,   331,   329,
     334,   344,   343,   325,   324,   323,   348,   347,   338,   336,
     349,   337,   328,   326,   342,   333,   332,   346,   321,   322,
       0,    72,    27,    29,    74,    96,    97,    20,    19,    25,
      24,   101,   102,     0,     0,   120,   123,   126,   129,   132,
     135,   138,   141,   144,   147,   150,   153,   156,   159,   162,
     165,   196,   191,   168,   190,   192,   197,   198,   177,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   219,   218,
     222,   221,   220,   223,   225,   224,   226,   193,   227,   228,
     229,   231,   230,   232,   233,   234,   194,   195,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   180,   183,
     186,   189,   171,   174,     0,   246,   245,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,     0,   110,
     115,    73,     1,     3,     0,   312,   266,   265,   267,   272,
     271,   274,   273,   277,   276,   275,     0,     0,   117,   116,
     118,   119,   121,   122,   124,   125,   127,   128,   130,   131,
     133,   134,   136,   137,   139,   140,   142,   143,   145,   146,
     148,   149,   151,   152,   154,   155,   157,   158,   160,   161,
     163,   164,   166,   167,   175,   176,   178,   179,   181,   182,
     184,   185,   187,   188,   169,   170,   172,   173,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,    71,    30,     0,   311,
       0,     0,     0,    26,    28,   111,    33,    31,    67,    52,
      51,    53,    54,    40,    55,    48,    56,    39,    58,    57,
      59,    60,    62,    61,    63,    49,    64,    65,    66,    41,
      42,    43,    44,    45,    46,    47,    50,    70,     0,     0,
     112,   313,   314,   315,   114,   113
  };

  const short int
  seclang_parser::yypgoto_[] =
  {
    -278,  -278,   523,  -278,   -27,   421,  -278,   243,  -278,  -278,
     332,   170,   296
  };

  const short int
  seclang_parser::yydefgoto_[] =
  {
      -1,    47,    48,    49,   151,   152,   366,   367,    50,   258,
     259,   260,   153
  };

  const unsigned short int
  seclang_parser::yytable_[] =
  {
     154,   277,   155,   368,    57,    58,    54,   280,   281,    55,
      51,    52,   156,    56,    65,    53,    66,    67,   277,   261,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   369,
     242,   243,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   378,   242,   243,   408,   409,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   368,   242,   243,   379,   373,   375,   329,
     266,   267,    59,    60,   273,   268,   274,   275,   370,   371,
     372,    61,    62,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   376,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   278,   279,    63,    64,   157,   158,   407,
     159,   160,   161,   162,   269,   270,   271,   272,   282,   283,
     264,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   380,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   381,   322,   323,     1,   324,   325,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   326,   327,   382,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   410,   242,
     243,   265,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   262,   403,   404,   405,   406,   411,   412,   413,
     263,   276,   377,   374,     0,     0,   328,     0,   414,   415,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    68,     0,     0,     0,
       0,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,     0,     0,   150,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149
  };

  const short int
  seclang_parser::yycheck_[] =
  {
      27,     3,   210,     4,   213,   214,   212,   284,   285,   215,
     213,   214,   220,   219,   211,   218,   213,   214,     3,    46,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   283,
      86,    87,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,   230,    86,    87,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     4,    86,    87,   230,   269,   269,    92,
     213,   214,   216,   217,   211,   218,   213,   214,    89,    90,
      91,   213,   214,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   163,   164,   216,   217,   213,   214,   366,
     213,   214,   213,   214,   213,   214,   213,   214,   284,   285,
      92,   284,   285,   284,   285,   284,   285,   284,   285,   284,
     285,   284,   285,   284,   285,   230,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   284,
     285,   284,   285,   284,   285,   284,   285,   284,   285,   284,
     285,   284,   285,   284,   285,   284,   285,   284,   285,   284,
     285,   284,   285,   230,   284,   285,     0,   284,   285,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   284,   285,   230,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,   368,    86,
      87,   283,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,     0,   230,   230,   230,   230,   230,   230,   230,
      47,   150,   329,   277,    -1,    -1,   244,    -1,   408,   409,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    88,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    -1,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,   222,   223,   224,   225,   226,   227,
     228,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    -1,   269,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173
  };

  const unsigned short int
  seclang_parser::yystos_[] =
  {
       0,     0,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   287,   288,   289,
     294,   213,   214,   218,   212,   215,   219,   213,   214,   216,
     217,   213,   214,   216,   217,   211,   213,   214,    88,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     269,   290,   291,   298,   290,   210,   220,   213,   214,   213,
     214,   213,   214,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    86,    87,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   295,   296,
     297,   290,     0,   288,    92,   283,   213,   214,   218,   213,
     214,   213,   214,   211,   213,   214,   291,     3,   297,   297,
     284,   285,   284,   285,   284,   285,   284,   285,   284,   285,
     284,   285,   284,   285,   284,   285,   284,   285,   284,   285,
     284,   285,   284,   285,   284,   285,   284,   285,   284,   285,
     284,   285,   284,   285,   284,   285,   284,   285,   284,   285,
     284,   285,   284,   285,   284,   285,   284,   285,   296,    92,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   292,   293,     4,   283,
      89,    90,    91,   269,   298,   269,   254,   293,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   290,     6,     7,
     297,   230,   230,   230,   297,   297
  };

  const unsigned short int
  seclang_parser::yyr1_[] =
  {
       0,   286,   287,   287,   287,   288,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   290,   290,   291,   291,
     292,   292,   292,   292,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     295,   295,   296,   296,   296,   296,   296,   296,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298
  };

  const unsigned char
  seclang_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     3,     1,     3,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       4,     3,     2,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     4,     4,     1,     2,     2,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     4,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const seclang_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"", "PIPE", "NEW_LINE",
  "VAR_COUNT", "VAR_EXCLUSION", "VARIABLE_ARGS", "VARIABLE_ARGS_POST",
  "VARIABLE_ARGS_GET", "VARIABLE_FILES_SIZES", "VARIABLE_FILES_NAMES",
  "VARIABLE_FILES_TMP_CONTENT", "VARIABLE_MULTIPART_FILENAME",
  "VARIABLE_MULTIPART_NAME", "VARIABLE_MATCHED_VARS_NAMES",
  "VARIABLE_MATCHED_VARS", "VARIABLE_FILES", "VARIABLE_REQUEST_COOKIES",
  "VARIABLE_REQUEST_HEADERS", "VARIABLE_RESPONSE_HEADERS", "VARIABLE_GEO",
  "VARIABLE_REQUEST_COOKIES_NAMES", "VARIABLE_ARGS_COMBINED_SIZE",
  "VARIABLE_ARGS_GET_NAMES", "VARIABLE_RULE", "\"Variable ARGS_NAMES\"",
  "VARIABLE_ARGS_POST_NAMES", "\"AUTH_TYPE\"", "\"FILES_COMBINED_SIZE\"",
  "\"FILES_TMPNAMES\"", "\"FULL_REQUEST\"", "\"FULL_REQUEST_LENGTH\"",
  "\"INBOUND_DATA_ERROR\"", "\"MATCHED_VAR\"", "\"MATCHED_VAR_NAME\"",
  "\"MULTIPART_CRLF_LF_LINES\"", "\"MULTIPART_DATA_AFTER\"",
  "\"MULTIPART_FILE_LIMIT_EXCEEDED\"", "\"MULTIPART_HEADER_FOLDING\"",
  "\"MULTIPART_INVALID_HEADER_FOLDING\"", "\"MULTIPART_INVALID_QUOTING\"",
  "\"MULTIPART_STRICT_ERROR\"", "\"MULTIPART_UNMATCHED_BOUNDARY\"",
  "\"OUTBOUND_DATA_ERROR\"", "\"PATH_INFO\"", "\"QUERY_STRING\"",
  "\"REMOTE_ADDR\"", "\"REMOTE_HOST\"", "\"REMOTE_PORT\"",
  "\"REQBODY_ERROR_MSG\"", "\"REQBODY_ERROR\"",
  "\"REQBODY_PROCESSOR_ERROR_MSG\"", "\"REQBODY_PROCESSOR_ERROR\"",
  "\"REQBODY_PROCESSOR\"", "\"REQUEST_BASENAME\"",
  "\"REQUEST_BODY_LENGTH\"", "\"REQUEST_BODY\"", "\"REQUEST_FILENAME\"",
  "VARIABLE_REQUEST_HEADERS_NAMES", "\"REQUEST_LINE\"",
  "\"REQUEST_METHOD\"", "\"REQUEST_PROTOCOL\"", "\"REQUEST_URI_RAW\"",
  "\"REQUEST_URI\"", "\"RESOURCE\"", "\"RESPONSE_BODY\"",
  "\"RESPONSE_CONTENT_LENGTH\"", "VARIABLE_RESPONSE_CONTENT_TYPE",
  "VARIABLE_RESPONSE_HEADERS_NAMES", "\"RESPONSE_PROTOCOL\"",
  "\"RESPONSE_STATUS\"", "\"SERVER_ADDR\"", "\"SERVER_NAME\"",
  "\"SERVER_PORT\"", "\"SESSIONID\"", "\"UNIQUE_ID\"",
  "\"URLENCODED_ERROR\"", "\"USERID\"", "\"VARIABLE_STATUS\"",
  "\"VARIABLE_IP\"", "\"VARIABLE_GLOBAL\"", "\"VARIABLE_TX\"",
  "\"VARIABLE_SESSION\"", "\"VARIABLE_USER\"", "\"RUN_TIME_VAR_ENV\"",
  "\"RUN_TIME_VAR_XML\"", "\"SetVar\"", "SETVAR_OPERATION_EQUALS",
  "SETVAR_OPERATION_EQUALS_PLUS", "SETVAR_OPERATION_EQUALS_MINUS",
  "\"NOT\"", "\"Accuracy\"", "\"Allow\"", "\"Append\"", "\"AuditLog\"",
  "\"Block\"", "\"Capture\"", "\"Chain\"", "\"ACTION_CTL_AUDIT_ENGINE\"",
  "\"ACTION_CTL_AUDIT_LOG_PARTS\"", "\"ACTION_CTL_BDY_JSON\"",
  "\"ACTION_CTL_BDY_XML\"", "\"ACTION_CTL_FORCE_REQ_BODY_VAR\"",
  "\"ACTION_CTL_REQUEST_BODY_ACCESS\"", "\"ACTION_CTL_RULE_ENGINE\"",
  "\"ACTION_CTL_RULE_REMOVE_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG\"", "\"Deny\"",
  "\"DeprecateVar\"", "\"Drop\"", "\"Exec\"", "\"ExpireVar\"", "\"Id\"",
  "\"InitCol\"", "\"Log\"", "\"LogData\"", "\"Maturity\"", "\"Msg\"",
  "\"MultiMatch\"", "\"NoAuditLog\"", "\"NoLog\"", "\"Pass\"", "\"Pause\"",
  "\"Phase\"", "\"Prepend\"", "\"Proxy\"", "\"Redirect\"", "\"Rev\"",
  "\"SanatiseArg\"", "\"SanatiseMatched\"", "\"SanatiseMatchedBytes\"",
  "\"SanatiseRequestHeader\"", "\"SanatiseResponseHeader\"", "\"SetEnv\"",
  "\"SetSrc\"", "\"SetSid\"", "\"SetUID\"", "\"Severity\"", "\"Skip\"",
  "\"SkipAfter\"", "\"Status\"", "\"Tag\"",
  "\"ACTION_TRANSFORMATION_CMD_LINE\"",
  "\"ACTION_TRANSFORMATION_COMPRESS_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_CSS_DECODE\"",
  "\"ACTION_TRANSFORMATION_HEX_ENCODE\"",
  "\"ACTION_TRANSFORMATION_HTML_ENTITY_DECODE\"",
  "\"ACTION_TRANSFORMATION_JS_DECODE\"",
  "\"ACTION_TRANSFORMATION_LENGTH\"",
  "\"ACTION_TRANSFORMATION_LOWERCASE\"", "\"ACTION_TRANSFORMATION_MD5\"",
  "\"ACTION_TRANSFORMATION_NONE\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH_WIN\"",
  "\"ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ODD_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR\"",
  "\"ACTION_TRANSFORMATION_REMOVE_NULLS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_REPLACE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REPLACE_NULLS\"",
  "\"ACTION_TRANSFORMATION_SHA1\"",
  "\"ACTION_TRANSFORMATION_SQL_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_TRIM\"", "\"ACTION_TRANSFORMATION_URL_DECODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE_UNI\"",
  "\"ACTION_TRANSFORMATION_UTF8_TO_UNICODE\"", "\"Ver\"", "\"xmlns\"",
  "\"CONFIG_COMPONENT_SIG\"", "\"CONFIG_DIR_AUDIT_DIR\"",
  "\"CONFIG_DIR_AUDIT_DIR_MOD\"", "\"CONFIG_DIR_AUDIT_ENG\"",
  "\"CONFIG_DIR_AUDIT_FLE_MOD\"", "\"CONFIG_DIR_AUDIT_LOG\"",
  "\"CONFIG_DIR_AUDIT_LOG2\"", "\"CONFIG_DIR_AUDIT_LOG_P\"",
  "\"CONFIG_DIR_AUDIT_STS\"", "\"CONFIG_DIR_AUDIT_TPE\"",
  "\"CONFIG_DIR_DEBUG_LOG\"", "\"CONFIG_DIR_DEBUG_LVL\"",
  "\"CONFIG_DIR_GEO_DB\"", "\"CONFIG_DIR_PCRE_MATCH_LIMIT\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION\"", "\"CONFIG_DIR_REQ_BODY\"",
  "\"CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_LIMIT\"", "\"CONFIG_DIR_REQ_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT\"", "\"CONFIG_DIR_RES_BODY\"",
  "\"CONFIG_DIR_RES_BODY_LIMIT\"", "\"CONFIG_DIR_RES_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_RULE_ENG\"", "\"CONFIG_DIR_SEC_ACTION\"",
  "\"CONFIG_DIR_SEC_DEFAULT_ACTION\"", "\"CONFIG_DIR_SEC_MARKER\"",
  "\"CONFIG_DIR_UNICODE_MAP_FILE\"", "\"CONFIG_SEC_COLLECTION_TIMEOUT\"",
  "\"CONFIG_SEC_REMOTE_RULES_FAIL_ACTION\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_ID\"", "\"CONFIG_UPDLOAD_KEEP_FILES\"",
  "\"CONFIG_UPDLOAD_SAVE_TMP_FILES\"", "\"CONFIG_UPLOAD_DIR\"",
  "\"CONFIG_UPLOAD_FILE_LIMIT\"", "\"CONFIG_UPLOAD_FILE_MODE\"",
  "\"CONFIG_VALUE_ABORT\"", "\"CONFIG_VALUE_DETC\"",
  "\"CONFIG_VALUE_HTTPS\"", "\"CONFIG_VALUE_OFF\"", "\"CONFIG_VALUE_ON\"",
  "\"CONFIG_VALUE_PARALLEL\"", "\"CONFIG_VALUE_PROCESS_PARTIAL\"",
  "\"CONFIG_VALUE_REJECT\"", "\"CONFIG_VALUE_RELEVANT_ONLY\"",
  "\"CONFIG_VALUE_SERIAL\"", "\"CONFIG_VALUE_WARN\"",
  "\"CONFIG_XML_EXTERNAL_ENTITY\"", "\"CONGIG_DIR_RESPONSE_BODY_MP\"",
  "\"CONGIG_DIR_SEC_ARG_SEP\"", "\"CONGIG_DIR_SEC_COOKIE_FORMAT\"",
  "\"CONGIG_DIR_SEC_DATA_DIR\"", "\"CONGIG_DIR_SEC_STATUS_ENGINE\"",
  "\"CONGIG_DIR_SEC_TMP_DIR\"", "\"DIRECTIVE\"",
  "\"DIRECTIVE_SECRULESCRIPT\"", "\"FREE_TEXT\"", "\"OPERATOR\"",
  "\"OPERATOR_BEGINS_WITH\"", "\"OPERATOR_CONTAINS\"",
  "\"OPERATOR_CONTAINS_WORD\"", "\"OPERATOR_DETECT_SQLI\"",
  "\"OPERATOR_DETECT_XSS\"", "\"OPERATOR_ENDS_WITH\"", "\"OPERATOR_EQ\"",
  "\"OPERATOR_FUZZY_HASH\"", "\"OPERATOR_GE\"", "\"OPERATOR_GEOLOOKUP\"",
  "\"OPERATOR_GSB_LOOKUP\"", "\"OPERATOR_GT\"",
  "\"OPERATOR_INSPECT_FILE\"", "\"OPERATOR_IP_MATCH\"",
  "\"OPERATOR_IP_MATCH_FROM_FILE\"", "\"OPERATOR_LE\"", "\"OPERATOR_LT\"",
  "\"OPERATOR_PM\"", "\"OPERATOR_PM_FROM_FILE\"", "\"OPERATOR_RBL\"",
  "\"OPERATOR_RSUB\"", "\"OPERATOR_RX\"", "\"Operator RX (content only)\"",
  "\"OPERATOR_STR_EQ\"", "\"OPERATOR_STR_MATCH\"",
  "\"OPERATOR_UNCONDITIONAL_MATCH\"", "\"OPERATOR_VALIDATE_BYTE_RANGE\"",
  "\"OPERATOR_VALIDATE_DTD\"", "\"OPERATOR_VALIDATE_HASH\"",
  "\"OPERATOR_VALIDATE_SCHEMA\"", "\"OPERATOR_VALIDATE_URL_ENCODING\"",
  "\"OPERATOR_VALIDATE_UTF8_ENCODING\"", "\"OPERATOR_VERIFY_CC\"",
  "\"OPERATOR_VERIFY_CPF\"", "\"OPERATOR_VERIFY_SSN\"",
  "\"OPERATOR_WITHIN\"", "\"OP_QUOTE\"", "\"QUOTATION_MARK\"",
  "\"RUN_TIME_VAR_BLD\"", "\"RUN_TIME_VAR_DUR\"", "\"RUN_TIME_VAR_HSV\"",
  "\"RUN_TIME_VAR_REMOTE_USER\"", "\"RUN_TIME_VAR_TIME\"",
  "\"RUN_TIME_VAR_TIME_DAY\"", "\"RUN_TIME_VAR_TIME_EPOCH\"",
  "\"RUN_TIME_VAR_TIME_HOUR\"", "\"RUN_TIME_VAR_TIME_MIN\"",
  "\"RUN_TIME_VAR_TIME_MON\"", "\"RUN_TIME_VAR_TIME_SEC\"",
  "\"RUN_TIME_VAR_TIME_WDAY\"", "\"RUN_TIME_VAR_TIME_YEAR\"",
  "\"VARIABLE\"", "\"Dictionary element\"",
  "\"Dictionary element, selected by regexp\"", "$accept", "input", "line",
  "audit_log", "actions", "actions_may_quoted", "op", "op_before_init",
  "expression", "variables", "variables_may_be_quoted", "var", "act", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  seclang_parser::yyrline_[] =
  {
       0,   664,   664,   668,   669,   672,   677,   683,   689,   693,
     697,   703,   709,   715,   721,   727,   736,   740,   744,   750,
     754,   758,   763,   768,   773,   777,   784,   788,   795,   801,
     811,   820,   830,   839,   851,   855,   859,   863,   867,   871,
     876,   881,   885,   889,   894,   898,   902,   907,   912,   917,
     922,   926,   930,   934,   938,   942,   946,   950,   954,   958,
     962,   966,   970,   974,   978,   982,   986,   990,   994,  1008,
    1009,  1033,  1052,  1067,  1075,  1122,  1126,  1130,  1134,  1138,
    1142,  1146,  1150,  1154,  1158,  1172,  1184,  1204,  1232,  1237,
    1242,  1247,  1252,  1256,  1260,  1264,  1268,  1272,  1276,  1277,
    1278,  1289,  1293,  1297,  1298,  1299,  1300,  1301,  1302,  1303,
    1309,  1313,  1320,  1325,  1331,  1337,  1343,  1350,  1360,  1364,
    1368,  1372,  1376,  1380,  1384,  1388,  1392,  1396,  1400,  1404,
    1408,  1412,  1416,  1420,  1424,  1428,  1432,  1436,  1440,  1444,
    1448,  1452,  1456,  1460,  1464,  1468,  1472,  1476,  1480,  1484,
    1488,  1492,  1496,  1500,  1504,  1508,  1512,  1516,  1520,  1524,
    1528,  1532,  1536,  1540,  1544,  1548,  1552,  1556,  1560,  1564,
    1568,  1572,  1576,  1580,  1584,  1588,  1592,  1596,  1601,  1605,
    1609,  1614,  1618,  1622,  1627,  1631,  1635,  1640,  1644,  1648,
    1655,  1659,  1663,  1667,  1671,  1675,  1679,  1683,  1687,  1691,
    1695,  1699,  1703,  1707,  1711,  1715,  1719,  1723,  1727,  1731,
    1735,  1739,  1743,  1747,  1751,  1755,  1759,  1763,  1767,  1771,
    1775,  1779,  1783,  1787,  1791,  1795,  1799,  1803,  1807,  1811,
    1815,  1819,  1823,  1827,  1831,  1835,  1839,  1843,  1847,  1851,
    1855,  1859,  1863,  1867,  1871,  1875,  1883,  1890,  1897,  1904,
    1911,  1918,  1925,  1932,  1939,  1946,  1953,  1960,  1970,  1974,
    1978,  1982,  1986,  1990,  1994,  1998,  2003,  2008,  2013,  2017,
    2021,  2025,  2030,  2035,  2039,  2043,  2048,  2053,  2058,  2062,
    2066,  2070,  2074,  2078,  2083,  2087,  2092,  2096,  2100,  2104,
    2108,  2112,  2116,  2120,  2124,  2128,  2132,  2136,  2140,  2144,
    2148,  2152,  2156,  2160,  2164,  2168,  2172,  2176,  2180,  2184,
    2188,  2192,  2196,  2200,  2204,  2208,  2212,  2216,  2220,  2224,
    2228,  2232,  2236,  2240,  2244,  2248,  2252,  2256,  2260,  2264,
    2268,  2272,  2276,  2280,  2284,  2288,  2292,  2296,  2300,  2304,
    2308,  2312,  2316,  2320,  2324,  2328,  2332,  2336,  2340,  2344
  };

  // Print the state stack on the debug stream.
  void
  seclang_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  seclang_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 5032 "seclang-parser.cc" // lalr1.cc:1167
#line 2350 "seclang-parser.yy" // lalr1.cc:1168


void yy::seclang_parser::error (const location_type& l, const std::string& m) {
    driver.error (l, m);
}
