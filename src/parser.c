#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_SEMI = 1,
  anon_sym_syntax = 2,
  anon_sym_EQ = 3,
  anon_sym_DQUOTEproto3_DQUOTE = 4,
  anon_sym_import = 5,
  anon_sym_weak = 6,
  anon_sym_public = 7,
  anon_sym_package = 8,
  anon_sym_option = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOT = 12,
  anon_sym_enum = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_DASH = 16,
  anon_sym_LBRACK = 17,
  anon_sym_COMMA = 18,
  anon_sym_RBRACK = 19,
  anon_sym_PLUS = 20,
  sym_identifier = 21,
  sym_true = 22,
  sym_false = 23,
  sym_decimal_lit = 24,
  sym_octal_lit = 25,
  sym_hex_lit = 26,
  sym_float_lit = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_token1 = 29,
  anon_sym_SQUOTE = 30,
  aux_sym_string_token2 = 31,
  sym_escape_sequence = 32,
  sym_source_file = 33,
  sym_empty_statement = 34,
  sym_syntax = 35,
  sym_import = 36,
  sym_package = 37,
  sym_option = 38,
  sym__option_name = 39,
  sym_enum = 40,
  sym_enum_body = 41,
  sym_enum_field = 42,
  sym_enum_value_option = 43,
  sym_constant = 44,
  sym_full_ident = 45,
  sym_bool = 46,
  sym_int_lit = 47,
  sym_string = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym__option_name_repeat1 = 50,
  aux_sym_enum_body_repeat1 = 51,
  aux_sym_enum_field_repeat1 = 52,
  aux_sym_string_repeat1 = 53,
  aux_sym_string_repeat2 = 54,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTEproto3_DQUOTE] = "\"proto3\"",
  [anon_sym_import] = "import",
  [anon_sym_weak] = "weak",
  [anon_sym_public] = "public",
  [anon_sym_package] = "package",
  [anon_sym_option] = "option",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_decimal_lit] = "decimal_lit",
  [sym_octal_lit] = "octal_lit",
  [sym_hex_lit] = "hex_lit",
  [sym_float_lit] = "float_lit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_source_file] = "source_file",
  [sym_empty_statement] = "empty_statement",
  [sym_syntax] = "syntax",
  [sym_import] = "import",
  [sym_package] = "package",
  [sym_option] = "option",
  [sym__option_name] = "_option_name",
  [sym_enum] = "enum",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_enum_value_option] = "enum_value_option",
  [sym_constant] = "constant",
  [sym_full_ident] = "full_ident",
  [sym_bool] = "bool",
  [sym_int_lit] = "int_lit",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__option_name_repeat1] = "_option_name_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_enum_field_repeat1] = "enum_field_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTEproto3_DQUOTE] = anon_sym_DQUOTEproto3_DQUOTE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_octal_lit] = sym_octal_lit,
  [sym_hex_lit] = sym_hex_lit,
  [sym_float_lit] = sym_float_lit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym_empty_statement] = sym_empty_statement,
  [sym_syntax] = sym_syntax,
  [sym_import] = sym_import,
  [sym_package] = sym_package,
  [sym_option] = sym_option,
  [sym__option_name] = sym__option_name,
  [sym_enum] = sym_enum,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_value_option] = sym_enum_value_option,
  [sym_constant] = sym_constant,
  [sym_full_ident] = sym_full_ident,
  [sym_bool] = sym_bool,
  [sym_int_lit] = sym_int_lit,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__option_name_repeat1] = aux_sym__option_name_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_enum_field_repeat1] = aux_sym_enum_field_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEproto3_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__option_name] = {
    .visible = false,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value_option] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__option_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_path = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_path, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(75);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 'U') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 56:
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
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
      if (eof) ADVANCE(71);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(85),
    [sym_syntax] = STATE(5),
    [anon_sym_syntax] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_hex_lit,
    ACTIONS(15), 1,
      sym_float_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      sym_constant,
    ACTIONS(5), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_true,
      sym_false,
    ACTIONS(11), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(48), 4,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [37] = 10,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_hex_lit,
    ACTIONS(15), 1,
      sym_float_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_constant,
    ACTIONS(5), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_true,
      sym_false,
    ACTIONS(11), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(48), 4,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [74] = 10,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_hex_lit,
    ACTIONS(15), 1,
      sym_float_lit,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_constant,
    ACTIONS(5), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(9), 2,
      sym_true,
      sym_false,
    ACTIONS(11), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(48), 4,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [111] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      anon_sym_import,
    ACTIONS(27), 1,
      anon_sym_package,
    ACTIONS(29), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      anon_sym_enum,
    STATE(7), 6,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      aux_sym_source_file_repeat1,
  [138] = 7,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      anon_sym_import,
    ACTIONS(41), 1,
      anon_sym_package,
    ACTIONS(44), 1,
      anon_sym_option,
    ACTIONS(47), 1,
      anon_sym_enum,
    STATE(6), 6,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      aux_sym_source_file_repeat1,
  [165] = 7,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(25), 1,
      anon_sym_import,
    ACTIONS(27), 1,
      anon_sym_package,
    ACTIONS(29), 1,
      anon_sym_option,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(6), 6,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      aux_sym_source_file_repeat1,
  [192] = 5,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    ACTIONS(54), 1,
      anon_sym_option,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(9), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [211] = 5,
    ACTIONS(52), 1,
      anon_sym_SEMI,
    ACTIONS(54), 1,
      anon_sym_option,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(10), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [230] = 5,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_option,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(10), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [249] = 3,
    ACTIONS(75), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(73), 5,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [263] = 1,
    ACTIONS(78), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
  [272] = 1,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
  [281] = 1,
    ACTIONS(73), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [290] = 1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
  [299] = 1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
  [308] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(86), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [321] = 1,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
  [330] = 1,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
  [339] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(11), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(94), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [352] = 1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
  [361] = 1,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
  [370] = 1,
    ACTIONS(100), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
  [379] = 4,
    ACTIONS(11), 1,
      sym_octal_lit,
    ACTIONS(102), 1,
      anon_sym_DASH,
    STATE(66), 1,
      sym_int_lit,
    ACTIONS(13), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [393] = 4,
    ACTIONS(13), 1,
      sym_hex_lit,
    ACTIONS(104), 1,
      sym_float_lit,
    STATE(54), 1,
      sym_int_lit,
    ACTIONS(11), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [407] = 4,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym_string,
    ACTIONS(106), 2,
      anon_sym_weak,
      anon_sym_public,
  [421] = 2,
    ACTIONS(108), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(110), 2,
      anon_sym_option,
      sym_identifier,
  [430] = 3,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(114), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [441] = 3,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat2,
    ACTIONS(116), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [452] = 2,
    ACTIONS(118), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(120), 2,
      anon_sym_option,
      sym_identifier,
  [461] = 4,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(45), 1,
      sym_enum_value_option,
    STATE(75), 1,
      sym__option_name,
  [474] = 2,
    ACTIONS(126), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(128), 2,
      anon_sym_option,
      sym_identifier,
  [483] = 1,
    ACTIONS(130), 4,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [490] = 2,
    ACTIONS(78), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(132), 2,
      anon_sym_option,
      sym_identifier,
  [499] = 2,
    ACTIONS(134), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(136), 2,
      anon_sym_option,
      sym_identifier,
  [508] = 4,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(50), 1,
      sym_enum_value_option,
    STATE(75), 1,
      sym__option_name,
  [521] = 2,
    ACTIONS(138), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(140), 2,
      anon_sym_option,
      sym_identifier,
  [530] = 3,
    ACTIONS(142), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat2,
    ACTIONS(144), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [541] = 3,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat1,
    ACTIONS(146), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [552] = 3,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      aux_sym_string_repeat1,
    ACTIONS(150), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [563] = 3,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      aux_sym_string_repeat2,
    ACTIONS(155), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [574] = 4,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(67), 1,
      sym_enum_value_option,
    STATE(75), 1,
      sym__option_name,
  [587] = 2,
    ACTIONS(90), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(158), 2,
      anon_sym_option,
      sym_identifier,
  [596] = 3,
    ACTIONS(11), 1,
      sym_octal_lit,
    STATE(64), 1,
      sym_int_lit,
    ACTIONS(13), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [607] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_enum_field_repeat1,
  [617] = 1,
    ACTIONS(164), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [623] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(166), 1,
      anon_sym_EQ,
    STATE(53), 1,
      aux_sym__option_name_repeat1,
  [633] = 1,
    ACTIONS(168), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [639] = 3,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(86), 1,
      sym__option_name,
  [649] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      aux_sym_enum_field_repeat1,
  [659] = 3,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(76), 1,
      sym__option_name,
  [669] = 1,
    ACTIONS(172), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [675] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      anon_sym_EQ,
    STATE(11), 1,
      aux_sym__option_name_repeat1,
  [685] = 1,
    ACTIONS(176), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [691] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(178), 1,
      anon_sym_EQ,
    STATE(11), 1,
      aux_sym__option_name_repeat1,
  [701] = 3,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym_string,
  [711] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_enum_field_repeat1,
  [721] = 1,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [727] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_enum_field_repeat1,
  [737] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_enum_field_repeat1,
  [747] = 3,
    ACTIONS(88), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_EQ,
    STATE(55), 1,
      aux_sym__option_name_repeat1,
  [757] = 2,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_enum_body,
  [764] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [769] = 2,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
  [776] = 2,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(69), 1,
      sym_full_ident,
  [783] = 2,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
  [790] = 1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [795] = 2,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(74), 1,
      sym_full_ident,
  [802] = 1,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
  [806] = 1,
    ACTIONS(207), 1,
      anon_sym_SEMI,
  [810] = 1,
    ACTIONS(209), 1,
      anon_sym_SEMI,
  [814] = 1,
    ACTIONS(211), 1,
      anon_sym_SEMI,
  [818] = 1,
    ACTIONS(213), 1,
      anon_sym_SEMI,
  [822] = 1,
    ACTIONS(215), 1,
      anon_sym_SEMI,
  [826] = 1,
    ACTIONS(217), 1,
      anon_sym_EQ,
  [830] = 1,
    ACTIONS(219), 1,
      anon_sym_EQ,
  [834] = 1,
    ACTIONS(221), 1,
      anon_sym_SEMI,
  [838] = 1,
    ACTIONS(223), 1,
      anon_sym_SEMI,
  [842] = 1,
    ACTIONS(225), 1,
      sym_identifier,
  [846] = 1,
    ACTIONS(227), 1,
      anon_sym_SEMI,
  [850] = 1,
    ACTIONS(229), 1,
      sym_identifier,
  [854] = 1,
    ACTIONS(231), 1,
      anon_sym_EQ,
  [858] = 1,
    ACTIONS(233), 1,
      anon_sym_DQUOTEproto3_DQUOTE,
  [862] = 1,
    ACTIONS(235), 1,
      anon_sym_SEMI,
  [866] = 1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [870] = 1,
    ACTIONS(239), 1,
      anon_sym_EQ,
  [874] = 1,
    ACTIONS(241), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 211,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 249,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 272,
  [SMALL_STATE(14)] = 281,
  [SMALL_STATE(15)] = 290,
  [SMALL_STATE(16)] = 299,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 321,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 339,
  [SMALL_STATE(21)] = 352,
  [SMALL_STATE(22)] = 361,
  [SMALL_STATE(23)] = 370,
  [SMALL_STATE(24)] = 379,
  [SMALL_STATE(25)] = 393,
  [SMALL_STATE(26)] = 407,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 430,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 452,
  [SMALL_STATE(31)] = 461,
  [SMALL_STATE(32)] = 474,
  [SMALL_STATE(33)] = 483,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 499,
  [SMALL_STATE(36)] = 508,
  [SMALL_STATE(37)] = 521,
  [SMALL_STATE(38)] = 530,
  [SMALL_STATE(39)] = 541,
  [SMALL_STATE(40)] = 552,
  [SMALL_STATE(41)] = 563,
  [SMALL_STATE(42)] = 574,
  [SMALL_STATE(43)] = 587,
  [SMALL_STATE(44)] = 596,
  [SMALL_STATE(45)] = 607,
  [SMALL_STATE(46)] = 617,
  [SMALL_STATE(47)] = 623,
  [SMALL_STATE(48)] = 633,
  [SMALL_STATE(49)] = 639,
  [SMALL_STATE(50)] = 649,
  [SMALL_STATE(51)] = 659,
  [SMALL_STATE(52)] = 669,
  [SMALL_STATE(53)] = 675,
  [SMALL_STATE(54)] = 685,
  [SMALL_STATE(55)] = 691,
  [SMALL_STATE(56)] = 701,
  [SMALL_STATE(57)] = 711,
  [SMALL_STATE(58)] = 721,
  [SMALL_STATE(59)] = 727,
  [SMALL_STATE(60)] = 737,
  [SMALL_STATE(61)] = 747,
  [SMALL_STATE(62)] = 757,
  [SMALL_STATE(63)] = 764,
  [SMALL_STATE(64)] = 769,
  [SMALL_STATE(65)] = 776,
  [SMALL_STATE(66)] = 783,
  [SMALL_STATE(67)] = 790,
  [SMALL_STATE(68)] = 795,
  [SMALL_STATE(69)] = 802,
  [SMALL_STATE(70)] = 806,
  [SMALL_STATE(71)] = 810,
  [SMALL_STATE(72)] = 814,
  [SMALL_STATE(73)] = 818,
  [SMALL_STATE(74)] = 822,
  [SMALL_STATE(75)] = 826,
  [SMALL_STATE(76)] = 830,
  [SMALL_STATE(77)] = 834,
  [SMALL_STATE(78)] = 838,
  [SMALL_STATE(79)] = 842,
  [SMALL_STATE(80)] = 846,
  [SMALL_STATE(81)] = 850,
  [SMALL_STATE(82)] = 854,
  [SMALL_STATE(83)] = 858,
  [SMALL_STATE(84)] = 862,
  [SMALL_STATE(85)] = 866,
  [SMALL_STATE(86)] = 870,
  [SMALL_STATE(87)] = 874,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(43),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(49),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(82),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2), SHIFT_REPEAT(81),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(41),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(42),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_proto(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
