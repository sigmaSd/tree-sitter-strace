#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  sym_syscall = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_NULL = 6,
  anon_sym_DOT_DOT_DOT = 7,
  sym_integer = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  anon_sym_LBRACK = 11,
  anon_sym_RBRACK = 12,
  sym_pointer = 13,
  anon_sym_PIPE = 14,
  anon_sym_STAR = 15,
  aux_sym_value_token1 = 16,
  sym_comment = 17,
  sym__newline = 18,
  anon_sym_QMARK = 19,
  sym_errorName = 20,
  aux_sym_errorDescription_token1 = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  sym_dictKey = 24,
  anon_sym_PLUS_PLUS_PLUS = 25,
  anon_sym_exited = 26,
  anon_sym_with = 27,
  sym_source_file = 28,
  sym_line = 29,
  sym_parameters = 30,
  sym_parameter = 31,
  sym_string = 32,
  sym_list = 33,
  sym_values = 34,
  sym_value = 35,
  sym_returnValue = 36,
  sym_errorDescription = 37,
  sym_dict = 38,
  sym_dictElem = 39,
  sym__dictValue = 40,
  sym_exit = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_parameters_repeat1 = 43,
  aux_sym_list_repeat1 = 44,
  aux_sym_values_repeat1 = 45,
  aux_sym_dict_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym_syscall] = "syscall",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_NULL] = "NULL",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_pointer] = "pointer",
  [anon_sym_PIPE] = "|",
  [anon_sym_STAR] = "*",
  [aux_sym_value_token1] = "value_token1",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [anon_sym_QMARK] = "\?",
  [sym_errorName] = "errorName",
  [aux_sym_errorDescription_token1] = "errorDescription_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_dictKey] = "dictKey",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_exited] = "exited",
  [anon_sym_with] = "with",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_string] = "string",
  [sym_list] = "list",
  [sym_values] = "values",
  [sym_value] = "value",
  [sym_returnValue] = "returnValue",
  [sym_errorDescription] = "errorDescription",
  [sym_dict] = "dict",
  [sym_dictElem] = "dictElem",
  [sym__dictValue] = "_dictValue",
  [sym_exit] = "exit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_values_repeat1] = "values_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_syscall] = sym_syscall,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_pointer] = sym_pointer,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [sym_comment] = sym_comment,
  [sym__newline] = sym__newline,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_errorName] = sym_errorName,
  [aux_sym_errorDescription_token1] = aux_sym_errorDescription_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_dictKey] = sym_dictKey,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_exited] = anon_sym_exited,
  [anon_sym_with] = anon_sym_with,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [sym_values] = sym_values,
  [sym_value] = sym_value,
  [sym_returnValue] = sym_returnValue,
  [sym_errorDescription] = sym_errorDescription,
  [sym_dict] = sym_dict,
  [sym_dictElem] = sym_dictElem,
  [sym__dictValue] = sym__dictValue,
  [sym_exit] = sym_exit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_values_repeat1] = aux_sym_values_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_syscall] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_pointer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_errorName] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_errorDescription_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_dictKey] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_values] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_returnValue] = {
    .visible = true,
    .named = true,
  },
  [sym_errorDescription] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_dictElem] = {
    .visible = true,
    .named = true,
  },
  [sym__dictValue] = {
    .visible = false,
    .named = true,
  },
  [sym_exit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 15,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 55,
  [72] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(15);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == ']') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_errorName);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_dictKey);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 36},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_pointer] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_value_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_exited] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym_line] = STATE(24),
    [sym_exit] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_syscall] = ACTIONS(5),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      sym_syscall,
    ACTIONS(11), 1,
      anon_sym_NULL,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_pointer,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_value,
    ACTIONS(13), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(49), 2,
      sym_parameter,
      sym__dictValue,
    STATE(12), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [36] = 4,
    STATE(5), 1,
      aux_sym_values_repeat1,
    ACTIONS(27), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(25), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(23), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [60] = 11,
    ACTIONS(11), 1,
      anon_sym_NULL,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_pointer,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_value,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(22), 1,
      sym_parameter,
    ACTIONS(13), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(12), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [98] = 4,
    STATE(5), 1,
      aux_sym_values_repeat1,
    ACTIONS(35), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(33), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(31), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [122] = 6,
    ACTIONS(42), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(44), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_values_repeat1,
    ACTIONS(27), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(40), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(38), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [150] = 11,
    ACTIONS(11), 1,
      anon_sym_NULL,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_pointer,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_parameters_repeat1,
    STATE(6), 1,
      sym_value,
    STATE(22), 1,
      sym_parameter,
    ACTIONS(13), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(12), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [188] = 11,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    ACTIONS(50), 1,
      anon_sym_NULL,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym_pointer,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_value,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(22), 1,
      sym_parameter,
    ACTIONS(53), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(12), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [226] = 2,
    ACTIONS(70), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(68), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      anon_sym_PIPE,
      anon_sym_STAR,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [245] = 2,
    ACTIONS(33), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(31), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      anon_sym_PIPE,
      anon_sym_STAR,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [264] = 2,
    ACTIONS(74), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(72), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [281] = 4,
    ACTIONS(42), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(40), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(38), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [302] = 2,
    ACTIONS(78), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(76), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [319] = 2,
    ACTIONS(82), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(80), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [336] = 2,
    ACTIONS(86), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(84), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [353] = 2,
    ACTIONS(90), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(88), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [370] = 2,
    ACTIONS(94), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(92), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [387] = 2,
    ACTIONS(98), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(96), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [404] = 3,
    ACTIONS(104), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(102), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(100), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [422] = 2,
    ACTIONS(108), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(106), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [437] = 2,
    ACTIONS(102), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(100), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [452] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(114), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(112), 5,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [468] = 2,
    ACTIONS(116), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(48), 5,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [481] = 5,
    ACTIONS(5), 1,
      sym_syscall,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_exit,
    STATE(25), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [498] = 3,
    ACTIONS(122), 1,
      sym_syscall,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(25), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [510] = 5,
    ACTIONS(125), 1,
      sym_integer,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_list_repeat1,
    STATE(31), 1,
      sym_string,
  [526] = 5,
    ACTIONS(133), 1,
      sym_integer,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_list_repeat1,
    STATE(31), 1,
      sym_string,
  [542] = 5,
    ACTIONS(133), 1,
      sym_integer,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_list_repeat1,
    STATE(31), 1,
      sym_string,
  [558] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym__newline,
    ACTIONS(145), 1,
      sym_errorName,
    STATE(52), 1,
      sym_errorDescription,
  [571] = 3,
    ACTIONS(147), 1,
      sym_integer,
    STATE(70), 1,
      sym_returnValue,
    ACTIONS(149), 2,
      sym_pointer,
      anon_sym_QMARK,
  [582] = 2,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 3,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [591] = 1,
    ACTIONS(84), 4,
      anon_sym_COMMA,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [598] = 1,
    ACTIONS(155), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [604] = 2,
    STATE(10), 1,
      sym_value,
    ACTIONS(13), 2,
      sym_integer,
      aux_sym_value_token1,
  [612] = 3,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__newline,
    STATE(63), 1,
      sym_errorDescription,
  [622] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_dict_repeat1,
  [632] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_dict_repeat1,
  [642] = 1,
    ACTIONS(131), 3,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [648] = 3,
    ACTIONS(168), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(170), 1,
      sym_dictKey,
    STATE(48), 1,
      sym_dictElem,
  [658] = 1,
    ACTIONS(172), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [664] = 3,
    ACTIONS(170), 1,
      sym_dictKey,
    ACTIONS(174), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(48), 1,
      sym_dictElem,
  [674] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_dict_repeat1,
  [684] = 1,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [690] = 2,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym_parameters,
  [697] = 2,
    ACTIONS(170), 1,
      sym_dictKey,
    STATE(48), 1,
      sym_dictElem,
  [704] = 1,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [709] = 2,
    ACTIONS(170), 1,
      sym_dictKey,
    STATE(37), 1,
      sym_dictElem,
  [716] = 1,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [721] = 1,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [726] = 2,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameters,
  [733] = 1,
    ACTIONS(188), 1,
      aux_sym_errorDescription_token1,
  [737] = 1,
    ACTIONS(157), 1,
      sym__newline,
  [741] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ,
  [745] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [749] = 1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
  [753] = 1,
    ACTIONS(196), 1,
      anon_sym_EQ,
  [757] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
  [761] = 1,
    ACTIONS(200), 1,
      anon_sym_with,
  [765] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [769] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [773] = 1,
    ACTIONS(204), 1,
      aux_sym_string_token1,
  [777] = 1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [781] = 1,
    ACTIONS(208), 1,
      sym__newline,
  [785] = 1,
    ACTIONS(210), 1,
      sym_integer,
  [789] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [793] = 1,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
  [797] = 1,
    ACTIONS(216), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [801] = 1,
    ACTIONS(218), 1,
      sym__newline,
  [805] = 1,
    ACTIONS(220), 1,
      anon_sym_exited,
  [809] = 1,
    ACTIONS(222), 1,
      sym__newline,
  [813] = 1,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
  [817] = 1,
    ACTIONS(226), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 188,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 245,
  [SMALL_STATE(11)] = 264,
  [SMALL_STATE(12)] = 281,
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 319,
  [SMALL_STATE(15)] = 336,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 370,
  [SMALL_STATE(18)] = 387,
  [SMALL_STATE(19)] = 404,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 437,
  [SMALL_STATE(22)] = 452,
  [SMALL_STATE(23)] = 468,
  [SMALL_STATE(24)] = 481,
  [SMALL_STATE(25)] = 498,
  [SMALL_STATE(26)] = 510,
  [SMALL_STATE(27)] = 526,
  [SMALL_STATE(28)] = 542,
  [SMALL_STATE(29)] = 558,
  [SMALL_STATE(30)] = 571,
  [SMALL_STATE(31)] = 582,
  [SMALL_STATE(32)] = 591,
  [SMALL_STATE(33)] = 598,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 612,
  [SMALL_STATE(36)] = 622,
  [SMALL_STATE(37)] = 632,
  [SMALL_STATE(38)] = 642,
  [SMALL_STATE(39)] = 648,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 664,
  [SMALL_STATE(42)] = 674,
  [SMALL_STATE(43)] = 684,
  [SMALL_STATE(44)] = 690,
  [SMALL_STATE(45)] = 697,
  [SMALL_STATE(46)] = 704,
  [SMALL_STATE(47)] = 709,
  [SMALL_STATE(48)] = 716,
  [SMALL_STATE(49)] = 721,
  [SMALL_STATE(50)] = 726,
  [SMALL_STATE(51)] = 733,
  [SMALL_STATE(52)] = 737,
  [SMALL_STATE(53)] = 741,
  [SMALL_STATE(54)] = 745,
  [SMALL_STATE(55)] = 749,
  [SMALL_STATE(56)] = 753,
  [SMALL_STATE(57)] = 757,
  [SMALL_STATE(58)] = 761,
  [SMALL_STATE(59)] = 765,
  [SMALL_STATE(60)] = 769,
  [SMALL_STATE(61)] = 773,
  [SMALL_STATE(62)] = 777,
  [SMALL_STATE(63)] = 781,
  [SMALL_STATE(64)] = 785,
  [SMALL_STATE(65)] = 789,
  [SMALL_STATE(66)] = 793,
  [SMALL_STATE(67)] = 797,
  [SMALL_STATE(68)] = 801,
  [SMALL_STATE(69)] = 805,
  [SMALL_STATE(70)] = 809,
  [SMALL_STATE(71)] = 813,
  [SMALL_STATE(72)] = 817,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(34),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(12),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(9),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(61),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(27),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(47),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(31),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(72),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(45),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_strace(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
