#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  sym__escape_sequence = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  sym_pointer = 14,
  anon_sym_PIPE = 15,
  anon_sym_STAR = 16,
  aux_sym_value_token1 = 17,
  sym_comment = 18,
  sym__newline = 19,
  anon_sym_QMARK = 20,
  sym_errorName = 21,
  aux_sym_errorDescription_token1 = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  sym_dictKey = 25,
  anon_sym_PLUS_PLUS_PLUS = 26,
  anon_sym_exited = 27,
  anon_sym_with = 28,
  sym_source_file = 29,
  sym_line = 30,
  sym_parameters = 31,
  sym_parameter = 32,
  sym_string = 33,
  sym_list = 34,
  sym_values = 35,
  sym_value = 36,
  sym_returnValue = 37,
  sym_errorDescription = 38,
  sym_dict = 39,
  sym_dictElem = 40,
  sym__dictValue = 41,
  sym_exit = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_parameters_repeat1 = 44,
  aux_sym_string_repeat1 = 45,
  aux_sym_values_repeat1 = 46,
  aux_sym_dict_repeat1 = 47,
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
  [aux_sym_string_token1] = "string_content",
  [sym__escape_sequence] = "_escape_sequence",
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
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [sym__escape_sequence] = sym__escape_sequence,
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
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
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
  [aux_sym_string_repeat1] = {
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
  [67] = 67,
  [68] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_errorName);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 34},
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
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
    [sym__escape_sequence] = ACTIONS(1),
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
    [sym_source_file] = STATE(64),
    [sym_line] = STATE(27),
    [sym_exit] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_syscall] = ACTIONS(5),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      anon_sym_NULL,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(20), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      sym_pointer,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(3), 1,
      sym_value,
    STATE(25), 1,
      sym_parameter,
    ACTIONS(9), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(14), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(16), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [39] = 6,
    ACTIONS(33), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(37), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_values_repeat1,
    ACTIONS(35), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(31), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(29), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [68] = 4,
    STATE(5), 1,
      aux_sym_values_repeat1,
    ACTIONS(35), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(41), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(39), 10,
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
  [93] = 4,
    STATE(5), 1,
      aux_sym_values_repeat1,
    ACTIONS(47), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(45), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(43), 10,
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
    ACTIONS(45), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(43), 12,
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
      anon_sym_RPAREN,
    ACTIONS(52), 1,
      anon_sym_NULL,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_value,
    STATE(11), 1,
      aux_sym_parameters_repeat1,
    STATE(25), 1,
      sym_parameter,
    ACTIONS(54), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(16), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [176] = 10,
    ACTIONS(52), 1,
      anon_sym_NULL,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      sym_syscall,
    STATE(3), 1,
      sym_value,
    ACTIONS(54), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(49), 2,
      sym_parameter,
      sym__dictValue,
    STATE(16), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [212] = 2,
    ACTIONS(68), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(66), 12,
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
  [232] = 11,
    ACTIONS(52), 1,
      anon_sym_NULL,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_value,
    STATE(12), 1,
      aux_sym_parameters_repeat1,
    STATE(25), 1,
      sym_parameter,
    ACTIONS(54), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(16), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [270] = 11,
    ACTIONS(52), 1,
      anon_sym_NULL,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(3), 1,
      sym_value,
    STATE(25), 1,
      sym_parameter,
    ACTIONS(54), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(16), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [308] = 11,
    ACTIONS(52), 1,
      anon_sym_NULL,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_pointer,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(3), 1,
      sym_value,
    STATE(25), 1,
      sym_parameter,
    ACTIONS(54), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(16), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
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
  [382] = 2,
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
  [400] = 4,
    ACTIONS(33), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(31), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(29), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
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
  [494] = 2,
    ACTIONS(106), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(104), 10,
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
  [512] = 3,
    ACTIONS(112), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(110), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(108), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [531] = 2,
    ACTIONS(116), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(114), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [547] = 2,
    ACTIONS(110), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(108), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [563] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(122), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(120), 6,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [580] = 2,
    ACTIONS(124), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(9), 6,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [594] = 5,
    ACTIONS(5), 1,
      sym_syscall,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_exit,
    STATE(28), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [611] = 3,
    ACTIONS(130), 1,
      sym_syscall,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(28), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [623] = 4,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym__newline,
    ACTIONS(137), 1,
      sym_errorName,
    STATE(51), 1,
      sym_errorDescription,
  [636] = 3,
    ACTIONS(139), 1,
      sym_integer,
    STATE(52), 1,
      sym_returnValue,
    ACTIONS(141), 2,
      sym_pointer,
      anon_sym_QMARK,
  [647] = 4,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      aux_sym_string_token1,
    ACTIONS(147), 1,
      sym__escape_sequence,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [660] = 4,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      aux_sym_string_token1,
    ACTIONS(154), 1,
      sym__escape_sequence,
    STATE(32), 1,
      aux_sym_string_repeat1,
  [673] = 4,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      aux_sym_string_token1,
    ACTIONS(161), 1,
      sym__escape_sequence,
    STATE(31), 1,
      aux_sym_string_repeat1,
  [686] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_dict_repeat1,
  [696] = 1,
    ACTIONS(167), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [702] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_dict_repeat1,
  [712] = 1,
    ACTIONS(174), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [718] = 2,
    STATE(6), 1,
      sym_value,
    ACTIONS(54), 2,
      sym_integer,
      aux_sym_value_token1,
  [726] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_dict_repeat1,
  [736] = 3,
    ACTIONS(180), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(182), 1,
      sym_dictKey,
    STATE(47), 1,
      sym_dictElem,
  [746] = 3,
    ACTIONS(182), 1,
      sym_dictKey,
    ACTIONS(184), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(47), 1,
      sym_dictElem,
  [756] = 1,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [762] = 3,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      sym__newline,
    STATE(62), 1,
      sym_errorDescription,
  [772] = 2,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_parameters,
  [779] = 2,
    ACTIONS(182), 1,
      sym_dictKey,
    STATE(47), 1,
      sym_dictElem,
  [786] = 1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [791] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [796] = 2,
    ACTIONS(182), 1,
      sym_dictKey,
    STATE(39), 1,
      sym_dictElem,
  [803] = 1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [808] = 2,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_parameters,
  [815] = 1,
    ACTIONS(188), 1,
      sym__newline,
  [819] = 1,
    ACTIONS(196), 1,
      sym__newline,
  [823] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [827] = 1,
    ACTIONS(200), 1,
      aux_sym_errorDescription_token1,
  [831] = 1,
    ACTIONS(202), 1,
      anon_sym_EQ,
  [835] = 1,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
  [839] = 1,
    ACTIONS(206), 1,
      anon_sym_EQ,
  [843] = 1,
    ACTIONS(208), 1,
      anon_sym_with,
  [847] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [851] = 1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [855] = 1,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [859] = 1,
    ACTIONS(214), 1,
      sym__newline,
  [863] = 1,
    ACTIONS(216), 1,
      sym_integer,
  [867] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [871] = 1,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
  [875] = 1,
    ACTIONS(222), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [879] = 1,
    ACTIONS(224), 1,
      sym__newline,
  [883] = 1,
    ACTIONS(226), 1,
      anon_sym_exited,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 346,
  [SMALL_STATE(14)] = 364,
  [SMALL_STATE(15)] = 382,
  [SMALL_STATE(16)] = 400,
  [SMALL_STATE(17)] = 422,
  [SMALL_STATE(18)] = 440,
  [SMALL_STATE(19)] = 458,
  [SMALL_STATE(20)] = 476,
  [SMALL_STATE(21)] = 494,
  [SMALL_STATE(22)] = 512,
  [SMALL_STATE(23)] = 531,
  [SMALL_STATE(24)] = 547,
  [SMALL_STATE(25)] = 563,
  [SMALL_STATE(26)] = 580,
  [SMALL_STATE(27)] = 594,
  [SMALL_STATE(28)] = 611,
  [SMALL_STATE(29)] = 623,
  [SMALL_STATE(30)] = 636,
  [SMALL_STATE(31)] = 647,
  [SMALL_STATE(32)] = 660,
  [SMALL_STATE(33)] = 673,
  [SMALL_STATE(34)] = 686,
  [SMALL_STATE(35)] = 696,
  [SMALL_STATE(36)] = 702,
  [SMALL_STATE(37)] = 712,
  [SMALL_STATE(38)] = 718,
  [SMALL_STATE(39)] = 726,
  [SMALL_STATE(40)] = 736,
  [SMALL_STATE(41)] = 746,
  [SMALL_STATE(42)] = 756,
  [SMALL_STATE(43)] = 762,
  [SMALL_STATE(44)] = 772,
  [SMALL_STATE(45)] = 779,
  [SMALL_STATE(46)] = 786,
  [SMALL_STATE(47)] = 791,
  [SMALL_STATE(48)] = 796,
  [SMALL_STATE(49)] = 803,
  [SMALL_STATE(50)] = 808,
  [SMALL_STATE(51)] = 815,
  [SMALL_STATE(52)] = 819,
  [SMALL_STATE(53)] = 823,
  [SMALL_STATE(54)] = 827,
  [SMALL_STATE(55)] = 831,
  [SMALL_STATE(56)] = 835,
  [SMALL_STATE(57)] = 839,
  [SMALL_STATE(58)] = 843,
  [SMALL_STATE(59)] = 847,
  [SMALL_STATE(60)] = 851,
  [SMALL_STATE(61)] = 855,
  [SMALL_STATE(62)] = 859,
  [SMALL_STATE(63)] = 863,
  [SMALL_STATE(64)] = 867,
  [SMALL_STATE(65)] = 871,
  [SMALL_STATE(66)] = 875,
  [SMALL_STATE(67)] = 879,
  [SMALL_STATE(68)] = 883,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(9),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(33),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(38),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(32),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(32),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(45),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
