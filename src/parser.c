#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  anon_sym_EQ_GT = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  sym_dictKey = 27,
  anon_sym_PLUS_PLUS_PLUS = 28,
  anon_sym_exited = 29,
  anon_sym_with = 30,
  sym_source_file = 31,
  sym_line = 32,
  sym_parameters = 33,
  sym_parameter = 34,
  sym_string = 35,
  sym_list = 36,
  sym_values = 37,
  sym_value = 38,
  sym_returnValue = 39,
  sym_errorDescription = 40,
  sym_dictFn = 41,
  sym_dict = 42,
  sym_dictElem = 43,
  sym__dictValue = 44,
  sym_exit = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_parameters_repeat1 = 47,
  aux_sym_string_repeat1 = 48,
  aux_sym_values_repeat1 = 49,
  aux_sym_dict_repeat1 = 50,
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
  [anon_sym_EQ_GT] = "=>",
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
  [sym_dictFn] = "dictFn",
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
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
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
  [sym_dictFn] = sym_dictFn,
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
  [anon_sym_EQ_GT] = {
    .visible = true,
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
  [sym_dictFn] = {
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
  [73] = 73,
  [74] = 74,
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '~') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(15);
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
      if (lookahead == '/') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(75);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '?') ADVANCE(67);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '~') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_errorName);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 35},
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
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 10},
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
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
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
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_exited] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym_line] = STATE(32),
    [sym_exit] = STATE(66),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_syscall] = ACTIONS(5),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(11), 1,
      anon_sym_NULL,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(20), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      sym_pointer,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(9), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(14), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [45] = 13,
    ACTIONS(32), 1,
      anon_sym_NULL,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_TILDE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    ACTIONS(44), 1,
      sym_pointer,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(34), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [89] = 12,
    ACTIONS(32), 1,
      anon_sym_NULL,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_TILDE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_pointer,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      sym_syscall,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    ACTIONS(34), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(53), 2,
      sym_parameter,
      sym__dictValue,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [131] = 13,
    ACTIONS(32), 1,
      anon_sym_NULL,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_TILDE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_pointer,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(34), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [175] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(56), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(54), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(52), 11,
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
  [201] = 13,
    ACTIONS(32), 1,
      anon_sym_NULL,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_TILDE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_pointer,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(34), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [245] = 13,
    ACTIONS(32), 1,
      anon_sym_NULL,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_TILDE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_pointer,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(34), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [289] = 13,
    ACTIONS(32), 1,
      anon_sym_NULL,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_TILDE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_pointer,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(34), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [333] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(66), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(64), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(62), 11,
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
  [359] = 6,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(75), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_values_repeat1,
    ACTIONS(56), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(71), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(69), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [389] = 13,
    ACTIONS(32), 1,
      anon_sym_NULL,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_TILDE,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_pointer,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(34), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [433] = 2,
    ACTIONS(64), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(62), 13,
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
  [454] = 2,
    ACTIONS(81), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(79), 13,
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
  [475] = 2,
    ACTIONS(85), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(83), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [495] = 2,
    ACTIONS(89), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(87), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [515] = 2,
    ACTIONS(93), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(91), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [535] = 2,
    ACTIONS(97), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(95), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      sym_comment,
      anon_sym_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [555] = 5,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_EQ_GT,
    ACTIONS(71), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(69), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [581] = 4,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(71), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(69), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [604] = 2,
    ACTIONS(103), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(101), 11,
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
  [623] = 2,
    ACTIONS(107), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(105), 11,
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
  [642] = 2,
    ACTIONS(111), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(109), 11,
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
  [661] = 2,
    ACTIONS(115), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(113), 11,
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
  [680] = 2,
    ACTIONS(119), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(117), 11,
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
  [699] = 2,
    ACTIONS(123), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(121), 11,
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
  [718] = 3,
    ACTIONS(129), 1,
      anon_sym_DOT_DOT_DOT,
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
  [738] = 2,
    ACTIONS(133), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(131), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [755] = 2,
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
  [772] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(139), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(137), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [790] = 2,
    ACTIONS(141), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(9), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [805] = 5,
    ACTIONS(5), 1,
      sym_syscall,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_exit,
    STATE(33), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [822] = 3,
    ACTIONS(147), 1,
      sym_syscall,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(33), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [834] = 4,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      aux_sym_string_token1,
    ACTIONS(155), 1,
      sym__escape_sequence,
    STATE(34), 1,
      aux_sym_string_repeat1,
  [847] = 4,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 1,
      aux_sym_string_token1,
    ACTIONS(162), 1,
      sym__escape_sequence,
    STATE(34), 1,
      aux_sym_string_repeat1,
  [860] = 4,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      aux_sym_string_token1,
    ACTIONS(168), 1,
      sym__escape_sequence,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [873] = 4,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      sym__newline,
    ACTIONS(174), 1,
      sym_errorName,
    STATE(59), 1,
      sym_errorDescription,
  [886] = 3,
    ACTIONS(176), 1,
      sym_integer,
    STATE(67), 1,
      sym_returnValue,
    ACTIONS(178), 2,
      sym_pointer,
      anon_sym_QMARK,
  [897] = 1,
    ACTIONS(180), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [903] = 1,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [909] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_dict_repeat1,
  [919] = 3,
    ACTIONS(189), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(191), 1,
      sym_dictKey,
    STATE(52), 1,
      sym_dictElem,
  [929] = 3,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym__newline,
    STATE(69), 1,
      sym_errorDescription,
  [939] = 2,
    STATE(13), 1,
      sym_value,
    ACTIONS(34), 2,
      sym_integer,
      aux_sym_value_token1,
  [947] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_dict_repeat1,
  [957] = 1,
    ACTIONS(199), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [963] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_dict_repeat1,
  [973] = 3,
    ACTIONS(191), 1,
      sym_dictKey,
    ACTIONS(205), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(52), 1,
      sym_dictElem,
  [983] = 2,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_parameters,
  [990] = 2,
    ACTIONS(191), 1,
      sym_dictKey,
    STATE(52), 1,
      sym_dictElem,
  [997] = 1,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1002] = 1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1007] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1012] = 2,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_parameters,
  [1019] = 2,
    ACTIONS(191), 1,
      sym_dictKey,
    STATE(45), 1,
      sym_dictElem,
  [1026] = 2,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_dict,
  [1033] = 1,
    ACTIONS(213), 1,
      aux_sym_errorDescription_token1,
  [1037] = 1,
    ACTIONS(215), 1,
      anon_sym_with,
  [1041] = 1,
    ACTIONS(193), 1,
      sym__newline,
  [1045] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [1049] = 1,
    ACTIONS(219), 1,
      anon_sym_EQ,
  [1053] = 1,
    ACTIONS(221), 1,
      anon_sym_LBRACK,
  [1057] = 1,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
  [1061] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [1065] = 1,
    ACTIONS(227), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1069] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [1073] = 1,
    ACTIONS(229), 1,
      sym__newline,
  [1077] = 1,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
  [1081] = 1,
    ACTIONS(233), 1,
      sym__newline,
  [1085] = 1,
    ACTIONS(235), 1,
      anon_sym_EQ,
  [1089] = 1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [1093] = 1,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
  [1097] = 1,
    ACTIONS(241), 1,
      sym_integer,
  [1101] = 1,
    ACTIONS(243), 1,
      sym__newline,
  [1105] = 1,
    ACTIONS(245), 1,
      anon_sym_exited,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 175,
  [SMALL_STATE(7)] = 201,
  [SMALL_STATE(8)] = 245,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 333,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 433,
  [SMALL_STATE(14)] = 454,
  [SMALL_STATE(15)] = 475,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 515,
  [SMALL_STATE(18)] = 535,
  [SMALL_STATE(19)] = 555,
  [SMALL_STATE(20)] = 581,
  [SMALL_STATE(21)] = 604,
  [SMALL_STATE(22)] = 623,
  [SMALL_STATE(23)] = 642,
  [SMALL_STATE(24)] = 661,
  [SMALL_STATE(25)] = 680,
  [SMALL_STATE(26)] = 699,
  [SMALL_STATE(27)] = 718,
  [SMALL_STATE(28)] = 738,
  [SMALL_STATE(29)] = 755,
  [SMALL_STATE(30)] = 772,
  [SMALL_STATE(31)] = 790,
  [SMALL_STATE(32)] = 805,
  [SMALL_STATE(33)] = 822,
  [SMALL_STATE(34)] = 834,
  [SMALL_STATE(35)] = 847,
  [SMALL_STATE(36)] = 860,
  [SMALL_STATE(37)] = 873,
  [SMALL_STATE(38)] = 886,
  [SMALL_STATE(39)] = 897,
  [SMALL_STATE(40)] = 903,
  [SMALL_STATE(41)] = 909,
  [SMALL_STATE(42)] = 919,
  [SMALL_STATE(43)] = 929,
  [SMALL_STATE(44)] = 939,
  [SMALL_STATE(45)] = 947,
  [SMALL_STATE(46)] = 957,
  [SMALL_STATE(47)] = 963,
  [SMALL_STATE(48)] = 973,
  [SMALL_STATE(49)] = 983,
  [SMALL_STATE(50)] = 990,
  [SMALL_STATE(51)] = 997,
  [SMALL_STATE(52)] = 1002,
  [SMALL_STATE(53)] = 1007,
  [SMALL_STATE(54)] = 1012,
  [SMALL_STATE(55)] = 1019,
  [SMALL_STATE(56)] = 1026,
  [SMALL_STATE(57)] = 1033,
  [SMALL_STATE(58)] = 1037,
  [SMALL_STATE(59)] = 1041,
  [SMALL_STATE(60)] = 1045,
  [SMALL_STATE(61)] = 1049,
  [SMALL_STATE(62)] = 1053,
  [SMALL_STATE(63)] = 1057,
  [SMALL_STATE(64)] = 1061,
  [SMALL_STATE(65)] = 1065,
  [SMALL_STATE(66)] = 1069,
  [SMALL_STATE(67)] = 1073,
  [SMALL_STATE(68)] = 1077,
  [SMALL_STATE(69)] = 1081,
  [SMALL_STATE(70)] = 1085,
  [SMALL_STATE(71)] = 1089,
  [SMALL_STATE(72)] = 1093,
  [SMALL_STATE(73)] = 1097,
  [SMALL_STATE(74)] = 1101,
  [SMALL_STATE(75)] = 1105,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(20),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(14),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(36),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(62),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(20),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(55),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(44),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(34),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(34),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(50),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
