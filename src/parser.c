#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
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
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
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
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
  [56] = {.lex_state = 65},
  [57] = {.lex_state = 65},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 65},
  [60] = {.lex_state = 65},
  [61] = {.lex_state = 65},
  [62] = {.lex_state = 65},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 65},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 65},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 65},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 65},
  [103] = {.lex_state = 65},
  [104] = {.lex_state = 65},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 65},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 65},
  [132] = {.lex_state = 65},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 16},
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
    [sym_source_file] = STATE(128),
    [sym_line] = STATE(43),
    [sym_signal] = STATE(43),
    [sym_pid] = STATE(83),
    [sym_exit] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(43),
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
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(53), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [57] = 17,
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
      anon_sym_EQ_GT,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(48), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [114] = 16,
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
    ACTIONS(39), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(48), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [168] = 16,
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
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(50), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [222] = 15,
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
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(50), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [273] = 15,
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
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(48), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [324] = 15,
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
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(49), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [375] = 15,
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
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(101), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [426] = 15,
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
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(51), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [477] = 15,
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
    STATE(18), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(52), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [528] = 13,
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
    ACTIONS(45), 1,
      sym_syscall,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(43), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(93), 2,
      sym_parameter,
      sym__dictValue,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [574] = 13,
    ACTIONS(49), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_TILDE,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      sym_pointer,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(52), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(47), 3,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [620] = 13,
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
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(70), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [665] = 13,
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
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(72), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [710] = 4,
    STATE(17), 1,
      aux_sym_values_repeat1,
    ACTIONS(78), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(76), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(74), 12,
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
  [737] = 4,
    STATE(17), 1,
      aux_sym_values_repeat1,
    ACTIONS(84), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(82), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(80), 12,
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
  [764] = 13,
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
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(72), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [809] = 4,
    STATE(16), 1,
      aux_sym_values_repeat1,
    ACTIONS(78), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(89), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(87), 12,
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
  [836] = 2,
    ACTIONS(93), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(91), 14,
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
  [858] = 13,
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
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [902] = 2,
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
  [924] = 13,
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
    STATE(19), 1,
      sym_value,
    STATE(21), 1,
      aux_sym_parameters_repeat1,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [968] = 2,
    ACTIONS(105), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(103), 14,
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
  [990] = 13,
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
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      sym_value,
    STATE(29), 1,
      aux_sym_parameters_repeat1,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [1034] = 2,
    ACTIONS(82), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(80), 14,
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
  [1056] = 2,
    ACTIONS(109), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(107), 14,
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
  [1078] = 2,
    ACTIONS(113), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(111), 14,
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
  [1100] = 13,
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
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_value,
    STATE(30), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [1144] = 5,
    ACTIONS(117), 1,
      anon_sym_EQ_GT,
    ACTIONS(123), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(119), 10,
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
  [1171] = 4,
    ACTIONS(123), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(119), 10,
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
  [1195] = 2,
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
  [1215] = 2,
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
  [1235] = 2,
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
  [1255] = 2,
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
  [1275] = 2,
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
  [1295] = 2,
    ACTIONS(149), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(147), 12,
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
  [1315] = 3,
    ACTIONS(155), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(153), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(151), 10,
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
  [1336] = 2,
    ACTIONS(153), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(151), 10,
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
  [1354] = 2,
    ACTIONS(159), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(157), 10,
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
  [1372] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(165), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(163), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [1391] = 2,
    ACTIONS(167), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(47), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [1407] = 8,
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
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_pid,
    STATE(44), 4,
      sym_line,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1435] = 8,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(176), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(179), 1,
      sym_syscall,
    ACTIONS(182), 1,
      sym_integer,
    ACTIONS(185), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(83), 1,
      sym_pid,
    STATE(44), 4,
      sym_line,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1463] = 1,
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
  [1475] = 1,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1487] = 1,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1499] = 2,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1511] = 2,
    ACTIONS(200), 1,
      anon_sym_EQ,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1523] = 2,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1535] = 2,
    ACTIONS(208), 1,
      anon_sym_EQ,
    ACTIONS(206), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1547] = 2,
    ACTIONS(212), 1,
      anon_sym_EQ,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1559] = 2,
    ACTIONS(216), 1,
      anon_sym_EQ,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1571] = 1,
    ACTIONS(218), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1580] = 1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1589] = 1,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1598] = 1,
    ACTIONS(222), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1607] = 1,
    ACTIONS(210), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1616] = 1,
    ACTIONS(224), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1625] = 1,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1634] = 1,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1643] = 1,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1652] = 5,
    ACTIONS(230), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(232), 1,
      aux_sym_errorName_token1,
    ACTIONS(234), 1,
      sym_dictKey,
    STATE(95), 1,
      sym_dictElem,
    STATE(99), 1,
      sym_macro,
  [1668] = 5,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(240), 1,
      aux_sym_errorName_token1,
    STATE(88), 1,
      sym_errorName,
    STATE(120), 1,
      sym_errorDescription,
  [1684] = 5,
    ACTIONS(232), 1,
      aux_sym_errorName_token1,
    ACTIONS(234), 1,
      sym_dictKey,
    ACTIONS(242), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(95), 1,
      sym_dictElem,
    STATE(99), 1,
      sym_macro,
  [1700] = 3,
    ACTIONS(33), 1,
      sym_pointer,
    STATE(26), 1,
      sym_value,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
  [1711] = 3,
    ACTIONS(244), 1,
      sym_integer,
    STATE(122), 1,
      sym_returnValue,
    ACTIONS(246), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1722] = 3,
    ACTIONS(33), 1,
      sym_pointer,
    STATE(98), 1,
      sym_value,
    ACTIONS(25), 2,
      sym_integer,
      aux_sym_value_token1,
  [1733] = 3,
    ACTIONS(244), 1,
      sym_integer,
    STATE(133), 1,
      sym_returnValue,
    ACTIONS(246), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1744] = 3,
    ACTIONS(244), 1,
      sym_integer,
    STATE(105), 1,
      sym_returnValue,
    ACTIONS(246), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1755] = 4,
    ACTIONS(248), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      aux_sym_errorDescription_token1,
    STATE(71), 1,
      aux_sym_errorDescription_repeat1,
  [1768] = 4,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      aux_sym_errorDescription_token1,
    STATE(71), 1,
      aux_sym_errorDescription_repeat1,
  [1781] = 4,
    ACTIONS(232), 1,
      aux_sym_errorName_token1,
    ACTIONS(234), 1,
      sym_dictKey,
    STATE(82), 1,
      sym_dictElem,
    STATE(99), 1,
      sym_macro,
  [1794] = 3,
    ACTIONS(244), 1,
      sym_integer,
    STATE(109), 1,
      sym_returnValue,
    ACTIONS(246), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1805] = 3,
    ACTIONS(244), 1,
      sym_integer,
    STATE(129), 1,
      sym_returnValue,
    ACTIONS(246), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1816] = 4,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      aux_sym_string_token1,
    ACTIONS(266), 1,
      sym__escape_sequence,
    STATE(78), 1,
      aux_sym_string_repeat1,
  [1829] = 4,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym_string_token1,
    ACTIONS(272), 1,
      sym__escape_sequence,
    STATE(76), 1,
      aux_sym_string_repeat1,
  [1842] = 4,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_string_token1,
    ACTIONS(279), 1,
      sym__escape_sequence,
    STATE(78), 1,
      aux_sym_string_repeat1,
  [1855] = 4,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(284), 1,
      aux_sym_errorDescription_token1,
    STATE(72), 1,
      aux_sym_errorDescription_repeat1,
  [1868] = 3,
    ACTIONS(244), 1,
      sym_integer,
    STATE(127), 1,
      sym_returnValue,
    ACTIONS(246), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1879] = 4,
    ACTIONS(232), 1,
      aux_sym_errorName_token1,
    ACTIONS(234), 1,
      sym_dictKey,
    STATE(95), 1,
      sym_dictElem,
    STATE(99), 1,
      sym_macro,
  [1892] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_dict_repeat1,
  [1902] = 3,
    ACTIONS(290), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(292), 1,
      sym_syscall,
    ACTIONS(294), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1912] = 2,
    ACTIONS(296), 1,
      aux_sym_errorDescription_token1,
    ACTIONS(251), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1920] = 3,
    ACTIONS(298), 1,
      anon_sym_AMP_AMP,
    ACTIONS(300), 1,
      anon_sym_EQ_EQ,
    STATE(89), 1,
      aux_sym_dictElem_repeat1,
  [1930] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_dict_repeat1,
  [1940] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_dict_repeat1,
  [1950] = 3,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      sym__newline,
    STATE(117), 1,
      sym_errorDescription,
  [1960] = 3,
    ACTIONS(313), 1,
      anon_sym_AMP_AMP,
    ACTIONS(316), 1,
      anon_sym_EQ_EQ,
    STATE(89), 1,
      aux_sym_dictElem_repeat1,
  [1970] = 1,
    ACTIONS(318), 3,
      anon_sym_LT_DOT_DOT_DOT,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [1976] = 2,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      sym__newline,
  [1983] = 1,
    ACTIONS(324), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1988] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1993] = 2,
    ACTIONS(232), 1,
      aux_sym_errorName_token1,
    STATE(96), 1,
      sym_macro,
  [2000] = 1,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2005] = 1,
    ACTIONS(316), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [2010] = 2,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_dict,
  [2017] = 2,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_dict,
  [2024] = 2,
    ACTIONS(298), 1,
      anon_sym_AMP_AMP,
    STATE(85), 1,
      aux_sym_dictElem_repeat1,
  [2031] = 1,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2036] = 1,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2041] = 1,
    ACTIONS(332), 1,
      anon_sym_EQ,
  [2045] = 1,
    ACTIONS(334), 1,
      sym_integer,
  [2049] = 1,
    ACTIONS(336), 1,
      sym_syscall,
  [2053] = 1,
    ACTIONS(338), 1,
      sym__newline,
  [2057] = 1,
    ACTIONS(340), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2061] = 1,
    ACTIONS(342), 1,
      anon_sym_with,
  [2065] = 1,
    ACTIONS(344), 1,
      anon_sym_with,
  [2069] = 1,
    ACTIONS(346), 1,
      sym__newline,
  [2073] = 1,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
  [2077] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [2081] = 1,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
  [2085] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [2089] = 1,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
  [2093] = 1,
    ACTIONS(358), 1,
      sym__newline,
  [2097] = 1,
    ACTIONS(360), 1,
      anon_sym_DASH_DASH_DASH,
  [2101] = 1,
    ACTIONS(362), 1,
      sym__newline,
  [2105] = 1,
    ACTIONS(364), 1,
      anon_sym_LBRACK,
  [2109] = 1,
    ACTIONS(366), 1,
      anon_sym_exited,
  [2113] = 1,
    ACTIONS(311), 1,
      sym__newline,
  [2117] = 1,
    ACTIONS(368), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2121] = 1,
    ACTIONS(370), 1,
      sym__newline,
  [2125] = 1,
    ACTIONS(372), 1,
      anon_sym_resumed_GT,
  [2129] = 1,
    ACTIONS(374), 1,
      anon_sym_resumed_GT,
  [2133] = 1,
    ACTIONS(376), 1,
      sym_integer,
  [2137] = 1,
    ACTIONS(378), 1,
      sym__newline,
  [2141] = 1,
    ACTIONS(380), 1,
      sym__newline,
  [2145] = 1,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
  [2149] = 1,
    ACTIONS(384), 1,
      sym__newline,
  [2153] = 1,
    ACTIONS(386), 1,
      anon_sym_exited,
  [2157] = 1,
    ACTIONS(388), 1,
      sym_integer,
  [2161] = 1,
    ACTIONS(390), 1,
      sym_syscall,
  [2165] = 1,
    ACTIONS(392), 1,
      sym__newline,
  [2169] = 1,
    ACTIONS(394), 1,
      aux_sym_macro_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 222,
  [SMALL_STATE(7)] = 273,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 375,
  [SMALL_STATE(10)] = 426,
  [SMALL_STATE(11)] = 477,
  [SMALL_STATE(12)] = 528,
  [SMALL_STATE(13)] = 574,
  [SMALL_STATE(14)] = 620,
  [SMALL_STATE(15)] = 665,
  [SMALL_STATE(16)] = 710,
  [SMALL_STATE(17)] = 737,
  [SMALL_STATE(18)] = 764,
  [SMALL_STATE(19)] = 809,
  [SMALL_STATE(20)] = 836,
  [SMALL_STATE(21)] = 858,
  [SMALL_STATE(22)] = 902,
  [SMALL_STATE(23)] = 924,
  [SMALL_STATE(24)] = 968,
  [SMALL_STATE(25)] = 990,
  [SMALL_STATE(26)] = 1034,
  [SMALL_STATE(27)] = 1056,
  [SMALL_STATE(28)] = 1078,
  [SMALL_STATE(29)] = 1100,
  [SMALL_STATE(30)] = 1144,
  [SMALL_STATE(31)] = 1171,
  [SMALL_STATE(32)] = 1195,
  [SMALL_STATE(33)] = 1215,
  [SMALL_STATE(34)] = 1235,
  [SMALL_STATE(35)] = 1255,
  [SMALL_STATE(36)] = 1275,
  [SMALL_STATE(37)] = 1295,
  [SMALL_STATE(38)] = 1315,
  [SMALL_STATE(39)] = 1336,
  [SMALL_STATE(40)] = 1354,
  [SMALL_STATE(41)] = 1372,
  [SMALL_STATE(42)] = 1391,
  [SMALL_STATE(43)] = 1407,
  [SMALL_STATE(44)] = 1435,
  [SMALL_STATE(45)] = 1463,
  [SMALL_STATE(46)] = 1475,
  [SMALL_STATE(47)] = 1487,
  [SMALL_STATE(48)] = 1499,
  [SMALL_STATE(49)] = 1511,
  [SMALL_STATE(50)] = 1523,
  [SMALL_STATE(51)] = 1535,
  [SMALL_STATE(52)] = 1547,
  [SMALL_STATE(53)] = 1559,
  [SMALL_STATE(54)] = 1571,
  [SMALL_STATE(55)] = 1580,
  [SMALL_STATE(56)] = 1589,
  [SMALL_STATE(57)] = 1598,
  [SMALL_STATE(58)] = 1607,
  [SMALL_STATE(59)] = 1616,
  [SMALL_STATE(60)] = 1625,
  [SMALL_STATE(61)] = 1634,
  [SMALL_STATE(62)] = 1643,
  [SMALL_STATE(63)] = 1652,
  [SMALL_STATE(64)] = 1668,
  [SMALL_STATE(65)] = 1684,
  [SMALL_STATE(66)] = 1700,
  [SMALL_STATE(67)] = 1711,
  [SMALL_STATE(68)] = 1722,
  [SMALL_STATE(69)] = 1733,
  [SMALL_STATE(70)] = 1744,
  [SMALL_STATE(71)] = 1755,
  [SMALL_STATE(72)] = 1768,
  [SMALL_STATE(73)] = 1781,
  [SMALL_STATE(74)] = 1794,
  [SMALL_STATE(75)] = 1805,
  [SMALL_STATE(76)] = 1816,
  [SMALL_STATE(77)] = 1829,
  [SMALL_STATE(78)] = 1842,
  [SMALL_STATE(79)] = 1855,
  [SMALL_STATE(80)] = 1868,
  [SMALL_STATE(81)] = 1879,
  [SMALL_STATE(82)] = 1892,
  [SMALL_STATE(83)] = 1902,
  [SMALL_STATE(84)] = 1912,
  [SMALL_STATE(85)] = 1920,
  [SMALL_STATE(86)] = 1930,
  [SMALL_STATE(87)] = 1940,
  [SMALL_STATE(88)] = 1950,
  [SMALL_STATE(89)] = 1960,
  [SMALL_STATE(90)] = 1970,
  [SMALL_STATE(91)] = 1976,
  [SMALL_STATE(92)] = 1983,
  [SMALL_STATE(93)] = 1988,
  [SMALL_STATE(94)] = 1993,
  [SMALL_STATE(95)] = 2000,
  [SMALL_STATE(96)] = 2005,
  [SMALL_STATE(97)] = 2010,
  [SMALL_STATE(98)] = 2017,
  [SMALL_STATE(99)] = 2024,
  [SMALL_STATE(100)] = 2031,
  [SMALL_STATE(101)] = 2036,
  [SMALL_STATE(102)] = 2041,
  [SMALL_STATE(103)] = 2045,
  [SMALL_STATE(104)] = 2049,
  [SMALL_STATE(105)] = 2053,
  [SMALL_STATE(106)] = 2057,
  [SMALL_STATE(107)] = 2061,
  [SMALL_STATE(108)] = 2065,
  [SMALL_STATE(109)] = 2069,
  [SMALL_STATE(110)] = 2073,
  [SMALL_STATE(111)] = 2077,
  [SMALL_STATE(112)] = 2081,
  [SMALL_STATE(113)] = 2085,
  [SMALL_STATE(114)] = 2089,
  [SMALL_STATE(115)] = 2093,
  [SMALL_STATE(116)] = 2097,
  [SMALL_STATE(117)] = 2101,
  [SMALL_STATE(118)] = 2105,
  [SMALL_STATE(119)] = 2109,
  [SMALL_STATE(120)] = 2113,
  [SMALL_STATE(121)] = 2117,
  [SMALL_STATE(122)] = 2121,
  [SMALL_STATE(123)] = 2125,
  [SMALL_STATE(124)] = 2129,
  [SMALL_STATE(125)] = 2133,
  [SMALL_STATE(126)] = 2137,
  [SMALL_STATE(127)] = 2141,
  [SMALL_STATE(128)] = 2145,
  [SMALL_STATE(129)] = 2149,
  [SMALL_STATE(130)] = 2153,
  [SMALL_STATE(131)] = 2157,
  [SMALL_STATE(132)] = 2161,
  [SMALL_STATE(133)] = 2165,
  [SMALL_STATE(134)] = 2169,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(27),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(77),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(118),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(23),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(27),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(73),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(66),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 10),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 8),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 9),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(114),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(71),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(78),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(78),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(81),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(94),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [382] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
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
