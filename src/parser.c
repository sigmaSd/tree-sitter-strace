#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT_DOT_DOT_DOT = 1,
  anon_sym_resumed_GT = 2,
  anon_sym_EQ_GT = 3,
  anon_sym_COMMA = 4,
  anon_sym_EQ = 5,
  anon_sym_DASH_DASH_DASH = 6,
  sym_syscall = 7,
  anon_sym_LPAREN = 8,
  anon_sym_LTunfinished_DOT_DOT_DOT_GT = 9,
  anon_sym_RPAREN = 10,
  anon_sym_NULL = 11,
  anon_sym_DOT_DOT_DOT = 12,
  sym_integer = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_string_token1 = 15,
  sym__escape_sequence = 16,
  anon_sym_TILDE = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_pointer = 20,
  anon_sym_PIPE = 21,
  anon_sym_STAR = 22,
  aux_sym_value_token1 = 23,
  sym_comment = 24,
  sym__newline = 25,
  anon_sym_QMARK = 26,
  aux_sym_errorName_token1 = 27,
  aux_sym_errorDescription_token1 = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  anon_sym_AMP_AMP = 31,
  anon_sym_EQ_EQ = 32,
  aux_sym_macro_token1 = 33,
  sym_dictKey = 34,
  anon_sym_PLUS_PLUS_PLUS = 35,
  anon_sym_exited = 36,
  anon_sym_with = 37,
  sym_source_file = 38,
  sym_line = 39,
  sym_signal = 40,
  sym_pid = 41,
  sym_parameters = 42,
  sym_parameter = 43,
  sym_string = 44,
  sym_list = 45,
  sym_values = 46,
  sym_value = 47,
  sym_returnValue = 48,
  sym_errorName = 49,
  sym_errorDescription = 50,
  sym_dictFn = 51,
  sym_dict = 52,
  sym_dictElem = 53,
  sym_macro = 54,
  sym__dictValue = 55,
  sym_exit = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_parameters_repeat1 = 58,
  aux_sym_string_repeat1 = 59,
  aux_sym_values_repeat1 = 60,
  aux_sym_errorDescription_repeat1 = 61,
  aux_sym_dict_repeat1 = 62,
  aux_sym_dictElem_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_DOT_DOT_DOT] = "<...",
  [anon_sym_resumed_GT] = "resumed>",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_DASH_DASH] = "---",
  [sym_syscall] = "syscall",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LTunfinished_DOT_DOT_DOT_GT] = "<unfinished ...>",
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
  [anon_sym_LT_DOT_DOT_DOT] = anon_sym_LT_DOT_DOT_DOT,
  [anon_sym_resumed_GT] = anon_sym_resumed_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [sym_syscall] = sym_syscall,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LTunfinished_DOT_DOT_DOT_GT] = anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [anon_sym_LT_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resumed_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LTunfinished_DOT_DOT_DOT_GT] = {
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
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '?') ADVANCE(102);
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(40);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '~') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '~') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(108);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(112);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '?') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_DOT_DOT_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_resumed_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LTunfinished_DOT_DOT_DOT_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_errorName_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 65},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 65},
  [41] = {.lex_state = 65},
  [42] = {.lex_state = 65},
  [43] = {.lex_state = 65},
  [44] = {.lex_state = 65},
  [45] = {.lex_state = 65},
  [46] = {.lex_state = 65},
  [47] = {.lex_state = 65},
  [48] = {.lex_state = 65},
  [49] = {.lex_state = 65},
  [50] = {.lex_state = 65},
  [51] = {.lex_state = 65},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 65},
  [55] = {.lex_state = 65},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 65},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 65},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 65},
  [110] = {.lex_state = 65},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 65},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 65},
  [116] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_resumed_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LTunfinished_DOT_DOT_DOT_GT] = ACTIONS(1),
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
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_exited] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(92),
    [sym_line] = STATE(40),
    [sym_signal] = STATE(40),
    [sym_pid] = STATE(45),
    [sym_exit] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(7),
    [sym_syscall] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(15), 1,
      anon_sym_EQ_GT,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_value,
    STATE(15), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    STATE(48), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [57] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      sym_value,
    STATE(15), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    STATE(46), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [111] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_value,
    STATE(15), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    STATE(46), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [162] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_value,
    STATE(15), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    STATE(44), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [213] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_value,
    STATE(15), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    STATE(91), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [264] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_value,
    STATE(15), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    STATE(47), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [315] = 13,
    ACTIONS(41), 1,
      anon_sym_NULL,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_TILDE,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      sym_pointer,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(14), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    ACTIONS(44), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(39), 3,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [361] = 13,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      sym_syscall,
    STATE(14), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(62), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(88), 2,
      sym_parameter,
      sym__dictValue,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [407] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(70), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(68), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(66), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [434] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(77), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(75), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(73), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [461] = 13,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym_parameters_repeat1,
    STATE(14), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(79), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [506] = 13,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(14), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(81), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [551] = 4,
    STATE(11), 1,
      aux_sym_values_repeat1,
    ACTIONS(77), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(85), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(83), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [578] = 13,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(14), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(79), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [623] = 2,
    ACTIONS(89), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(87), 14,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [645] = 2,
    ACTIONS(68), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(66), 14,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [667] = 13,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(14), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [711] = 2,
    ACTIONS(95), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(93), 14,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [733] = 2,
    ACTIONS(99), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(97), 14,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [755] = 13,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_value,
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [799] = 13,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(14), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [843] = 13,
    ACTIONS(23), 1,
      anon_sym_NULL,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pointer,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_value,
    STATE(22), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(37), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(33), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [887] = 2,
    ACTIONS(107), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(105), 14,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [909] = 2,
    ACTIONS(111), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(109), 14,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [931] = 5,
    ACTIONS(113), 1,
      anon_sym_EQ_GT,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(121), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(115), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [958] = 2,
    ACTIONS(125), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(123), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [978] = 2,
    ACTIONS(129), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(127), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [998] = 2,
    ACTIONS(133), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(131), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [1018] = 2,
    ACTIONS(137), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(135), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [1038] = 2,
    ACTIONS(141), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(139), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [1058] = 2,
    ACTIONS(145), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(143), 12,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
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
  [1078] = 4,
    ACTIONS(119), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(121), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(115), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1102] = 3,
    ACTIONS(151), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(149), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(147), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1123] = 2,
    ACTIONS(155), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(153), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1141] = 2,
    ACTIONS(149), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(147), 10,
      anon_sym_COMMA,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1159] = 3,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(161), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(159), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [1178] = 8,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(168), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(171), 1,
      sym_syscall,
    ACTIONS(174), 1,
      sym_integer,
    ACTIONS(177), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(45), 1,
      sym_pid,
    STATE(38), 4,
      sym_line,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1206] = 2,
    ACTIONS(180), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(39), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [1222] = 8,
    ACTIONS(5), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(9), 1,
      sym_syscall,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_pid,
    STATE(38), 4,
      sym_line,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1250] = 1,
    ACTIONS(184), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1262] = 1,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1274] = 1,
    ACTIONS(188), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1286] = 2,
    ACTIONS(192), 1,
      anon_sym_EQ,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1298] = 5,
    ACTIONS(5), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(9), 1,
      sym_syscall,
    ACTIONS(13), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(55), 3,
      sym_line,
      sym_signal,
      sym_exit,
  [1316] = 2,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1328] = 2,
    ACTIONS(200), 1,
      anon_sym_EQ,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1340] = 2,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1352] = 1,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1361] = 1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1370] = 1,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1379] = 1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1388] = 1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1397] = 1,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1406] = 1,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1415] = 5,
    ACTIONS(216), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(218), 1,
      aux_sym_errorName_token1,
    ACTIONS(220), 1,
      sym_dictKey,
    STATE(83), 1,
      sym_macro,
    STATE(84), 1,
      sym_dictElem,
  [1431] = 5,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      sym__newline,
    ACTIONS(226), 1,
      aux_sym_errorName_token1,
    STATE(77), 1,
      sym_errorName,
    STATE(99), 1,
      sym_errorDescription,
  [1447] = 5,
    ACTIONS(218), 1,
      aux_sym_errorName_token1,
    ACTIONS(220), 1,
      sym_dictKey,
    ACTIONS(228), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(83), 1,
      sym_macro,
    STATE(84), 1,
      sym_dictElem,
  [1463] = 4,
    ACTIONS(218), 1,
      aux_sym_errorName_token1,
    ACTIONS(220), 1,
      sym_dictKey,
    STATE(83), 1,
      sym_macro,
    STATE(84), 1,
      sym_dictElem,
  [1476] = 3,
    ACTIONS(230), 1,
      sym_integer,
    STATE(114), 1,
      sym_returnValue,
    ACTIONS(232), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1487] = 4,
    ACTIONS(218), 1,
      aux_sym_errorName_token1,
    ACTIONS(220), 1,
      sym_dictKey,
    STATE(76), 1,
      sym_dictElem,
    STATE(83), 1,
      sym_macro,
  [1500] = 4,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      aux_sym_string_token1,
    ACTIONS(238), 1,
      sym__escape_sequence,
    STATE(67), 1,
      aux_sym_string_repeat1,
  [1513] = 1,
    ACTIONS(240), 4,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [1520] = 4,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(247), 1,
      aux_sym_errorDescription_token1,
    STATE(64), 1,
      aux_sym_errorDescription_repeat1,
  [1533] = 4,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(254), 1,
      aux_sym_errorDescription_token1,
    STATE(64), 1,
      aux_sym_errorDescription_repeat1,
  [1546] = 4,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      aux_sym_errorDescription_token1,
    STATE(65), 1,
      aux_sym_errorDescription_repeat1,
  [1559] = 4,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      aux_sym_string_token1,
    ACTIONS(265), 1,
      sym__escape_sequence,
    STATE(67), 1,
      aux_sym_string_repeat1,
  [1572] = 3,
    ACTIONS(230), 1,
      sym_integer,
    STATE(108), 1,
      sym_returnValue,
    ACTIONS(232), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1583] = 4,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_string_token1,
    ACTIONS(272), 1,
      sym__escape_sequence,
    STATE(62), 1,
      aux_sym_string_repeat1,
  [1596] = 3,
    ACTIONS(230), 1,
      sym_integer,
    STATE(96), 1,
      sym_returnValue,
    ACTIONS(232), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1607] = 3,
    ACTIONS(33), 1,
      sym_pointer,
    STATE(82), 1,
      sym_value,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
  [1618] = 3,
    ACTIONS(33), 1,
      sym_pointer,
    STATE(17), 1,
      sym_value,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
  [1629] = 3,
    ACTIONS(230), 1,
      sym_integer,
    STATE(97), 1,
      sym_returnValue,
    ACTIONS(232), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1640] = 2,
    ACTIONS(274), 1,
      aux_sym_errorDescription_token1,
    ACTIONS(245), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1648] = 3,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_dict_repeat1,
  [1658] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_dict_repeat1,
  [1668] = 3,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      sym__newline,
    STATE(106), 1,
      sym_errorDescription,
  [1678] = 3,
    ACTIONS(287), 1,
      anon_sym_AMP_AMP,
    ACTIONS(289), 1,
      anon_sym_EQ_EQ,
    STATE(79), 1,
      aux_sym_dictElem_repeat1,
  [1688] = 3,
    ACTIONS(291), 1,
      anon_sym_AMP_AMP,
    ACTIONS(294), 1,
      anon_sym_EQ_EQ,
    STATE(79), 1,
      aux_sym_dictElem_repeat1,
  [1698] = 3,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_dict_repeat1,
  [1708] = 1,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1713] = 2,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_dict,
  [1720] = 2,
    ACTIONS(287), 1,
      anon_sym_AMP_AMP,
    STATE(78), 1,
      aux_sym_dictElem_repeat1,
  [1727] = 1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1732] = 1,
    ACTIONS(294), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1737] = 2,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_dict,
  [1744] = 1,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1749] = 1,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1754] = 2,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym__newline,
  [1761] = 2,
    ACTIONS(218), 1,
      aux_sym_errorName_token1,
    STATE(85), 1,
      sym_macro,
  [1768] = 1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1773] = 1,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
  [1777] = 1,
    ACTIONS(314), 1,
      aux_sym_macro_token1,
  [1781] = 1,
    ACTIONS(316), 1,
      anon_sym_resumed_GT,
  [1785] = 1,
    ACTIONS(318), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1789] = 1,
    ACTIONS(320), 1,
      sym__newline,
  [1793] = 1,
    ACTIONS(322), 1,
      sym__newline,
  [1797] = 1,
    ACTIONS(324), 1,
      anon_sym_exited,
  [1801] = 1,
    ACTIONS(285), 1,
      sym__newline,
  [1805] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
  [1809] = 1,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
  [1813] = 1,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
  [1817] = 1,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
  [1821] = 1,
    ACTIONS(334), 1,
      sym__newline,
  [1825] = 1,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
  [1829] = 1,
    ACTIONS(338), 1,
      sym__newline,
  [1833] = 1,
    ACTIONS(340), 1,
      anon_sym_with,
  [1837] = 1,
    ACTIONS(342), 1,
      sym__newline,
  [1841] = 1,
    ACTIONS(344), 1,
      sym_syscall,
  [1845] = 1,
    ACTIONS(346), 1,
      sym_integer,
  [1849] = 1,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH_DASH,
  [1853] = 1,
    ACTIONS(350), 1,
      sym__newline,
  [1857] = 1,
    ACTIONS(352), 1,
      sym_integer,
  [1861] = 1,
    ACTIONS(354), 1,
      sym__newline,
  [1865] = 1,
    ACTIONS(356), 1,
      anon_sym_EQ,
  [1869] = 1,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 111,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 213,
  [SMALL_STATE(7)] = 264,
  [SMALL_STATE(8)] = 315,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 407,
  [SMALL_STATE(11)] = 434,
  [SMALL_STATE(12)] = 461,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 551,
  [SMALL_STATE(15)] = 578,
  [SMALL_STATE(16)] = 623,
  [SMALL_STATE(17)] = 645,
  [SMALL_STATE(18)] = 667,
  [SMALL_STATE(19)] = 711,
  [SMALL_STATE(20)] = 733,
  [SMALL_STATE(21)] = 755,
  [SMALL_STATE(22)] = 799,
  [SMALL_STATE(23)] = 843,
  [SMALL_STATE(24)] = 887,
  [SMALL_STATE(25)] = 909,
  [SMALL_STATE(26)] = 931,
  [SMALL_STATE(27)] = 958,
  [SMALL_STATE(28)] = 978,
  [SMALL_STATE(29)] = 998,
  [SMALL_STATE(30)] = 1018,
  [SMALL_STATE(31)] = 1038,
  [SMALL_STATE(32)] = 1058,
  [SMALL_STATE(33)] = 1078,
  [SMALL_STATE(34)] = 1102,
  [SMALL_STATE(35)] = 1123,
  [SMALL_STATE(36)] = 1141,
  [SMALL_STATE(37)] = 1159,
  [SMALL_STATE(38)] = 1178,
  [SMALL_STATE(39)] = 1206,
  [SMALL_STATE(40)] = 1222,
  [SMALL_STATE(41)] = 1250,
  [SMALL_STATE(42)] = 1262,
  [SMALL_STATE(43)] = 1274,
  [SMALL_STATE(44)] = 1286,
  [SMALL_STATE(45)] = 1298,
  [SMALL_STATE(46)] = 1316,
  [SMALL_STATE(47)] = 1328,
  [SMALL_STATE(48)] = 1340,
  [SMALL_STATE(49)] = 1352,
  [SMALL_STATE(50)] = 1361,
  [SMALL_STATE(51)] = 1370,
  [SMALL_STATE(52)] = 1379,
  [SMALL_STATE(53)] = 1388,
  [SMALL_STATE(54)] = 1397,
  [SMALL_STATE(55)] = 1406,
  [SMALL_STATE(56)] = 1415,
  [SMALL_STATE(57)] = 1431,
  [SMALL_STATE(58)] = 1447,
  [SMALL_STATE(59)] = 1463,
  [SMALL_STATE(60)] = 1476,
  [SMALL_STATE(61)] = 1487,
  [SMALL_STATE(62)] = 1500,
  [SMALL_STATE(63)] = 1513,
  [SMALL_STATE(64)] = 1520,
  [SMALL_STATE(65)] = 1533,
  [SMALL_STATE(66)] = 1546,
  [SMALL_STATE(67)] = 1559,
  [SMALL_STATE(68)] = 1572,
  [SMALL_STATE(69)] = 1583,
  [SMALL_STATE(70)] = 1596,
  [SMALL_STATE(71)] = 1607,
  [SMALL_STATE(72)] = 1618,
  [SMALL_STATE(73)] = 1629,
  [SMALL_STATE(74)] = 1640,
  [SMALL_STATE(75)] = 1648,
  [SMALL_STATE(76)] = 1658,
  [SMALL_STATE(77)] = 1668,
  [SMALL_STATE(78)] = 1678,
  [SMALL_STATE(79)] = 1688,
  [SMALL_STATE(80)] = 1698,
  [SMALL_STATE(81)] = 1708,
  [SMALL_STATE(82)] = 1713,
  [SMALL_STATE(83)] = 1720,
  [SMALL_STATE(84)] = 1727,
  [SMALL_STATE(85)] = 1732,
  [SMALL_STATE(86)] = 1737,
  [SMALL_STATE(87)] = 1744,
  [SMALL_STATE(88)] = 1749,
  [SMALL_STATE(89)] = 1754,
  [SMALL_STATE(90)] = 1761,
  [SMALL_STATE(91)] = 1768,
  [SMALL_STATE(92)] = 1773,
  [SMALL_STATE(93)] = 1777,
  [SMALL_STATE(94)] = 1781,
  [SMALL_STATE(95)] = 1785,
  [SMALL_STATE(96)] = 1789,
  [SMALL_STATE(97)] = 1793,
  [SMALL_STATE(98)] = 1797,
  [SMALL_STATE(99)] = 1801,
  [SMALL_STATE(100)] = 1805,
  [SMALL_STATE(101)] = 1809,
  [SMALL_STATE(102)] = 1813,
  [SMALL_STATE(103)] = 1817,
  [SMALL_STATE(104)] = 1821,
  [SMALL_STATE(105)] = 1825,
  [SMALL_STATE(106)] = 1829,
  [SMALL_STATE(107)] = 1833,
  [SMALL_STATE(108)] = 1837,
  [SMALL_STATE(109)] = 1841,
  [SMALL_STATE(110)] = 1845,
  [SMALL_STATE(111)] = 1849,
  [SMALL_STATE(112)] = 1853,
  [SMALL_STATE(113)] = 1857,
  [SMALL_STATE(114)] = 1861,
  [SMALL_STATE(115)] = 1865,
  [SMALL_STATE(116)] = 1869,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(33),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(69),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(101),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(61),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(72),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 6),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 9),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 7),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(103),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(64),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(67),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(67),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(59),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(90),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [312] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
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
