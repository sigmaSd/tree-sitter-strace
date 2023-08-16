#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 130
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_PLUS_PLUS_PLUS = 6,
  anon_sym_killed = 7,
  anon_sym_by = 8,
  anon_sym_DASH_DASH_DASH = 9,
  sym_syscall = 10,
  anon_sym_LPAREN = 11,
  anon_sym_LTunfinished_DOT_DOT_DOT_GT = 12,
  anon_sym_RPAREN = 13,
  aux_sym_parameter_token1 = 14,
  anon_sym_NULL = 15,
  anon_sym_DOT_DOT_DOT = 16,
  sym_integer = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  sym__escape_sequence = 20,
  anon_sym_TILDE = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  sym_pointer = 24,
  anon_sym_PIPE = 25,
  anon_sym_STAR = 26,
  aux_sym_value_token1 = 27,
  sym_comment = 28,
  sym__newline = 29,
  anon_sym_QMARK = 30,
  aux_sym_errorName_token1 = 31,
  aux_sym_errorDescription_token1 = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_AMP_AMP = 35,
  anon_sym_EQ_EQ = 36,
  aux_sym_macro_token1 = 37,
  sym_dictKey = 38,
  anon_sym_exited = 39,
  anon_sym_with = 40,
  sym_source_file = 41,
  sym_line = 42,
  sym_killSignal = 43,
  sym_signal = 44,
  sym_pid = 45,
  sym_parameters = 46,
  sym_parameter = 47,
  sym_string = 48,
  sym_list = 49,
  sym_values = 50,
  sym_value = 51,
  sym_returnValue = 52,
  sym_errorName = 53,
  sym_errorDescription = 54,
  sym_dictFn = 55,
  sym_dict = 56,
  sym_dictElem = 57,
  sym_macro = 58,
  sym__dictValue = 59,
  sym_exit = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_parameters_repeat1 = 62,
  aux_sym_string_repeat1 = 63,
  aux_sym_values_repeat1 = 64,
  aux_sym_errorDescription_repeat1 = 65,
  aux_sym_dict_repeat1 = 66,
  aux_sym_dictElem_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_DOT_DOT_DOT] = "<...",
  [anon_sym_resumed_GT] = "resumed>",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_killed] = "killed",
  [anon_sym_by] = "by",
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
  [anon_sym_exited] = "exited",
  [anon_sym_with] = "with",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_killSignal] = "killSignal",
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
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_killed] = anon_sym_killed,
  [anon_sym_by] = anon_sym_by,
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
  [anon_sym_exited] = anon_sym_exited,
  [anon_sym_with] = anon_sym_with,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_killSignal] = sym_killSignal,
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
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_killed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
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
  [sym_killSignal] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'k') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(105);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '~') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '?') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(74);
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
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '}') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_DOT_DOT_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_resumed_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_killed);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LTunfinished_DOT_DOT_DOT_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(112);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_parameter_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_errorName_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 5},
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
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 72},
  [45] = {.lex_state = 72},
  [46] = {.lex_state = 72},
  [47] = {.lex_state = 72},
  [48] = {.lex_state = 72},
  [49] = {.lex_state = 72},
  [50] = {.lex_state = 72},
  [51] = {.lex_state = 72},
  [52] = {.lex_state = 72},
  [53] = {.lex_state = 72},
  [54] = {.lex_state = 72},
  [55] = {.lex_state = 72},
  [56] = {.lex_state = 72},
  [57] = {.lex_state = 72},
  [58] = {.lex_state = 72},
  [59] = {.lex_state = 72},
  [60] = {.lex_state = 72},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 72},
  [63] = {.lex_state = 72},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 72},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 72},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 72},
  [111] = {.lex_state = 72},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 72},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 72},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_resumed_GT] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_killed] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
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
    [anon_sym_exited] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym_line] = STATE(44),
    [sym_killSignal] = STATE(44),
    [sym_signal] = STATE(44),
    [sym_pid] = STATE(51),
    [sym_exit] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_DOT_DOT_DOT] = ACTIONS(5),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(9),
    [sym_syscall] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
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
    STATE(13), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
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
    STATE(30), 4,
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
    STATE(13), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
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
    STATE(30), 4,
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
    STATE(13), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
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
    STATE(30), 4,
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
    STATE(13), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(54), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(30), 4,
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
    STATE(13), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
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
    STATE(30), 4,
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
    STATE(13), 1,
      sym_value,
    STATE(16), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    STATE(97), 1,
      sym_parameters,
    ACTIONS(21), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [333] = 14,
    ACTIONS(43), 1,
      aux_sym_parameter_token1,
    ACTIONS(46), 1,
      anon_sym_NULL,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_TILDE,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_pointer,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(49), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(41), 3,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [382] = 14,
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
    ACTIONS(69), 1,
      sym_syscall,
    STATE(13), 1,
      sym_value,
    STATE(26), 1,
      sym_dict,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(96), 2,
      sym_parameter,
      sym__dictValue,
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [431] = 4,
    STATE(11), 1,
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
  [459] = 4,
    STATE(11), 1,
      aux_sym_values_repeat1,
    ACTIONS(81), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(79), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(77), 12,
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
  [487] = 14,
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
    STATE(8), 1,
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
    ACTIONS(84), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [535] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(75), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(88), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(86), 12,
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
  [563] = 2,
    ACTIONS(92), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(90), 15,
      anon_sym_COMMA,
      anon_sym_PLUS_PLUS_PLUS,
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
  [587] = 14,
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
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(94), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [635] = 14,
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
    STATE(8), 1,
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
    ACTIONS(94), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [683] = 2,
    ACTIONS(79), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(77), 14,
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
  [706] = 2,
    ACTIONS(98), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(96), 14,
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
  [729] = 14,
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
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
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
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [776] = 2,
    ACTIONS(104), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(102), 14,
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
  [799] = 2,
    ACTIONS(108), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(106), 14,
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
  [822] = 14,
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
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym_value,
    STATE(24), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [869] = 2,
    ACTIONS(114), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(112), 14,
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
  [892] = 14,
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
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
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
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [939] = 14,
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
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      sym_value,
    STATE(19), 1,
      aux_sym_parameters_repeat1,
    STATE(26), 1,
      sym_dict,
    STATE(41), 1,
      sym_parameter,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(30), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [986] = 5,
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
  [1014] = 2,
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
  [1035] = 4,
    ACTIONS(136), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(138), 1,
      sym_comment,
    ACTIONS(134), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(132), 10,
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
  [1060] = 2,
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
  [1081] = 4,
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
  [1106] = 2,
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
  [1127] = 2,
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
  [1148] = 2,
    ACTIONS(154), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(152), 12,
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
  [1169] = 2,
    ACTIONS(158), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(156), 12,
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
  [1190] = 3,
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
  [1212] = 3,
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
  [1234] = 2,
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
  [1253] = 2,
    ACTIONS(134), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(132), 10,
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
  [1272] = 2,
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
  [1291] = 2,
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
  [1310] = 3,
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
  [1330] = 2,
    ACTIONS(182), 4,
      aux_sym_parameter_token1,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(41), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [1347] = 8,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(189), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(192), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(195), 1,
      sym_syscall,
    ACTIONS(198), 1,
      sym_integer,
    STATE(51), 1,
      sym_pid,
    STATE(43), 5,
      sym_line,
      sym_killSignal,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1376] = 8,
    ACTIONS(5), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(9), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(11), 1,
      sym_syscall,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_pid,
    STATE(43), 5,
      sym_line,
      sym_killSignal,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [1405] = 2,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(203), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1420] = 2,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1435] = 2,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1450] = 1,
    ACTIONS(203), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1462] = 1,
    ACTIONS(215), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1474] = 1,
    ACTIONS(211), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_RBRACE,
  [1486] = 5,
    ACTIONS(5), 1,
      anon_sym_LT_DOT_DOT_DOT,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(9), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(11), 1,
      sym_syscall,
    STATE(56), 4,
      sym_line,
      sym_killSignal,
      sym_signal,
      sym_exit,
  [1505] = 2,
    ACTIONS(219), 1,
      anon_sym_EQ,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1517] = 2,
    ACTIONS(223), 1,
      anon_sym_EQ,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1529] = 2,
    ACTIONS(227), 1,
      anon_sym_EQ,
    ACTIONS(225), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1541] = 2,
    ACTIONS(231), 1,
      anon_sym_EQ,
    ACTIONS(229), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1553] = 1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1562] = 1,
    ACTIONS(233), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1571] = 1,
    ACTIONS(235), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1580] = 1,
    ACTIONS(237), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1589] = 1,
    ACTIONS(239), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1598] = 5,
    ACTIONS(35), 1,
      sym_pointer,
    ACTIONS(241), 1,
      anon_sym_NULL,
    STATE(13), 1,
      sym_value,
    STATE(28), 1,
      sym_values,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1615] = 1,
    ACTIONS(243), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1624] = 1,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1633] = 1,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
  [1642] = 5,
    ACTIONS(247), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(249), 1,
      aux_sym_errorName_token1,
    ACTIONS(251), 1,
      sym_dictKey,
    STATE(98), 1,
      sym_dictElem,
    STATE(102), 1,
      sym_macro,
  [1658] = 5,
    ACTIONS(249), 1,
      aux_sym_errorName_token1,
    ACTIONS(251), 1,
      sym_dictKey,
    ACTIONS(253), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(98), 1,
      sym_dictElem,
    STATE(102), 1,
      sym_macro,
  [1674] = 5,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      sym__newline,
    ACTIONS(259), 1,
      aux_sym_errorName_token1,
    STATE(91), 1,
      sym_errorName,
    STATE(107), 1,
      sym_errorDescription,
  [1690] = 4,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    ACTIONS(263), 1,
      aux_sym_string_token1,
    ACTIONS(265), 1,
      sym__escape_sequence,
    STATE(80), 1,
      aux_sym_string_repeat1,
  [1703] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(101), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1714] = 4,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 1,
      aux_sym_errorDescription_token1,
    STATE(70), 1,
      aux_sym_errorDescription_repeat1,
  [1727] = 1,
    ACTIONS(275), 4,
      anon_sym_LT_DOT_DOT_DOT,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
  [1734] = 3,
    ACTIONS(277), 1,
      sym_integer,
    STATE(127), 1,
      sym_returnValue,
    ACTIONS(279), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1745] = 4,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      aux_sym_errorDescription_token1,
    STATE(70), 1,
      aux_sym_errorDescription_repeat1,
  [1758] = 4,
    ACTIONS(249), 1,
      aux_sym_errorName_token1,
    ACTIONS(251), 1,
      sym_dictKey,
    STATE(98), 1,
      sym_dictElem,
    STATE(102), 1,
      sym_macro,
  [1771] = 3,
    ACTIONS(277), 1,
      sym_integer,
    STATE(121), 1,
      sym_returnValue,
    ACTIONS(279), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1782] = 4,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    ACTIONS(289), 1,
      aux_sym_errorDescription_token1,
    STATE(73), 1,
      aux_sym_errorDescription_repeat1,
  [1795] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(94), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1806] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(17), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1817] = 3,
    ACTIONS(277), 1,
      sym_integer,
    STATE(106), 1,
      sym_returnValue,
    ACTIONS(279), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1828] = 4,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      aux_sym_string_token1,
    ACTIONS(296), 1,
      sym__escape_sequence,
    STATE(80), 1,
      aux_sym_string_repeat1,
  [1841] = 4,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym_string_token1,
    ACTIONS(303), 1,
      sym__escape_sequence,
    STATE(68), 1,
      aux_sym_string_repeat1,
  [1854] = 3,
    ACTIONS(35), 1,
      sym_pointer,
    STATE(123), 1,
      sym_value,
    ACTIONS(27), 2,
      sym_integer,
      aux_sym_value_token1,
  [1865] = 3,
    ACTIONS(277), 1,
      sym_integer,
    STATE(104), 1,
      sym_returnValue,
    ACTIONS(279), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1876] = 4,
    ACTIONS(249), 1,
      aux_sym_errorName_token1,
    ACTIONS(251), 1,
      sym_dictKey,
    STATE(87), 1,
      sym_dictElem,
    STATE(102), 1,
      sym_macro,
  [1889] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_dict_repeat1,
  [1899] = 3,
    ACTIONS(310), 1,
      anon_sym_AMP_AMP,
    ACTIONS(312), 1,
      anon_sym_EQ_EQ,
    STATE(90), 1,
      aux_sym_dictElem_repeat1,
  [1909] = 3,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_dict_repeat1,
  [1919] = 2,
    ACTIONS(318), 1,
      aux_sym_errorDescription_token1,
    ACTIONS(270), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1927] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_dict_repeat1,
  [1937] = 3,
    ACTIONS(324), 1,
      anon_sym_AMP_AMP,
    ACTIONS(327), 1,
      anon_sym_EQ_EQ,
    STATE(90), 1,
      aux_sym_dictElem_repeat1,
  [1947] = 3,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      sym__newline,
    STATE(119), 1,
      sym_errorDescription,
  [1957] = 2,
    ACTIONS(331), 1,
      anon_sym_killed,
    ACTIONS(333), 1,
      anon_sym_exited,
  [1964] = 2,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_dict,
  [1971] = 1,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1976] = 2,
    ACTIONS(249), 1,
      aux_sym_errorName_token1,
    STATE(100), 1,
      sym_macro,
  [1983] = 1,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1988] = 1,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1993] = 1,
    ACTIONS(308), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1998] = 1,
    ACTIONS(341), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [2003] = 1,
    ACTIONS(327), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [2008] = 2,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_dict,
  [2015] = 2,
    ACTIONS(310), 1,
      anon_sym_AMP_AMP,
    STATE(86), 1,
      aux_sym_dictElem_repeat1,
  [2022] = 2,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      sym__newline,
  [2029] = 1,
    ACTIONS(347), 1,
      sym__newline,
  [2033] = 1,
    ACTIONS(349), 1,
      sym__newline,
  [2037] = 1,
    ACTIONS(351), 1,
      sym__newline,
  [2041] = 1,
    ACTIONS(329), 1,
      sym__newline,
  [2045] = 1,
    ACTIONS(353), 1,
      anon_sym_with,
  [2049] = 1,
    ACTIONS(355), 1,
      anon_sym_by,
  [2053] = 1,
    ACTIONS(357), 1,
      anon_sym_EQ,
  [2057] = 1,
    ACTIONS(359), 1,
      anon_sym_EQ,
  [2061] = 1,
    ACTIONS(361), 1,
      anon_sym_resumed_GT,
  [2065] = 1,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
  [2069] = 1,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
  [2073] = 1,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
  [2077] = 1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [2081] = 1,
    ACTIONS(371), 1,
      sym_syscall,
  [2085] = 1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [2089] = 1,
    ACTIONS(375), 1,
      sym__newline,
  [2093] = 1,
    ACTIONS(377), 1,
      sym_integer,
  [2097] = 1,
    ACTIONS(379), 1,
      sym__newline,
  [2101] = 1,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [2105] = 1,
    ACTIONS(383), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2109] = 1,
    ACTIONS(385), 1,
      anon_sym_DASH_DASH_DASH,
  [2113] = 1,
    ACTIONS(387), 1,
      sym__newline,
  [2117] = 1,
    ACTIONS(389), 1,
      aux_sym_macro_token1,
  [2121] = 1,
    ACTIONS(391), 1,
      sym__newline,
  [2125] = 1,
    ACTIONS(393), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [2129] = 1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
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
  [SMALL_STATE(12)] = 487,
  [SMALL_STATE(13)] = 535,
  [SMALL_STATE(14)] = 563,
  [SMALL_STATE(15)] = 587,
  [SMALL_STATE(16)] = 635,
  [SMALL_STATE(17)] = 683,
  [SMALL_STATE(18)] = 706,
  [SMALL_STATE(19)] = 729,
  [SMALL_STATE(20)] = 776,
  [SMALL_STATE(21)] = 799,
  [SMALL_STATE(22)] = 822,
  [SMALL_STATE(23)] = 869,
  [SMALL_STATE(24)] = 892,
  [SMALL_STATE(25)] = 939,
  [SMALL_STATE(26)] = 986,
  [SMALL_STATE(27)] = 1014,
  [SMALL_STATE(28)] = 1035,
  [SMALL_STATE(29)] = 1060,
  [SMALL_STATE(30)] = 1081,
  [SMALL_STATE(31)] = 1106,
  [SMALL_STATE(32)] = 1127,
  [SMALL_STATE(33)] = 1148,
  [SMALL_STATE(34)] = 1169,
  [SMALL_STATE(35)] = 1190,
  [SMALL_STATE(36)] = 1212,
  [SMALL_STATE(37)] = 1234,
  [SMALL_STATE(38)] = 1253,
  [SMALL_STATE(39)] = 1272,
  [SMALL_STATE(40)] = 1291,
  [SMALL_STATE(41)] = 1310,
  [SMALL_STATE(42)] = 1330,
  [SMALL_STATE(43)] = 1347,
  [SMALL_STATE(44)] = 1376,
  [SMALL_STATE(45)] = 1405,
  [SMALL_STATE(46)] = 1420,
  [SMALL_STATE(47)] = 1435,
  [SMALL_STATE(48)] = 1450,
  [SMALL_STATE(49)] = 1462,
  [SMALL_STATE(50)] = 1474,
  [SMALL_STATE(51)] = 1486,
  [SMALL_STATE(52)] = 1505,
  [SMALL_STATE(53)] = 1517,
  [SMALL_STATE(54)] = 1529,
  [SMALL_STATE(55)] = 1541,
  [SMALL_STATE(56)] = 1553,
  [SMALL_STATE(57)] = 1562,
  [SMALL_STATE(58)] = 1571,
  [SMALL_STATE(59)] = 1580,
  [SMALL_STATE(60)] = 1589,
  [SMALL_STATE(61)] = 1598,
  [SMALL_STATE(62)] = 1615,
  [SMALL_STATE(63)] = 1624,
  [SMALL_STATE(64)] = 1633,
  [SMALL_STATE(65)] = 1642,
  [SMALL_STATE(66)] = 1658,
  [SMALL_STATE(67)] = 1674,
  [SMALL_STATE(68)] = 1690,
  [SMALL_STATE(69)] = 1703,
  [SMALL_STATE(70)] = 1714,
  [SMALL_STATE(71)] = 1727,
  [SMALL_STATE(72)] = 1734,
  [SMALL_STATE(73)] = 1745,
  [SMALL_STATE(74)] = 1758,
  [SMALL_STATE(75)] = 1771,
  [SMALL_STATE(76)] = 1782,
  [SMALL_STATE(77)] = 1795,
  [SMALL_STATE(78)] = 1806,
  [SMALL_STATE(79)] = 1817,
  [SMALL_STATE(80)] = 1828,
  [SMALL_STATE(81)] = 1841,
  [SMALL_STATE(82)] = 1854,
  [SMALL_STATE(83)] = 1865,
  [SMALL_STATE(84)] = 1876,
  [SMALL_STATE(85)] = 1889,
  [SMALL_STATE(86)] = 1899,
  [SMALL_STATE(87)] = 1909,
  [SMALL_STATE(88)] = 1919,
  [SMALL_STATE(89)] = 1927,
  [SMALL_STATE(90)] = 1937,
  [SMALL_STATE(91)] = 1947,
  [SMALL_STATE(92)] = 1957,
  [SMALL_STATE(93)] = 1964,
  [SMALL_STATE(94)] = 1971,
  [SMALL_STATE(95)] = 1976,
  [SMALL_STATE(96)] = 1983,
  [SMALL_STATE(97)] = 1988,
  [SMALL_STATE(98)] = 1993,
  [SMALL_STATE(99)] = 1998,
  [SMALL_STATE(100)] = 2003,
  [SMALL_STATE(101)] = 2008,
  [SMALL_STATE(102)] = 2015,
  [SMALL_STATE(103)] = 2022,
  [SMALL_STATE(104)] = 2029,
  [SMALL_STATE(105)] = 2033,
  [SMALL_STATE(106)] = 2037,
  [SMALL_STATE(107)] = 2041,
  [SMALL_STATE(108)] = 2045,
  [SMALL_STATE(109)] = 2049,
  [SMALL_STATE(110)] = 2053,
  [SMALL_STATE(111)] = 2057,
  [SMALL_STATE(112)] = 2061,
  [SMALL_STATE(113)] = 2065,
  [SMALL_STATE(114)] = 2069,
  [SMALL_STATE(115)] = 2073,
  [SMALL_STATE(116)] = 2077,
  [SMALL_STATE(117)] = 2081,
  [SMALL_STATE(118)] = 2085,
  [SMALL_STATE(119)] = 2089,
  [SMALL_STATE(120)] = 2093,
  [SMALL_STATE(121)] = 2097,
  [SMALL_STATE(122)] = 2101,
  [SMALL_STATE(123)] = 2105,
  [SMALL_STATE(124)] = 2109,
  [SMALL_STATE(125)] = 2113,
  [SMALL_STATE(126)] = 2117,
  [SMALL_STATE(127)] = 2121,
  [SMALL_STATE(128)] = 2125,
  [SMALL_STATE(129)] = 2129,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(111),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(81),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(115),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(22),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(14),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(84),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(78),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 6),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_killSignal, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 8),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 9),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(116),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(70),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(80),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(80),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(74),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(95),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
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
