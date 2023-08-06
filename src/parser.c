#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  sym_interleaf = 2,
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
  sym_signal = 38,
  sym_pid = 39,
  sym_parameters = 40,
  sym_parameter = 41,
  sym_string = 42,
  sym_list = 43,
  sym_values = 44,
  sym_value = 45,
  sym_returnValue = 46,
  sym_errorName = 47,
  sym_errorDescription = 48,
  sym_dictFn = 49,
  sym_dict = 50,
  sym_dictElem = 51,
  sym_macro = 52,
  sym__dictValue = 53,
  sym_exit = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_parameters_repeat1 = 56,
  aux_sym_string_repeat1 = 57,
  aux_sym_values_repeat1 = 58,
  aux_sym_errorDescription_repeat1 = 59,
  aux_sym_dict_repeat1 = 60,
  aux_sym_dictElem_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym_interleaf] = "interleaf",
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
  [sym_interleaf] = sym_interleaf,
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
  [sym_interleaf] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(34);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '~') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == ',') ADVANCE(60);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '<') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_interleaf);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_syscall);
      if (lookahead == '<') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '<') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_errorName_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
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
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 0},
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
    [sym_source_file] = STATE(105),
    [sym_line] = STATE(32),
    [sym_signal] = STATE(32),
    [sym_pid] = STATE(66),
    [sym_exit] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_interleaf] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(7),
    [sym_syscall] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(15), 1,
      sym_syscall,
    ACTIONS(19), 1,
      anon_sym_NULL,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_pointer,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    ACTIONS(17), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(21), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(75), 2,
      sym_parameter,
      sym__dictValue,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [46] = 13,
    ACTIONS(35), 1,
      anon_sym_NULL,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_TILDE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      sym_pointer,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(31), 1,
      sym_parameter,
    ACTIONS(33), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(38), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [91] = 4,
    STATE(10), 1,
      aux_sym_values_repeat1,
    ACTIONS(60), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(58), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(56), 11,
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
    ACTIONS(19), 1,
      anon_sym_NULL,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_pointer,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_value,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_dict,
    STATE(31), 1,
      sym_parameter,
    ACTIONS(21), 2,
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
    ACTIONS(68), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(66), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(64), 11,
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
    ACTIONS(19), 1,
      anon_sym_NULL,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_pointer,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_value,
    STATE(9), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_dict,
    STATE(31), 1,
      sym_parameter,
    ACTIONS(21), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [231] = 13,
    ACTIONS(19), 1,
      anon_sym_NULL,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_pointer,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(31), 1,
      sym_parameter,
    ACTIONS(21), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [275] = 13,
    ACTIONS(19), 1,
      anon_sym_NULL,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_pointer,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(31), 1,
      sym_parameter,
    ACTIONS(21), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [319] = 4,
    STATE(6), 1,
      aux_sym_values_repeat1,
    ACTIONS(60), 2,
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
  [345] = 13,
    ACTIONS(19), 1,
      anon_sym_NULL,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_pointer,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_value,
    STATE(12), 1,
      aux_sym_parameters_repeat1,
    STATE(19), 1,
      sym_dict,
    STATE(31), 1,
      sym_parameter,
    ACTIONS(21), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [389] = 13,
    ACTIONS(19), 1,
      anon_sym_NULL,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_TILDE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_pointer,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(4), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(31), 1,
      sym_parameter,
    ACTIONS(21), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(23), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [433] = 2,
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
  [454] = 2,
    ACTIONS(89), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(87), 13,
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
    ACTIONS(93), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(91), 13,
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
  [517] = 2,
    ACTIONS(66), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(64), 13,
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
    ACTIONS(101), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(99), 13,
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
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(109), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_EQ_GT,
    ACTIONS(105), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(103), 9,
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
  [604] = 2,
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
  [623] = 2,
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
  [642] = 4,
    ACTIONS(107), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(109), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(103), 9,
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
  [684] = 2,
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
  [703] = 2,
    ACTIONS(135), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(133), 11,
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
    ACTIONS(141), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(139), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(137), 9,
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
    ACTIONS(145), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(143), 9,
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
    ACTIONS(139), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(137), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [776] = 8,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym_interleaf,
    ACTIONS(152), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(155), 1,
      sym_syscall,
    ACTIONS(158), 1,
      sym_integer,
    ACTIONS(161), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(66), 1,
      sym_pid,
    STATE(30), 4,
      sym_line,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [804] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(168), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(166), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [822] = 8,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(9), 1,
      sym_syscall,
    ACTIONS(11), 1,
      sym_integer,
    ACTIONS(13), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      sym_interleaf,
    STATE(66), 1,
      sym_pid,
    STATE(30), 4,
      sym_line,
      sym_signal,
      sym_exit,
      aux_sym_source_file_repeat1,
  [850] = 2,
    ACTIONS(174), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(33), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [865] = 2,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      sym_interleaf,
    ACTIONS(178), 4,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [876] = 2,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym_interleaf,
    ACTIONS(182), 4,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [887] = 2,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      sym_interleaf,
    ACTIONS(186), 4,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [898] = 2,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      sym_interleaf,
    ACTIONS(190), 4,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [909] = 2,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym_interleaf,
    ACTIONS(194), 4,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      sym_integer,
      anon_sym_PLUS_PLUS_PLUS,
  [920] = 5,
    ACTIONS(196), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(198), 1,
      aux_sym_errorName_token1,
    ACTIONS(200), 1,
      sym_dictKey,
    STATE(65), 1,
      sym_macro,
    STATE(76), 1,
      sym_dictElem,
  [936] = 5,
    ACTIONS(198), 1,
      aux_sym_errorName_token1,
    ACTIONS(200), 1,
      sym_dictKey,
    ACTIONS(202), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(65), 1,
      sym_macro,
    STATE(76), 1,
      sym_dictElem,
  [952] = 5,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      sym__newline,
    ACTIONS(208), 1,
      aux_sym_errorName_token1,
    STATE(57), 1,
      sym_errorName,
    STATE(80), 1,
      sym_errorDescription,
  [968] = 3,
    ACTIONS(210), 1,
      sym_integer,
    STATE(82), 1,
      sym_returnValue,
    ACTIONS(212), 2,
      sym_pointer,
      anon_sym_QMARK,
  [979] = 3,
    ACTIONS(210), 1,
      sym_integer,
    STATE(79), 1,
      sym_returnValue,
    ACTIONS(212), 2,
      sym_pointer,
      anon_sym_QMARK,
  [990] = 3,
    ACTIONS(29), 1,
      sym_pointer,
    STATE(64), 1,
      sym_value,
    ACTIONS(21), 2,
      sym_integer,
      aux_sym_value_token1,
  [1001] = 4,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      aux_sym_string_token1,
    ACTIONS(218), 1,
      sym__escape_sequence,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [1014] = 4,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      aux_sym_errorDescription_token1,
    STATE(50), 1,
      aux_sym_errorDescription_repeat1,
  [1027] = 3,
    ACTIONS(29), 1,
      sym_pointer,
    STATE(17), 1,
      sym_value,
    ACTIONS(21), 2,
      sym_integer,
      aux_sym_value_token1,
  [1038] = 4,
    ACTIONS(198), 1,
      aux_sym_errorName_token1,
    ACTIONS(200), 1,
      sym_dictKey,
    STATE(56), 1,
      sym_dictElem,
    STATE(65), 1,
      sym_macro,
  [1051] = 4,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(228), 1,
      aux_sym_errorDescription_token1,
    STATE(46), 1,
      aux_sym_errorDescription_repeat1,
  [1064] = 4,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      aux_sym_errorDescription_token1,
    STATE(50), 1,
      aux_sym_errorDescription_repeat1,
  [1077] = 4,
    ACTIONS(198), 1,
      aux_sym_errorName_token1,
    ACTIONS(200), 1,
      sym_dictKey,
    STATE(65), 1,
      sym_macro,
    STATE(76), 1,
      sym_dictElem,
  [1090] = 4,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      aux_sym_string_token1,
    ACTIONS(243), 1,
      sym__escape_sequence,
    STATE(52), 1,
      aux_sym_string_repeat1,
  [1103] = 4,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      aux_sym_string_token1,
    ACTIONS(250), 1,
      sym__escape_sequence,
    STATE(52), 1,
      aux_sym_string_repeat1,
  [1116] = 3,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dict_repeat1,
  [1126] = 3,
    ACTIONS(257), 1,
      anon_sym_AMP_AMP,
    ACTIONS(260), 1,
      anon_sym_EQ_EQ,
    STATE(55), 1,
      aux_sym_dictElem_repeat1,
  [1136] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      aux_sym_dict_repeat1,
  [1146] = 3,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym__newline,
    STATE(93), 1,
      sym_errorDescription,
  [1156] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dict_repeat1,
  [1166] = 1,
    ACTIONS(272), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1172] = 3,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    ACTIONS(276), 1,
      anon_sym_EQ_EQ,
    STATE(55), 1,
      aux_sym_dictElem_repeat1,
  [1182] = 1,
    ACTIONS(278), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1188] = 2,
    ACTIONS(280), 1,
      aux_sym_errorDescription_token1,
    ACTIONS(233), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1196] = 1,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1201] = 2,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_dict,
  [1208] = 2,
    ACTIONS(274), 1,
      anon_sym_AMP_AMP,
    STATE(60), 1,
      aux_sym_dictElem_repeat1,
  [1215] = 2,
    ACTIONS(284), 1,
      sym_syscall,
    ACTIONS(286), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1222] = 1,
    ACTIONS(260), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1227] = 1,
    ACTIONS(288), 2,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [1232] = 2,
    ACTIONS(198), 1,
      aux_sym_errorName_token1,
    STATE(67), 1,
      sym_macro,
  [1239] = 2,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      sym__newline,
  [1246] = 1,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1251] = 2,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_parameters,
  [1258] = 2,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_dict,
  [1265] = 2,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_parameters,
  [1272] = 1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1277] = 1,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1282] = 1,
    ACTIONS(300), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1287] = 2,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_parameters,
  [1294] = 1,
    ACTIONS(302), 1,
      sym__newline,
  [1298] = 1,
    ACTIONS(266), 1,
      sym__newline,
  [1302] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
  [1306] = 1,
    ACTIONS(306), 1,
      sym__newline,
  [1310] = 1,
    ACTIONS(308), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1314] = 1,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
  [1318] = 1,
    ACTIONS(312), 1,
      aux_sym_macro_token1,
  [1322] = 1,
    ACTIONS(314), 1,
      anon_sym_exited,
  [1326] = 1,
    ACTIONS(316), 1,
      sym_integer,
  [1330] = 1,
    ACTIONS(318), 1,
      sym_integer,
  [1334] = 1,
    ACTIONS(320), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1338] = 1,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
  [1342] = 1,
    ACTIONS(324), 1,
      sym__newline,
  [1346] = 1,
    ACTIONS(326), 1,
      anon_sym_EQ,
  [1350] = 1,
    ACTIONS(328), 1,
      sym__newline,
  [1354] = 1,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
  [1358] = 1,
    ACTIONS(332), 1,
      anon_sym_with,
  [1362] = 1,
    ACTIONS(334), 1,
      anon_sym_EQ,
  [1366] = 1,
    ACTIONS(336), 1,
      sym_integer,
  [1370] = 1,
    ACTIONS(338), 1,
      anon_sym_LBRACK,
  [1374] = 1,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
  [1378] = 1,
    ACTIONS(342), 1,
      anon_sym_DASH_DASH_DASH,
  [1382] = 1,
    ACTIONS(344), 1,
      anon_sym_exited,
  [1386] = 1,
    ACTIONS(346), 1,
      anon_sym_with,
  [1390] = 1,
    ACTIONS(348), 1,
      sym__newline,
  [1394] = 1,
    ACTIONS(350), 1,
      anon_sym_EQ,
  [1398] = 1,
    ACTIONS(352), 1,
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
  [SMALL_STATE(11)] = 345,
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
  [SMALL_STATE(31)] = 804,
  [SMALL_STATE(32)] = 822,
  [SMALL_STATE(33)] = 850,
  [SMALL_STATE(34)] = 865,
  [SMALL_STATE(35)] = 876,
  [SMALL_STATE(36)] = 887,
  [SMALL_STATE(37)] = 898,
  [SMALL_STATE(38)] = 909,
  [SMALL_STATE(39)] = 920,
  [SMALL_STATE(40)] = 936,
  [SMALL_STATE(41)] = 952,
  [SMALL_STATE(42)] = 968,
  [SMALL_STATE(43)] = 979,
  [SMALL_STATE(44)] = 990,
  [SMALL_STATE(45)] = 1001,
  [SMALL_STATE(46)] = 1014,
  [SMALL_STATE(47)] = 1027,
  [SMALL_STATE(48)] = 1038,
  [SMALL_STATE(49)] = 1051,
  [SMALL_STATE(50)] = 1064,
  [SMALL_STATE(51)] = 1077,
  [SMALL_STATE(52)] = 1090,
  [SMALL_STATE(53)] = 1103,
  [SMALL_STATE(54)] = 1116,
  [SMALL_STATE(55)] = 1126,
  [SMALL_STATE(56)] = 1136,
  [SMALL_STATE(57)] = 1146,
  [SMALL_STATE(58)] = 1156,
  [SMALL_STATE(59)] = 1166,
  [SMALL_STATE(60)] = 1172,
  [SMALL_STATE(61)] = 1182,
  [SMALL_STATE(62)] = 1188,
  [SMALL_STATE(63)] = 1196,
  [SMALL_STATE(64)] = 1201,
  [SMALL_STATE(65)] = 1208,
  [SMALL_STATE(66)] = 1215,
  [SMALL_STATE(67)] = 1222,
  [SMALL_STATE(68)] = 1227,
  [SMALL_STATE(69)] = 1232,
  [SMALL_STATE(70)] = 1239,
  [SMALL_STATE(71)] = 1246,
  [SMALL_STATE(72)] = 1251,
  [SMALL_STATE(73)] = 1258,
  [SMALL_STATE(74)] = 1265,
  [SMALL_STATE(75)] = 1272,
  [SMALL_STATE(76)] = 1277,
  [SMALL_STATE(77)] = 1282,
  [SMALL_STATE(78)] = 1287,
  [SMALL_STATE(79)] = 1294,
  [SMALL_STATE(80)] = 1298,
  [SMALL_STATE(81)] = 1302,
  [SMALL_STATE(82)] = 1306,
  [SMALL_STATE(83)] = 1310,
  [SMALL_STATE(84)] = 1314,
  [SMALL_STATE(85)] = 1318,
  [SMALL_STATE(86)] = 1322,
  [SMALL_STATE(87)] = 1326,
  [SMALL_STATE(88)] = 1330,
  [SMALL_STATE(89)] = 1334,
  [SMALL_STATE(90)] = 1338,
  [SMALL_STATE(91)] = 1342,
  [SMALL_STATE(92)] = 1346,
  [SMALL_STATE(93)] = 1350,
  [SMALL_STATE(94)] = 1354,
  [SMALL_STATE(95)] = 1358,
  [SMALL_STATE(96)] = 1362,
  [SMALL_STATE(97)] = 1366,
  [SMALL_STATE(98)] = 1370,
  [SMALL_STATE(99)] = 1374,
  [SMALL_STATE(100)] = 1378,
  [SMALL_STATE(101)] = 1382,
  [SMALL_STATE(102)] = 1386,
  [SMALL_STATE(103)] = 1390,
  [SMALL_STATE(104)] = 1394,
  [SMALL_STATE(105)] = 1398,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(45),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(98),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(48),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(47),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 6),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit, 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 6),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 5),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signal, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(90),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2), SHIFT_REPEAT(50),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(52),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(52),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(51),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(69),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_errorDescription_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pid, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [352] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
