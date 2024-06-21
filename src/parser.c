#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 288
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
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
  sym_reserved_identifier = 52,
  sym_true = 53,
  sym_false = 54,
  sym_decimal_lit = 55,
  sym_octal_lit = 56,
  sym_hex_lit = 57,
  sym_float_lit = 58,
  anon_sym_DQUOTE = 59,
  aux_sym_string_token1 = 60,
  anon_sym_SQUOTE = 61,
  aux_sym_string_token2 = 62,
  sym_escape_sequence = 63,
  sym_comment = 64,
  sym_source_file = 65,
  sym_empty_statement = 66,
  sym_syntax = 67,
  sym_import = 68,
  sym_package = 69,
  sym_option = 70,
  sym__option_name = 71,
  sym_enum = 72,
  sym_enum_name = 73,
  sym_enum_body = 74,
  sym_enum_field = 75,
  sym_enum_value_option = 76,
  sym_message = 77,
  sym_message_body = 78,
  sym_message_name = 79,
  sym_field = 80,
  sym_field_options = 81,
  sym_field_option = 82,
  sym_oneof = 83,
  sym_oneof_field = 84,
  sym_map_field = 85,
  sym_key_type = 86,
  sym_type = 87,
  sym_reserved = 88,
  sym_ranges = 89,
  sym_range = 90,
  sym_reserved_field_names = 91,
  sym_message_or_enum_type = 92,
  sym_field_number = 93,
  sym_service = 94,
  sym_service_name = 95,
  sym_rpc = 96,
  sym_rpc_name = 97,
  sym_constant = 98,
  sym_block_lit = 99,
  sym_full_ident = 100,
  sym_bool = 101,
  sym_int_lit = 102,
  sym_string = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym__option_name_repeat1 = 105,
  aux_sym_enum_body_repeat1 = 106,
  aux_sym_enum_field_repeat1 = 107,
  aux_sym_message_body_repeat1 = 108,
  aux_sym_field_options_repeat1 = 109,
  aux_sym_oneof_repeat1 = 110,
  aux_sym_ranges_repeat1 = 111,
  aux_sym_reserved_field_names_repeat1 = 112,
  aux_sym_message_or_enum_type_repeat1 = 113,
  aux_sym_service_repeat1 = 114,
  aux_sym_rpc_repeat1 = 115,
  aux_sym_block_lit_repeat1 = 116,
  aux_sym_block_lit_repeat2 = 117,
  aux_sym_string_repeat1 = 118,
  aux_sym_string_repeat2 = 119,
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
  [sym_reserved_identifier] = "reserved_identifier",
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
  [sym_enum_name] = "enum_name",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_enum_value_option] = "enum_value_option",
  [sym_message] = "message",
  [sym_message_body] = "message_body",
  [sym_message_name] = "message_name",
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
  [sym_reserved_field_names] = "reserved_field_names",
  [sym_message_or_enum_type] = "message_or_enum_type",
  [sym_field_number] = "field_number",
  [sym_service] = "service",
  [sym_service_name] = "service_name",
  [sym_rpc] = "rpc",
  [sym_rpc_name] = "rpc_name",
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
  [aux_sym_reserved_field_names_repeat1] = "reserved_field_names_repeat1",
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
  [sym_reserved_identifier] = sym_reserved_identifier,
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
  [sym_enum_name] = sym_enum_name,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_value_option] = sym_enum_value_option,
  [sym_message] = sym_message,
  [sym_message_body] = sym_message_body,
  [sym_message_name] = sym_message_name,
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
  [sym_reserved_field_names] = sym_reserved_field_names,
  [sym_message_or_enum_type] = sym_message_or_enum_type,
  [sym_field_number] = sym_field_number,
  [sym_service] = sym_service,
  [sym_service_name] = sym_service_name,
  [sym_rpc] = sym_rpc,
  [sym_rpc_name] = sym_rpc_name,
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
  [aux_sym_reserved_field_names_repeat1] = aux_sym_reserved_field_names_repeat1,
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
  [sym_reserved_identifier] = {
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
  [sym_enum_name] = {
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
  [sym_message_name] = {
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
  [sym_reserved_field_names] = {
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
  [sym_service_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_name] = {
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
  [aux_sym_reserved_field_names_repeat1] = {
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

enum ts_field_identifiers {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
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
  [35] = 18,
  [36] = 16,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 18,
  [55] = 16,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 25,
  [60] = 23,
  [61] = 61,
  [62] = 22,
  [63] = 8,
  [64] = 64,
  [65] = 7,
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
  [76] = 21,
  [77] = 77,
  [78] = 61,
  [79] = 79,
  [80] = 68,
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
  [102] = 31,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 88,
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
  [127] = 18,
  [128] = 128,
  [129] = 129,
  [130] = 31,
  [131] = 131,
  [132] = 16,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 163,
  [176] = 176,
  [177] = 163,
  [178] = 178,
  [179] = 179,
  [180] = 163,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 182,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 189,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 213,
  [219] = 212,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 233,
  [273] = 273,
  [274] = 274,
  [275] = 233,
  [276] = 233,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 258,
  [283] = 258,
  [284] = 258,
  [285] = 285,
  [286] = 286,
  [287] = 287,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '"', 371,
        '\'', 378,
        '(', 187,
        ')', 188,
        '+', 250,
        ',', 197,
        '-', 195,
        '.', 190,
        '/', 9,
        '0', 363,
        ':', 251,
        ';', 175,
        '<', 209,
        '=', 177,
        '>', 210,
        '[', 196,
        '\\', 34,
        ']', 198,
        'b', 115,
        'd', 111,
        'e', 105,
        'f', 35,
        'i', 97,
        'm', 36,
        'n', 40,
        'o', 104,
        'p', 38,
        'r', 59,
        's', 61,
        't', 112,
        'u', 89,
        'w', 69,
        '{', 193,
        '}', 194,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(172);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 371,
        '\'', 378,
        '+', 250,
        '-', 195,
        '.', 160,
        '/', 9,
        '0', 363,
        ':', 251,
        '[', 196,
        'f', 271,
        'i', 317,
        'n', 272,
        't', 333,
        '{', 193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '/') ADVANCE(373);
      if (lookahead == '\\') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 171,
        '-', 195,
        '.', 189,
        '/', 9,
        '0', 365,
        ';', 175,
        '=', 177,
        'b', 325,
        'd', 321,
        'e', 316,
        'f', 299,
        'i', 315,
        'm', 267,
        'o', 314,
        'r', 279,
        's', 296,
        'u', 303,
        '}', 194,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(178);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 125,
        '.', 189,
        '/', 9,
        ';', 175,
        '[', 196,
        'b', 325,
        'd', 321,
        'f', 299,
        'i', 315,
        'o', 331,
        's', 296,
        'u', 303,
        '}', 194,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '(', 187,
        ')', 188,
        ',', 197,
        '.', 189,
        '/', 9,
        ';', 175,
        '=', 177,
        '>', 210,
        ']', 198,
        '}', 194,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(389);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(388);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '.', 189,
        '/', 9,
        'b', 325,
        'd', 321,
        'f', 299,
        'i', 315,
        'r', 287,
        's', 296,
        'u', 303,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '.', 189,
        '/', 9,
        'b', 325,
        'd', 321,
        'f', 299,
        'i', 315,
        's', 296,
        'u', 303,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 's') ADVANCE(344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(365);
      if (lookahead == 'm') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '}') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(211);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(219);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(215);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(223);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(227);
      END_STATE();
    case 23:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(5);
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
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(213);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(221);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(217);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(225);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(229);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 80:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'x') ADVANCE(244);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 153:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 154:
      if (lookahead == 'v') ADVANCE(71);
      END_STATE();
    case 155:
      if (lookahead == 'x') ADVANCE(244);
      END_STATE();
    case 156:
      if (lookahead == 'x') ADVANCE(176);
      END_STATE();
    case 157:
      if (lookahead == 'x') ADVANCE(62);
      END_STATE();
    case 158:
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 159:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 171:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 172:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '"', 371,
        '\'', 378,
        '(', 187,
        ')', 188,
        '+', 250,
        ',', 197,
        '-', 195,
        '.', 190,
        '/', 9,
        '0', 363,
        ':', 251,
        ';', 175,
        '<', 209,
        '=', 177,
        '>', 210,
        '[', 196,
        ']', 198,
        'b', 115,
        'd', 111,
        'e', 105,
        'f', 35,
        'i', 97,
        'm', 36,
        'n', 40,
        'o', 104,
        'p', 38,
        'r', 59,
        's', 61,
        't', 112,
        'u', 89,
        'w', 69,
        '{', 193,
        '}', 194,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(172);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 173:
      if (eof) ADVANCE(174);
      ADVANCE_MAP(
        '.', 160,
        '/', 9,
        '0', 363,
        ';', 175,
        'e', 105,
        'i', 98,
        'm', 58,
        'n', 40,
        'o', 127,
        'p', 37,
        'r', 123,
        's', 60,
        '}', 194,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(173);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(252);
      if (lookahead == '6') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(253);
      if (lookahead == '6') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(254);
      if (lookahead == '6') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(255);
      if (lookahead == '6') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(256);
      if (lookahead == '6') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == 'l') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'y') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(289);
      if (lookahead == 's') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_reserved_identifier);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(355);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(163);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '/') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '/') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(384);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(382);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(380);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(385);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(389);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 6},
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
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 14},
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
  [50] = {.lex_state = 173},
  [51] = {.lex_state = 173},
  [52] = {.lex_state = 173},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 173},
  [55] = {.lex_state = 173},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 173},
  [60] = {.lex_state = 173},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 173},
  [63] = {.lex_state = 173},
  [64] = {.lex_state = 173},
  [65] = {.lex_state = 173},
  [66] = {.lex_state = 173},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 173},
  [70] = {.lex_state = 173},
  [71] = {.lex_state = 173},
  [72] = {.lex_state = 173},
  [73] = {.lex_state = 173},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 173},
  [76] = {.lex_state = 173},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 173},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 173},
  [82] = {.lex_state = 173},
  [83] = {.lex_state = 173},
  [84] = {.lex_state = 173},
  [85] = {.lex_state = 173},
  [86] = {.lex_state = 173},
  [87] = {.lex_state = 173},
  [88] = {.lex_state = 173},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 173},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 15},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 173},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 173},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 173},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 17},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 173},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 17},
  [148] = {.lex_state = 173},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 8},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 8},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 6},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
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
    [sym_source_file] = STATE(281),
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
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(240), 1,
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
  [77] = 18,
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
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(240), 1,
      sym_type,
    STATE(5), 9,
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
  [154] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      anon_sym_option,
    ACTIONS(41), 1,
      anon_sym_DOT,
    ACTIONS(44), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_message,
    ACTIONS(52), 1,
      anon_sym_optional,
    ACTIONS(55), 1,
      anon_sym_repeated,
    ACTIONS(58), 1,
      anon_sym_oneof,
    ACTIONS(61), 1,
      anon_sym_map,
    ACTIONS(67), 1,
      anon_sym_reserved,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(240), 1,
      sym_type,
    STATE(4), 9,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      aux_sym_message_body_repeat1,
    ACTIONS(64), 15,
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
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(240), 1,
      sym_type,
    STATE(4), 9,
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
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(240), 1,
      sym_type,
    STATE(4), 9,
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
  [455] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      anon_sym_option,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(271), 1,
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
  [506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(93), 24,
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
  [541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(97), 24,
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
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(101), 24,
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
  [751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(121), 24,
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
  [786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(125), 24,
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
  [821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(129), 24,
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
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(133), 24,
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
  [891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(137), 24,
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
  [926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(141), 24,
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
  [961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(145), 24,
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
  [996] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    ACTIONS(150), 1,
      anon_sym_option,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(271), 1,
      sym_type,
    STATE(24), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(158), 15,
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
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      anon_sym_option,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(271), 1,
      sym_type,
    STATE(24), 4,
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
  [1234] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_repeated,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(259), 1,
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
  [1273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(188), 17,
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
  [1302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(192), 17,
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
  [1331] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym_hex_lit,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    STATE(143), 1,
      sym_constant,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(206), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(259), 1,
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
  [1417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(125), 17,
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
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(117), 17,
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
  [1473] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
    STATE(236), 1,
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
  [1509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(218), 17,
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
  [1537] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(203), 1,
      sym_message_or_enum_type,
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
  [1573] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym_hex_lit,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_constant,
    ACTIONS(196), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(206), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1620] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(209), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1664] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(154), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1708] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(275), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1752] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(276), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1796] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(272), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1840] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(186), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1884] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(168), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1928] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(194), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1972] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(210), 1,
      sym_float_lit,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    ACTIONS(226), 1,
      sym_hex_lit,
    STATE(233), 1,
      sym_constant,
    ACTIONS(204), 2,
      sym_true,
      sym_false,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(96), 5,
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
    STATE(51), 8,
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
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(52), 8,
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
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      anon_sym_import,
    ACTIONS(254), 1,
      anon_sym_package,
    ACTIONS(257), 1,
      anon_sym_option,
    ACTIONS(260), 1,
      anon_sym_enum,
    ACTIONS(263), 1,
      anon_sym_message,
    ACTIONS(266), 1,
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
  [2130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(285), 1,
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
    ACTIONS(123), 10,
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
    ACTIONS(115), 10,
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
  [2202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(276), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2220] = 2,
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
  [2234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2262] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_option,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(77), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 8,
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
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      anon_sym_rpc,
    STATE(75), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2362] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(294), 1,
      sym_reserved_identifier,
    STATE(151), 1,
      sym_range,
    STATE(164), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(264), 2,
      sym_ranges,
      sym_reserved_field_names,
  [2386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_option,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(61), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2422] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SEMI,
    ACTIONS(303), 1,
      anon_sym_option,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      anon_sym_rpc,
    STATE(70), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2486] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(317), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2504] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(290), 1,
      anon_sym_rpc,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(70), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2540] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(324), 1,
      anon_sym_option,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 1,
      sym_identifier,
    STATE(77), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_option,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(77), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_service,
  [2598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_option,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    STATE(78), 4,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      aux_sym_enum_body_repeat1,
  [2620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(86), 3,
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
    STATE(83), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_option,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
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
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
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
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    STATE(82), 3,
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
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_option,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    STATE(84), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [2746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_hex_lit,
    ACTIONS(354), 1,
      sym_float_lit,
    STATE(94), 1,
      sym_int_lit,
    ACTIONS(224), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [2763] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(152), 1,
      sym_field_option,
    STATE(250), 1,
      sym_field_options,
    STATE(251), 1,
      sym__option_name,
  [2782] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(152), 1,
      sym_field_option,
    STATE(241), 1,
      sym_field_options,
    STATE(251), 1,
      sym__option_name,
  [2801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2812] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(152), 1,
      sym_field_option,
    STATE(234), 1,
      sym_field_options,
    STATE(251), 1,
      sym__option_name,
  [2831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(215), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(185), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(366), 1,
      anon_sym_DASH,
    STATE(188), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2904] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(152), 1,
      sym_field_option,
    STATE(226), 1,
      sym_field_options,
    STATE(251), 1,
      sym__option_name,
  [2923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_octal_lit,
    STATE(29), 1,
      sym_field_number,
    STATE(32), 1,
      sym_int_lit,
    ACTIONS(368), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [2940] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_stream,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(222), 1,
      sym_message_or_enum_type,
  [2959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    STATE(263), 1,
      sym_string,
    ACTIONS(374), 2,
      anon_sym_weak,
      anon_sym_public,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [2987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(192), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(197), 1,
      sym_field_number,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3032] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(378), 1,
      anon_sym_stream,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(229), 1,
      sym_message_or_enum_type,
  [3051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3062] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(152), 1,
      sym_field_option,
    STATE(239), 1,
      sym_field_options,
    STATE(251), 1,
      sym__option_name,
  [3081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3103] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_hex_lit,
    ACTIONS(354), 1,
      sym_float_lit,
    STATE(94), 1,
      sym_int_lit,
    ACTIONS(206), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(164), 1,
      sym_int_lit,
    STATE(204), 1,
      sym_range,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3137] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(386), 1,
      anon_sym_stream,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(267), 1,
      sym_message_or_enum_type,
  [3156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    ACTIONS(388), 1,
      anon_sym_max,
    STATE(201), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(390), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(256), 1,
      sym_message_or_enum_type,
  [3201] = 4,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym_string_repeat1,
    ACTIONS(398), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_octal_lit,
    STATE(214), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3229] = 4,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      aux_sym_string_repeat1,
    ACTIONS(404), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(407), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
    ACTIONS(411), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [3277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3287] = 4,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      aux_sym_string_repeat2,
    ACTIONS(417), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(195), 1,
      sym_enum_value_option,
    STATE(221), 1,
      sym__option_name,
  [3317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(422), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(125), 2,
      anon_sym_option,
      sym_identifier,
  [3341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(235), 1,
      sym_message_or_enum_type,
  [3357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [3377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(117), 2,
      anon_sym_option,
      sym_identifier,
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(432), 2,
      anon_sym_option,
      sym_identifier,
  [3413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(436), 2,
      anon_sym_option,
      sym_identifier,
  [3425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(159), 1,
      sym_enum_value_option,
    STATE(221), 1,
      sym__option_name,
  [3441] = 4,
    ACTIONS(396), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_string_repeat2,
    ACTIONS(438), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DOT,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(199), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(229), 1,
      sym_message_or_enum_type,
  [3471] = 4,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
    STATE(136), 1,
      aux_sym_string_repeat2,
    ACTIONS(442), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [3485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(446), 2,
      anon_sym_option,
      sym_identifier,
  [3497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3509] = 4,
    ACTIONS(400), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      aux_sym_string_repeat1,
    ACTIONS(452), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(210), 1,
      sym_field_option,
    STATE(251), 1,
      sym__option_name,
  [3539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(456), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3561] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(173), 1,
      sym_enum_value_option,
    STATE(221), 1,
      sym__option_name,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(462), 2,
      anon_sym_option,
      sym_identifier,
  [3589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(466), 2,
      anon_sym_option,
      sym_identifier,
  [3601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [3611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(472), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3623] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    ACTIONS(476), 1,
      sym_identifier,
    STATE(178), 1,
      aux_sym_block_lit_repeat2,
  [3636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_ranges_repeat1,
  [3649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      aux_sym_field_options_repeat1,
  [3662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      aux_sym_block_lit_repeat1,
  [3675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      aux_sym_block_lit_repeat1,
  [3688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_enum_field_repeat1,
  [3701] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_enum_field_repeat1,
  [3714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_SEMI,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_ranges_repeat1,
  [3727] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      sym_string,
  [3740] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_enum_field_repeat1,
  [3753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(506), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
  [3766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      aux_sym_field_options_repeat1,
  [3779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      aux_sym_field_options_repeat1,
  [3792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(258), 1,
      sym__option_name,
  [3805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_to,
    ACTIONS(515), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_SEMI,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_reserved_field_names_repeat1,
  [3829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_SEMI,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_reserved_field_names_repeat1,
  [3842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(528), 1,
      anon_sym_EQ,
    STATE(160), 1,
      aux_sym__option_name_repeat1,
  [3855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      aux_sym_block_lit_repeat1,
  [3868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      aux_sym_ranges_repeat1,
  [3881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      aux_sym_reserved_field_names_repeat1,
  [3894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      aux_sym_block_lit_repeat1,
  [3907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      aux_sym_block_lit_repeat1,
  [3920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      aux_sym_enum_field_repeat1,
  [3933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(545), 1,
      anon_sym_EQ,
    STATE(179), 1,
      aux_sym__option_name_repeat1,
  [3946] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(282), 1,
      sym__option_name,
  [3959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_enum_field_repeat1,
  [3972] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(283), 1,
      sym__option_name,
  [3985] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      aux_sym_block_lit_repeat2,
  [3998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(549), 1,
      anon_sym_EQ,
    STATE(56), 1,
      aux_sym__option_name_repeat1,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(284), 1,
      sym__option_name,
  [4024] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    ACTIONS(551), 1,
      sym_identifier,
    STATE(181), 1,
      aux_sym_block_lit_repeat2,
  [4037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_message_body,
  [4047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
    STATE(207), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_message_body,
  [4067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_SEMI,
    ACTIONS(562), 1,
      anon_sym_LBRACK,
  [4077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_SEMI,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
  [4103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_enum_body,
  [4113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_identifier,
    STATE(238), 1,
      sym_full_ident,
  [4131] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_SEMI,
    ACTIONS(574), 1,
      anon_sym_LBRACK,
  [4141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_enum_body,
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
    ACTIONS(584), 1,
      sym_identifier,
    STATE(274), 1,
      sym_rpc_name,
  [4195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    STATE(207), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
  [4215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
  [4233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 2,
      anon_sym_GT,
      sym_identifier,
  [4241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym_identifier,
    STATE(207), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    STATE(183), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      sym_identifier,
    STATE(248), 1,
      sym_service_name,
  [4311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_identifier,
    STATE(184), 1,
      sym_message_name,
  [4321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(189), 1,
      sym_enum_name,
  [4331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_LBRACK,
  [4341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    ACTIONS(615), 1,
      anon_sym_LBRACK,
  [4351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
  [4369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym_identifier,
    STATE(196), 1,
      sym_enum_name,
  [4379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      sym_identifier,
    STATE(182), 1,
      sym_message_name,
  [4389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_identifier,
    STATE(262), 1,
      sym_full_ident,
  [4399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_EQ,
  [4406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_SEMI,
  [4420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_SEMI,
  [4427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
  [4434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
  [4441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_LT,
  [4448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
  [4455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
  [4462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_EQ,
  [4469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
  [4476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_SEMI,
  [4483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_SEMI,
  [4490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
  [4497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [4504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      sym_identifier,
  [4511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_EQ,
  [4518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
  [4525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
  [4532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_identifier,
  [4539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
  [4546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_identifier,
  [4553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_SEMI,
  [4560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_SEMI,
  [4567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
  [4574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_returns,
  [4581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_SEMI,
  [4588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
  [4595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_LBRACE,
  [4602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACK,
  [4609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_EQ,
  [4616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_identifier,
  [4623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_SEMI,
  [4630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_LBRACE,
  [4637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_returns,
  [4644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
  [4651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACE,
  [4658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_EQ,
  [4665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_identifier,
  [4672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_LBRACE,
  [4679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_GT,
  [4686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_SEMI,
  [4693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_SEMI,
  [4700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_SEMI,
  [4707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_EQ,
  [4714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_EQ,
  [4721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [4728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym_identifier,
  [4735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_SEMI,
  [4742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_EQ,
  [4749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_identifier,
  [4756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_SEMI,
  [4763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
  [4770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LPAREN,
  [4777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
  [4784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_SEMI,
  [4791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_EQ,
  [4798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DOT,
  [4805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      sym_reserved_identifier,
  [4812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_DQUOTEproto3_DQUOTE,
  [4819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
  [4826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_EQ,
  [4833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_EQ,
  [4840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_EQ,
  [4847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_COMMA,
  [4854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
  [4861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_EQ,
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
  [SMALL_STATE(10)] = 506,
  [SMALL_STATE(11)] = 541,
  [SMALL_STATE(12)] = 576,
  [SMALL_STATE(13)] = 611,
  [SMALL_STATE(14)] = 646,
  [SMALL_STATE(15)] = 681,
  [SMALL_STATE(16)] = 716,
  [SMALL_STATE(17)] = 751,
  [SMALL_STATE(18)] = 786,
  [SMALL_STATE(19)] = 821,
  [SMALL_STATE(20)] = 856,
  [SMALL_STATE(21)] = 891,
  [SMALL_STATE(22)] = 926,
  [SMALL_STATE(23)] = 961,
  [SMALL_STATE(24)] = 996,
  [SMALL_STATE(25)] = 1047,
  [SMALL_STATE(26)] = 1082,
  [SMALL_STATE(27)] = 1117,
  [SMALL_STATE(28)] = 1152,
  [SMALL_STATE(29)] = 1203,
  [SMALL_STATE(30)] = 1234,
  [SMALL_STATE(31)] = 1273,
  [SMALL_STATE(32)] = 1302,
  [SMALL_STATE(33)] = 1331,
  [SMALL_STATE(34)] = 1381,
  [SMALL_STATE(35)] = 1417,
  [SMALL_STATE(36)] = 1445,
  [SMALL_STATE(37)] = 1473,
  [SMALL_STATE(38)] = 1509,
  [SMALL_STATE(39)] = 1537,
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
  [SMALL_STATE(58)] = 2220,
  [SMALL_STATE(59)] = 2234,
  [SMALL_STATE(60)] = 2248,
  [SMALL_STATE(61)] = 2262,
  [SMALL_STATE(62)] = 2284,
  [SMALL_STATE(63)] = 2298,
  [SMALL_STATE(64)] = 2312,
  [SMALL_STATE(65)] = 2334,
  [SMALL_STATE(66)] = 2348,
  [SMALL_STATE(67)] = 2362,
  [SMALL_STATE(68)] = 2386,
  [SMALL_STATE(69)] = 2408,
  [SMALL_STATE(70)] = 2422,
  [SMALL_STATE(71)] = 2444,
  [SMALL_STATE(72)] = 2458,
  [SMALL_STATE(73)] = 2472,
  [SMALL_STATE(74)] = 2486,
  [SMALL_STATE(75)] = 2504,
  [SMALL_STATE(76)] = 2526,
  [SMALL_STATE(77)] = 2540,
  [SMALL_STATE(78)] = 2562,
  [SMALL_STATE(79)] = 2584,
  [SMALL_STATE(80)] = 2598,
  [SMALL_STATE(81)] = 2620,
  [SMALL_STATE(82)] = 2638,
  [SMALL_STATE(83)] = 2656,
  [SMALL_STATE(84)] = 2674,
  [SMALL_STATE(85)] = 2692,
  [SMALL_STATE(86)] = 2710,
  [SMALL_STATE(87)] = 2728,
  [SMALL_STATE(88)] = 2746,
  [SMALL_STATE(89)] = 2763,
  [SMALL_STATE(90)] = 2782,
  [SMALL_STATE(91)] = 2801,
  [SMALL_STATE(92)] = 2812,
  [SMALL_STATE(93)] = 2831,
  [SMALL_STATE(94)] = 2848,
  [SMALL_STATE(95)] = 2859,
  [SMALL_STATE(96)] = 2876,
  [SMALL_STATE(97)] = 2887,
  [SMALL_STATE(98)] = 2904,
  [SMALL_STATE(99)] = 2923,
  [SMALL_STATE(100)] = 2940,
  [SMALL_STATE(101)] = 2959,
  [SMALL_STATE(102)] = 2976,
  [SMALL_STATE(103)] = 2987,
  [SMALL_STATE(104)] = 3004,
  [SMALL_STATE(105)] = 3015,
  [SMALL_STATE(106)] = 3032,
  [SMALL_STATE(107)] = 3051,
  [SMALL_STATE(108)] = 3062,
  [SMALL_STATE(109)] = 3081,
  [SMALL_STATE(110)] = 3092,
  [SMALL_STATE(111)] = 3103,
  [SMALL_STATE(112)] = 3120,
  [SMALL_STATE(113)] = 3137,
  [SMALL_STATE(114)] = 3156,
  [SMALL_STATE(115)] = 3173,
  [SMALL_STATE(116)] = 3185,
  [SMALL_STATE(117)] = 3201,
  [SMALL_STATE(118)] = 3215,
  [SMALL_STATE(119)] = 3229,
  [SMALL_STATE(120)] = 3243,
  [SMALL_STATE(121)] = 3255,
  [SMALL_STATE(122)] = 3265,
  [SMALL_STATE(123)] = 3277,
  [SMALL_STATE(124)] = 3287,
  [SMALL_STATE(125)] = 3301,
  [SMALL_STATE(126)] = 3317,
  [SMALL_STATE(127)] = 3329,
  [SMALL_STATE(128)] = 3341,
  [SMALL_STATE(129)] = 3357,
  [SMALL_STATE(130)] = 3367,
  [SMALL_STATE(131)] = 3377,
  [SMALL_STATE(132)] = 3389,
  [SMALL_STATE(133)] = 3401,
  [SMALL_STATE(134)] = 3413,
  [SMALL_STATE(135)] = 3425,
  [SMALL_STATE(136)] = 3441,
  [SMALL_STATE(137)] = 3455,
  [SMALL_STATE(138)] = 3471,
  [SMALL_STATE(139)] = 3485,
  [SMALL_STATE(140)] = 3497,
  [SMALL_STATE(141)] = 3509,
  [SMALL_STATE(142)] = 3523,
  [SMALL_STATE(143)] = 3539,
  [SMALL_STATE(144)] = 3551,
  [SMALL_STATE(145)] = 3561,
  [SMALL_STATE(146)] = 3577,
  [SMALL_STATE(147)] = 3589,
  [SMALL_STATE(148)] = 3601,
  [SMALL_STATE(149)] = 3611,
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
  [SMALL_STATE(165)] = 3816,
  [SMALL_STATE(166)] = 3829,
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
  [SMALL_STATE(183)] = 4047,
  [SMALL_STATE(184)] = 4057,
  [SMALL_STATE(185)] = 4067,
  [SMALL_STATE(186)] = 4077,
  [SMALL_STATE(187)] = 4085,
  [SMALL_STATE(188)] = 4093,
  [SMALL_STATE(189)] = 4103,
  [SMALL_STATE(190)] = 4113,
  [SMALL_STATE(191)] = 4121,
  [SMALL_STATE(192)] = 4131,
  [SMALL_STATE(193)] = 4141,
  [SMALL_STATE(194)] = 4149,
  [SMALL_STATE(195)] = 4157,
  [SMALL_STATE(196)] = 4165,
  [SMALL_STATE(197)] = 4175,
  [SMALL_STATE(198)] = 4185,
  [SMALL_STATE(199)] = 4195,
  [SMALL_STATE(200)] = 4205,
  [SMALL_STATE(201)] = 4215,
  [SMALL_STATE(202)] = 4223,
  [SMALL_STATE(203)] = 4233,
  [SMALL_STATE(204)] = 4241,
  [SMALL_STATE(205)] = 4249,
  [SMALL_STATE(206)] = 4257,
  [SMALL_STATE(207)] = 4265,
  [SMALL_STATE(208)] = 4275,
  [SMALL_STATE(209)] = 4285,
  [SMALL_STATE(210)] = 4293,
  [SMALL_STATE(211)] = 4301,
  [SMALL_STATE(212)] = 4311,
  [SMALL_STATE(213)] = 4321,
  [SMALL_STATE(214)] = 4331,
  [SMALL_STATE(215)] = 4341,
  [SMALL_STATE(216)] = 4351,
  [SMALL_STATE(217)] = 4359,
  [SMALL_STATE(218)] = 4369,
  [SMALL_STATE(219)] = 4379,
  [SMALL_STATE(220)] = 4389,
  [SMALL_STATE(221)] = 4399,
  [SMALL_STATE(222)] = 4406,
  [SMALL_STATE(223)] = 4413,
  [SMALL_STATE(224)] = 4420,
  [SMALL_STATE(225)] = 4427,
  [SMALL_STATE(226)] = 4434,
  [SMALL_STATE(227)] = 4441,
  [SMALL_STATE(228)] = 4448,
  [SMALL_STATE(229)] = 4455,
  [SMALL_STATE(230)] = 4462,
  [SMALL_STATE(231)] = 4469,
  [SMALL_STATE(232)] = 4476,
  [SMALL_STATE(233)] = 4483,
  [SMALL_STATE(234)] = 4490,
  [SMALL_STATE(235)] = 4497,
  [SMALL_STATE(236)] = 4504,
  [SMALL_STATE(237)] = 4511,
  [SMALL_STATE(238)] = 4518,
  [SMALL_STATE(239)] = 4525,
  [SMALL_STATE(240)] = 4532,
  [SMALL_STATE(241)] = 4539,
  [SMALL_STATE(242)] = 4546,
  [SMALL_STATE(243)] = 4553,
  [SMALL_STATE(244)] = 4560,
  [SMALL_STATE(245)] = 4567,
  [SMALL_STATE(246)] = 4574,
  [SMALL_STATE(247)] = 4581,
  [SMALL_STATE(248)] = 4588,
  [SMALL_STATE(249)] = 4595,
  [SMALL_STATE(250)] = 4602,
  [SMALL_STATE(251)] = 4609,
  [SMALL_STATE(252)] = 4616,
  [SMALL_STATE(253)] = 4623,
  [SMALL_STATE(254)] = 4630,
  [SMALL_STATE(255)] = 4637,
  [SMALL_STATE(256)] = 4644,
  [SMALL_STATE(257)] = 4651,
  [SMALL_STATE(258)] = 4658,
  [SMALL_STATE(259)] = 4665,
  [SMALL_STATE(260)] = 4672,
  [SMALL_STATE(261)] = 4679,
  [SMALL_STATE(262)] = 4686,
  [SMALL_STATE(263)] = 4693,
  [SMALL_STATE(264)] = 4700,
  [SMALL_STATE(265)] = 4707,
  [SMALL_STATE(266)] = 4714,
  [SMALL_STATE(267)] = 4721,
  [SMALL_STATE(268)] = 4728,
  [SMALL_STATE(269)] = 4735,
  [SMALL_STATE(270)] = 4742,
  [SMALL_STATE(271)] = 4749,
  [SMALL_STATE(272)] = 4756,
  [SMALL_STATE(273)] = 4763,
  [SMALL_STATE(274)] = 4770,
  [SMALL_STATE(275)] = 4777,
  [SMALL_STATE(276)] = 4784,
  [SMALL_STATE(277)] = 4791,
  [SMALL_STATE(278)] = 4798,
  [SMALL_STATE(279)] = 4805,
  [SMALL_STATE(280)] = 4812,
  [SMALL_STATE(281)] = 4819,
  [SMALL_STATE(282)] = 4826,
  [SMALL_STATE(283)] = 4833,
  [SMALL_STATE(284)] = 4840,
  [SMALL_STATE(285)] = 4847,
  [SMALL_STATE(286)] = 4854,
  [SMALL_STATE(287)] = 4861,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, 0, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(124),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 5, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 3, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 6, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 4, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2, 0, 0),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_field_names, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reserved_field_names_repeat1, 2, 0, 0),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reserved_field_names_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 1, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved_field_names, 2, 0, 0),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 3, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4, 0, 0),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 7, 0, 0),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1, 0, 0),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [739] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_proto(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
