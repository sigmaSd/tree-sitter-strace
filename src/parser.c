#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  aux_sym_resumed_token1 = 2,
  anon_sym_DASH_DASH_DASH = 3,
  sym_syscall = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_LTunfinished_DOT_DOT_DOT_GT = 7,
  anon_sym_RPAREN = 8,
  anon_sym_NULL = 9,
  anon_sym_DOT_DOT_DOT = 10,
  sym_integer = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_string_token1 = 13,
  sym__escape_sequence = 14,
  anon_sym_TILDE = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  sym_pointer = 18,
  anon_sym_PIPE = 19,
  anon_sym_STAR = 20,
  aux_sym_value_token1 = 21,
  sym_comment = 22,
  sym__newline = 23,
  anon_sym_QMARK = 24,
  aux_sym_errorName_token1 = 25,
  aux_sym_errorDescription_token1 = 26,
  anon_sym_EQ_GT = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_AMP_AMP = 30,
  anon_sym_EQ_EQ = 31,
  aux_sym_macro_token1 = 32,
  sym_dictKey = 33,
  anon_sym_PLUS_PLUS_PLUS = 34,
  anon_sym_exited = 35,
  anon_sym_with = 36,
  sym_source_file = 37,
  sym_line = 38,
  sym_resumed = 39,
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
  [anon_sym_EQ] = "=",
  [aux_sym_resumed_token1] = "resumed_token1",
  [anon_sym_DASH_DASH_DASH] = "---",
  [sym_syscall] = "syscall",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
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
  [sym_resumed] = "resumed",
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
  [aux_sym_resumed_token1] = aux_sym_resumed_token1,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [sym_syscall] = sym_syscall,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_resumed] = sym_resumed,
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
  [aux_sym_resumed_token1] = {
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
  [sym_resumed] = {
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
      if (eof) ADVANCE(76);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '?') ADVANCE(117);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'w') ADVANCE(53);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '|') ADVANCE(109);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == '[') ADVANCE(106);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(128);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == '?') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == '<') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '>') ADVANCE(121);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'U') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 75:
      if (eof) ADVANCE(76);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '}') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '>') ADVANCE(121);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_resumed_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_resumed_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_resumed_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_resumed_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_resumed_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_resumed_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_resumed_token1);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_syscall);
      if (lookahead == '<') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LTunfinished_DOT_DOT_DOT_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_errorName_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
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
  [32] = {.lex_state = 75},
  [33] = {.lex_state = 75},
  [34] = {.lex_state = 75},
  [35] = {.lex_state = 75},
  [36] = {.lex_state = 75},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 75},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 75},
  [43] = {.lex_state = 75},
  [44] = {.lex_state = 75},
  [45] = {.lex_state = 75},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 75},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 75},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 75},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 75},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_line] = STATE(33),
    [sym_resumed] = STATE(33),
    [sym_signal] = STATE(33),
    [sym_pid] = STATE(67),
    [sym_exit] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(33),
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
    STATE(7), 1,
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
    STATE(21), 4,
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
    STATE(7), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(31), 3,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [92] = 4,
    STATE(4), 1,
      aux_sym_values_repeat1,
    ACTIONS(58), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(56), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(54), 12,
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
  [119] = 13,
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
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(7), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(61), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [164] = 13,
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
    STATE(5), 1,
      aux_sym_parameters_repeat1,
    STATE(7), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(63), 2,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [209] = 4,
    STATE(8), 1,
      aux_sym_values_repeat1,
    ACTIONS(69), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(67), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(65), 12,
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
  [236] = 4,
    STATE(4), 1,
      aux_sym_values_repeat1,
    ACTIONS(69), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(73), 3,
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
  [263] = 2,
    ACTIONS(77), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(75), 14,
      anon_sym_DASH_DASH_DASH,
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
      anon_sym_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [285] = 2,
    ACTIONS(81), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(79), 14,
      anon_sym_DASH_DASH_DASH,
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
      anon_sym_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [307] = 13,
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
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym_value,
    STATE(14), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [351] = 2,
    ACTIONS(87), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(85), 14,
      anon_sym_DASH_DASH_DASH,
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
      anon_sym_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [373] = 2,
    ACTIONS(56), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(54), 14,
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
  [395] = 13,
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
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(7), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [439] = 13,
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
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(7), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [483] = 2,
    ACTIONS(93), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(91), 14,
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
  [505] = 2,
    ACTIONS(97), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(95), 14,
      anon_sym_DASH_DASH_DASH,
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
      anon_sym_EQ_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [527] = 13,
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
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym_value,
    STATE(15), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [571] = 5,
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
    ACTIONS(101), 10,
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
  [598] = 2,
    ACTIONS(113), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(111), 12,
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
  [618] = 4,
    ACTIONS(105), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(101), 10,
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
  [642] = 2,
    ACTIONS(117), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(115), 12,
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
  [662] = 2,
    ACTIONS(121), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(119), 12,
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
  [682] = 2,
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
  [702] = 2,
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
  [722] = 2,
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
  [742] = 3,
    ACTIONS(139), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(137), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(135), 10,
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
  [763] = 2,
    ACTIONS(143), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(141), 10,
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
  [781] = 2,
    ACTIONS(137), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(135), 10,
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
  [799] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(147), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [818] = 2,
    ACTIONS(151), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(31), 8,
      anon_sym_LTunfinished_DOT_DOT_DOT_GT,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [834] = 7,
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
    STATE(67), 1,
      sym_pid,
    STATE(32), 5,
      sym_line,
      sym_resumed,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [860] = 7,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(7), 1,
      sym_syscall,
    ACTIONS(9), 1,
      sym_integer,
    ACTIONS(11), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_pid,
    STATE(32), 5,
      sym_line,
      sym_resumed,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [886] = 1,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      anon_sym_COMMA,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [897] = 1,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      anon_sym_COMMA,
      sym_integer,
      anon_sym_RBRACE,
      anon_sym_PLUS_PLUS_PLUS,
  [908] = 2,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [919] = 2,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [930] = 5,
    ACTIONS(181), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(183), 1,
      aux_sym_errorName_token1,
    ACTIONS(185), 1,
      sym_dictKey,
    STATE(77), 1,
      sym_dictElem,
    STATE(78), 1,
      sym_macro,
  [946] = 1,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [954] = 1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [962] = 5,
    ACTIONS(183), 1,
      aux_sym_errorName_token1,
    ACTIONS(185), 1,
      sym_dictKey,
    ACTIONS(191), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(77), 1,
      sym_dictElem,
    STATE(78), 1,
      sym_macro,
  [978] = 1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [986] = 1,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [994] = 1,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1002] = 1,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [1010] = 5,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      sym__newline,
    ACTIONS(205), 1,
      aux_sym_errorName_token1,
    STATE(65), 1,
      sym_errorName,
    STATE(87), 1,
      sym_errorDescription,
  [1026] = 3,
    ACTIONS(27), 1,
      sym_pointer,
    STATE(13), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
  [1037] = 4,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      aux_sym_string_token1,
    ACTIONS(212), 1,
      sym__escape_sequence,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [1050] = 4,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym_string_token1,
    ACTIONS(219), 1,
      sym__escape_sequence,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [1063] = 4,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      aux_sym_string_token1,
    ACTIONS(225), 1,
      sym__escape_sequence,
    STATE(49), 1,
      aux_sym_string_repeat1,
  [1076] = 3,
    ACTIONS(27), 1,
      sym_pointer,
    STATE(72), 1,
      sym_value,
    ACTIONS(19), 2,
      sym_integer,
      aux_sym_value_token1,
  [1087] = 4,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      aux_sym_errorDescription_token1,
    STATE(54), 1,
      aux_sym_errorDescription_repeat1,
  [1100] = 4,
    ACTIONS(183), 1,
      aux_sym_errorName_token1,
    ACTIONS(185), 1,
      sym_dictKey,
    STATE(77), 1,
      sym_dictElem,
    STATE(78), 1,
      sym_macro,
  [1113] = 4,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      aux_sym_errorDescription_token1,
    STATE(57), 1,
      aux_sym_errorDescription_repeat1,
  [1126] = 3,
    ACTIONS(237), 1,
      sym_integer,
    STATE(83), 1,
      sym_returnValue,
    ACTIONS(239), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1137] = 4,
    ACTIONS(183), 1,
      aux_sym_errorName_token1,
    ACTIONS(185), 1,
      sym_dictKey,
    STATE(62), 1,
      sym_dictElem,
    STATE(78), 1,
      sym_macro,
  [1150] = 4,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(246), 1,
      aux_sym_errorDescription_token1,
    STATE(57), 1,
      aux_sym_errorDescription_repeat1,
  [1163] = 3,
    ACTIONS(237), 1,
      sym_integer,
    STATE(82), 1,
      sym_returnValue,
    ACTIONS(239), 2,
      sym_pointer,
      anon_sym_QMARK,
  [1174] = 2,
    ACTIONS(249), 1,
      aux_sym_resumed_token1,
    ACTIONS(251), 2,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [1182] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_dict_repeat1,
  [1192] = 3,
    ACTIONS(258), 1,
      anon_sym_AMP_AMP,
    ACTIONS(260), 1,
      anon_sym_EQ_EQ,
    STATE(66), 1,
      aux_sym_dictElem_repeat1,
  [1202] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_dict_repeat1,
  [1212] = 2,
    ACTIONS(266), 1,
      aux_sym_errorDescription_token1,
    ACTIONS(244), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1220] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_dict_repeat1,
  [1230] = 3,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 1,
      sym__newline,
    STATE(94), 1,
      sym_errorDescription,
  [1240] = 3,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(277), 1,
      anon_sym_EQ_EQ,
    STATE(66), 1,
      aux_sym_dictElem_repeat1,
  [1250] = 3,
    ACTIONS(279), 1,
      aux_sym_resumed_token1,
    ACTIONS(281), 1,
      sym_syscall,
    ACTIONS(283), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1260] = 2,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_parameters,
  [1267] = 1,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1272] = 2,
    ACTIONS(183), 1,
      aux_sym_errorName_token1,
    STATE(81), 1,
      sym_macro,
  [1279] = 2,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      sym__newline,
  [1286] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_dict,
  [1293] = 2,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_dict,
  [1300] = 1,
    ACTIONS(293), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1305] = 2,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_parameters,
  [1312] = 1,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1317] = 1,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1322] = 2,
    ACTIONS(258), 1,
      anon_sym_AMP_AMP,
    STATE(61), 1,
      aux_sym_dictElem_repeat1,
  [1329] = 2,
    ACTIONS(285), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_parameters,
  [1336] = 1,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1341] = 1,
    ACTIONS(277), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1346] = 1,
    ACTIONS(299), 1,
      sym__newline,
  [1350] = 1,
    ACTIONS(301), 1,
      sym__newline,
  [1354] = 1,
    ACTIONS(303), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1358] = 1,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
  [1362] = 1,
    ACTIONS(307), 1,
      aux_sym_macro_token1,
  [1366] = 1,
    ACTIONS(272), 1,
      sym__newline,
  [1370] = 1,
    ACTIONS(309), 1,
      sym_integer,
  [1374] = 1,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
  [1378] = 1,
    ACTIONS(313), 1,
      anon_sym_exited,
  [1382] = 1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [1386] = 1,
    ACTIONS(317), 1,
      sym__newline,
  [1390] = 1,
    ACTIONS(319), 1,
      sym_integer,
  [1394] = 1,
    ACTIONS(321), 1,
      sym__newline,
  [1398] = 1,
    ACTIONS(323), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1402] = 1,
    ACTIONS(325), 1,
      anon_sym_EQ,
  [1406] = 1,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
  [1410] = 1,
    ACTIONS(329), 1,
      anon_sym_with,
  [1414] = 1,
    ACTIONS(331), 1,
      sym_integer,
  [1418] = 1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
  [1422] = 1,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
  [1426] = 1,
    ACTIONS(337), 1,
      anon_sym_DASH_DASH_DASH,
  [1430] = 1,
    ACTIONS(339), 1,
      anon_sym_exited,
  [1434] = 1,
    ACTIONS(341), 1,
      sym__newline,
  [1438] = 1,
    ACTIONS(343), 1,
      anon_sym_with,
  [1442] = 1,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 119,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 307,
  [SMALL_STATE(12)] = 351,
  [SMALL_STATE(13)] = 373,
  [SMALL_STATE(14)] = 395,
  [SMALL_STATE(15)] = 439,
  [SMALL_STATE(16)] = 483,
  [SMALL_STATE(17)] = 505,
  [SMALL_STATE(18)] = 527,
  [SMALL_STATE(19)] = 571,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 618,
  [SMALL_STATE(22)] = 642,
  [SMALL_STATE(23)] = 662,
  [SMALL_STATE(24)] = 682,
  [SMALL_STATE(25)] = 702,
  [SMALL_STATE(26)] = 722,
  [SMALL_STATE(27)] = 742,
  [SMALL_STATE(28)] = 763,
  [SMALL_STATE(29)] = 781,
  [SMALL_STATE(30)] = 799,
  [SMALL_STATE(31)] = 818,
  [SMALL_STATE(32)] = 834,
  [SMALL_STATE(33)] = 860,
  [SMALL_STATE(34)] = 886,
  [SMALL_STATE(35)] = 897,
  [SMALL_STATE(36)] = 908,
  [SMALL_STATE(37)] = 919,
  [SMALL_STATE(38)] = 930,
  [SMALL_STATE(39)] = 946,
  [SMALL_STATE(40)] = 954,
  [SMALL_STATE(41)] = 962,
  [SMALL_STATE(42)] = 978,
  [SMALL_STATE(43)] = 986,
  [SMALL_STATE(44)] = 994,
  [SMALL_STATE(45)] = 1002,
  [SMALL_STATE(46)] = 1010,
  [SMALL_STATE(47)] = 1026,
  [SMALL_STATE(48)] = 1037,
  [SMALL_STATE(49)] = 1050,
  [SMALL_STATE(50)] = 1063,
  [SMALL_STATE(51)] = 1076,
  [SMALL_STATE(52)] = 1087,
  [SMALL_STATE(53)] = 1100,
  [SMALL_STATE(54)] = 1113,
  [SMALL_STATE(55)] = 1126,
  [SMALL_STATE(56)] = 1137,
  [SMALL_STATE(57)] = 1150,
  [SMALL_STATE(58)] = 1163,
  [SMALL_STATE(59)] = 1174,
  [SMALL_STATE(60)] = 1182,
  [SMALL_STATE(61)] = 1192,
  [SMALL_STATE(62)] = 1202,
  [SMALL_STATE(63)] = 1212,
  [SMALL_STATE(64)] = 1220,
  [SMALL_STATE(65)] = 1230,
  [SMALL_STATE(66)] = 1240,
  [SMALL_STATE(67)] = 1250,
  [SMALL_STATE(68)] = 1260,
  [SMALL_STATE(69)] = 1267,
  [SMALL_STATE(70)] = 1272,
  [SMALL_STATE(71)] = 1279,
  [SMALL_STATE(72)] = 1286,
  [SMALL_STATE(73)] = 1293,
  [SMALL_STATE(74)] = 1300,
  [SMALL_STATE(75)] = 1305,
  [SMALL_STATE(76)] = 1312,
  [SMALL_STATE(77)] = 1317,
  [SMALL_STATE(78)] = 1322,
  [SMALL_STATE(79)] = 1329,
  [SMALL_STATE(80)] = 1336,
  [SMALL_STATE(81)] = 1341,
  [SMALL_STATE(82)] = 1346,
  [SMALL_STATE(83)] = 1350,
  [SMALL_STATE(84)] = 1354,
  [SMALL_STATE(85)] = 1358,
  [SMALL_STATE(86)] = 1362,
  [SMALL_STATE(87)] = 1366,
  [SMALL_STATE(88)] = 1370,
  [SMALL_STATE(89)] = 1374,
  [SMALL_STATE(90)] = 1378,
  [SMALL_STATE(91)] = 1382,
  [SMALL_STATE(92)] = 1386,
  [SMALL_STATE(93)] = 1390,
  [SMALL_STATE(94)] = 1394,
  [SMALL_STATE(95)] = 1398,
  [SMALL_STATE(96)] = 1402,
  [SMALL_STATE(97)] = 1406,
  [SMALL_STATE(98)] = 1410,
  [SMALL_STATE(99)] = 1414,
  [SMALL_STATE(100)] = 1418,
  [SMALL_STATE(101)] = 1422,
  [SMALL_STATE(102)] = 1426,
  [SMALL_STATE(103)] = 1430,
  [SMALL_STATE(104)] = 1434,
  [SMALL_STATE(105)] = 1438,
  [SMALL_STATE(106)] = 1442,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(21),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(50),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(101),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(18),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(56),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(47),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resumed, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(91),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(57),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pid, 1),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(53),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(70),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [345] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
