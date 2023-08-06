#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
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
  aux_sym_values_repeat1 = 44,
  aux_sym_dict_repeat1 = 45,
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
  [32] = 32,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(15);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(59);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '[') ADVANCE(39);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_errorName);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 23},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
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
    [sym_source_file] = STATE(62),
    [sym_line] = STATE(26),
    [sym_exit] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_syscall] = ACTIONS(5),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(2), 1,
      aux_sym_values_repeat1,
    ACTIONS(13), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(11), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(9), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [25] = 6,
    ACTIONS(20), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(24), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_values_repeat1,
    ACTIONS(22), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(18), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(16), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [54] = 11,
    ACTIONS(28), 1,
      anon_sym_NULL,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      sym_pointer,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_value,
    STATE(4), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_parameter,
    ACTIONS(26), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(31), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(15), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [93] = 4,
    STATE(2), 1,
      aux_sym_values_repeat1,
    ACTIONS(22), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(48), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(46), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [118] = 2,
    ACTIONS(11), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(9), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_PIPE,
      anon_sym_STAR,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [138] = 11,
    ACTIONS(50), 1,
      anon_sym_NULL,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_value,
    STATE(4), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_parameter,
    ACTIONS(52), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(15), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [176] = 10,
    ACTIONS(50), 1,
      anon_sym_NULL,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      sym_syscall,
    STATE(3), 1,
      sym_value,
    ACTIONS(52), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(46), 2,
      sym_parameter,
      sym__dictValue,
    STATE(15), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [212] = 11,
    ACTIONS(50), 1,
      anon_sym_NULL,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_value,
    STATE(4), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_parameter,
    ACTIONS(52), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(15), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [250] = 11,
    ACTIONS(50), 1,
      anon_sym_NULL,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_value,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_parameter,
    ACTIONS(52), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(15), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [288] = 11,
    ACTIONS(50), 1,
      anon_sym_NULL,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_value,
    STATE(7), 1,
      aux_sym_parameters_repeat1,
    STATE(24), 1,
      sym_parameter,
    ACTIONS(52), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(15), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [326] = 2,
    ACTIONS(74), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(72), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_PIPE,
      anon_sym_STAR,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [346] = 2,
    ACTIONS(78), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(76), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [364] = 2,
    ACTIONS(82), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(80), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [382] = 4,
    ACTIONS(20), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(24), 1,
      sym_comment,
    ACTIONS(18), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(16), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [404] = 2,
    ACTIONS(86), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(84), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [422] = 2,
    ACTIONS(90), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(88), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [440] = 2,
    ACTIONS(94), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(92), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [458] = 2,
    ACTIONS(98), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(96), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [476] = 2,
    ACTIONS(102), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(100), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [494] = 3,
    ACTIONS(108), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(106), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(104), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [513] = 2,
    ACTIONS(112), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(110), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [529] = 2,
    ACTIONS(106), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(104), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [545] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(118), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(116), 6,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [562] = 2,
    ACTIONS(120), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(26), 6,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [576] = 5,
    ACTIONS(5), 1,
      sym_syscall,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_exit,
    STATE(27), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [593] = 3,
    ACTIONS(126), 1,
      sym_syscall,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(27), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [605] = 3,
    ACTIONS(129), 1,
      sym_integer,
    STATE(53), 1,
      sym_returnValue,
    ACTIONS(131), 2,
      sym_pointer,
      anon_sym_QMARK,
  [616] = 4,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym__newline,
    ACTIONS(137), 1,
      sym_errorName,
    STATE(50), 1,
      sym_errorDescription,
  [629] = 3,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_dict_repeat1,
  [639] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_dict_repeat1,
  [649] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_dict_repeat1,
  [659] = 3,
    ACTIONS(152), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(154), 1,
      sym_dictKey,
    STATE(45), 1,
      sym_dictElem,
  [669] = 2,
    STATE(6), 1,
      sym_value,
    ACTIONS(52), 2,
      sym_integer,
      aux_sym_value_token1,
  [677] = 1,
    ACTIONS(156), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [683] = 1,
    ACTIONS(158), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [689] = 3,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      sym__newline,
    STATE(60), 1,
      sym_errorDescription,
  [699] = 1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [705] = 3,
    ACTIONS(154), 1,
      sym_dictKey,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(45), 1,
      sym_dictElem,
  [715] = 2,
    ACTIONS(154), 1,
      sym_dictKey,
    STATE(32), 1,
      sym_dictElem,
  [722] = 2,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_parameters,
  [729] = 2,
    ACTIONS(154), 1,
      sym_dictKey,
    STATE(45), 1,
      sym_dictElem,
  [736] = 2,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_parameters,
  [743] = 1,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [748] = 1,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [753] = 1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [758] = 1,
    ACTIONS(172), 1,
      aux_sym_errorDescription_token1,
  [762] = 1,
    ACTIONS(174), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [766] = 1,
    ACTIONS(176), 1,
      aux_sym_string_token1,
  [770] = 1,
    ACTIONS(160), 1,
      sym__newline,
  [774] = 1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [778] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [782] = 1,
    ACTIONS(182), 1,
      sym__newline,
  [786] = 1,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
  [790] = 1,
    ACTIONS(186), 1,
      sym_integer,
  [794] = 1,
    ACTIONS(188), 1,
      anon_sym_with,
  [798] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ,
  [802] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [806] = 1,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [810] = 1,
    ACTIONS(194), 1,
      sym__newline,
  [814] = 1,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
  [818] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [822] = 1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
  [826] = 1,
    ACTIONS(202), 1,
      anon_sym_EQ,
  [830] = 1,
    ACTIONS(204), 1,
      sym__newline,
  [834] = 1,
    ACTIONS(206), 1,
      anon_sym_exited,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 288,
  [SMALL_STATE(12)] = 326,
  [SMALL_STATE(13)] = 346,
  [SMALL_STATE(14)] = 364,
  [SMALL_STATE(15)] = 382,
  [SMALL_STATE(16)] = 404,
  [SMALL_STATE(17)] = 422,
  [SMALL_STATE(18)] = 440,
  [SMALL_STATE(19)] = 458,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 494,
  [SMALL_STATE(22)] = 513,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 545,
  [SMALL_STATE(25)] = 562,
  [SMALL_STATE(26)] = 576,
  [SMALL_STATE(27)] = 593,
  [SMALL_STATE(28)] = 605,
  [SMALL_STATE(29)] = 616,
  [SMALL_STATE(30)] = 629,
  [SMALL_STATE(31)] = 639,
  [SMALL_STATE(32)] = 649,
  [SMALL_STATE(33)] = 659,
  [SMALL_STATE(34)] = 669,
  [SMALL_STATE(35)] = 677,
  [SMALL_STATE(36)] = 683,
  [SMALL_STATE(37)] = 689,
  [SMALL_STATE(38)] = 699,
  [SMALL_STATE(39)] = 705,
  [SMALL_STATE(40)] = 715,
  [SMALL_STATE(41)] = 722,
  [SMALL_STATE(42)] = 729,
  [SMALL_STATE(43)] = 736,
  [SMALL_STATE(44)] = 743,
  [SMALL_STATE(45)] = 748,
  [SMALL_STATE(46)] = 753,
  [SMALL_STATE(47)] = 758,
  [SMALL_STATE(48)] = 762,
  [SMALL_STATE(49)] = 766,
  [SMALL_STATE(50)] = 770,
  [SMALL_STATE(51)] = 774,
  [SMALL_STATE(52)] = 778,
  [SMALL_STATE(53)] = 782,
  [SMALL_STATE(54)] = 786,
  [SMALL_STATE(55)] = 790,
  [SMALL_STATE(56)] = 794,
  [SMALL_STATE(57)] = 798,
  [SMALL_STATE(58)] = 802,
  [SMALL_STATE(59)] = 806,
  [SMALL_STATE(60)] = 810,
  [SMALL_STATE(61)] = 814,
  [SMALL_STATE(62)] = 818,
  [SMALL_STATE(63)] = 822,
  [SMALL_STATE(64)] = 826,
  [SMALL_STATE(65)] = 830,
  [SMALL_STATE(66)] = 834,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(34),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(49),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(11),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(40),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(42),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
