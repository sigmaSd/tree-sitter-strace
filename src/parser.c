#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  aux_sym_interleaf_token1 = 2,
  anon_sym_DASH_DASH_DASH = 3,
  sym_syscall = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_NULL = 8,
  anon_sym_DOT_DOT_DOT = 9,
  sym_integer = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_token1 = 12,
  sym__escape_sequence = 13,
  anon_sym_TILDE = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  sym_pointer = 17,
  anon_sym_PIPE = 18,
  anon_sym_STAR = 19,
  aux_sym_value_token1 = 20,
  sym_comment = 21,
  sym__newline = 22,
  anon_sym_QMARK = 23,
  aux_sym_errorName_token1 = 24,
  aux_sym_errorDescription_token1 = 25,
  anon_sym_EQ_GT = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_AMP_AMP = 29,
  anon_sym_EQ_EQ = 30,
  aux_sym_macro_token1 = 31,
  sym_dictKey = 32,
  anon_sym_PLUS_PLUS_PLUS = 33,
  anon_sym_exited = 34,
  anon_sym_with = 35,
  sym_source_file = 36,
  sym_line = 37,
  sym_interleaf = 38,
  sym_signal = 39,
  sym_pid = 40,
  sym_parameters = 41,
  sym_parameter = 42,
  sym_string = 43,
  sym_list = 44,
  sym_values = 45,
  sym_value = 46,
  sym_returnValue = 47,
  sym_errorName = 48,
  sym_errorDescription = 49,
  sym_dictFn = 50,
  sym_dict = 51,
  sym_dictElem = 52,
  sym_macro = 53,
  sym__dictValue = 54,
  sym_exit = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_parameters_repeat1 = 57,
  aux_sym_string_repeat1 = 58,
  aux_sym_values_repeat1 = 59,
  aux_sym_errorDescription_repeat1 = 60,
  aux_sym_dict_repeat1 = 61,
  aux_sym_dictElem_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [aux_sym_interleaf_token1] = "interleaf_token1",
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
  [sym_interleaf] = "interleaf",
  [sym_signal] = "signal",
  [sym_pid] = "pid",
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
  [aux_sym_interleaf_token1] = aux_sym_interleaf_token1,
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
  [sym_interleaf] = sym_interleaf,
  [sym_signal] = sym_signal,
  [sym_pid] = sym_pid,
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
  [aux_sym_interleaf_token1] = {
    .visible = false,
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
  [sym_interleaf] = {
    .visible = true,
    .named = true,
  },
  [sym_signal] = {
    .visible = true,
    .named = true,
  },
  [sym_pid] = {
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
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(73);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '~') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '0') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_interleaf_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_syscall);
      if (lookahead == '<') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_errorName_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 4},
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
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
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
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 48},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 48},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 48},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 48},
  [89] = {.lex_state = 48},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 15},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 48},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 0},
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
    [sym_source_file] = STATE(106),
    [sym_line] = STATE(31),
    [sym_interleaf] = STATE(31),
    [sym_signal] = STATE(31),
    [sym_pid] = STATE(56),
    [sym_exit] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [sym_syscall] = ACTIONS(7),
    [sym_integer] = ACTIONS(9),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(13), 1,
      sym_syscall,
    ACTIONS(17), 1,
      anon_sym_NULL,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_pointer,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    ACTIONS(15), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(76), 2,
      sym_parameter,
      sym__dictValue,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [46] = 13,
    ACTIONS(33), 1,
      anon_sym_NULL,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_TILDE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      sym_pointer,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(31), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [91] = 4,
    STATE(11), 1,
      aux_sym_values_repeat1,
    ACTIONS(58), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(56), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(54), 11,
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
  [117] = 13,
    ACTIONS(17), 1,
      anon_sym_NULL,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_pointer,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_value,
    STATE(10), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [161] = 4,
    STATE(6), 1,
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
  [187] = 13,
    ACTIONS(17), 1,
      anon_sym_NULL,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_pointer,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [231] = 13,
    ACTIONS(17), 1,
      anon_sym_NULL,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_pointer,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_value,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [275] = 13,
    ACTIONS(17), 1,
      anon_sym_NULL,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_pointer,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [319] = 13,
    ACTIONS(17), 1,
      anon_sym_NULL,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_pointer,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [363] = 4,
    STATE(6), 1,
      aux_sym_values_repeat1,
    ACTIONS(58), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(77), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(75), 11,
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
    ACTIONS(17), 1,
      anon_sym_NULL,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      sym_pointer,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_value,
    STATE(7), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [433] = 2,
    ACTIONS(83), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(81), 13,
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
    ACTIONS(87), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(85), 13,
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
    ACTIONS(91), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(89), 13,
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
    ACTIONS(95), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(93), 13,
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
  [538] = 2,
    ACTIONS(99), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(97), 13,
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
  [559] = 5,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_EQ_GT,
    ACTIONS(103), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(101), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [585] = 2,
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
  [604] = 2,
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
  [623] = 2,
    ACTIONS(121), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(119), 11,
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
  [642] = 4,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(101), 9,
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
    ACTIONS(125), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(123), 11,
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
    ACTIONS(129), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(127), 11,
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
    ACTIONS(133), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(131), 11,
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
    ACTIONS(139), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(137), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(135), 9,
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
    ACTIONS(143), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(141), 9,
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
    ACTIONS(137), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(135), 9,
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
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(147), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [794] = 7,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(7), 1,
      sym_syscall,
    ACTIONS(9), 1,
      sym_integer,
    ACTIONS(11), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_pid,
    STATE(32), 5,
      sym_line,
      sym_interleaf,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [820] = 7,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(158), 1,
      sym_syscall,
    ACTIONS(161), 1,
      sym_integer,
    ACTIONS(164), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(56), 1,
      sym_pid,
    STATE(32), 5,
      sym_line,
      sym_interleaf,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [846] = 2,
    ACTIONS(167), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(31), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [861] = 5,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      sym__newline,
    ACTIONS(173), 1,
      aux_sym_errorName_token1,
    STATE(55), 1,
      sym_errorName,
    STATE(81), 1,
      sym_errorDescription,
  [877] = 5,
    ACTIONS(175), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(177), 1,
      aux_sym_errorName_token1,
    ACTIONS(179), 1,
      sym_dictKey,
    STATE(66), 1,
      sym_macro,
    STATE(77), 1,
      sym_dictElem,
  [893] = 1,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [901] = 1,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [909] = 1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [917] = 1,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [925] = 5,
    ACTIONS(177), 1,
      aux_sym_errorName_token1,
    ACTIONS(179), 1,
      sym_dictKey,
    ACTIONS(189), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(66), 1,
      sym_macro,
    STATE(77), 1,
      sym_dictElem,
  [941] = 1,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [949] = 1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [957] = 4,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(200), 1,
      aux_sym_errorDescription_token1,
    STATE(43), 1,
      aux_sym_errorDescription_repeat1,
  [970] = 3,
    ACTIONS(203), 1,
      sym_integer,
    STATE(83), 1,
      sym_returnValue,
    ACTIONS(205), 2,
      sym_pointer,
      anon_sym_QMARK,
  [981] = 3,
    ACTIONS(27), 1,
      sym_pointer,
    STATE(67), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
  [992] = 4,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      aux_sym_string_token1,
    ACTIONS(212), 1,
      sym__escape_sequence,
    STATE(46), 1,
      aux_sym_string_repeat1,
  [1005] = 4,
    ACTIONS(177), 1,
      aux_sym_errorName_token1,
    ACTIONS(179), 1,
      sym_dictKey,
    STATE(65), 1,
      sym_dictElem,
    STATE(66), 1,
      sym_macro,
  [1018] = 3,
    ACTIONS(27), 1,
      sym_pointer,
    STATE(17), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
  [1029] = 3,
    ACTIONS(203), 1,
      sym_integer,
    STATE(80), 1,
      sym_returnValue,
    ACTIONS(205), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1040] = 4,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym_string_token1,
    ACTIONS(219), 1,
      sym__escape_sequence,
    STATE(46), 1,
      aux_sym_string_repeat1,
  [1053] = 4,
    ACTIONS(177), 1,
      aux_sym_errorName_token1,
    ACTIONS(179), 1,
      sym_dictKey,
    STATE(66), 1,
      sym_macro,
    STATE(77), 1,
      sym_dictElem,
  [1066] = 4,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      aux_sym_errorDescription_token1,
    STATE(43), 1,
      aux_sym_errorDescription_repeat1,
  [1079] = 4,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      aux_sym_string_token1,
    ACTIONS(231), 1,
      sym__escape_sequence,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [1092] = 4,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      aux_sym_errorDescription_token1,
    STATE(52), 1,
      aux_sym_errorDescription_repeat1,
  [1105] = 3,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      sym__newline,
    STATE(94), 1,
      sym_errorDescription,
  [1115] = 3,
    ACTIONS(239), 1,
      aux_sym_interleaf_token1,
    ACTIONS(241), 1,
      sym_syscall,
    ACTIONS(243), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1125] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_dict_repeat1,
  [1135] = 2,
    ACTIONS(250), 1,
      aux_sym_interleaf_token1,
    ACTIONS(252), 2,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [1143] = 3,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_dict_repeat1,
  [1153] = 3,
    ACTIONS(258), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_EQ_EQ,
    STATE(60), 1,
      aux_sym_dictElem_repeat1,
  [1163] = 3,
    ACTIONS(263), 1,
      anon_sym_AMP_AMP,
    ACTIONS(265), 1,
      anon_sym_EQ_EQ,
    STATE(60), 1,
      aux_sym_dictElem_repeat1,
  [1173] = 1,
    ACTIONS(267), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1179] = 2,
    ACTIONS(269), 1,
      aux_sym_errorDescription_token1,
    ACTIONS(198), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1187] = 1,
    ACTIONS(271), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1193] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_dict_repeat1,
  [1203] = 2,
    ACTIONS(263), 1,
      anon_sym_AMP_AMP,
    STATE(61), 1,
      aux_sym_dictElem_repeat1,
  [1210] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_dict,
  [1217] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_dict,
  [1224] = 2,
    ACTIONS(177), 1,
      aux_sym_errorName_token1,
    STATE(73), 1,
      sym_macro,
  [1231] = 1,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1236] = 2,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      sym__newline,
  [1243] = 1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1248] = 1,
    ACTIONS(261), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1253] = 1,
    ACTIONS(285), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1258] = 2,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_parameters,
  [1265] = 1,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1270] = 1,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1275] = 2,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_parameters,
  [1282] = 2,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_parameters,
  [1289] = 1,
    ACTIONS(291), 1,
      sym__newline,
  [1293] = 1,
    ACTIONS(237), 1,
      sym__newline,
  [1297] = 1,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
  [1301] = 1,
    ACTIONS(295), 1,
      sym__newline,
  [1305] = 1,
    ACTIONS(297), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1309] = 1,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1313] = 1,
    ACTIONS(301), 1,
      aux_sym_macro_token1,
  [1317] = 1,
    ACTIONS(303), 1,
      anon_sym_exited,
  [1321] = 1,
    ACTIONS(305), 1,
      sym_integer,
  [1325] = 1,
    ACTIONS(307), 1,
      sym_integer,
  [1329] = 1,
    ACTIONS(309), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1333] = 1,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
  [1337] = 1,
    ACTIONS(313), 1,
      sym__newline,
  [1341] = 1,
    ACTIONS(315), 1,
      anon_sym_EQ,
  [1345] = 1,
    ACTIONS(317), 1,
      sym__newline,
  [1349] = 1,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
  [1353] = 1,
    ACTIONS(321), 1,
      anon_sym_with,
  [1357] = 1,
    ACTIONS(323), 1,
      anon_sym_EQ,
  [1361] = 1,
    ACTIONS(325), 1,
      sym_integer,
  [1365] = 1,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
  [1369] = 1,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
  [1373] = 1,
    ACTIONS(331), 1,
      anon_sym_DASH_DASH_DASH,
  [1377] = 1,
    ACTIONS(333), 1,
      anon_sym_exited,
  [1381] = 1,
    ACTIONS(335), 1,
      anon_sym_with,
  [1385] = 1,
    ACTIONS(337), 1,
      sym__newline,
  [1389] = 1,
    ACTIONS(339), 1,
      anon_sym_EQ,
  [1393] = 1,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 91,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 231,
  [SMALL_STATE(9)] = 275,
  [SMALL_STATE(10)] = 319,
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
  [SMALL_STATE(21)] = 604,
  [SMALL_STATE(22)] = 623,
  [SMALL_STATE(23)] = 642,
  [SMALL_STATE(24)] = 665,
  [SMALL_STATE(25)] = 684,
  [SMALL_STATE(26)] = 703,
  [SMALL_STATE(27)] = 722,
  [SMALL_STATE(28)] = 742,
  [SMALL_STATE(29)] = 759,
  [SMALL_STATE(30)] = 776,
  [SMALL_STATE(31)] = 794,
  [SMALL_STATE(32)] = 820,
  [SMALL_STATE(33)] = 846,
  [SMALL_STATE(34)] = 861,
  [SMALL_STATE(35)] = 877,
  [SMALL_STATE(36)] = 893,
  [SMALL_STATE(37)] = 901,
  [SMALL_STATE(38)] = 909,
  [SMALL_STATE(39)] = 917,
  [SMALL_STATE(40)] = 925,
  [SMALL_STATE(41)] = 941,
  [SMALL_STATE(42)] = 949,
  [SMALL_STATE(43)] = 957,
  [SMALL_STATE(44)] = 970,
  [SMALL_STATE(45)] = 981,
  [SMALL_STATE(46)] = 992,
  [SMALL_STATE(47)] = 1005,
  [SMALL_STATE(48)] = 1018,
  [SMALL_STATE(49)] = 1029,
  [SMALL_STATE(50)] = 1040,
  [SMALL_STATE(51)] = 1053,
  [SMALL_STATE(52)] = 1066,
  [SMALL_STATE(53)] = 1079,
  [SMALL_STATE(54)] = 1092,
  [SMALL_STATE(55)] = 1105,
  [SMALL_STATE(56)] = 1115,
  [SMALL_STATE(57)] = 1125,
  [SMALL_STATE(58)] = 1135,
  [SMALL_STATE(59)] = 1143,
  [SMALL_STATE(60)] = 1153,
  [SMALL_STATE(61)] = 1163,
  [SMALL_STATE(62)] = 1173,
  [SMALL_STATE(63)] = 1179,
  [SMALL_STATE(64)] = 1187,
  [SMALL_STATE(65)] = 1193,
  [SMALL_STATE(66)] = 1203,
  [SMALL_STATE(67)] = 1210,
  [SMALL_STATE(68)] = 1217,
  [SMALL_STATE(69)] = 1224,
  [SMALL_STATE(70)] = 1231,
  [SMALL_STATE(71)] = 1236,
  [SMALL_STATE(72)] = 1243,
  [SMALL_STATE(73)] = 1248,
  [SMALL_STATE(74)] = 1253,
  [SMALL_STATE(75)] = 1258,
  [SMALL_STATE(76)] = 1265,
  [SMALL_STATE(77)] = 1270,
  [SMALL_STATE(78)] = 1275,
  [SMALL_STATE(79)] = 1282,
  [SMALL_STATE(80)] = 1289,
  [SMALL_STATE(81)] = 1293,
  [SMALL_STATE(82)] = 1297,
  [SMALL_STATE(83)] = 1301,
  [SMALL_STATE(84)] = 1305,
  [SMALL_STATE(85)] = 1309,
  [SMALL_STATE(86)] = 1313,
  [SMALL_STATE(87)] = 1317,
  [SMALL_STATE(88)] = 1321,
  [SMALL_STATE(89)] = 1325,
  [SMALL_STATE(90)] = 1329,
  [SMALL_STATE(91)] = 1333,
  [SMALL_STATE(92)] = 1337,
  [SMALL_STATE(93)] = 1341,
  [SMALL_STATE(94)] = 1345,
  [SMALL_STATE(95)] = 1349,
  [SMALL_STATE(96)] = 1353,
  [SMALL_STATE(97)] = 1357,
  [SMALL_STATE(98)] = 1361,
  [SMALL_STATE(99)] = 1365,
  [SMALL_STATE(100)] = 1369,
  [SMALL_STATE(101)] = 1373,
  [SMALL_STATE(102)] = 1377,
  [SMALL_STATE(103)] = 1381,
  [SMALL_STATE(104)] = 1385,
  [SMALL_STATE(105)] = 1389,
  [SMALL_STATE(106)] = 1393,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(23),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(53),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(99),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(47),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(48),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interleaf, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(91),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(43),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(46),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(46),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(51),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pid, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(69),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [341] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
