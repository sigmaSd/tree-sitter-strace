#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 73
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_TILDE = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  sym_pointer = 15,
  anon_sym_PIPE = 16,
  anon_sym_STAR = 17,
  aux_sym_value_token1 = 18,
  sym_comment = 19,
  sym__newline = 20,
  anon_sym_QMARK = 21,
  sym_errorName = 22,
  aux_sym_errorDescription_token1 = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  sym_dictKey = 26,
  anon_sym_PLUS_PLUS_PLUS = 27,
  anon_sym_exited = 28,
  anon_sym_with = 29,
  sym_source_file = 30,
  sym_line = 31,
  sym_parameters = 32,
  sym_parameter = 33,
  sym_string = 34,
  sym_list = 35,
  sym_values = 36,
  sym_value = 37,
  sym_returnValue = 38,
  sym_errorDescription = 39,
  sym_dict = 40,
  sym_dictElem = 41,
  sym__dictValue = 42,
  sym_exit = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_parameters_repeat1 = 45,
  aux_sym_string_repeat1 = 46,
  aux_sym_values_repeat1 = 47,
  aux_sym_dict_repeat1 = 48,
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
  [anon_sym_TILDE] = "~",
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
  [anon_sym_TILDE] = anon_sym_TILDE,
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
  [anon_sym_TILDE] = {
    .visible = true,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
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
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
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
      if (lookahead == '/') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '?') ADVANCE(65);
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
          lookahead == '_') ADVANCE(62);
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
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(74);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
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
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
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
          lookahead == '_') ADVANCE(62);
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
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_errorName);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 74:
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 34},
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
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
    [anon_sym_TILDE] = ACTIONS(1),
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
    [sym_source_file] = STATE(68),
    [sym_line] = STATE(30),
    [sym_exit] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(30),
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
    ACTIONS(9), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [26] = 4,
    STATE(2), 1,
      aux_sym_values_repeat1,
    ACTIONS(20), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(18), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(16), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [52] = 6,
    ACTIONS(26), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(28), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_values_repeat1,
    ACTIONS(20), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(24), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(22), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [82] = 12,
    ACTIONS(32), 1,
      anon_sym_NULL,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_TILDE,
    ACTIONS(44), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym_pointer,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_value,
    STATE(5), 1,
      aux_sym_parameters_repeat1,
    STATE(28), 1,
      sym_parameter,
    ACTIONS(30), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(35), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(22), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [124] = 2,
    ACTIONS(55), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(53), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_PIPE,
      anon_sym_STAR,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [145] = 12,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(69), 1,
      sym_pointer,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_value,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(28), 1,
      sym_parameter,
    ACTIONS(59), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(22), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [186] = 2,
    ACTIONS(11), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(9), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_PIPE,
      anon_sym_STAR,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [207] = 12,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_pointer,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_value,
    STATE(5), 1,
      aux_sym_parameters_repeat1,
    STATE(28), 1,
      sym_parameter,
    ACTIONS(59), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(22), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [248] = 11,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_pointer,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_syscall,
    STATE(4), 1,
      sym_value,
    ACTIONS(59), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(50), 2,
      sym_parameter,
      sym__dictValue,
    STATE(22), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [287] = 12,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_pointer,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_value,
    STATE(5), 1,
      aux_sym_parameters_repeat1,
    STATE(28), 1,
      sym_parameter,
    ACTIONS(59), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(22), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [328] = 12,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_pointer,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_value,
    STATE(13), 1,
      aux_sym_parameters_repeat1,
    STATE(28), 1,
      sym_parameter,
    ACTIONS(59), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(22), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [369] = 12,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_pointer,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_value,
    STATE(5), 1,
      aux_sym_parameters_repeat1,
    STATE(28), 1,
      sym_parameter,
    ACTIONS(59), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(22), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [410] = 12,
    ACTIONS(57), 1,
      anon_sym_NULL,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_pointer,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_value,
    STATE(11), 1,
      aux_sym_parameters_repeat1,
    STATE(28), 1,
      sym_parameter,
    ACTIONS(59), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(22), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dict,
  [451] = 2,
    ACTIONS(85), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(83), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [470] = 2,
    ACTIONS(89), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(87), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [489] = 2,
    ACTIONS(93), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(91), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [508] = 2,
    ACTIONS(97), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(95), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [527] = 2,
    ACTIONS(101), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(99), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [546] = 2,
    ACTIONS(105), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(103), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [565] = 2,
    ACTIONS(109), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(107), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [584] = 4,
    ACTIONS(26), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(24), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(22), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [607] = 2,
    ACTIONS(113), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(111), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [626] = 2,
    ACTIONS(117), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(115), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [645] = 3,
    ACTIONS(123), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(121), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(119), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [665] = 2,
    ACTIONS(127), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(125), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [682] = 2,
    ACTIONS(121), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(119), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [699] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(133), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(131), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [717] = 2,
    ACTIONS(135), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(30), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [732] = 5,
    ACTIONS(5), 1,
      sym_syscall,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(62), 1,
      sym_exit,
    STATE(31), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [749] = 3,
    ACTIONS(141), 1,
      sym_syscall,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(31), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [761] = 3,
    ACTIONS(144), 1,
      sym_integer,
    STATE(67), 1,
      sym_returnValue,
    ACTIONS(146), 2,
      sym_pointer,
      anon_sym_QMARK,
  [772] = 4,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      aux_sym_string_token1,
    ACTIONS(152), 1,
      sym__escape_sequence,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [785] = 4,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      aux_sym_string_token1,
    ACTIONS(158), 1,
      sym__escape_sequence,
    STATE(33), 1,
      aux_sym_string_repeat1,
  [798] = 4,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      aux_sym_string_token1,
    ACTIONS(165), 1,
      sym__escape_sequence,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [811] = 4,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      sym__newline,
    ACTIONS(172), 1,
      sym_errorName,
    STATE(59), 1,
      sym_errorDescription,
  [824] = 3,
    ACTIONS(174), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(176), 1,
      sym_dictKey,
    STATE(51), 1,
      sym_dictElem,
  [834] = 1,
    ACTIONS(178), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [840] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_dict_repeat1,
  [850] = 3,
    ACTIONS(176), 1,
      sym_dictKey,
    ACTIONS(185), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(51), 1,
      sym_dictElem,
  [860] = 2,
    STATE(8), 1,
      sym_value,
    ACTIONS(59), 2,
      sym_integer,
      aux_sym_value_token1,
  [868] = 1,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [874] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      aux_sym_dict_repeat1,
  [884] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_dict_repeat1,
  [894] = 3,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      sym__newline,
    STATE(66), 1,
      sym_errorDescription,
  [904] = 1,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [910] = 2,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_parameters,
  [917] = 2,
    ACTIONS(176), 1,
      sym_dictKey,
    STATE(43), 1,
      sym_dictElem,
  [924] = 2,
    ACTIONS(176), 1,
      sym_dictKey,
    STATE(51), 1,
      sym_dictElem,
  [931] = 1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [936] = 1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [941] = 1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [946] = 2,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_parameters,
  [953] = 1,
    ACTIONS(207), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [957] = 1,
    ACTIONS(209), 1,
      anon_sym_EQ,
  [961] = 1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
  [965] = 1,
    ACTIONS(213), 1,
      aux_sym_errorDescription_token1,
  [969] = 1,
    ACTIONS(215), 1,
      anon_sym_with,
  [973] = 1,
    ACTIONS(197), 1,
      sym__newline,
  [977] = 1,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
  [981] = 1,
    ACTIONS(219), 1,
      sym_integer,
  [985] = 1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
  [989] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [993] = 1,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
  [997] = 1,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
  [1001] = 1,
    ACTIONS(227), 1,
      sym__newline,
  [1005] = 1,
    ACTIONS(229), 1,
      sym__newline,
  [1009] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [1013] = 1,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
  [1017] = 1,
    ACTIONS(235), 1,
      anon_sym_EQ,
  [1021] = 1,
    ACTIONS(237), 1,
      sym__newline,
  [1025] = 1,
    ACTIONS(239), 1,
      anon_sym_exited,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 248,
  [SMALL_STATE(11)] = 287,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 410,
  [SMALL_STATE(15)] = 451,
  [SMALL_STATE(16)] = 470,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 508,
  [SMALL_STATE(19)] = 527,
  [SMALL_STATE(20)] = 546,
  [SMALL_STATE(21)] = 565,
  [SMALL_STATE(22)] = 584,
  [SMALL_STATE(23)] = 607,
  [SMALL_STATE(24)] = 626,
  [SMALL_STATE(25)] = 645,
  [SMALL_STATE(26)] = 665,
  [SMALL_STATE(27)] = 682,
  [SMALL_STATE(28)] = 699,
  [SMALL_STATE(29)] = 717,
  [SMALL_STATE(30)] = 732,
  [SMALL_STATE(31)] = 749,
  [SMALL_STATE(32)] = 761,
  [SMALL_STATE(33)] = 772,
  [SMALL_STATE(34)] = 785,
  [SMALL_STATE(35)] = 798,
  [SMALL_STATE(36)] = 811,
  [SMALL_STATE(37)] = 824,
  [SMALL_STATE(38)] = 834,
  [SMALL_STATE(39)] = 840,
  [SMALL_STATE(40)] = 850,
  [SMALL_STATE(41)] = 860,
  [SMALL_STATE(42)] = 868,
  [SMALL_STATE(43)] = 874,
  [SMALL_STATE(44)] = 884,
  [SMALL_STATE(45)] = 894,
  [SMALL_STATE(46)] = 904,
  [SMALL_STATE(47)] = 910,
  [SMALL_STATE(48)] = 917,
  [SMALL_STATE(49)] = 924,
  [SMALL_STATE(50)] = 931,
  [SMALL_STATE(51)] = 936,
  [SMALL_STATE(52)] = 941,
  [SMALL_STATE(53)] = 946,
  [SMALL_STATE(54)] = 953,
  [SMALL_STATE(55)] = 957,
  [SMALL_STATE(56)] = 961,
  [SMALL_STATE(57)] = 965,
  [SMALL_STATE(58)] = 969,
  [SMALL_STATE(59)] = 973,
  [SMALL_STATE(60)] = 977,
  [SMALL_STATE(61)] = 981,
  [SMALL_STATE(62)] = 985,
  [SMALL_STATE(63)] = 989,
  [SMALL_STATE(64)] = 993,
  [SMALL_STATE(65)] = 997,
  [SMALL_STATE(66)] = 1001,
  [SMALL_STATE(67)] = 1005,
  [SMALL_STATE(68)] = 1009,
  [SMALL_STATE(69)] = 1013,
  [SMALL_STATE(70)] = 1017,
  [SMALL_STATE(71)] = 1021,
  [SMALL_STATE(72)] = 1025,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(41),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(22),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(34),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(64),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(22),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(48),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(35),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(35),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(49),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
