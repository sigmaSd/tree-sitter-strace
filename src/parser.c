#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_DASH_DASH_DASH = 2,
  sym_syscall = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_NULL = 7,
  anon_sym_DOT_DOT_DOT = 8,
  sym_integer = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_token1 = 11,
  sym__escape_sequence = 12,
  anon_sym_TILDE = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_pointer = 16,
  anon_sym_PIPE = 17,
  anon_sym_STAR = 18,
  aux_sym_value_token1 = 19,
  sym_comment = 20,
  sym__newline = 21,
  anon_sym_QMARK = 22,
  aux_sym_errorName_token1 = 23,
  aux_sym_errorDescription_token1 = 24,
  anon_sym_EQ_GT = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_AMP_AMP = 28,
  anon_sym_EQ_EQ = 29,
  aux_sym_macro_token1 = 30,
  sym_dictKey = 31,
  anon_sym_PLUS_PLUS_PLUS = 32,
  anon_sym_exited = 33,
  anon_sym_with = 34,
  sym_source_file = 35,
  sym_line = 36,
  sym_signal = 37,
  sym_parameters = 38,
  sym_parameter = 39,
  sym_string = 40,
  sym_list = 41,
  sym_values = 42,
  sym_value = 43,
  sym_returnValue = 44,
  sym_errorName = 45,
  sym_errorDescription = 46,
  sym_dictFn = 47,
  sym_dict = 48,
  sym_dictElem = 49,
  sym_macro = 50,
  sym__dictValue = 51,
  sym_exit = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_parameters_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
  aux_sym_values_repeat1 = 56,
  aux_sym_errorDescription_repeat1 = 57,
  aux_sym_dict_repeat1 = 58,
  aux_sym_dictElem_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_DASH_DASH] = "---",
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
  [aux_sym_errorName_token1] = "errorName_token1",
  [aux_sym_errorDescription_token1] = "errorContent",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ_EQ] = "==",
  [aux_sym_macro_token1] = "macro_token1",
  [sym_dictKey] = "dictKey",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_exited] = "exited",
  [anon_sym_with] = "with",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_signal] = "signal",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_string] = "string",
  [sym_list] = "list",
  [sym_values] = "values",
  [sym_value] = "value",
  [sym_returnValue] = "returnValue",
  [sym_errorName] = "errorName",
  [sym_errorDescription] = "errorDescription",
  [sym_dictFn] = "dictFn",
  [sym_dict] = "dict",
  [sym_dictElem] = "dictElem",
  [sym_macro] = "macro",
  [sym__dictValue] = "_dictValue",
  [sym_exit] = "exit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_values_repeat1] = "values_repeat1",
  [aux_sym_errorDescription_repeat1] = "errorDescription_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
  [aux_sym_dictElem_repeat1] = "dictElem_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
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
  [aux_sym_errorName_token1] = aux_sym_errorName_token1,
  [aux_sym_errorDescription_token1] = aux_sym_errorDescription_token1,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [aux_sym_macro_token1] = aux_sym_macro_token1,
  [sym_dictKey] = sym_dictKey,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_exited] = anon_sym_exited,
  [anon_sym_with] = anon_sym_with,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_signal] = sym_signal,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [sym_values] = sym_values,
  [sym_value] = sym_value,
  [sym_returnValue] = sym_returnValue,
  [sym_errorName] = sym_errorName,
  [sym_errorDescription] = sym_errorDescription,
  [sym_dictFn] = sym_dictFn,
  [sym_dict] = sym_dict,
  [sym_dictElem] = sym_dictElem,
  [sym_macro] = sym_macro,
  [sym__dictValue] = sym__dictValue,
  [sym_exit] = sym_exit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_values_repeat1] = aux_sym_values_repeat1,
  [aux_sym_errorDescription_repeat1] = aux_sym_errorDescription_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
  [aux_sym_dictElem_repeat1] = aux_sym_dictElem_repeat1,
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
  [anon_sym_DASH_DASH_DASH] = {
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
  [aux_sym_errorName_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_errorDescription_token1] = {
    .visible = true,
    .named = true,
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_macro_token1] = {
    .visible = false,
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
  [sym_signal] = {
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
  [sym_errorName] = {
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
  [sym_macro] = {
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
  [aux_sym_errorDescription_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictElem_repeat1] = {
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '|') ADVANCE(63);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '~') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '?') ADVANCE(71);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == 'U') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '~') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_errorName_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38},
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
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 38},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 38},
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
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 38},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 38},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 38},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 38},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
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
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_exited] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(94),
    [sym_line] = STATE(32),
    [sym_signal] = STATE(32),
    [sym_exit] = STATE(92),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [sym_syscall] = ACTIONS(7),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(11), 1,
      sym_syscall,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_pointer,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    ACTIONS(13), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(17), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(59), 2,
      sym_parameter,
      sym__dictValue,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [46] = 13,
    ACTIONS(31), 1,
      anon_sym_NULL,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_pointer,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(9), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(29), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(34), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [91] = 13,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_pointer,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(9), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(17), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [135] = 13,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_pointer,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(9), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(17), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [179] = 13,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_pointer,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym_parameters_repeat1,
    STATE(9), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(17), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [223] = 13,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_pointer,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(9), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(17), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [267] = 13,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_pointer,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(9), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(17), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [311] = 4,
    STATE(11), 1,
      aux_sym_values_repeat1,
    ACTIONS(64), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(62), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(60), 11,
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
  [337] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(70), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(68), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(66), 11,
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
  [363] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(64), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(75), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(73), 11,
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
  [389] = 13,
    ACTIONS(15), 1,
      anon_sym_NULL,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_TILDE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_pointer,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      aux_sym_parameters_repeat1,
    STATE(9), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(17), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(20), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [433] = 2,
    ACTIONS(81), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(79), 13,
      anon_sym_DASH_DASH_DASH,
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
  [454] = 2,
    ACTIONS(85), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(83), 13,
      anon_sym_DASH_DASH_DASH,
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
  [475] = 2,
    ACTIONS(89), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(87), 13,
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
  [496] = 2,
    ACTIONS(93), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(91), 13,
      anon_sym_DASH_DASH_DASH,
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
  [517] = 2,
    ACTIONS(97), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(95), 13,
      anon_sym_DASH_DASH_DASH,
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
  [538] = 2,
    ACTIONS(68), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(66), 13,
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
  [559] = 5,
    ACTIONS(103), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ_GT,
    ACTIONS(101), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(99), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [585] = 4,
    ACTIONS(103), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(99), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [608] = 2,
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
  [627] = 2,
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
  [646] = 2,
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
  [665] = 2,
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
  [684] = 2,
    ACTIONS(127), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(125), 11,
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
  [703] = 2,
    ACTIONS(131), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(129), 11,
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
  [722] = 3,
    ACTIONS(137), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(135), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(133), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [742] = 2,
    ACTIONS(135), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(133), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [759] = 2,
    ACTIONS(141), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(139), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [776] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(147), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(145), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [794] = 2,
    ACTIONS(149), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(29), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [809] = 6,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(7), 1,
      sym_syscall,
    ACTIONS(9), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_exit,
    STATE(33), 3,
      sym_line,
      sym_signal,
      aux_sym_source_file_repeat1,
  [830] = 4,
    ACTIONS(155), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(158), 1,
      sym_syscall,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(33), 3,
      sym_line,
      sym_signal,
      aux_sym_source_file_repeat1,
  [846] = 5,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(163), 1,
      aux_sym_errorName_token1,
    ACTIONS(165), 1,
      sym_dictKey,
    STATE(68), 1,
      sym_macro,
    STATE(70), 1,
      sym_dictElem,
  [862] = 5,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      sym__newline,
    ACTIONS(171), 1,
      aux_sym_errorName_token1,
    STATE(48), 1,
      sym_errorName,
    STATE(86), 1,
      sym_errorDescription,
  [878] = 5,
    ACTIONS(163), 1,
      aux_sym_errorName_token1,
    ACTIONS(165), 1,
      sym_dictKey,
    ACTIONS(173), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(68), 1,
      sym_macro,
    STATE(70), 1,
      sym_dictElem,
  [894] = 4,
    ACTIONS(163), 1,
      aux_sym_errorName_token1,
    ACTIONS(165), 1,
      sym_dictKey,
    STATE(56), 1,
      sym_dictElem,
    STATE(68), 1,
      sym_macro,
  [907] = 4,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_string_token1,
    ACTIONS(179), 1,
      sym__escape_sequence,
    STATE(40), 1,
      aux_sym_string_repeat1,
  [920] = 1,
    ACTIONS(181), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [927] = 4,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym_string_token1,
    ACTIONS(187), 1,
      sym__escape_sequence,
    STATE(42), 1,
      aux_sym_string_repeat1,
  [940] = 4,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      aux_sym_errorDescription_token1,
    STATE(41), 1,
      aux_sym_errorDescription_repeat1,
  [953] = 4,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_string_token1,
    ACTIONS(202), 1,
      sym__escape_sequence,
    STATE(42), 1,
      aux_sym_string_repeat1,
  [966] = 4,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(209), 1,
      aux_sym_errorDescription_token1,
    STATE(45), 1,
      aux_sym_errorDescription_repeat1,
  [979] = 4,
    ACTIONS(163), 1,
      aux_sym_errorName_token1,
    ACTIONS(165), 1,
      sym_dictKey,
    STATE(68), 1,
      sym_macro,
    STATE(70), 1,
      sym_dictElem,
  [992] = 4,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      aux_sym_errorDescription_token1,
    STATE(41), 1,
      aux_sym_errorDescription_repeat1,
  [1005] = 1,
    ACTIONS(215), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [1012] = 3,
    ACTIONS(217), 1,
      sym_integer,
    STATE(87), 1,
      sym_returnValue,
    ACTIONS(219), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1023] = 3,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      sym__newline,
    STATE(85), 1,
      sym_errorDescription,
  [1033] = 1,
    ACTIONS(223), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1039] = 3,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_dict_repeat1,
  [1049] = 3,
    ACTIONS(230), 1,
      anon_sym_AMP_AMP,
    ACTIONS(233), 1,
      anon_sym_EQ_EQ,
    STATE(51), 1,
      aux_sym_dictElem_repeat1,
  [1059] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_dict_repeat1,
  [1069] = 3,
    ACTIONS(239), 1,
      anon_sym_AMP_AMP,
    ACTIONS(241), 1,
      anon_sym_EQ_EQ,
    STATE(51), 1,
      aux_sym_dictElem_repeat1,
  [1079] = 2,
    STATE(63), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_integer,
      aux_sym_value_token1,
  [1087] = 1,
    ACTIONS(243), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1093] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_dict_repeat1,
  [1103] = 2,
    ACTIONS(249), 1,
      aux_sym_errorDescription_token1,
    ACTIONS(192), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1111] = 2,
    STATE(18), 1,
      sym_value,
    ACTIONS(17), 2,
      sym_integer,
      aux_sym_value_token1,
  [1119] = 1,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1124] = 1,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1129] = 1,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1134] = 2,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_parameters,
  [1141] = 2,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_dict,
  [1148] = 2,
    ACTIONS(163), 1,
      aux_sym_errorName_token1,
    STATE(69), 1,
      sym_macro,
  [1155] = 2,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      sym__newline,
  [1162] = 2,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_dict,
  [1169] = 1,
    ACTIONS(263), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1174] = 2,
    ACTIONS(239), 1,
      anon_sym_AMP_AMP,
    STATE(53), 1,
      aux_sym_dictElem_repeat1,
  [1181] = 1,
    ACTIONS(233), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1186] = 1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1191] = 2,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_parameters,
  [1198] = 1,
    ACTIONS(265), 1,
      anon_sym_EQ,
  [1202] = 1,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
  [1206] = 1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [1210] = 1,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
  [1214] = 1,
    ACTIONS(273), 1,
      sym_integer,
  [1218] = 1,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
  [1222] = 1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [1226] = 1,
    ACTIONS(279), 1,
      sym_integer,
  [1230] = 1,
    ACTIONS(281), 1,
      anon_sym_DASH_DASH_DASH,
  [1234] = 1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [1238] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1242] = 1,
    ACTIONS(287), 1,
      sym__newline,
  [1246] = 1,
    ACTIONS(289), 1,
      anon_sym_with,
  [1250] = 1,
    ACTIONS(291), 1,
      sym__newline,
  [1254] = 1,
    ACTIONS(221), 1,
      sym__newline,
  [1258] = 1,
    ACTIONS(293), 1,
      sym__newline,
  [1262] = 1,
    ACTIONS(295), 1,
      anon_sym_EQ,
  [1266] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [1270] = 1,
    ACTIONS(299), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1274] = 1,
    ACTIONS(301), 1,
      aux_sym_macro_token1,
  [1278] = 1,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [1282] = 1,
    ACTIONS(303), 1,
      sym__newline,
  [1286] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [1290] = 1,
    ACTIONS(307), 1,
      anon_sym_exited,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 91,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 267,
  [SMALL_STATE(9)] = 311,
  [SMALL_STATE(10)] = 337,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 433,
  [SMALL_STATE(14)] = 454,
  [SMALL_STATE(15)] = 475,
  [SMALL_STATE(16)] = 496,
  [SMALL_STATE(17)] = 517,
  [SMALL_STATE(18)] = 538,
  [SMALL_STATE(19)] = 559,
  [SMALL_STATE(20)] = 585,
  [SMALL_STATE(21)] = 608,
  [SMALL_STATE(22)] = 627,
  [SMALL_STATE(23)] = 646,
  [SMALL_STATE(24)] = 665,
  [SMALL_STATE(25)] = 684,
  [SMALL_STATE(26)] = 703,
  [SMALL_STATE(27)] = 722,
  [SMALL_STATE(28)] = 742,
  [SMALL_STATE(29)] = 759,
  [SMALL_STATE(30)] = 776,
  [SMALL_STATE(31)] = 794,
  [SMALL_STATE(32)] = 809,
  [SMALL_STATE(33)] = 830,
  [SMALL_STATE(34)] = 846,
  [SMALL_STATE(35)] = 862,
  [SMALL_STATE(36)] = 878,
  [SMALL_STATE(37)] = 894,
  [SMALL_STATE(38)] = 907,
  [SMALL_STATE(39)] = 920,
  [SMALL_STATE(40)] = 927,
  [SMALL_STATE(41)] = 940,
  [SMALL_STATE(42)] = 953,
  [SMALL_STATE(43)] = 966,
  [SMALL_STATE(44)] = 979,
  [SMALL_STATE(45)] = 992,
  [SMALL_STATE(46)] = 1005,
  [SMALL_STATE(47)] = 1012,
  [SMALL_STATE(48)] = 1023,
  [SMALL_STATE(49)] = 1033,
  [SMALL_STATE(50)] = 1039,
  [SMALL_STATE(51)] = 1049,
  [SMALL_STATE(52)] = 1059,
  [SMALL_STATE(53)] = 1069,
  [SMALL_STATE(54)] = 1079,
  [SMALL_STATE(55)] = 1087,
  [SMALL_STATE(56)] = 1093,
  [SMALL_STATE(57)] = 1103,
  [SMALL_STATE(58)] = 1111,
  [SMALL_STATE(59)] = 1119,
  [SMALL_STATE(60)] = 1124,
  [SMALL_STATE(61)] = 1129,
  [SMALL_STATE(62)] = 1134,
  [SMALL_STATE(63)] = 1141,
  [SMALL_STATE(64)] = 1148,
  [SMALL_STATE(65)] = 1155,
  [SMALL_STATE(66)] = 1162,
  [SMALL_STATE(67)] = 1169,
  [SMALL_STATE(68)] = 1174,
  [SMALL_STATE(69)] = 1181,
  [SMALL_STATE(70)] = 1186,
  [SMALL_STATE(71)] = 1191,
  [SMALL_STATE(72)] = 1198,
  [SMALL_STATE(73)] = 1202,
  [SMALL_STATE(74)] = 1206,
  [SMALL_STATE(75)] = 1210,
  [SMALL_STATE(76)] = 1214,
  [SMALL_STATE(77)] = 1218,
  [SMALL_STATE(78)] = 1222,
  [SMALL_STATE(79)] = 1226,
  [SMALL_STATE(80)] = 1230,
  [SMALL_STATE(81)] = 1234,
  [SMALL_STATE(82)] = 1238,
  [SMALL_STATE(83)] = 1242,
  [SMALL_STATE(84)] = 1246,
  [SMALL_STATE(85)] = 1250,
  [SMALL_STATE(86)] = 1254,
  [SMALL_STATE(87)] = 1258,
  [SMALL_STATE(88)] = 1262,
  [SMALL_STATE(89)] = 1266,
  [SMALL_STATE(90)] = 1270,
  [SMALL_STATE(91)] = 1274,
  [SMALL_STATE(92)] = 1278,
  [SMALL_STATE(93)] = 1282,
  [SMALL_STATE(94)] = 1286,
  [SMALL_STATE(95)] = 1290,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(20),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(38),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(77),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(12),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(58),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(82),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(41),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(42),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(42),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(44),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(64),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
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
