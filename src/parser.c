#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  anon_sym_LBRACK = 11,
  anon_sym_COMMA2 = 12,
  anon_sym_RBRACK = 13,
  sym_pointer = 14,
  anon_sym_PIPE = 15,
  sym_ident = 16,
  sym_comment = 17,
  sym__escape_sequence = 18,
  sym__newline = 19,
  anon_sym_QMARK = 20,
  sym_errorName = 21,
  aux_sym_errorDescription_token1 = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_PLUS_PLUS_PLUS = 25,
  anon_sym_exited = 26,
  anon_sym_with = 27,
  sym_source_file = 28,
  sym_line = 29,
  sym_parameters = 30,
  sym_parameter = 31,
  sym_string = 32,
  sym_list = 33,
  sym__list_element = 34,
  sym_idents = 35,
  sym_returnValue = 36,
  sym_errorDescription = 37,
  sym_dict = 38,
  sym_dictElem = 39,
  sym_exit = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_parameters_repeat1 = 42,
  aux_sym_string_repeat1 = 43,
  aux_sym_list_repeat1 = 44,
  aux_sym_idents_repeat1 = 45,
  aux_sym_dict_repeat1 = 46,
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
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA2] = ", ",
  [anon_sym_RBRACK] = "]",
  [sym_pointer] = "pointer",
  [anon_sym_PIPE] = "|",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [sym__escape_sequence] = "_escape_sequence",
  [sym__newline] = "_newline",
  [anon_sym_QMARK] = "\?",
  [sym_errorName] = "errorName",
  [aux_sym_errorDescription_token1] = "errorDescription_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_exited] = "exited",
  [anon_sym_with] = "with",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_string] = "string",
  [sym_list] = "list",
  [sym__list_element] = "_list_element",
  [sym_idents] = "idents",
  [sym_returnValue] = "returnValue",
  [sym_errorDescription] = "errorDescription",
  [sym_dict] = "dict",
  [sym_dictElem] = "dictElem",
  [sym_exit] = "exit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_idents_repeat1] = "idents_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA2] = anon_sym_COMMA2,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_pointer] = sym_pointer,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym__newline] = sym__newline,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_errorName] = sym_errorName,
  [aux_sym_errorDescription_token1] = aux_sym_errorDescription_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_exited] = anon_sym_exited,
  [anon_sym_with] = anon_sym_with,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [sym__list_element] = sym__list_element,
  [sym_idents] = sym_idents,
  [sym_returnValue] = sym_returnValue,
  [sym_errorDescription] = sym_errorDescription,
  [sym_dict] = sym_dict,
  [sym_dictElem] = sym_dictElem,
  [sym_exit] = sym_exit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_idents_repeat1] = aux_sym_idents_repeat1,
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
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA2] = {
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
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym__list_element] = {
    .visible = false,
    .named = true,
  },
  [sym_idents] = {
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
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_dictElem] = {
    .visible = true,
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
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_idents_repeat1] = {
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
  [28] = 25,
  [29] = 29,
  [30] = 24,
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
  [45] = 22,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 18,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == '+') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == 'N') ADVANCE(60);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead == '*' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(34);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'U') ADVANCE(50);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead == '*' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_errorName);
      if (lookahead == 'L') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_errorName);
      if (lookahead == 'L') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_errorName);
      if (lookahead == 'U') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_errorName);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_pointer] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_errorName] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_exited] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_line] = STATE(16),
    [sym_exit] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_syscall] = ACTIONS(3),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_parameter,
    ACTIONS(9), 3,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
    STATE(13), 4,
      sym_string,
      sym_list,
      sym_idents,
      sym_dict,
  [30] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_parameter,
    ACTIONS(9), 3,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
    STATE(13), 4,
      sym_string,
      sym_list,
      sym_idents,
      sym_dict,
  [57] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_parameter,
    ACTIONS(9), 3,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
    STATE(13), 4,
      sym_string,
      sym_list,
      sym_idents,
      sym_dict,
  [84] = 3,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      aux_sym_idents_repeat1,
    ACTIONS(19), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [98] = 3,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      aux_sym_idents_repeat1,
    ACTIONS(23), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [112] = 3,
    ACTIONS(21), 1,
      anon_sym_PIPE,
    STATE(5), 1,
      aux_sym_idents_repeat1,
    ACTIONS(28), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [126] = 5,
    ACTIONS(30), 1,
      sym_integer,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_list_repeat1,
    STATE(54), 2,
      sym_string,
      sym__list_element,
  [143] = 5,
    ACTIONS(36), 1,
      sym_integer,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_list_repeat1,
    STATE(55), 2,
      sym_string,
      sym__list_element,
  [160] = 1,
    ACTIONS(23), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_PIPE,
      sym_comment,
      anon_sym_RBRACE,
  [169] = 5,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      sym_integer,
    ACTIONS(46), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_list_repeat1,
    STATE(46), 2,
      sym_string,
      sym__list_element,
  [186] = 1,
    ACTIONS(48), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [194] = 3,
    ACTIONS(52), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(54), 1,
      sym_comment,
    ACTIONS(50), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [206] = 1,
    ACTIONS(56), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [214] = 1,
    ACTIONS(58), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [222] = 4,
    ACTIONS(3), 1,
      sym_syscall,
    ACTIONS(5), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(59), 1,
      sym_exit,
    STATE(23), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [236] = 1,
    ACTIONS(60), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [244] = 1,
    ACTIONS(62), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [252] = 1,
    ACTIONS(64), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [260] = 1,
    ACTIONS(66), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [268] = 1,
    ACTIONS(68), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [276] = 1,
    ACTIONS(70), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      sym_comment,
      anon_sym_RBRACE,
  [284] = 3,
    ACTIONS(72), 1,
      sym_syscall,
    ACTIONS(75), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(23), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [295] = 3,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat1,
    ACTIONS(79), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [306] = 3,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat1,
    ACTIONS(83), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [317] = 3,
    ACTIONS(85), 1,
      sym_integer,
    STATE(63), 1,
      sym_returnValue,
    ACTIONS(87), 2,
      sym_pointer,
      anon_sym_QMARK,
  [328] = 2,
    ACTIONS(91), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(89), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [337] = 3,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat1,
    ACTIONS(83), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [348] = 3,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat1,
    ACTIONS(97), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [359] = 3,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_string_repeat1,
    ACTIONS(102), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [370] = 4,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym__newline,
    ACTIONS(108), 1,
      sym_errorName,
    STATE(57), 1,
      sym_errorDescription,
  [383] = 1,
    ACTIONS(110), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [389] = 3,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      sym__newline,
    STATE(68), 1,
      sym_errorDescription,
  [399] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_dict_repeat1,
  [409] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_dict_repeat1,
  [419] = 3,
    ACTIONS(123), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(125), 1,
      sym_ident,
    STATE(52), 1,
      sym_dictElem,
  [429] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_parameters_repeat1,
  [439] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_parameters_repeat1,
  [449] = 3,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      aux_sym_dict_repeat1,
  [459] = 3,
    ACTIONS(125), 1,
      sym_ident,
    ACTIONS(140), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(52), 1,
      sym_dictElem,
  [469] = 1,
    ACTIONS(42), 3,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [475] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_parameters_repeat1,
  [485] = 1,
    ACTIONS(89), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [491] = 1,
    ACTIONS(144), 2,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [496] = 1,
    ACTIONS(70), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [501] = 2,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
    ACTIONS(146), 1,
      anon_sym_COMMA2,
  [508] = 2,
    ACTIONS(125), 1,
      sym_ident,
    STATE(35), 1,
      sym_dictElem,
  [515] = 2,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_parameters,
  [522] = 1,
    ACTIONS(62), 2,
      anon_sym_COMMA2,
      anon_sym_RBRACK,
  [527] = 2,
    ACTIONS(125), 1,
      sym_ident,
    STATE(52), 1,
      sym_dictElem,
  [534] = 1,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [539] = 1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [544] = 1,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [549] = 2,
    ACTIONS(146), 1,
      anon_sym_COMMA2,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
  [556] = 1,
    ACTIONS(146), 1,
      anon_sym_COMMA2,
  [560] = 1,
    ACTIONS(154), 1,
      anon_sym_EQ,
  [564] = 1,
    ACTIONS(112), 1,
      sym__newline,
  [568] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [572] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [576] = 1,
    ACTIONS(160), 1,
      sym_integer,
  [580] = 1,
    ACTIONS(162), 1,
      aux_sym_errorDescription_token1,
  [584] = 1,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
  [588] = 1,
    ACTIONS(166), 1,
      sym__newline,
  [592] = 1,
    ACTIONS(168), 1,
      anon_sym_EQ,
  [596] = 1,
    ACTIONS(170), 1,
      anon_sym_with,
  [600] = 1,
    ACTIONS(172), 1,
      sym_ident,
  [604] = 1,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [608] = 1,
    ACTIONS(176), 1,
      sym__newline,
  [612] = 1,
    ACTIONS(178), 1,
      anon_sym_EQ,
  [616] = 1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [620] = 1,
    ACTIONS(182), 1,
      anon_sym_EQ,
  [624] = 1,
    ACTIONS(184), 1,
      sym__newline,
  [628] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [632] = 1,
    ACTIONS(188), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [636] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ,
  [640] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [644] = 1,
    ACTIONS(194), 1,
      anon_sym_exited,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 214,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 236,
  [SMALL_STATE(18)] = 244,
  [SMALL_STATE(19)] = 252,
  [SMALL_STATE(20)] = 260,
  [SMALL_STATE(21)] = 268,
  [SMALL_STATE(22)] = 276,
  [SMALL_STATE(23)] = 284,
  [SMALL_STATE(24)] = 295,
  [SMALL_STATE(25)] = 306,
  [SMALL_STATE(26)] = 317,
  [SMALL_STATE(27)] = 328,
  [SMALL_STATE(28)] = 337,
  [SMALL_STATE(29)] = 348,
  [SMALL_STATE(30)] = 359,
  [SMALL_STATE(31)] = 370,
  [SMALL_STATE(32)] = 383,
  [SMALL_STATE(33)] = 389,
  [SMALL_STATE(34)] = 399,
  [SMALL_STATE(35)] = 409,
  [SMALL_STATE(36)] = 419,
  [SMALL_STATE(37)] = 429,
  [SMALL_STATE(38)] = 439,
  [SMALL_STATE(39)] = 449,
  [SMALL_STATE(40)] = 459,
  [SMALL_STATE(41)] = 469,
  [SMALL_STATE(42)] = 475,
  [SMALL_STATE(43)] = 485,
  [SMALL_STATE(44)] = 491,
  [SMALL_STATE(45)] = 496,
  [SMALL_STATE(46)] = 501,
  [SMALL_STATE(47)] = 508,
  [SMALL_STATE(48)] = 515,
  [SMALL_STATE(49)] = 522,
  [SMALL_STATE(50)] = 527,
  [SMALL_STATE(51)] = 534,
  [SMALL_STATE(52)] = 539,
  [SMALL_STATE(53)] = 544,
  [SMALL_STATE(54)] = 549,
  [SMALL_STATE(55)] = 556,
  [SMALL_STATE(56)] = 560,
  [SMALL_STATE(57)] = 564,
  [SMALL_STATE(58)] = 568,
  [SMALL_STATE(59)] = 572,
  [SMALL_STATE(60)] = 576,
  [SMALL_STATE(61)] = 580,
  [SMALL_STATE(62)] = 584,
  [SMALL_STATE(63)] = 588,
  [SMALL_STATE(64)] = 592,
  [SMALL_STATE(65)] = 596,
  [SMALL_STATE(66)] = 600,
  [SMALL_STATE(67)] = 604,
  [SMALL_STATE(68)] = 608,
  [SMALL_STATE(69)] = 612,
  [SMALL_STATE(70)] = 616,
  [SMALL_STATE(71)] = 620,
  [SMALL_STATE(72)] = 624,
  [SMALL_STATE(73)] = 628,
  [SMALL_STATE(74)] = 632,
  [SMALL_STATE(75)] = 636,
  [SMALL_STATE(76)] = 640,
  [SMALL_STATE(77)] = 644,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idents, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_idents_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idents_repeat1, 2), SHIFT_REPEAT(66),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idents, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(55),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(30),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(29),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(50),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_strace_output(void) {
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
