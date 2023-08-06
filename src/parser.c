#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_flags = 24,
  aux_sym_errorDescription_token1 = 25,
  anon_sym_Ioctl_LPAREN_RPAREN = 26,
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
  sym_signal = 39,
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
  aux_sym_dict_repeat1 = 59,
  aux_sym_dictElem_repeat1 = 60,
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
  [anon_sym_flags] = "flags",
  [aux_sym_errorDescription_token1] = "errorDescription_token1",
  [anon_sym_Ioctl_LPAREN_RPAREN] = "Ioctl() ",
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
  [anon_sym_flags] = anon_sym_flags,
  [aux_sym_errorDescription_token1] = aux_sym_errorDescription_token1,
  [anon_sym_Ioctl_LPAREN_RPAREN] = anon_sym_Ioctl_LPAREN_RPAREN,
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
  [anon_sym_flags] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_errorDescription_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Ioctl_LPAREN_RPAREN] = {
    .visible = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(105);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'L') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'U') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'o') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_errorName_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_flags);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_flags);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == 'g') ADVANCE(94);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Ioctl_LPAREN_RPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_dictKey);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 48},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
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
    [anon_sym_flags] = ACTIONS(1),
    [anon_sym_Ioctl_LPAREN_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(81),
    [sym_line] = STATE(32),
    [sym_signal] = STATE(32),
    [sym_exit] = STATE(76),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [sym_syscall] = ACTIONS(7),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(13), 1,
      anon_sym_NULL,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(22), 1,
      anon_sym_TILDE,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(28), 1,
      sym_pointer,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(11), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(16), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [45] = 13,
    ACTIONS(34), 1,
      anon_sym_NULL,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_RBRACK,
    ACTIONS(46), 1,
      sym_pointer,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [89] = 4,
    STATE(6), 1,
      aux_sym_values_repeat1,
    ACTIONS(54), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(52), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(50), 11,
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
  [115] = 13,
    ACTIONS(34), 1,
      anon_sym_NULL,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_pointer,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [159] = 4,
    STATE(6), 1,
      aux_sym_values_repeat1,
    ACTIONS(62), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(60), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(58), 11,
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
  [185] = 13,
    ACTIONS(34), 1,
      anon_sym_NULL,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_pointer,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [229] = 13,
    ACTIONS(34), 1,
      anon_sym_NULL,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_pointer,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [273] = 13,
    ACTIONS(34), 1,
      anon_sym_NULL,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_pointer,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [317] = 13,
    ACTIONS(34), 1,
      anon_sym_NULL,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_pointer,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      aux_sym_parameters_repeat1,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    STATE(30), 1,
      sym_parameter,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [361] = 4,
    STATE(4), 1,
      aux_sym_values_repeat1,
    ACTIONS(54), 2,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(73), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(71), 11,
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
  [387] = 12,
    ACTIONS(34), 1,
      anon_sym_NULL,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_pointer,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_syscall,
    STATE(11), 1,
      sym_value,
    STATE(19), 1,
      sym_dict,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
    STATE(69), 2,
      sym_parameter,
      sym__dictValue,
    STATE(21), 4,
      sym_string,
      sym_list,
      sym_values,
      sym_dictFn,
  [429] = 2,
    ACTIONS(79), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(77), 13,
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
  [450] = 2,
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
  [471] = 2,
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
  [492] = 2,
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
  [513] = 2,
    ACTIONS(60), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(58), 13,
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
  [534] = 2,
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
  [555] = 5,
    ACTIONS(101), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_EQ_GT,
    ACTIONS(99), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(97), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [581] = 2,
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
  [600] = 4,
    ACTIONS(101), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(97), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [623] = 2,
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
  [642] = 2,
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
  [661] = 2,
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
  [680] = 2,
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
  [699] = 2,
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
  [718] = 3,
    ACTIONS(135), 1,
      anon_sym_DOT_DOT_DOT,
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
  [738] = 2,
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
  [755] = 2,
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
  [772] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(145), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(143), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [790] = 2,
    ACTIONS(147), 3,
      anon_sym_NULL,
      sym_integer,
      aux_sym_value_token1,
    ACTIONS(11), 7,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_pointer,
      anon_sym_LBRACE,
  [805] = 6,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(7), 1,
      sym_syscall,
    ACTIONS(9), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_exit,
    STATE(33), 3,
      sym_line,
      sym_signal,
      aux_sym_source_file_repeat1,
  [826] = 4,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(156), 1,
      sym_syscall,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(33), 3,
      sym_line,
      sym_signal,
      aux_sym_source_file_repeat1,
  [842] = 5,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym__newline,
    ACTIONS(163), 1,
      aux_sym_errorName_token1,
    STATE(46), 1,
      sym_errorName,
    STATE(77), 1,
      sym_errorDescription,
  [858] = 5,
    ACTIONS(165), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(167), 1,
      aux_sym_errorName_token1,
    ACTIONS(169), 1,
      sym_dictKey,
    STATE(59), 1,
      sym_macro,
    STATE(68), 1,
      sym_dictElem,
  [874] = 5,
    ACTIONS(167), 1,
      aux_sym_errorName_token1,
    ACTIONS(169), 1,
      sym_dictKey,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(59), 1,
      sym_macro,
    STATE(68), 1,
      sym_dictElem,
  [890] = 4,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(175), 1,
      aux_sym_string_token1,
    ACTIONS(178), 1,
      sym__escape_sequence,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [903] = 3,
    ACTIONS(181), 1,
      sym_integer,
    STATE(72), 1,
      sym_returnValue,
    ACTIONS(183), 2,
      sym_pointer,
      anon_sym_QMARK,
  [914] = 4,
    ACTIONS(167), 1,
      aux_sym_errorName_token1,
    ACTIONS(169), 1,
      sym_dictKey,
    STATE(59), 1,
      sym_macro,
    STATE(68), 1,
      sym_dictElem,
  [927] = 3,
    STATE(11), 1,
      sym_value,
    STATE(91), 1,
      sym_values,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
  [938] = 1,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [945] = 1,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASH,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [952] = 4,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      aux_sym_string_token1,
    ACTIONS(193), 1,
      sym__escape_sequence,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [965] = 4,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym_string_token1,
    ACTIONS(199), 1,
      sym__escape_sequence,
    STATE(43), 1,
      aux_sym_string_repeat1,
  [978] = 4,
    ACTIONS(167), 1,
      aux_sym_errorName_token1,
    ACTIONS(169), 1,
      sym_dictKey,
    STATE(49), 1,
      sym_dictElem,
    STATE(59), 1,
      sym_macro,
  [991] = 3,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym__newline,
    STATE(84), 1,
      sym_errorDescription,
  [1001] = 3,
    ACTIONS(203), 1,
      anon_sym_AMP_AMP,
    ACTIONS(205), 1,
      anon_sym_EQ_EQ,
    STATE(53), 1,
      aux_sym_dictElem_repeat1,
  [1011] = 2,
    STATE(17), 1,
      sym_value,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
  [1019] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_dict_repeat1,
  [1029] = 1,
    ACTIONS(211), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1035] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_dict_repeat1,
  [1045] = 2,
    ACTIONS(218), 1,
      anon_sym_flags,
    ACTIONS(220), 2,
      aux_sym_errorDescription_token1,
      anon_sym_Ioctl_LPAREN_RPAREN,
  [1053] = 3,
    ACTIONS(222), 1,
      anon_sym_AMP_AMP,
    ACTIONS(225), 1,
      anon_sym_EQ_EQ,
    STATE(53), 1,
      aux_sym_dictElem_repeat1,
  [1063] = 2,
    STATE(63), 1,
      sym_value,
    ACTIONS(36), 2,
      sym_integer,
      aux_sym_value_token1,
  [1071] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_dict_repeat1,
  [1081] = 1,
    ACTIONS(231), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1087] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1092] = 2,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_dict,
  [1099] = 2,
    ACTIONS(203), 1,
      anon_sym_AMP_AMP,
    STATE(47), 1,
      aux_sym_dictElem_repeat1,
  [1106] = 1,
    ACTIONS(235), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1111] = 2,
    ACTIONS(167), 1,
      aux_sym_errorName_token1,
    STATE(62), 1,
      sym_macro,
  [1118] = 1,
    ACTIONS(225), 2,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
  [1123] = 2,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_dict,
  [1130] = 1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1135] = 2,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      sym__newline,
  [1142] = 2,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_parameters,
  [1149] = 2,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_parameters,
  [1156] = 1,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1161] = 1,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1166] = 1,
    ACTIONS(247), 1,
      anon_sym_DASH_DASH_DASH,
  [1170] = 1,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [1174] = 1,
    ACTIONS(251), 1,
      sym__newline,
  [1178] = 1,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
  [1182] = 1,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
  [1186] = 1,
    ACTIONS(257), 1,
      sym_integer,
  [1190] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [1194] = 1,
    ACTIONS(201), 1,
      sym__newline,
  [1198] = 1,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
  [1202] = 1,
    ACTIONS(261), 1,
      sym_integer,
  [1206] = 1,
    ACTIONS(263), 1,
      anon_sym_EQ,
  [1210] = 1,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
  [1214] = 1,
    ACTIONS(267), 1,
      anon_sym_EQ,
  [1218] = 1,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [1222] = 1,
    ACTIONS(271), 1,
      sym__newline,
  [1226] = 1,
    ACTIONS(273), 1,
      anon_sym_with,
  [1230] = 1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
  [1234] = 1,
    ACTIONS(277), 1,
      anon_sym_exited,
  [1238] = 1,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
  [1242] = 1,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
  [1246] = 1,
    ACTIONS(283), 1,
      aux_sym_macro_token1,
  [1250] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1254] = 1,
    ACTIONS(287), 1,
      sym__newline,
  [1258] = 1,
    ACTIONS(289), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1262] = 1,
    ACTIONS(291), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 159,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 229,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 317,
  [SMALL_STATE(11)] = 361,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 429,
  [SMALL_STATE(14)] = 450,
  [SMALL_STATE(15)] = 471,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 513,
  [SMALL_STATE(18)] = 534,
  [SMALL_STATE(19)] = 555,
  [SMALL_STATE(20)] = 581,
  [SMALL_STATE(21)] = 600,
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
  [SMALL_STATE(33)] = 826,
  [SMALL_STATE(34)] = 842,
  [SMALL_STATE(35)] = 858,
  [SMALL_STATE(36)] = 874,
  [SMALL_STATE(37)] = 890,
  [SMALL_STATE(38)] = 903,
  [SMALL_STATE(39)] = 914,
  [SMALL_STATE(40)] = 927,
  [SMALL_STATE(41)] = 938,
  [SMALL_STATE(42)] = 945,
  [SMALL_STATE(43)] = 952,
  [SMALL_STATE(44)] = 965,
  [SMALL_STATE(45)] = 978,
  [SMALL_STATE(46)] = 991,
  [SMALL_STATE(47)] = 1001,
  [SMALL_STATE(48)] = 1011,
  [SMALL_STATE(49)] = 1019,
  [SMALL_STATE(50)] = 1029,
  [SMALL_STATE(51)] = 1035,
  [SMALL_STATE(52)] = 1045,
  [SMALL_STATE(53)] = 1053,
  [SMALL_STATE(54)] = 1063,
  [SMALL_STATE(55)] = 1071,
  [SMALL_STATE(56)] = 1081,
  [SMALL_STATE(57)] = 1087,
  [SMALL_STATE(58)] = 1092,
  [SMALL_STATE(59)] = 1099,
  [SMALL_STATE(60)] = 1106,
  [SMALL_STATE(61)] = 1111,
  [SMALL_STATE(62)] = 1118,
  [SMALL_STATE(63)] = 1123,
  [SMALL_STATE(64)] = 1130,
  [SMALL_STATE(65)] = 1135,
  [SMALL_STATE(66)] = 1142,
  [SMALL_STATE(67)] = 1149,
  [SMALL_STATE(68)] = 1156,
  [SMALL_STATE(69)] = 1161,
  [SMALL_STATE(70)] = 1166,
  [SMALL_STATE(71)] = 1170,
  [SMALL_STATE(72)] = 1174,
  [SMALL_STATE(73)] = 1178,
  [SMALL_STATE(74)] = 1182,
  [SMALL_STATE(75)] = 1186,
  [SMALL_STATE(76)] = 1190,
  [SMALL_STATE(77)] = 1194,
  [SMALL_STATE(78)] = 1198,
  [SMALL_STATE(79)] = 1202,
  [SMALL_STATE(80)] = 1206,
  [SMALL_STATE(81)] = 1210,
  [SMALL_STATE(82)] = 1214,
  [SMALL_STATE(83)] = 1218,
  [SMALL_STATE(84)] = 1222,
  [SMALL_STATE(85)] = 1226,
  [SMALL_STATE(86)] = 1230,
  [SMALL_STATE(87)] = 1234,
  [SMALL_STATE(88)] = 1238,
  [SMALL_STATE(89)] = 1242,
  [SMALL_STATE(90)] = 1246,
  [SMALL_STATE(91)] = 1250,
  [SMALL_STATE(92)] = 1254,
  [SMALL_STATE(93)] = 1258,
  [SMALL_STATE(94)] = 1262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(21),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(16),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(78),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(21),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(45),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_values_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_values_repeat1, 2), SHIFT_REPEAT(48),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_values, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_values, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictFn, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictFn, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(37),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(37),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signal, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(39),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2), SHIFT_REPEAT(61),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictElem_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dictValue, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_errorName, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorName, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [265] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 4),
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
