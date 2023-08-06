#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_RBRACK = 12,
  sym_pointer = 13,
  anon_sym_PIPE = 14,
  sym_ident = 15,
  sym_comment = 16,
  sym__newline = 17,
  anon_sym_QMARK = 18,
  sym_errorName = 19,
  aux_sym_errorDescription_token1 = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_PLUS_PLUS_PLUS = 23,
  anon_sym_exited = 24,
  anon_sym_with = 25,
  sym_source_file = 26,
  sym_line = 27,
  sym_parameters = 28,
  sym_parameter = 29,
  sym_string = 30,
  sym_list = 31,
  sym_idents = 32,
  sym_returnValue = 33,
  sym_errorDescription = 34,
  sym_dict = 35,
  sym_dictElem = 36,
  sym__dictValue = 37,
  sym_exit = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_parameters_repeat1 = 40,
  aux_sym_list_repeat1 = 41,
  aux_sym_idents_repeat1 = 42,
  aux_sym_dict_repeat1 = 43,
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
  [anon_sym_RBRACK] = "]",
  [sym_pointer] = "pointer",
  [anon_sym_PIPE] = "|",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
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
  [sym_idents] = "idents",
  [sym_returnValue] = "returnValue",
  [sym_errorDescription] = "errorDescription",
  [sym_dict] = "dict",
  [sym_dictElem] = "dictElem",
  [sym__dictValue] = "_dictValue",
  [sym_exit] = "exit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
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
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_pointer] = sym_pointer,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
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
  [sym_idents] = sym_idents,
  [sym_returnValue] = sym_returnValue,
  [sym_errorDescription] = sym_errorDescription,
  [sym_dict] = sym_dict,
  [sym_dictElem] = sym_dictElem,
  [sym__dictValue] = sym__dictValue,
  [sym_exit] = sym_exit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
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
  [28] = 28,
  [29] = 29,
  [30] = 13,
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
  [68] = 64,
  [69] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(35);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '[') ADVANCE(42);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(62);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ']') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'U') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_errorName);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_errorDescription_token1);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_exited);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 40},
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
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_exited] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym_line] = STATE(23),
    [sym_exit] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_syscall] = ACTIONS(5),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym_parameters_repeat1,
    STATE(21), 1,
      sym_parameter,
    ACTIONS(11), 3,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
    STATE(10), 4,
      sym_string,
      sym_list,
      sym_idents,
      sym_dict,
  [33] = 9,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      sym_ident,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(21), 1,
      sym_parameter,
    ACTIONS(23), 3,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
    STATE(10), 4,
      sym_string,
      sym_list,
      sym_idents,
      sym_dict,
  [66] = 4,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    STATE(7), 1,
      aux_sym_idents_repeat1,
    ACTIONS(40), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(38), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [89] = 4,
    ACTIONS(42), 1,
      anon_sym_PIPE,
    STATE(4), 1,
      aux_sym_idents_repeat1,
    ACTIONS(46), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(44), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [112] = 9,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_parameters_repeat1,
    STATE(21), 1,
      sym_parameter,
    ACTIONS(11), 3,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
    STATE(10), 4,
      sym_string,
      sym_list,
      sym_idents,
      sym_dict,
  [145] = 4,
    ACTIONS(54), 1,
      anon_sym_PIPE,
    STATE(7), 1,
      aux_sym_idents_repeat1,
    ACTIONS(52), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(50), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [168] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(43), 2,
      sym_parameter,
      sym__dictValue,
    ACTIONS(11), 3,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
    STATE(10), 4,
      sym_string,
      sym_list,
      sym_idents,
      sym_dict,
  [196] = 2,
    ACTIONS(52), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(50), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [214] = 4,
    ACTIONS(61), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(59), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(57), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [235] = 2,
    ACTIONS(67), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(65), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [252] = 2,
    ACTIONS(71), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(69), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [269] = 2,
    ACTIONS(75), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(73), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [286] = 2,
    ACTIONS(79), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(77), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [303] = 2,
    ACTIONS(83), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(81), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [320] = 2,
    ACTIONS(87), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(85), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [337] = 2,
    ACTIONS(91), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(89), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT_DOT,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [354] = 3,
    ACTIONS(97), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(95), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(93), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [372] = 2,
    ACTIONS(101), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(99), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [387] = 2,
    ACTIONS(95), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
    ACTIONS(93), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [402] = 3,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(105), 4,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(107), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
  [418] = 2,
    ACTIONS(21), 4,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
    ACTIONS(109), 4,
      anon_sym_NULL,
      sym_integer,
      sym_pointer,
      sym_ident,
  [431] = 5,
    ACTIONS(5), 1,
      sym_syscall,
    ACTIONS(7), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      sym_exit,
    STATE(24), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [448] = 3,
    ACTIONS(115), 1,
      sym_syscall,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(24), 2,
      sym_line,
      aux_sym_source_file_repeat1,
  [460] = 5,
    ACTIONS(118), 1,
      sym_integer,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_list_repeat1,
    STATE(31), 1,
      sym_string,
  [476] = 5,
    ACTIONS(126), 1,
      sym_integer,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_list_repeat1,
    STATE(31), 1,
      sym_string,
  [492] = 5,
    ACTIONS(126), 1,
      sym_integer,
    ACTIONS(128), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_list_repeat1,
    STATE(31), 1,
      sym_string,
  [508] = 4,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      sym__newline,
    ACTIONS(138), 1,
      sym_errorName,
    STATE(45), 1,
      sym_errorDescription,
  [521] = 3,
    ACTIONS(140), 1,
      sym_integer,
    STATE(57), 1,
      sym_returnValue,
    ACTIONS(142), 2,
      sym_pointer,
      anon_sym_QMARK,
  [532] = 1,
    ACTIONS(73), 4,
      anon_sym_COMMA,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [539] = 2,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 3,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [548] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_dict_repeat1,
  [558] = 3,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_dict_repeat1,
  [568] = 3,
    ACTIONS(157), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(159), 1,
      sym_ident,
    STATE(42), 1,
      sym_dictElem,
  [578] = 1,
    ACTIONS(124), 3,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [584] = 1,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      sym_syscall,
      anon_sym_PLUS_PLUS_PLUS,
  [590] = 3,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym__newline,
    STATE(61), 1,
      sym_errorDescription,
  [600] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_dict_repeat1,
  [610] = 3,
    ACTIONS(159), 1,
      sym_ident,
    ACTIONS(169), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(42), 1,
      sym_dictElem,
  [620] = 2,
    ACTIONS(159), 1,
      sym_ident,
    STATE(42), 1,
      sym_dictElem,
  [627] = 2,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_parameters,
  [634] = 1,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [639] = 1,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [644] = 2,
    ACTIONS(159), 1,
      sym_ident,
    STATE(38), 1,
      sym_dictElem,
  [651] = 1,
    ACTIONS(163), 1,
      sym__newline,
  [655] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
  [659] = 1,
    ACTIONS(175), 1,
      anon_sym_with,
  [663] = 1,
    ACTIONS(177), 1,
      anon_sym_EQ,
  [667] = 1,
    ACTIONS(179), 1,
      aux_sym_errorDescription_token1,
  [671] = 1,
    ACTIONS(181), 1,
      anon_sym_EQ,
  [675] = 1,
    ACTIONS(183), 1,
      anon_sym_EQ,
  [679] = 1,
    ACTIONS(185), 1,
      aux_sym_string_token1,
  [683] = 1,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [687] = 1,
    ACTIONS(189), 1,
      sym_integer,
  [691] = 1,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
  [695] = 1,
    ACTIONS(193), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [699] = 1,
    ACTIONS(195), 1,
      sym__newline,
  [703] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [707] = 1,
    ACTIONS(199), 1,
      sym_ident,
  [711] = 1,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
  [715] = 1,
    ACTIONS(203), 1,
      sym__newline,
  [719] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [723] = 1,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
  [727] = 1,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
  [731] = 1,
    ACTIONS(211), 1,
      sym__newline,
  [735] = 1,
    ACTIONS(213), 1,
      anon_sym_exited,
  [739] = 1,
    ACTIONS(215), 1,
      anon_sym_EQ,
  [743] = 1,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
  [747] = 1,
    ACTIONS(219), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 252,
  [SMALL_STATE(13)] = 269,
  [SMALL_STATE(14)] = 286,
  [SMALL_STATE(15)] = 303,
  [SMALL_STATE(16)] = 320,
  [SMALL_STATE(17)] = 337,
  [SMALL_STATE(18)] = 354,
  [SMALL_STATE(19)] = 372,
  [SMALL_STATE(20)] = 387,
  [SMALL_STATE(21)] = 402,
  [SMALL_STATE(22)] = 418,
  [SMALL_STATE(23)] = 431,
  [SMALL_STATE(24)] = 448,
  [SMALL_STATE(25)] = 460,
  [SMALL_STATE(26)] = 476,
  [SMALL_STATE(27)] = 492,
  [SMALL_STATE(28)] = 508,
  [SMALL_STATE(29)] = 521,
  [SMALL_STATE(30)] = 532,
  [SMALL_STATE(31)] = 539,
  [SMALL_STATE(32)] = 548,
  [SMALL_STATE(33)] = 558,
  [SMALL_STATE(34)] = 568,
  [SMALL_STATE(35)] = 578,
  [SMALL_STATE(36)] = 584,
  [SMALL_STATE(37)] = 590,
  [SMALL_STATE(38)] = 600,
  [SMALL_STATE(39)] = 610,
  [SMALL_STATE(40)] = 620,
  [SMALL_STATE(41)] = 627,
  [SMALL_STATE(42)] = 634,
  [SMALL_STATE(43)] = 639,
  [SMALL_STATE(44)] = 644,
  [SMALL_STATE(45)] = 651,
  [SMALL_STATE(46)] = 655,
  [SMALL_STATE(47)] = 659,
  [SMALL_STATE(48)] = 663,
  [SMALL_STATE(49)] = 667,
  [SMALL_STATE(50)] = 671,
  [SMALL_STATE(51)] = 675,
  [SMALL_STATE(52)] = 679,
  [SMALL_STATE(53)] = 683,
  [SMALL_STATE(54)] = 687,
  [SMALL_STATE(55)] = 691,
  [SMALL_STATE(56)] = 695,
  [SMALL_STATE(57)] = 699,
  [SMALL_STATE(58)] = 703,
  [SMALL_STATE(59)] = 707,
  [SMALL_STATE(60)] = 711,
  [SMALL_STATE(61)] = 715,
  [SMALL_STATE(62)] = 719,
  [SMALL_STATE(63)] = 723,
  [SMALL_STATE(64)] = 727,
  [SMALL_STATE(65)] = 731,
  [SMALL_STATE(66)] = 735,
  [SMALL_STATE(67)] = 739,
  [SMALL_STATE(68)] = 743,
  [SMALL_STATE(69)] = 747,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(52),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(26),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idents, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idents, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_idents, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_idents, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_idents_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_idents_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_idents_repeat1, 2), SHIFT_REPEAT(59),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(31),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(69),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictElem, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnValue, 3),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_errorDescription, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
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
