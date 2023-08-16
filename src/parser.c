#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  aux_sym_parameter_token1 = 11,
  anon_sym_NULL = 12,
  anon_sym_DOT_DOT_DOT = 13,
  sym_integer = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_string_token1 = 16,
  sym__escape_sequence = 17,
  anon_sym_TILDE = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  sym_pointer = 21,
  anon_sym_PIPE = 22,
  anon_sym_STAR = 23,
  aux_sym_value_token1 = 24,
  sym_comment = 25,
  sym__newline = 26,
  anon_sym_QMARK = 27,
  aux_sym_errorName_token1 = 28,
  aux_sym_errorDescription_token1 = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_AMP_AMP = 32,
  anon_sym_EQ_EQ = 33,
  aux_sym_macro_token1 = 34,
  sym_dictKey = 35,
  anon_sym_PLUS_PLUS_PLUS = 36,
  anon_sym_exited = 37,
  anon_sym_with = 38,
  sym_source_file = 39,
  sym_line = 40,
  sym_signal = 41,
  sym_pid = 42,
  sym_parameters = 43,
  sym_parameter = 44,
  sym_string = 45,
  sym_list = 46,
  sym_values = 47,
  sym_value = 48,
  sym_returnValue = 49,
  sym_errorName = 50,
  sym_errorDescription = 51,
  sym_dictFn = 52,
  sym_dict = 53,
  sym_dictElem = 54,
  sym_macro = 55,
  sym__dictValue = 56,
  sym_exit = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_parameters_repeat1 = 59,
  aux_sym_string_repeat1 = 60,
  aux_sym_values_repeat1 = 61,
  aux_sym_errorDescription_repeat1 = 62,
  aux_sym_dict_repeat1 = 63,
  aux_sym_dictElem_repeat1 = 64,
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
  [aux_sym_parameter_token1] = "parameter_token1",
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
  [aux_sym_parameter_token1] = aux_sym_parameter_token1,
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
  [aux_sym_parameter_token1] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(98);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '~') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '|') ADVANCE(98);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '~') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '~') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(116);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '0') ADVANCE(85);
      if (lookahead == '?') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'x') ADVANCE(44);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_DOT_DOT_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_resumed_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LTunfinished_DOT_DOT_DOT_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_errorName_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 66},
  [44] = {.lex_state = 66},
  [45] = {.lex_state = 66},
  [46] = {.lex_state = 66},
  [47] = {.lex_state = 66},
  [48] = {.lex_state = 66},
  [49] = {.lex_state = 66},
  [50] = {.lex_state = 66},
  [51] = {.lex_state = 66},
  [52] = {.lex_state = 66},
  [53] = {.lex_state = 66},
  [54] = {.lex_state = 66},
  [55] = {.lex_state = 66},
  [56] = {.lex_state = 66},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 66},
  [59] = {.lex_state = 66},
  [60] = {.lex_state = 66},
  [61] = {.lex_state = 66},
  [62] = {.lex_state = 66},
  [63] = {.lex_state = 66},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 66},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 17},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 66},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 66},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 66},
  [120] = {.lex_state = 66},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 66},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 66},
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
    [sym_source_file] = STATE(108),
    [sym_line] = STATE(44),
    [sym_signal] = STATE(44),
    [sym_pid] = STATE(54),
    [sym_exit] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(7),
    [sym_syscall] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(15), 1,
      anon_sym_EQ_GT,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(51), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [60] = 17,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(55), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [117] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(52), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [171] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(55), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [225] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(89), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [279] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(53), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [333] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_syscall,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(98), 2,
      sym_parameter,
      sym__dictValue,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [382] = 14,
    ACTIONS(47), 1,
      aux_sym_parameter_token1,
    ACTIONS(50), 1,
      anon_sym_NULL,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_TILDE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_pointer,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(53), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(45), 3,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [431] = 4,
    STATE(15), 1,
      aux_sym_values_repeat1,
    ACTIONS(75), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(73), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(71), 12,
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
  [459] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(77), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [507] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(79), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [555] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(75), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(83), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(81), 12,
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
  [583] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(79), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [631] = 4,
    STATE(15), 1,
      aux_sym_values_repeat1,
    ACTIONS(89), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(87), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(85), 12,
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
  [659] = 2,
    ACTIONS(94), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(92), 14,
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
  [682] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [729] = 2,
    ACTIONS(100), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(98), 14,
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
  [752] = 2,
    ACTIONS(87), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(85), 14,
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
  [775] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym_value,
    STATE(22), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [822] = 2,
    ACTIONS(106), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(104), 14,
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
  [845] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [892] = 2,
    ACTIONS(112), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(110), 14,
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
  [915] = 14,
    ACTIONS(23), 1,
      aux_sym_parameter_token1,
    ACTIONS(25), 1,
      anon_sym_NULL,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_TILDE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym_value,
    STATE(17), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(31), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [962] = 2,
    ACTIONS(116), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(114), 14,
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
  [985] = 5,
    ACTIONS(118), 1,
      anon_sym_EQ_GT,
    ACTIONS(124), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(126), 1,
      sym_comment,
    ACTIONS(122), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(120), 10,
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
  [1013] = 2,
    ACTIONS(130), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(128), 12,
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
  [1034] = 2,
    ACTIONS(134), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(132), 12,
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
  [1055] = 2,
    ACTIONS(138), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(136), 12,
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
  [1076] = 2,
    ACTIONS(142), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(140), 12,
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
  [1097] = 4,
    ACTIONS(124), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(126), 1,
      sym_comment,
    ACTIONS(122), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(120), 10,
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
  [1122] = 2,
    ACTIONS(146), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(144), 12,
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
  [1143] = 2,
    ACTIONS(150), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(148), 12,
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
  [1164] = 4,
    ACTIONS(156), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(154), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(152), 10,
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
  [1189] = 3,
    ACTIONS(164), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(162), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(160), 10,
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
  [1211] = 3,
    ACTIONS(170), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(168), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(166), 10,
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
  [1233] = 2,
    ACTIONS(154), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(152), 10,
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
  [1252] = 2,
    ACTIONS(168), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(166), 10,
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
  [1271] = 2,
    ACTIONS(162), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(160), 10,
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
  [1290] = 2,
    ACTIONS(174), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(172), 10,
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
  [1309] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(180), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(178), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [1329] = 2,
    ACTIONS(182), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(45), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [1346] = 8,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(192), 1,
      sym_syscall,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(198), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(54), 1,
      sym_pid,
    STATE(43), 4,
      sym_line,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1374] = 8,
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
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_pid,
    STATE(43), 4,
      sym_line,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1402] = 2,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1417] = 2,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1432] = 2,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1447] = 1,
    ACTIONS(203), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1459] = 1,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1471] = 1,
    ACTIONS(215), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [1483] = 2,
    ACTIONS(219), 1,
      anon_sym_EQ,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1495] = 2,
    ACTIONS(223), 1,
      anon_sym_EQ,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1507] = 2,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(225), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1519] = 5,
    ACTIONS(5), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(9), 1,
      sym_syscall,
    ACTIONS(13), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(63), 3,
      sym_line,
      sym_signal,
      sym_exit,
  [1537] = 2,
    ACTIONS(231), 1,
      anon_sym_EQ,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1549] = 1,
    ACTIONS(233), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1558] = 5,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(235), 1,
      anon_sym_NULL,
    STATE(13), 1,
      sym_value,
    STATE(34), 1,
      sym_values,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1575] = 1,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1584] = 1,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1593] = 1,
    ACTIONS(239), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1602] = 1,
    ACTIONS(241), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1611] = 1,
    ACTIONS(243), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1620] = 1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1629] = 5,
    ACTIONS(245), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(247), 1,
      aux_sym_errorName_token1,
    ACTIONS(249), 1,
      sym_dictKey,
    STATE(91), 1,
      sym_macro,
    STATE(95), 1,
      sym_dictElem,
  [1645] = 5,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      sym__newline,
    ACTIONS(255), 1,
      aux_sym_errorName_token1,
    STATE(84), 1,
      sym_errorName,
    STATE(113), 1,
      sym_errorDescription,
  [1661] = 5,
    ACTIONS(247), 1,
      aux_sym_errorName_token1,
    ACTIONS(249), 1,
      sym_dictKey,
    ACTIONS(257), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(91), 1,
      sym_macro,
    STATE(95), 1,
      sym_dictElem,
  [1677] = 4,
    ACTIONS(247), 1,
      aux_sym_errorName_token1,
    ACTIONS(249), 1,
      sym_dictKey,
    STATE(91), 1,
      sym_macro,
    STATE(95), 1,
      sym_dictElem,
  [1690] = 4,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      aux_sym_string_token1,
    ACTIONS(264), 1,
      sym__escape_sequence,
    STATE(68), 1,
      aux_sym_string_repeat1,
  [1703] = 4,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 1,
      aux_sym_errorDescription_token1,
    STATE(69), 1,
      aux_sym_errorDescription_repeat1,
  [1716] = 1,
    ACTIONS(275), 4,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [1723] = 4,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(281), 1,
      aux_sym_errorDescription_token1,
    STATE(73), 1,
      aux_sym_errorDescription_repeat1,
  [1736] = 3,
    ACTIONS(283), 1,
      sym_integer,
    STATE(100), 1,
      sym_returnValue,
    ACTIONS(285), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1747] = 4,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      aux_sym_errorDescription_token1,
    STATE(69), 1,
      aux_sym_errorDescription_repeat1,
  [1760] = 4,
    ACTIONS(247), 1,
      aux_sym_errorName_token1,
    ACTIONS(249), 1,
      sym_dictKey,
    STATE(87), 1,
      sym_dictElem,
    STATE(91), 1,
      sym_macro,
  [1773] = 3,
    ACTIONS(283), 1,
      sym_integer,
    STATE(117), 1,
      sym_returnValue,
    ACTIONS(285), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1784] = 4,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      aux_sym_string_token1,
    ACTIONS(295), 1,
      sym__escape_sequence,
    STATE(78), 1,
      aux_sym_string_repeat1,
  [1797] = 3,
    ACTIONS(283), 1,
      sym_integer,
    STATE(123), 1,
      sym_returnValue,
    ACTIONS(285), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1808] = 4,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_string_token1,
    ACTIONS(301), 1,
      sym__escape_sequence,
    STATE(68), 1,
      aux_sym_string_repeat1,
  [1821] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(99), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1832] = 3,
    ACTIONS(283), 1,
      sym_integer,
    STATE(105), 1,
      sym_returnValue,
    ACTIONS(285), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1843] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(19), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1854] = 2,
    ACTIONS(303), 1,
      aux_sym_errorDescription_token1,
    ACTIONS(270), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1862] = 3,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(308), 1,
      anon_sym_EQ_EQ,
    STATE(83), 1,
      aux_sym_dictElem_repeat1,
  [1872] = 3,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 1,
      sym__newline,
    STATE(115), 1,
      sym_errorDescription,
  [1882] = 3,
    ACTIONS(312), 1,
      anon_sym_AMP_AMP,
    ACTIONS(314), 1,
      anon_sym_EQ_EQ,
    STATE(83), 1,
      aux_sym_dictElem_repeat1,
  [1892] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_dict_repeat1,
  [1902] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_dict_repeat1,
  [1912] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_dict_repeat1,
  [1922] = 1,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1927] = 1,
    ACTIONS(331), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1932] = 2,
    ACTIONS(312), 1,
      anon_sym_AMP_AMP,
    STATE(85), 1,
      aux_sym_dictElem_repeat1,
  [1939] = 2,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_dict,
  [1946] = 1,
    ACTIONS(308), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1951] = 1,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1956] = 1,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1961] = 2,
    ACTIONS(247), 1,
      aux_sym_errorName_token1,
    STATE(93), 1,
      sym_macro,
  [1968] = 2,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      sym__newline,
  [1975] = 1,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1980] = 2,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_dict,
  [1987] = 1,
    ACTIONS(341), 1,
      sym__newline,
  [1991] = 1,
    ACTIONS(343), 1,
      sym__newline,
  [1995] = 1,
    ACTIONS(345), 1,
      anon_sym_resumed_GT,
  [1999] = 1,
    ACTIONS(347), 1,
      anon_sym_EQ,
  [2003] = 1,
    ACTIONS(349), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2007] = 1,
    ACTIONS(351), 1,
      sym__newline,
  [2011] = 1,
    ACTIONS(353), 1,
      anon_sym_exited,
  [2015] = 1,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
  [2019] = 1,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
  [2023] = 1,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
  [2027] = 1,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [2031] = 1,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
  [2035] = 1,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [2039] = 1,
    ACTIONS(310), 1,
      sym__newline,
  [2043] = 1,
    ACTIONS(367), 1,
      anon_sym_with,
  [2047] = 1,
    ACTIONS(369), 1,
      sym__newline,
  [2051] = 1,
    ACTIONS(371), 1,
      aux_sym_macro_token1,
  [2055] = 1,
    ACTIONS(373), 1,
      sym__newline,
  [2059] = 1,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH_DASH,
  [2063] = 1,
    ACTIONS(377), 1,
      sym_syscall,
  [2067] = 1,
    ACTIONS(379), 1,
      sym_integer,
  [2071] = 1,
    ACTIONS(381), 1,
      sym__newline,
  [2075] = 1,
    ACTIONS(383), 1,
      sym_integer,
  [2079] = 1,
    ACTIONS(385), 1,
      sym__newline,
  [2083] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
  [2087] = 1,
    ACTIONS(389), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 117,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 279,
  [SMALL_STATE(8)] = 333,
  [SMALL_STATE(9)] = 382,
  [SMALL_STATE(10)] = 431,
  [SMALL_STATE(11)] = 459,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 555,
  [SMALL_STATE(14)] = 583,
  [SMALL_STATE(15)] = 631,
  [SMALL_STATE(16)] = 659,
  [SMALL_STATE(17)] = 682,
  [SMALL_STATE(18)] = 729,
  [SMALL_STATE(19)] = 752,
  [SMALL_STATE(20)] = 775,
  [SMALL_STATE(21)] = 822,
  [SMALL_STATE(22)] = 845,
  [SMALL_STATE(23)] = 892,
  [SMALL_STATE(24)] = 915,
  [SMALL_STATE(25)] = 962,
  [SMALL_STATE(26)] = 985,
  [SMALL_STATE(27)] = 1013,
  [SMALL_STATE(28)] = 1034,
  [SMALL_STATE(29)] = 1055,
  [SMALL_STATE(30)] = 1076,
  [SMALL_STATE(31)] = 1097,
  [SMALL_STATE(32)] = 1122,
  [SMALL_STATE(33)] = 1143,
  [SMALL_STATE(34)] = 1164,
  [SMALL_STATE(35)] = 1189,
  [SMALL_STATE(36)] = 1211,
  [SMALL_STATE(37)] = 1233,
  [SMALL_STATE(38)] = 1252,
  [SMALL_STATE(39)] = 1271,
  [SMALL_STATE(40)] = 1290,
  [SMALL_STATE(41)] = 1309,
  [SMALL_STATE(42)] = 1329,
  [SMALL_STATE(43)] = 1346,
  [SMALL_STATE(44)] = 1374,
  [SMALL_STATE(45)] = 1402,
  [SMALL_STATE(46)] = 1417,
  [SMALL_STATE(47)] = 1432,
  [SMALL_STATE(48)] = 1447,
  [SMALL_STATE(49)] = 1459,
  [SMALL_STATE(50)] = 1471,
  [SMALL_STATE(51)] = 1483,
  [SMALL_STATE(52)] = 1495,
  [SMALL_STATE(53)] = 1507,
  [SMALL_STATE(54)] = 1519,
  [SMALL_STATE(55)] = 1537,
  [SMALL_STATE(56)] = 1549,
  [SMALL_STATE(57)] = 1558,
  [SMALL_STATE(58)] = 1575,
  [SMALL_STATE(59)] = 1584,
  [SMALL_STATE(60)] = 1593,
  [SMALL_STATE(61)] = 1602,
  [SMALL_STATE(62)] = 1611,
  [SMALL_STATE(63)] = 1620,
  [SMALL_STATE(64)] = 1629,
  [SMALL_STATE(65)] = 1645,
  [SMALL_STATE(66)] = 1661,
  [SMALL_STATE(67)] = 1677,
  [SMALL_STATE(68)] = 1690,
  [SMALL_STATE(69)] = 1703,
  [SMALL_STATE(70)] = 1716,
  [SMALL_STATE(71)] = 1723,
  [SMALL_STATE(72)] = 1736,
  [SMALL_STATE(73)] = 1747,
  [SMALL_STATE(74)] = 1760,
  [SMALL_STATE(75)] = 1773,
  [SMALL_STATE(76)] = 1784,
  [SMALL_STATE(77)] = 1797,
  [SMALL_STATE(78)] = 1808,
  [SMALL_STATE(79)] = 1821,
  [SMALL_STATE(80)] = 1832,
  [SMALL_STATE(81)] = 1843,
  [SMALL_STATE(82)] = 1854,
  [SMALL_STATE(83)] = 1862,
  [SMALL_STATE(84)] = 1872,
  [SMALL_STATE(85)] = 1882,
  [SMALL_STATE(86)] = 1892,
  [SMALL_STATE(87)] = 1902,
  [SMALL_STATE(88)] = 1912,
  [SMALL_STATE(89)] = 1922,
  [SMALL_STATE(90)] = 1927,
  [SMALL_STATE(91)] = 1932,
  [SMALL_STATE(92)] = 1939,
  [SMALL_STATE(93)] = 1946,
  [SMALL_STATE(94)] = 1951,
  [SMALL_STATE(95)] = 1956,
  [SMALL_STATE(96)] = 1961,
  [SMALL_STATE(97)] = 1968,
  [SMALL_STATE(98)] = 1975,
  [SMALL_STATE(99)] = 1980,
  [SMALL_STATE(100)] = 1987,
  [SMALL_STATE(101)] = 1991,
  [SMALL_STATE(102)] = 1995,
  [SMALL_STATE(103)] = 1999,
  [SMALL_STATE(104)] = 2003,
  [SMALL_STATE(105)] = 2007,
  [SMALL_STATE(106)] = 2011,
  [SMALL_STATE(107)] = 2015,
  [SMALL_STATE(108)] = 2019,
  [SMALL_STATE(109)] = 2023,
  [SMALL_STATE(110)] = 2027,
  [SMALL_STATE(111)] = 2031,
  [SMALL_STATE(112)] = 2035,
  [SMALL_STATE(113)] = 2039,
  [SMALL_STATE(114)] = 2043,
  [SMALL_STATE(115)] = 2047,
  [SMALL_STATE(116)] = 2051,
  [SMALL_STATE(117)] = 2055,
  [SMALL_STATE(118)] = 2059,
  [SMALL_STATE(119)] = 2063,
  [SMALL_STATE(120)] = 2067,
  [SMALL_STATE(121)] = 2071,
  [SMALL_STATE(122)] = 2075,
  [SMALL_STATE(123)] = 2079,
  [SMALL_STATE(124)] = 2083,
  [SMALL_STATE(125)] = 2087,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(103),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(31),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(76),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(107),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(20),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(74),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(81),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 7),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 8),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 9),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(68),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(68),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(112),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(69),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(96),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(67),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [357] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
