#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 284
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 14
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
  anon_sym_message = 20,
  anon_sym_optional = 21,
  anon_sym_repeated = 22,
  anon_sym_oneof = 23,
  anon_sym_map = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_int32 = 27,
  anon_sym_int64 = 28,
  anon_sym_uint32 = 29,
  anon_sym_uint64 = 30,
  anon_sym_sint32 = 31,
  anon_sym_sint64 = 32,
  anon_sym_fixed32 = 33,
  anon_sym_fixed64 = 34,
  anon_sym_sfixed32 = 35,
  anon_sym_sfixed64 = 36,
  anon_sym_bool = 37,
  anon_sym_string = 38,
  anon_sym_double = 39,
  anon_sym_float = 40,
  anon_sym_bytes = 41,
  anon_sym_reserved = 42,
  anon_sym_to = 43,
  anon_sym_max = 44,
  anon_sym_service = 45,
  anon_sym_rpc = 46,
  anon_sym_stream = 47,
  anon_sym_returns = 48,
  anon_sym_PLUS = 49,
  anon_sym_COLON = 50,
  sym_identifier = 51,
  sym_true = 52,
  sym_false = 53,
  sym_decimal_lit = 54,
  sym_octal_lit = 55,
  sym_hex_lit = 56,
  sym_float_lit = 57,
  anon_sym_DQUOTE = 58,
  aux_sym_string_token1 = 59,
  anon_sym_SQUOTE = 60,
  aux_sym_string_token2 = 61,
  sym_escape_sequence = 62,
  sym_comment = 63,
  sym_source_file = 64,
  sym_empty_statement = 65,
  sym_syntax = 66,
  sym_import = 67,
  sym_package = 68,
  sym_option = 69,
  sym__option_name = 70,
  sym_enum = 71,
  sym_enum_body = 72,
  sym_enum_field = 73,
  sym_enum_value_option = 74,
  sym_message = 75,
  sym_message_body = 76,
  sym_field = 77,
  sym_field_options = 78,
  sym_field_option = 79,
  sym_oneof = 80,
  sym_oneof_field = 81,
  sym_map_field = 82,
  sym_key_type = 83,
  sym_type = 84,
  sym_reserved = 85,
  sym_ranges = 86,
  sym_range = 87,
  sym_field_names = 88,
  sym_message_or_enum_type = 89,
  sym_field_number = 90,
  sym_service = 91,
  sym_rpc = 92,
  sym_constant = 93,
  sym_block_lit = 94,
  sym_full_ident = 95,
  sym_bool = 96,
  sym_int_lit = 97,
  sym_string = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym__option_name_repeat1 = 100,
  aux_sym_enum_body_repeat1 = 101,
  aux_sym_enum_field_repeat1 = 102,
  aux_sym_message_body_repeat1 = 103,
  aux_sym_field_options_repeat1 = 104,
  aux_sym_oneof_repeat1 = 105,
  aux_sym_ranges_repeat1 = 106,
  aux_sym_field_names_repeat1 = 107,
  aux_sym_message_or_enum_type_repeat1 = 108,
  aux_sym_service_repeat1 = 109,
  aux_sym_rpc_repeat1 = 110,
  aux_sym_block_lit_repeat1 = 111,
  aux_sym_block_lit_repeat2 = 112,
  aux_sym_string_repeat1 = 113,
  aux_sym_string_repeat2 = 114,
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
  [anon_sym_message] = "message",
  [anon_sym_optional] = "optional",
  [anon_sym_repeated] = "repeated",
  [anon_sym_oneof] = "oneof",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_sint32] = "sint32",
  [anon_sym_sint64] = "sint64",
  [anon_sym_fixed32] = "fixed32",
  [anon_sym_fixed64] = "fixed64",
  [anon_sym_sfixed32] = "sfixed32",
  [anon_sym_sfixed64] = "sfixed64",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_bytes] = "bytes",
  [anon_sym_reserved] = "reserved",
  [anon_sym_to] = "to",
  [anon_sym_max] = "max",
  [anon_sym_service] = "service",
  [anon_sym_rpc] = "rpc",
  [anon_sym_stream] = "stream",
  [anon_sym_returns] = "returns",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
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
  [sym_comment] = "comment",
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
  [sym_message] = "message",
  [sym_message_body] = "message_body",
  [sym_field] = "field",
  [sym_field_options] = "field_options",
  [sym_field_option] = "field_option",
  [sym_oneof] = "oneof",
  [sym_oneof_field] = "oneof_field",
  [sym_map_field] = "map_field",
  [sym_key_type] = "key_type",
  [sym_type] = "type",
  [sym_reserved] = "reserved",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_field_names] = "field_names",
  [sym_message_or_enum_type] = "message_or_enum_type",
  [sym_field_number] = "field_number",
  [sym_service] = "service",
  [sym_rpc] = "rpc",
  [sym_constant] = "constant",
  [sym_block_lit] = "block_lit",
  [sym_full_ident] = "full_ident",
  [sym_bool] = "bool",
  [sym_int_lit] = "int_lit",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__option_name_repeat1] = "_option_name_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_enum_field_repeat1] = "enum_field_repeat1",
  [aux_sym_message_body_repeat1] = "message_body_repeat1",
  [aux_sym_field_options_repeat1] = "field_options_repeat1",
  [aux_sym_oneof_repeat1] = "oneof_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_field_names_repeat1] = "field_names_repeat1",
  [aux_sym_message_or_enum_type_repeat1] = "message_or_enum_type_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_rpc_repeat1] = "rpc_repeat1",
  [aux_sym_block_lit_repeat1] = "block_lit_repeat1",
  [aux_sym_block_lit_repeat2] = "block_lit_repeat2",
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
  [anon_sym_message] = anon_sym_message,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_repeated] = anon_sym_repeated,
  [anon_sym_oneof] = anon_sym_oneof,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_sint32] = anon_sym_sint32,
  [anon_sym_sint64] = anon_sym_sint64,
  [anon_sym_fixed32] = anon_sym_fixed32,
  [anon_sym_fixed64] = anon_sym_fixed64,
  [anon_sym_sfixed32] = anon_sym_sfixed32,
  [anon_sym_sfixed64] = anon_sym_sfixed64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_comment] = sym_comment,
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
  [sym_message] = sym_message,
  [sym_message_body] = sym_message_body,
  [sym_field] = sym_field,
  [sym_field_options] = sym_field_options,
  [sym_field_option] = sym_field_option,
  [sym_oneof] = sym_oneof,
  [sym_oneof_field] = sym_oneof_field,
  [sym_map_field] = sym_map_field,
  [sym_key_type] = sym_key_type,
  [sym_type] = sym_type,
  [sym_reserved] = sym_reserved,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_field_names] = sym_field_names,
  [sym_message_or_enum_type] = sym_message_or_enum_type,
  [sym_field_number] = sym_field_number,
  [sym_service] = sym_service,
  [sym_rpc] = sym_rpc,
  [sym_constant] = sym_constant,
  [sym_block_lit] = sym_block_lit,
  [sym_full_ident] = sym_full_ident,
  [sym_bool] = sym_bool,
  [sym_int_lit] = sym_int_lit,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__option_name_repeat1] = aux_sym__option_name_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_enum_field_repeat1] = aux_sym_enum_field_repeat1,
  [aux_sym_message_body_repeat1] = aux_sym_message_body_repeat1,
  [aux_sym_field_options_repeat1] = aux_sym_field_options_repeat1,
  [aux_sym_oneof_repeat1] = aux_sym_oneof_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_field_names_repeat1] = aux_sym_field_names_repeat1,
  [aux_sym_message_or_enum_type_repeat1] = aux_sym_message_or_enum_type_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_rpc_repeat1] = aux_sym_rpc_repeat1,
  [aux_sym_block_lit_repeat1] = aux_sym_block_lit_repeat1,
  [aux_sym_block_lit_repeat2] = aux_sym_block_lit_repeat2,
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
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_comment] = {
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
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_message_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_options] = {
    .visible = true,
    .named = true,
  },
  [sym_field_option] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof_field] = {
    .visible = true,
    .named = true,
  },
  [sym_map_field] = {
    .visible = true,
    .named = true,
  },
  [sym_key_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_field_names] = {
    .visible = true,
    .named = true,
  },
  [sym_message_or_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field_number] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_block_lit] = {
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
  [aux_sym_message_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneof_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ranges_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_or_enum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat2] = {
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
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == '+') ADVANCE(248);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '<') ADVANCE(207);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '+') ADVANCE(248);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(124);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(386);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(362);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(323);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(217);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(221);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(225);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(3);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(211);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(219);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(223);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(227);
      END_STATE();
    case 33:
      if (lookahead == 'U') ADVANCE(169);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(365);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(365);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(247);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 153:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 154:
      if (lookahead == 'x') ADVANCE(242);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(174);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 158:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      if (eof) ADVANCE(172);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == '+') ADVANCE(248);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == '<') ADVANCE(207);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == ']') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(170)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '}') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(250);
      if (lookahead == '6') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(251);
      if (lookahead == '6') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(252);
      if (lookahead == '6') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(253);
      if (lookahead == '6') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(254);
      if (lookahead == '6') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          lookahead == 'o' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(335);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(353);
      if (lookahead == 'o') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'b') ADVANCE(303);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'f') ADVANCE(353);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'f') ADVANCE(204);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'v') ADVANCE(287);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(277);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(353);
      if (lookahead == 'x') ADVANCE(290);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '/') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(379);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 11},
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
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 171},
  [51] = {.lex_state = 171},
  [52] = {.lex_state = 171},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 171},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 171},
  [60] = {.lex_state = 171},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 171},
  [64] = {.lex_state = 171},
  [65] = {.lex_state = 171},
  [66] = {.lex_state = 171},
  [67] = {.lex_state = 171},
  [68] = {.lex_state = 171},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 171},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 171},
  [73] = {.lex_state = 171},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 171},
  [78] = {.lex_state = 171},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 171},
  [81] = {.lex_state = 171},
  [82] = {.lex_state = 171},
  [83] = {.lex_state = 171},
  [84] = {.lex_state = 171},
  [85] = {.lex_state = 171},
  [86] = {.lex_state = 171},
  [87] = {.lex_state = 171},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 171},
  [102] = {.lex_state = 171},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 171},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 171},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 16},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 171},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 171},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 171},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 6},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 6},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 6},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 0},
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
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
    [anon_sym_oneof] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_sint32] = ACTIONS(1),
    [anon_sym_sint64] = ACTIONS(1),
    [anon_sym_fixed32] = ACTIONS(1),
    [anon_sym_fixed64] = ACTIONS(1),
    [anon_sym_sfixed32] = ACTIONS(1),
    [anon_sym_sfixed64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(283),
    [sym_syntax] = STATE(50),
    [anon_sym_syntax] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_type,
    STATE(3), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [77] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      anon_sym_option,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_enum,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_message,
    ACTIONS(50), 1,
      anon_sym_optional,
    ACTIONS(53), 1,
      anon_sym_repeated,
    ACTIONS(56), 1,
      anon_sym_oneof,
    ACTIONS(59), 1,
      anon_sym_map,
    ACTIONS(65), 1,
      anon_sym_reserved,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_type,
    STATE(3), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(62), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [154] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_type,
    STATE(2), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [231] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_type,
    STATE(6), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [308] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_option,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_message,
    ACTIONS(19), 1,
      anon_sym_optional,
    ACTIONS(21), 1,
      anon_sym_repeated,
    ACTIONS(23), 1,
      anon_sym_oneof,
    ACTIONS(25), 1,
      anon_sym_map,
    ACTIONS(29), 1,
      anon_sym_reserved,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(216), 1,
      sym_type,
    STATE(3), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(79), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(83), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(87), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(91), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(95), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [560] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      anon_sym_option,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(225), 1,
      sym_type,
    STATE(28), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(105), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(109), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(113), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(117), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [751] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_option,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(225), 1,
      sym_type,
    STATE(17), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(130), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(138), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(142), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(146), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(150), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(154), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(158), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(162), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(166), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(170), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(174), 24,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_optional,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      sym_identifier,
  [1152] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      anon_sym_option,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(225), 1,
      sym_type,
    STATE(17), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(180), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(186), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(190), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1292] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_repeated,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(246), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1331] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(237), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(79), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(166), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1423] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(261), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(196), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1487] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(196), 1,
      sym_message_or_enum_type,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(246), 1,
      sym_type,
    ACTIONS(27), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1523] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym_hex_lit,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(126), 1,
      sym_constant,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(210), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1573] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(212), 1,
      sym_hex_lit,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      sym_constant,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(210), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1620] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(152), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1664] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(212), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1708] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(172), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1752] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(256), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1796] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(184), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1840] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(268), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1884] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(271), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1928] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(185), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1972] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    ACTIONS(214), 1,
      sym_float_lit,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(272), 1,
      sym_constant,
    ACTIONS(208), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(88), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2016] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      anon_sym_import,
    ACTIONS(234), 1,
      anon_sym_package,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(238), 1,
      anon_sym_enum,
    ACTIONS(240), 1,
      anon_sym_message,
    ACTIONS(242), 1,
      anon_sym_service,
    STATE(52), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2054] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(249), 1,
      anon_sym_import,
    ACTIONS(252), 1,
      anon_sym_package,
    ACTIONS(255), 1,
      anon_sym_option,
    ACTIONS(258), 1,
      anon_sym_enum,
    ACTIONS(261), 1,
      anon_sym_message,
    ACTIONS(264), 1,
      anon_sym_service,
    STATE(51), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2092] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      anon_sym_import,
    ACTIONS(234), 1,
      anon_sym_package,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(238), 1,
      anon_sym_enum,
    ACTIONS(240), 1,
      anon_sym_message,
    ACTIONS(242), 1,
      anon_sym_service,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(51), 8,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_service,
      aux_sym_source_file_repeat1,
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(232), 1,
      sym_key_type,
    ACTIONS(269), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_service,
      anon_sym_rpc,
  [2183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(271), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_option,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(58), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(291), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2312] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      anon_sym_rpc,
    STATE(80), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      anon_sym_option,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      anon_sym_rpc,
    STATE(65), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_option,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      sym_identifier,
    STATE(58), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2434] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_option,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(58), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2484] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(165), 1,
      sym_range,
    STATE(166), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(244), 2,
      sym_ranges,
      sym_field_names,
  [2508] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_option,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(69), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      anon_sym_option,
    ACTIONS(320), 1,
      sym_identifier,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(71), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(334), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(297), 1,
      anon_sym_rpc,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(65), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(85), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2674] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(86), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(349), 1,
      anon_sym_option,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(171), 1,
      sym_field_option,
    STATE(228), 1,
      sym_field_options,
    STATE(238), 1,
      sym__option_name,
  [2787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(362), 1,
      anon_sym_stream,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(224), 1,
      sym_message_or_enum_type,
  [2806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(193), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2823] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(364), 1,
      anon_sym_stream,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(229), 1,
      sym_message_or_enum_type,
  [2842] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(171), 1,
      sym_field_option,
    STATE(217), 1,
      sym_field_options,
    STATE(238), 1,
      sym__option_name,
  [2861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(197), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(213), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [2917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2928] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(370), 1,
      anon_sym_DASH,
    STATE(201), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2945] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_hex_lit,
    ACTIONS(372), 1,
      sym_float_lit,
    STATE(111), 1,
      sym_int_lit,
    ACTIONS(210), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [2962] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_hex_lit,
    ACTIONS(372), 1,
      sym_float_lit,
    STATE(111), 1,
      sym_int_lit,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [2979] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(171), 1,
      sym_field_option,
    STATE(238), 1,
      sym__option_name,
    STATE(254), 1,
      sym_field_options,
  [2998] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_octal_lit,
    STATE(29), 1,
      sym_field_number,
    STATE(31), 1,
      sym_int_lit,
    ACTIONS(374), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3015] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(378), 1,
      anon_sym_stream,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(223), 1,
      sym_message_or_enum_type,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(269), 1,
      sym_string,
    ACTIONS(382), 2,
      anon_sym_weak,
      anon_sym_public,
  [3062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(183), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3079] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(384), 1,
      anon_sym_max,
    STATE(182), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3096] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(166), 1,
      sym_int_lit,
    STATE(203), 1,
      sym_range,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3124] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(171), 1,
      sym_field_option,
    STATE(220), 1,
      sym_field_options,
    STATE(238), 1,
      sym__option_name,
  [3143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3154] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(171), 1,
      sym_field_option,
    STATE(235), 1,
      sym_field_options,
    STATE(238), 1,
      sym__option_name,
  [3173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(390), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(396), 2,
      anon_sym_option,
      sym_identifier,
  [3197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(214), 1,
      sym_field_option,
    STATE(238), 1,
      sym__option_name,
  [3213] = 4,
    ACTIONS(398), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_string_repeat2,
    ACTIONS(400), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3227] = 4,
    ACTIONS(403), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym_string_repeat1,
    ACTIONS(407), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(412), 2,
      anon_sym_option,
      sym_identifier,
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(414), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(206), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(166), 2,
      anon_sym_option,
      sym_identifier,
  [3313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(424), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(233), 1,
      sym_message_or_enum_type,
  [3353] = 4,
    ACTIONS(403), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      aux_sym_string_repeat2,
    ACTIONS(434), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(438), 2,
      anon_sym_option,
      sym_identifier,
  [3379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(155), 1,
      sym_enum_value_option,
    STATE(222), 1,
      sym__option_name,
  [3395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(442), 2,
      anon_sym_option,
      sym_identifier,
  [3407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(186), 1,
      sym_enum_value_option,
    STATE(222), 1,
      sym__option_name,
  [3423] = 4,
    ACTIONS(403), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym_string_repeat1,
    ACTIONS(444), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3437] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(229), 1,
      sym_message_or_enum_type,
  [3453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [3473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(452), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3497] = 4,
    ACTIONS(403), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym_string_repeat1,
    ACTIONS(456), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3511] = 4,
    ACTIONS(403), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      aux_sym_string_repeat2,
    ACTIONS(458), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(79), 2,
      anon_sym_option,
      sym_identifier,
  [3537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(462), 2,
      anon_sym_option,
      sym_identifier,
  [3549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3559] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(198), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(236), 1,
      sym_message_or_enum_type,
  [3575] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(164), 1,
      sym_enum_value_option,
    STATE(222), 1,
      sym__option_name,
  [3591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(470), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(474), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
  [3636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      aux_sym_block_lit_repeat1,
  [3649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      aux_sym_block_lit_repeat1,
  [3662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(480), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
  [3675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(484), 1,
      sym_identifier,
    STATE(174), 1,
      aux_sym_block_lit_repeat2,
  [3688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      aux_sym_enum_field_repeat1,
  [3701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SEMI,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_field_names_repeat1,
  [3714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(494), 1,
      anon_sym_EQ,
    STATE(153), 1,
      aux_sym__option_name_repeat1,
  [3727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_ranges_repeat1,
  [3740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
    STATE(259), 1,
      sym_string,
  [3753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      aux_sym_field_options_repeat1,
  [3766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SEMI,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_field_names_repeat1,
  [3779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      aux_sym_block_lit_repeat1,
  [3792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      aux_sym_block_lit_repeat1,
  [3805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_enum_field_repeat1,
  [3818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_SEMI,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_ranges_repeat1,
  [3831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_to,
    ACTIONS(524), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_enum_field_repeat1,
  [3855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(265), 1,
      sym__option_name,
  [3868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(280), 1,
      sym__option_name,
  [3881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      aux_sym_block_lit_repeat2,
  [3894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_field_options_repeat1,
  [3907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym_block_lit_repeat1,
  [3920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_enum_field_repeat1,
  [3933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(174), 1,
      aux_sym_block_lit_repeat2,
  [3946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_enum_field_repeat1,
  [3959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(546), 1,
      anon_sym_EQ,
    STATE(150), 1,
      aux_sym__option_name_repeat1,
  [3972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      aux_sym_ranges_repeat1,
  [3985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(278), 1,
      sym__option_name,
  [3998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(279), 1,
      sym__option_name,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      aux_sym_field_names_repeat1,
  [4024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      aux_sym_field_options_repeat1,
  [4037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4045] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    ACTIONS(558), 1,
      anon_sym_LBRACK,
  [4055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_identifier,
    STATE(267), 1,
      sym_full_ident,
  [4097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym_identifier,
    STATE(257), 1,
      sym_full_ident,
  [4107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_message_body,
  [4117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_enum_body,
  [4127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_enum_body,
  [4137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_SEMI,
    ACTIONS(572), 1,
      anon_sym_LBRACK,
  [4147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_message_body,
  [4157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_GT,
      sym_identifier,
  [4175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_SEMI,
    ACTIONS(582), 1,
      anon_sym_LBRACK,
  [4185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(200), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      sym_identifier,
    STATE(200), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    STATE(200), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
  [4225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
  [4269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
  [4287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SEMI,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
  [4305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_LBRACK,
  [4331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_COMMA,
  [4346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym_identifier,
  [4353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
  [4360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_EQ,
  [4367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SEMI,
  [4374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACK,
  [4381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SEMI,
  [4388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_EQ,
  [4395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
  [4402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
  [4409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
  [4416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
  [4423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_EQ,
  [4430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
  [4437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [4444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
  [4451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      sym_identifier,
  [4458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COMMA,
  [4465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [4472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_EQ,
  [4479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACK,
  [4486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
  [4493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
  [4500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_EQ,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
  [4514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_SEMI,
  [4521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_identifier,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_EQ,
  [4535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_identifier,
  [4542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_SEMI,
  [4549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
  [4556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_identifier,
  [4563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_SEMI,
  [4570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym_identifier,
  [4577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_EQ,
  [4584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_LPAREN,
  [4591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_EQ,
  [4598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_LT,
  [4605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym_identifier,
  [4612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACK,
  [4619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_EQ,
  [4626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_SEMI,
  [4633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [4640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_identifier,
  [4647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [4654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACE,
  [4661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_GT,
  [4668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_SEMI,
  [4675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SEMI,
  [4682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_returns,
  [4689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_EQ,
  [4696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN,
  [4703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_SEMI,
  [4710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_SEMI,
  [4717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SEMI,
  [4724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_SEMI,
  [4731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SEMI,
  [4738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SEMI,
  [4745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      sym_identifier,
  [4752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_identifier,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      sym_identifier,
  [4766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
  [4773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_identifier,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_EQ,
  [4787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_EQ,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_EQ,
  [4801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_returns,
  [4808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_DQUOTEproto3_DQUOTE,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 420,
  [SMALL_STATE(9)] = 455,
  [SMALL_STATE(10)] = 490,
  [SMALL_STATE(11)] = 525,
  [SMALL_STATE(12)] = 560,
  [SMALL_STATE(13)] = 611,
  [SMALL_STATE(14)] = 646,
  [SMALL_STATE(15)] = 681,
  [SMALL_STATE(16)] = 716,
  [SMALL_STATE(17)] = 751,
  [SMALL_STATE(18)] = 802,
  [SMALL_STATE(19)] = 837,
  [SMALL_STATE(20)] = 872,
  [SMALL_STATE(21)] = 907,
  [SMALL_STATE(22)] = 942,
  [SMALL_STATE(23)] = 977,
  [SMALL_STATE(24)] = 1012,
  [SMALL_STATE(25)] = 1047,
  [SMALL_STATE(26)] = 1082,
  [SMALL_STATE(27)] = 1117,
  [SMALL_STATE(28)] = 1152,
  [SMALL_STATE(29)] = 1203,
  [SMALL_STATE(30)] = 1234,
  [SMALL_STATE(31)] = 1263,
  [SMALL_STATE(32)] = 1292,
  [SMALL_STATE(33)] = 1331,
  [SMALL_STATE(34)] = 1367,
  [SMALL_STATE(35)] = 1395,
  [SMALL_STATE(36)] = 1423,
  [SMALL_STATE(37)] = 1459,
  [SMALL_STATE(38)] = 1487,
  [SMALL_STATE(39)] = 1523,
  [SMALL_STATE(40)] = 1573,
  [SMALL_STATE(41)] = 1620,
  [SMALL_STATE(42)] = 1664,
  [SMALL_STATE(43)] = 1708,
  [SMALL_STATE(44)] = 1752,
  [SMALL_STATE(45)] = 1796,
  [SMALL_STATE(46)] = 1840,
  [SMALL_STATE(47)] = 1884,
  [SMALL_STATE(48)] = 1928,
  [SMALL_STATE(49)] = 1972,
  [SMALL_STATE(50)] = 2016,
  [SMALL_STATE(51)] = 2054,
  [SMALL_STATE(52)] = 2092,
  [SMALL_STATE(53)] = 2130,
  [SMALL_STATE(54)] = 2151,
  [SMALL_STATE(55)] = 2167,
  [SMALL_STATE(56)] = 2183,
  [SMALL_STATE(57)] = 2202,
  [SMALL_STATE(58)] = 2216,
  [SMALL_STATE(59)] = 2238,
  [SMALL_STATE(60)] = 2252,
  [SMALL_STATE(61)] = 2266,
  [SMALL_STATE(62)] = 2284,
  [SMALL_STATE(63)] = 2298,
  [SMALL_STATE(64)] = 2312,
  [SMALL_STATE(65)] = 2334,
  [SMALL_STATE(66)] = 2356,
  [SMALL_STATE(67)] = 2370,
  [SMALL_STATE(68)] = 2384,
  [SMALL_STATE(69)] = 2398,
  [SMALL_STATE(70)] = 2420,
  [SMALL_STATE(71)] = 2434,
  [SMALL_STATE(72)] = 2456,
  [SMALL_STATE(73)] = 2470,
  [SMALL_STATE(74)] = 2484,
  [SMALL_STATE(75)] = 2508,
  [SMALL_STATE(76)] = 2530,
  [SMALL_STATE(77)] = 2552,
  [SMALL_STATE(78)] = 2566,
  [SMALL_STATE(79)] = 2580,
  [SMALL_STATE(80)] = 2598,
  [SMALL_STATE(81)] = 2620,
  [SMALL_STATE(82)] = 2638,
  [SMALL_STATE(83)] = 2656,
  [SMALL_STATE(84)] = 2674,
  [SMALL_STATE(85)] = 2692,
  [SMALL_STATE(86)] = 2710,
  [SMALL_STATE(87)] = 2728,
  [SMALL_STATE(88)] = 2746,
  [SMALL_STATE(89)] = 2757,
  [SMALL_STATE(90)] = 2768,
  [SMALL_STATE(91)] = 2787,
  [SMALL_STATE(92)] = 2806,
  [SMALL_STATE(93)] = 2823,
  [SMALL_STATE(94)] = 2842,
  [SMALL_STATE(95)] = 2861,
  [SMALL_STATE(96)] = 2872,
  [SMALL_STATE(97)] = 2889,
  [SMALL_STATE(98)] = 2906,
  [SMALL_STATE(99)] = 2917,
  [SMALL_STATE(100)] = 2928,
  [SMALL_STATE(101)] = 2945,
  [SMALL_STATE(102)] = 2962,
  [SMALL_STATE(103)] = 2979,
  [SMALL_STATE(104)] = 2998,
  [SMALL_STATE(105)] = 3015,
  [SMALL_STATE(106)] = 3034,
  [SMALL_STATE(107)] = 3045,
  [SMALL_STATE(108)] = 3062,
  [SMALL_STATE(109)] = 3079,
  [SMALL_STATE(110)] = 3096,
  [SMALL_STATE(111)] = 3113,
  [SMALL_STATE(112)] = 3124,
  [SMALL_STATE(113)] = 3143,
  [SMALL_STATE(114)] = 3154,
  [SMALL_STATE(115)] = 3173,
  [SMALL_STATE(116)] = 3185,
  [SMALL_STATE(117)] = 3197,
  [SMALL_STATE(118)] = 3213,
  [SMALL_STATE(119)] = 3227,
  [SMALL_STATE(120)] = 3241,
  [SMALL_STATE(121)] = 3253,
  [SMALL_STATE(122)] = 3265,
  [SMALL_STATE(123)] = 3275,
  [SMALL_STATE(124)] = 3289,
  [SMALL_STATE(125)] = 3301,
  [SMALL_STATE(126)] = 3313,
  [SMALL_STATE(127)] = 3325,
  [SMALL_STATE(128)] = 3337,
  [SMALL_STATE(129)] = 3353,
  [SMALL_STATE(130)] = 3367,
  [SMALL_STATE(131)] = 3379,
  [SMALL_STATE(132)] = 3395,
  [SMALL_STATE(133)] = 3407,
  [SMALL_STATE(134)] = 3423,
  [SMALL_STATE(135)] = 3437,
  [SMALL_STATE(136)] = 3453,
  [SMALL_STATE(137)] = 3463,
  [SMALL_STATE(138)] = 3473,
  [SMALL_STATE(139)] = 3485,
  [SMALL_STATE(140)] = 3497,
  [SMALL_STATE(141)] = 3511,
  [SMALL_STATE(142)] = 3525,
  [SMALL_STATE(143)] = 3537,
  [SMALL_STATE(144)] = 3549,
  [SMALL_STATE(145)] = 3559,
  [SMALL_STATE(146)] = 3575,
  [SMALL_STATE(147)] = 3591,
  [SMALL_STATE(148)] = 3601,
  [SMALL_STATE(149)] = 3613,
  [SMALL_STATE(150)] = 3623,
  [SMALL_STATE(151)] = 3636,
  [SMALL_STATE(152)] = 3649,
  [SMALL_STATE(153)] = 3662,
  [SMALL_STATE(154)] = 3675,
  [SMALL_STATE(155)] = 3688,
  [SMALL_STATE(156)] = 3701,
  [SMALL_STATE(157)] = 3714,
  [SMALL_STATE(158)] = 3727,
  [SMALL_STATE(159)] = 3740,
  [SMALL_STATE(160)] = 3753,
  [SMALL_STATE(161)] = 3766,
  [SMALL_STATE(162)] = 3779,
  [SMALL_STATE(163)] = 3792,
  [SMALL_STATE(164)] = 3805,
  [SMALL_STATE(165)] = 3818,
  [SMALL_STATE(166)] = 3831,
  [SMALL_STATE(167)] = 3842,
  [SMALL_STATE(168)] = 3855,
  [SMALL_STATE(169)] = 3868,
  [SMALL_STATE(170)] = 3881,
  [SMALL_STATE(171)] = 3894,
  [SMALL_STATE(172)] = 3907,
  [SMALL_STATE(173)] = 3920,
  [SMALL_STATE(174)] = 3933,
  [SMALL_STATE(175)] = 3946,
  [SMALL_STATE(176)] = 3959,
  [SMALL_STATE(177)] = 3972,
  [SMALL_STATE(178)] = 3985,
  [SMALL_STATE(179)] = 3998,
  [SMALL_STATE(180)] = 4011,
  [SMALL_STATE(181)] = 4024,
  [SMALL_STATE(182)] = 4037,
  [SMALL_STATE(183)] = 4045,
  [SMALL_STATE(184)] = 4055,
  [SMALL_STATE(185)] = 4063,
  [SMALL_STATE(186)] = 4071,
  [SMALL_STATE(187)] = 4079,
  [SMALL_STATE(188)] = 4087,
  [SMALL_STATE(189)] = 4097,
  [SMALL_STATE(190)] = 4107,
  [SMALL_STATE(191)] = 4117,
  [SMALL_STATE(192)] = 4127,
  [SMALL_STATE(193)] = 4137,
  [SMALL_STATE(194)] = 4147,
  [SMALL_STATE(195)] = 4157,
  [SMALL_STATE(196)] = 4167,
  [SMALL_STATE(197)] = 4175,
  [SMALL_STATE(198)] = 4185,
  [SMALL_STATE(199)] = 4195,
  [SMALL_STATE(200)] = 4205,
  [SMALL_STATE(201)] = 4215,
  [SMALL_STATE(202)] = 4225,
  [SMALL_STATE(203)] = 4235,
  [SMALL_STATE(204)] = 4243,
  [SMALL_STATE(205)] = 4251,
  [SMALL_STATE(206)] = 4259,
  [SMALL_STATE(207)] = 4269,
  [SMALL_STATE(208)] = 4277,
  [SMALL_STATE(209)] = 4287,
  [SMALL_STATE(210)] = 4295,
  [SMALL_STATE(211)] = 4305,
  [SMALL_STATE(212)] = 4313,
  [SMALL_STATE(213)] = 4321,
  [SMALL_STATE(214)] = 4331,
  [SMALL_STATE(215)] = 4339,
  [SMALL_STATE(216)] = 4346,
  [SMALL_STATE(217)] = 4353,
  [SMALL_STATE(218)] = 4360,
  [SMALL_STATE(219)] = 4367,
  [SMALL_STATE(220)] = 4374,
  [SMALL_STATE(221)] = 4381,
  [SMALL_STATE(222)] = 4388,
  [SMALL_STATE(223)] = 4395,
  [SMALL_STATE(224)] = 4402,
  [SMALL_STATE(225)] = 4409,
  [SMALL_STATE(226)] = 4416,
  [SMALL_STATE(227)] = 4423,
  [SMALL_STATE(228)] = 4430,
  [SMALL_STATE(229)] = 4437,
  [SMALL_STATE(230)] = 4444,
  [SMALL_STATE(231)] = 4451,
  [SMALL_STATE(232)] = 4458,
  [SMALL_STATE(233)] = 4465,
  [SMALL_STATE(234)] = 4472,
  [SMALL_STATE(235)] = 4479,
  [SMALL_STATE(236)] = 4486,
  [SMALL_STATE(237)] = 4493,
  [SMALL_STATE(238)] = 4500,
  [SMALL_STATE(239)] = 4507,
  [SMALL_STATE(240)] = 4514,
  [SMALL_STATE(241)] = 4521,
  [SMALL_STATE(242)] = 4528,
  [SMALL_STATE(243)] = 4535,
  [SMALL_STATE(244)] = 4542,
  [SMALL_STATE(245)] = 4549,
  [SMALL_STATE(246)] = 4556,
  [SMALL_STATE(247)] = 4563,
  [SMALL_STATE(248)] = 4570,
  [SMALL_STATE(249)] = 4577,
  [SMALL_STATE(250)] = 4584,
  [SMALL_STATE(251)] = 4591,
  [SMALL_STATE(252)] = 4598,
  [SMALL_STATE(253)] = 4605,
  [SMALL_STATE(254)] = 4612,
  [SMALL_STATE(255)] = 4619,
  [SMALL_STATE(256)] = 4626,
  [SMALL_STATE(257)] = 4633,
  [SMALL_STATE(258)] = 4640,
  [SMALL_STATE(259)] = 4647,
  [SMALL_STATE(260)] = 4654,
  [SMALL_STATE(261)] = 4661,
  [SMALL_STATE(262)] = 4668,
  [SMALL_STATE(263)] = 4675,
  [SMALL_STATE(264)] = 4682,
  [SMALL_STATE(265)] = 4689,
  [SMALL_STATE(266)] = 4696,
  [SMALL_STATE(267)] = 4703,
  [SMALL_STATE(268)] = 4710,
  [SMALL_STATE(269)] = 4717,
  [SMALL_STATE(270)] = 4724,
  [SMALL_STATE(271)] = 4731,
  [SMALL_STATE(272)] = 4738,
  [SMALL_STATE(273)] = 4745,
  [SMALL_STATE(274)] = 4752,
  [SMALL_STATE(275)] = 4759,
  [SMALL_STATE(276)] = 4766,
  [SMALL_STATE(277)] = 4773,
  [SMALL_STATE(278)] = 4780,
  [SMALL_STATE(279)] = 4787,
  [SMALL_STATE(280)] = 4794,
  [SMALL_STATE(281)] = 4801,
  [SMALL_STATE(282)] = 4808,
  [SMALL_STATE(283)] = 4815,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(179),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(195),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(273),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(274),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(32),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(38),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(253),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(252),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(196),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(74),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(139),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(34),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(169),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(195),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(196),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(139),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2), SHIFT_REPEAT(258),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(142),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(178),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(255),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(55),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(168),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(248),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(55),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(168),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(118),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(119),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 6),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2), SHIFT_REPEAT(110),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2), SHIFT_REPEAT(117),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2), SHIFT_REPEAT(231),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2), SHIFT_REPEAT(45),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2), SHIFT_REPEAT(39),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(133),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2), SHIFT_REPEAT(230),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 7),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [747] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
