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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 315
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_SEMI = 1,
  anon_sym_syntax = 2,
  anon_sym_EQ = 3,
  anon_sym_DQUOTEproto3_DQUOTE = 4,
  anon_sym_DQUOTEproto2_DQUOTE = 5,
  anon_sym_import = 6,
  anon_sym_weak = 7,
  anon_sym_public = 8,
  anon_sym_package = 9,
  anon_sym_option = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_DOT = 13,
  anon_sym_enum = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_DASH = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACK = 20,
  anon_sym_message = 21,
  anon_sym_extend = 22,
  anon_sym_optional = 23,
  anon_sym_required = 24,
  anon_sym_repeated = 25,
  anon_sym_oneof = 26,
  anon_sym_map = 27,
  anon_sym_LT = 28,
  anon_sym_GT = 29,
  anon_sym_int32 = 30,
  anon_sym_int64 = 31,
  anon_sym_uint32 = 32,
  anon_sym_uint64 = 33,
  anon_sym_sint32 = 34,
  anon_sym_sint64 = 35,
  anon_sym_fixed32 = 36,
  anon_sym_fixed64 = 37,
  anon_sym_sfixed32 = 38,
  anon_sym_sfixed64 = 39,
  anon_sym_bool = 40,
  anon_sym_string = 41,
  anon_sym_double = 42,
  anon_sym_float = 43,
  anon_sym_bytes = 44,
  anon_sym_reserved = 45,
  anon_sym_extensions = 46,
  anon_sym_to = 47,
  anon_sym_max = 48,
  anon_sym_service = 49,
  anon_sym_rpc = 50,
  anon_sym_stream = 51,
  anon_sym_returns = 52,
  anon_sym_PLUS = 53,
  anon_sym_COLON = 54,
  sym_identifier = 55,
  sym_true = 56,
  sym_false = 57,
  sym_decimal_lit = 58,
  sym_octal_lit = 59,
  sym_hex_lit = 60,
  sym_float_lit = 61,
  anon_sym_DQUOTE = 62,
  aux_sym_string_token1 = 63,
  anon_sym_SQUOTE = 64,
  aux_sym_string_token2 = 65,
  sym_escape_sequence = 66,
  sym_comment = 67,
  sym_source_file = 68,
  sym_empty_statement = 69,
  sym_syntax = 70,
  sym_import = 71,
  sym_package = 72,
  sym_option = 73,
  sym__option_name = 74,
  sym_enum = 75,
  sym_enum_name = 76,
  sym_enum_body = 77,
  sym_enum_field = 78,
  sym_enum_value_option = 79,
  sym_message = 80,
  sym_message_body = 81,
  sym_message_name = 82,
  sym_extend = 83,
  sym_field = 84,
  sym_field_options = 85,
  sym_field_option = 86,
  sym_oneof = 87,
  sym_oneof_field = 88,
  sym_map_field = 89,
  sym_key_type = 90,
  sym_type = 91,
  sym_reserved = 92,
  sym_extensions = 93,
  sym_ranges = 94,
  sym_range = 95,
  sym_field_names = 96,
  sym_message_or_enum_type = 97,
  sym_field_number = 98,
  sym_service = 99,
  sym_service_name = 100,
  sym_rpc = 101,
  sym_rpc_name = 102,
  sym_constant = 103,
  sym_block_lit = 104,
  sym__identifier_or_string = 105,
  sym_full_ident = 106,
  sym_bool = 107,
  sym_int_lit = 108,
  sym_string = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym__option_name_repeat1 = 111,
  aux_sym_enum_body_repeat1 = 112,
  aux_sym_enum_field_repeat1 = 113,
  aux_sym_message_body_repeat1 = 114,
  aux_sym_field_options_repeat1 = 115,
  aux_sym_oneof_repeat1 = 116,
  aux_sym_ranges_repeat1 = 117,
  aux_sym_field_names_repeat1 = 118,
  aux_sym_message_or_enum_type_repeat1 = 119,
  aux_sym_service_repeat1 = 120,
  aux_sym_rpc_repeat1 = 121,
  aux_sym_block_lit_repeat1 = 122,
  aux_sym_block_lit_repeat2 = 123,
  aux_sym_string_repeat1 = 124,
  aux_sym_string_repeat2 = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTEproto3_DQUOTE] = "\"proto3\"",
  [anon_sym_DQUOTEproto2_DQUOTE] = "\"proto2\"",
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
  [anon_sym_extend] = "extend",
  [anon_sym_optional] = "optional",
  [anon_sym_required] = "required",
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
  [anon_sym_extensions] = "extensions",
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
  [sym_enum_name] = "enum_name",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_enum_value_option] = "enum_value_option",
  [sym_message] = "message",
  [sym_message_body] = "message_body",
  [sym_message_name] = "message_name",
  [sym_extend] = "extend",
  [sym_field] = "field",
  [sym_field_options] = "field_options",
  [sym_field_option] = "field_option",
  [sym_oneof] = "oneof",
  [sym_oneof_field] = "oneof_field",
  [sym_map_field] = "map_field",
  [sym_key_type] = "key_type",
  [sym_type] = "type",
  [sym_reserved] = "reserved",
  [sym_extensions] = "extensions",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_field_names] = "field_names",
  [sym_message_or_enum_type] = "message_or_enum_type",
  [sym_field_number] = "field_number",
  [sym_service] = "service",
  [sym_service_name] = "service_name",
  [sym_rpc] = "rpc",
  [sym_rpc_name] = "rpc_name",
  [sym_constant] = "constant",
  [sym_block_lit] = "block_lit",
  [sym__identifier_or_string] = "_identifier_or_string",
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
  [anon_sym_DQUOTEproto2_DQUOTE] = anon_sym_DQUOTEproto2_DQUOTE,
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
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_required] = anon_sym_required,
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
  [anon_sym_extensions] = anon_sym_extensions,
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
  [sym_enum_name] = sym_enum_name,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_value_option] = sym_enum_value_option,
  [sym_message] = sym_message,
  [sym_message_body] = sym_message_body,
  [sym_message_name] = sym_message_name,
  [sym_extend] = sym_extend,
  [sym_field] = sym_field,
  [sym_field_options] = sym_field_options,
  [sym_field_option] = sym_field_option,
  [sym_oneof] = sym_oneof,
  [sym_oneof_field] = sym_oneof_field,
  [sym_map_field] = sym_map_field,
  [sym_key_type] = sym_key_type,
  [sym_type] = sym_type,
  [sym_reserved] = sym_reserved,
  [sym_extensions] = sym_extensions,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_field_names] = sym_field_names,
  [sym_message_or_enum_type] = sym_message_or_enum_type,
  [sym_field_number] = sym_field_number,
  [sym_service] = sym_service,
  [sym_service_name] = sym_service_name,
  [sym_rpc] = sym_rpc,
  [sym_rpc_name] = sym_rpc_name,
  [sym_constant] = sym_constant,
  [sym_block_lit] = sym_block_lit,
  [sym__identifier_or_string] = sym__identifier_or_string,
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
  [anon_sym_DQUOTEproto2_DQUOTE] = {
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
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
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
  [anon_sym_extensions] = {
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
  [sym_extend] = {
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
  [sym_extensions] = {
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
  [sym__identifier_or_string] = {
    .visible = false,
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 3,
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
  [37] = 17,
  [38] = 38,
  [39] = 15,
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
  [51] = 50,
  [52] = 50,
  [53] = 53,
  [54] = 54,
  [55] = 50,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 17,
  [64] = 15,
  [65] = 65,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 22,
  [75] = 75,
  [76] = 20,
  [77] = 77,
  [78] = 26,
  [79] = 21,
  [80] = 80,
  [81] = 24,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 23,
  [86] = 25,
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
  [112] = 15,
  [113] = 32,
  [114] = 17,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 18,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 32,
  [132] = 109,
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
  [170] = 169,
  [171] = 169,
  [172] = 169,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
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
  [196] = 196,
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
  [218] = 218,
  [219] = 216,
  [220] = 218,
  [221] = 217,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 207,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 227,
  [236] = 226,
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
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 296,
  [298] = 298,
  [299] = 294,
  [300] = 296,
  [301] = 296,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 248,
  [310] = 248,
  [311] = 248,
  [312] = 312,
  [313] = 313,
  [314] = 314,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 'g'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || (c < 'e'
        ? c == 'c'
        : c <= 'e')))
    : (c <= 'h' || (c < 't'
      ? (c < 'p'
        ? (c >= 'j' && c <= 'n')
        : c <= 'r')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 'j'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || (c < 'g'
        ? c == 'c'
        : c <= 'h')))
    : (c <= 'l' || (c < 't'
      ? (c < 'p'
        ? c == 'n'
        : c <= 'q')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 'e'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || c == 'c'))
    : (c <= 'e' || (c < 't'
      ? (c < 'j'
        ? (c >= 'g' && c <= 'h')
        : c <= 'q')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 'e'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || c == 'c'))
    : (c <= 'e' || (c < 't'
      ? (c < 'j'
        ? (c >= 'g' && c <= 'h')
        : c <= 'r')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '+') ADVANCE(274);
      if (lookahead == ',') ADVANCE(215);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(231);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(232);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(216);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == ',') ADVANCE(215);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(232);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == ']') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '+') ADVANCE(274);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == ']') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(196);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(195);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(421);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(427);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '[') ADVANCE(214);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(192);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          lookahead == 'p' ||
          lookahead == 'q' ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(233);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(241);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(237);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(245);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(249);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(4);
      if (lookahead == '3') ADVANCE(5);
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
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(235);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(243);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(239);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(247);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(251);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'x') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(406);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(406);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(198);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(268);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 'q') ADVANCE(168);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 171:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 172:
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 173:
      if (lookahead == 'x') ADVANCE(268);
      END_STATE();
    case 174:
      if (lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 176:
      if (lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 177:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 189:
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '+') ADVANCE(274);
      if (lookahead == ',') ADVANCE(215);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(231);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(232);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == ']') ADVANCE(216);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto2_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_extend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_required);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_extensions);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_extensions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '6') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(277);
      if (lookahead == '6') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(278);
      if (lookahead == '6') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(279);
      if (lookahead == '6') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(280);
      if (lookahead == '6') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'p') ADVANCE(316);
      if (lookahead == 'q') ADVANCE(383);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          lookahead == 'o' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == 'x') ADVANCE(375);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 'y') ADVANCE(373);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(394);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(228);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'm') ADVANCE(272);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'v') ADVANCE(319);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(394);
      if (lookahead == 'x') ADVANCE(306);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(394);
      if (lookahead == 'x') ADVANCE(322);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(181);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '/') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(420);
      if (lookahead == '/') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead == '/') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(427);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 190},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 190},
  [54] = {.lex_state = 190},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 190},
  [59] = {.lex_state = 190},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 190},
  [64] = {.lex_state = 190},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 190},
  [75] = {.lex_state = 190},
  [76] = {.lex_state = 190},
  [77] = {.lex_state = 190},
  [78] = {.lex_state = 190},
  [79] = {.lex_state = 190},
  [80] = {.lex_state = 190},
  [81] = {.lex_state = 190},
  [82] = {.lex_state = 190},
  [83] = {.lex_state = 190},
  [84] = {.lex_state = 190},
  [85] = {.lex_state = 190},
  [86] = {.lex_state = 190},
  [87] = {.lex_state = 190},
  [88] = {.lex_state = 190},
  [89] = {.lex_state = 190},
  [90] = {.lex_state = 190},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 190},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 190},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 190},
  [99] = {.lex_state = 190},
  [100] = {.lex_state = 190},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 190},
  [103] = {.lex_state = 190},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 190},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 190},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 17},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 190},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 190},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 190},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 190},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 190},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 190},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 15},
  [138] = {.lex_state = 17},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 190},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 190},
  [153] = {.lex_state = 190},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 190},
  [161] = {.lex_state = 190},
  [162] = {.lex_state = 190},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 190},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 190},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 190},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 190},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 190},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 1},
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
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 190},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
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
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
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
    [anon_sym_extensions] = ACTIONS(1),
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
    [sym_source_file] = STATE(293),
    [sym_empty_statement] = STATE(54),
    [sym_syntax] = STATE(53),
    [sym_import] = STATE(54),
    [sym_package] = STATE(54),
    [sym_option] = STATE(54),
    [sym_enum] = STATE(54),
    [sym_message] = STATE(54),
    [sym_extend] = STATE(54),
    [sym_service] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_syntax] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(13),
    [anon_sym_option] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(17),
    [anon_sym_message] = ACTIONS(19),
    [anon_sym_extend] = ACTIONS(21),
    [anon_sym_service] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(288), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(4), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
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
  [86] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(288), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(5), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
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
  [172] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      anon_sym_option,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_enum,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_message,
    ACTIONS(74), 1,
      anon_sym_extend,
    ACTIONS(80), 1,
      anon_sym_repeated,
    ACTIONS(83), 1,
      anon_sym_oneof,
    ACTIONS(86), 1,
      anon_sym_map,
    ACTIONS(92), 1,
      anon_sym_reserved,
    ACTIONS(95), 1,
      anon_sym_extensions,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(288), 1,
      sym_type,
    ACTIONS(77), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(4), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(89), 15,
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
  [258] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(288), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(4), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
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
  [344] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(288), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(2), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
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
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(107), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(111), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(115), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(119), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(123), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(127), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(131), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(135), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(139), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(143), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(147), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(151), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(155), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(159), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(163), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [1000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(167), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [1038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(171), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [1076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(175), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [1114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(179), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [1152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(183), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [1190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(187), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
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
      anon_sym_extensions,
      sym_identifier,
  [1228] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      anon_sym_option,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(277), 1,
      sym_type,
    STATE(28), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(200), 15,
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
  [1279] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_option,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(277), 1,
      sym_type,
    STATE(28), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(47), 15,
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
  [1330] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_option,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(277), 1,
      sym_type,
    STATE(29), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(47), 15,
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
  [1381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(216), 17,
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
  [1410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(220), 17,
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
  [1439] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(222), 1,
      anon_sym_repeated,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(308), 1,
      sym_type,
    ACTIONS(47), 15,
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
  [1478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(226), 17,
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
  [1509] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(262), 1,
      sym_type,
    ACTIONS(47), 15,
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
  [1545] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(308), 1,
      sym_type,
    ACTIONS(47), 15,
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
  [1581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(147), 17,
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
  [1609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(244), 1,
      sym_message_or_enum_type,
    STATE(254), 1,
      sym_type,
    ACTIONS(47), 15,
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
  [1645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(139), 17,
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
  [1673] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      anon_sym_COLON,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(244), 1,
      sym_hex_lit,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym_constant,
    ACTIONS(232), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(242), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1723] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(244), 1,
      sym_hex_lit,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_COLON,
    STATE(111), 1,
      sym_constant,
    ACTIONS(232), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(242), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(258), 17,
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
  [1801] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(244), 1,
      sym_hex_lit,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym_constant,
    ACTIONS(232), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(242), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1848] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    ACTIONS(268), 1,
      sym_hex_lit,
    STATE(177), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1895] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1942] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(244), 1,
      sym_hex_lit,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    STATE(139), 1,
      sym_constant,
    ACTIONS(232), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(242), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1989] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2036] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2083] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    STATE(239), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2127] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    STATE(301), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2171] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    STATE(300), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2215] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    STATE(296), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2259] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_message,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    STATE(59), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2301] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_message,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    STATE(58), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2343] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    STATE(297), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2387] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    STATE(211), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2431] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_float_lit,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    STATE(222), 1,
      sym_constant,
    ACTIONS(240), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(94), 5,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2475] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(285), 1,
      anon_sym_import,
    ACTIONS(288), 1,
      anon_sym_package,
    ACTIONS(291), 1,
      anon_sym_option,
    ACTIONS(294), 1,
      anon_sym_enum,
    ACTIONS(297), 1,
      anon_sym_message,
    ACTIONS(300), 1,
      anon_sym_extend,
    ACTIONS(303), 1,
      anon_sym_service,
    STATE(58), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2517] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_message,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    STATE(58), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(252), 1,
      sym_key_type,
    ACTIONS(308), 12,
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
  [2580] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(310), 1,
      sym_identifier,
    STATE(183), 1,
      sym_int_lit,
    STATE(185), 1,
      sym_range,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(184), 2,
      sym__identifier_or_string,
      sym_string,
    STATE(299), 2,
      sym_ranges,
      sym_field_names,
  [2614] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(310), 1,
      sym_identifier,
    STATE(183), 1,
      sym_int_lit,
    STATE(185), 1,
      sym_range,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(184), 2,
      sym__identifier_or_string,
      sym_string,
    STATE(294), 2,
      sym_ranges,
      sym_field_names,
  [2648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
      anon_sym_rpc,
  [2665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
      anon_sym_rpc,
  [2682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(312), 9,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2703] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_option,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 1,
      anon_sym_reserved,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(72), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2729] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_option,
    ACTIONS(323), 1,
      anon_sym_reserved,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(71), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(329), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 10,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(333), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2811] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_option,
    ACTIONS(323), 1,
      anon_sym_reserved,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(73), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2837] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    ACTIONS(319), 1,
      anon_sym_option,
    ACTIONS(323), 1,
      anon_sym_reserved,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(73), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2863] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      anon_sym_option,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      anon_sym_reserved,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(73), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3084] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 1,
      anon_sym_rpc,
    STATE(89), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3106] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      anon_sym_option,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      anon_sym_rpc,
    STATE(88), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(367), 1,
      anon_sym_rpc,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(88), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3150] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(183), 1,
      sym_int_lit,
    STATE(185), 1,
      sym_range,
    STATE(287), 1,
      sym_ranges,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3182] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(103), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(98), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      anon_sym_option,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(98), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3284] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(100), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(98), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3332] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(96), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(98), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3380] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(208), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(414), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(418), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(285), 1,
      sym_string,
    ACTIONS(420), 2,
      anon_sym_weak,
      anon_sym_public,
  [3440] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_hex_lit,
    ACTIONS(422), 1,
      sym_float_lit,
    STATE(91), 1,
      sym_int_lit,
    ACTIONS(242), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(34), 1,
      sym_field_number,
    ACTIONS(424), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(430), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(139), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(147), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3524] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(202), 1,
      sym_field_option,
    STATE(292), 1,
      sym_field_options,
    STATE(305), 1,
      sym__option_name,
  [3543] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(214), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3560] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(202), 1,
      sym_field_option,
    STATE(304), 1,
      sym_field_options,
    STATE(305), 1,
      sym__option_name,
  [3579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(438), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3592] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(440), 1,
      anon_sym_DASH,
    STATE(241), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(151), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(183), 1,
      sym_int_lit,
    STATE(238), 1,
      sym_range,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(444), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    ACTIONS(446), 1,
      sym_identifier,
    STATE(234), 2,
      sym__identifier_or_string,
      sym_string,
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(450), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(452), 1,
      anon_sym_max,
    STATE(232), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(456), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(237), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(202), 1,
      sym_field_option,
    STATE(275), 1,
      sym_field_options,
    STATE(305), 1,
      sym__option_name,
  [3748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(460), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(202), 1,
      sym_field_option,
    STATE(261), 1,
      sym_field_options,
    STATE(305), 1,
      sym__option_name,
  [3780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [3791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(422), 1,
      sym_float_lit,
    STATE(91), 1,
      sym_int_lit,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3808] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(462), 1,
      anon_sym_stream,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(266), 1,
      sym_message_or_enum_type,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(466), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_int_lit,
    STATE(209), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(470), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3870] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_stream,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(313), 1,
      sym_message_or_enum_type,
  [3889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(476), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(480), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_stream,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(253), 1,
      sym_message_or_enum_type,
  [3934] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(202), 1,
      sym_field_option,
    STATE(251), 1,
      sym_field_options,
    STATE(305), 1,
      sym__option_name,
  [3953] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      anon_sym_LBRACK,
    ACTIONS(488), 1,
      sym_identifier,
    STATE(155), 1,
      aux_sym_block_lit_repeat2,
  [3969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(253), 1,
      sym_message_or_enum_type,
  [3985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(223), 1,
      sym_enum_value_option,
    STATE(282), 1,
      sym__option_name,
  [4001] = 4,
    ACTIONS(492), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym_string_repeat2,
    ACTIONS(494), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(240), 1,
      sym_field_option,
    STATE(305), 1,
      sym__option_name,
  [4031] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(258), 1,
      sym_message_or_enum_type,
  [4047] = 4,
    ACTIONS(497), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      aux_sym_string_repeat1,
    ACTIONS(501), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4071] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(179), 1,
      sym_enum_value_option,
    STATE(282), 1,
      sym__option_name,
  [4087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DOT,
    ACTIONS(506), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(230), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [4123] = 4,
    ACTIONS(497), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_SQUOTE,
    STATE(145), 1,
      aux_sym_string_repeat2,
    ACTIONS(514), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACK,
    ACTIONS(488), 1,
      sym_identifier,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      aux_sym_block_lit_repeat2,
  [4153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(193), 1,
      sym_enum_value_option,
    STATE(282), 1,
      sym__option_name,
  [4169] = 4,
    ACTIONS(497), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      aux_sym_string_repeat1,
    ACTIONS(518), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    ACTIONS(520), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(158), 1,
      aux_sym_block_lit_repeat2,
  [4199] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      sym_identifier,
    STATE(215), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(260), 1,
      sym_message_or_enum_type,
  [4215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4245] = 4,
    ACTIONS(497), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_SQUOTE,
    STATE(154), 1,
      aux_sym_string_repeat2,
    ACTIONS(534), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4259] = 4,
    ACTIONS(497), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      aux_sym_string_repeat1,
    ACTIONS(536), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DOT,
    ACTIONS(538), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DOT,
    ACTIONS(540), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(542), 1,
      anon_sym_EQ,
    STATE(65), 1,
      aux_sym__option_name_repeat1,
  [4310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      aux_sym_block_lit_repeat1,
  [4323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(311), 1,
      sym__option_name,
  [4336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(310), 1,
      sym__option_name,
  [4349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(309), 1,
      sym__option_name,
  [4362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(248), 1,
      sym__option_name,
  [4375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
    STATE(267), 1,
      sym_string,
  [4388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(548), 1,
      anon_sym_EQ,
    STATE(181), 1,
      aux_sym__option_name_repeat1,
  [4410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_block_lit_repeat1,
  [4423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_block_lit_repeat1,
  [4436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_ranges_repeat1,
  [4449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      aux_sym_enum_field_repeat1,
  [4462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_field_names_repeat1,
  [4475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(562), 1,
      anon_sym_EQ,
    STATE(65), 1,
      aux_sym__option_name_repeat1,
  [4488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_to,
    ACTIONS(566), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_SEMI,
    STATE(180), 1,
      aux_sym_field_names_repeat1,
  [4521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      aux_sym_ranges_repeat1,
  [4534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_enum_field_repeat1,
  [4547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_block_lit_repeat1,
  [4560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_field_options_repeat1,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      aux_sym_block_lit_repeat1,
  [4604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_block_lit_repeat1,
  [4617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      aux_sym_enum_field_repeat1,
  [4630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SEMI,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_field_names_repeat1,
  [4643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_enum_field_repeat1,
  [4656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_enum_field_repeat1,
  [4669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4678] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_block_lit_repeat1,
  [4691] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      aux_sym_block_lit_repeat1,
  [4704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_SEMI,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_ranges_repeat1,
  [4717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(604), 1,
      anon_sym_EQ,
    STATE(167), 1,
      aux_sym__option_name_repeat1,
  [4730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(606), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_field_options_repeat1,
  [4743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_field_options_repeat1,
  [4765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      aux_sym_block_lit_repeat1,
  [4787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_enum_body,
  [4797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_SEMI,
    ACTIONS(617), 1,
      anon_sym_LBRACK,
  [4807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_SEMI,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
  [4817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(273), 1,
      sym_rpc_name,
  [4827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(224), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(284), 1,
      sym_full_ident,
  [4855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_SEMI,
    ACTIONS(631), 1,
      anon_sym_LBRACK,
  [4865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(233), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(207), 1,
      sym_enum_name,
  [4885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(226), 1,
      sym_full_ident,
  [4895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
    STATE(227), 1,
      sym_message_name,
  [4905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(228), 1,
      sym_enum_name,
  [4915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      sym_identifier,
    STATE(235), 1,
      sym_message_name,
  [4925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(236), 1,
      sym_full_ident,
  [4935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      sym_identifier,
    STATE(233), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(269), 1,
      sym_service_name,
  [4971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_message_body,
  [4981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_message_body,
  [4991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_enum_body,
  [5001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 2,
      anon_sym_DQUOTEproto3_DQUOTE,
      anon_sym_DQUOTEproto2_DQUOTE,
  [5009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_SEMI,
    ACTIONS(651), 1,
      anon_sym_LBRACK,
  [5019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(256), 1,
      sym_full_ident,
  [5029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      sym_identifier,
    STATE(233), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_message_body,
  [5065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_message_body,
  [5075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_SEMI,
    ACTIONS(662), 1,
      anon_sym_LBRACK,
  [5085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
  [5119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(271), 1,
      sym_full_ident,
  [5129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SEMI,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
  [5139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 2,
      anon_sym_GT,
      sym_identifier,
  [5147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_SEMI,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
  [5157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_SEMI,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
  [5167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_identifier,
  [5174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_EQ,
  [5181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SEMI,
  [5188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_LT,
  [5195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
  [5202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_COMMA,
  [5209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [5216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_GT,
  [5223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_COMMA,
  [5230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [5237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym_identifier,
  [5244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [5251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_EQ,
  [5258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [5265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_RBRACK,
  [5272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_identifier,
  [5279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_returns,
  [5286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_EQ,
  [5293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_SEMI,
  [5300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
  [5307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_SEMI,
  [5314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_SEMI,
  [5321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
  [5328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_LBRACE,
  [5335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
  [5342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SEMI,
  [5349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
  [5356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_RBRACK,
  [5370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LBRACE,
  [5377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      sym_identifier,
  [5384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
  [5391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
  [5398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_DOT,
  [5405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_EQ,
  [5412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_EQ,
  [5419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_LPAREN,
  [5426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SEMI,
  [5433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_SEMI,
  [5440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      sym_identifier,
  [5447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_SEMI,
  [5454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym_identifier,
  [5461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_SEMI,
  [5468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_EQ,
  [5475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_EQ,
  [5482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RBRACK,
  [5489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      ts_builtin_sym_end,
  [5496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_SEMI,
  [5503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LBRACE,
  [5510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SEMI,
  [5517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_SEMI,
  [5524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_SEMI,
  [5531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_SEMI,
  [5538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_SEMI,
  [5545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_SEMI,
  [5552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
  [5559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_returns,
  [5566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RBRACK,
  [5573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_EQ,
  [5580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym_identifier,
  [5587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_EQ,
  [5594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_identifier,
  [5601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_EQ,
  [5608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_EQ,
  [5615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_EQ,
  [5622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_SEMI,
  [5629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
  [5636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 344,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 468,
  [SMALL_STATE(9)] = 506,
  [SMALL_STATE(10)] = 544,
  [SMALL_STATE(11)] = 582,
  [SMALL_STATE(12)] = 620,
  [SMALL_STATE(13)] = 658,
  [SMALL_STATE(14)] = 696,
  [SMALL_STATE(15)] = 734,
  [SMALL_STATE(16)] = 772,
  [SMALL_STATE(17)] = 810,
  [SMALL_STATE(18)] = 848,
  [SMALL_STATE(19)] = 886,
  [SMALL_STATE(20)] = 924,
  [SMALL_STATE(21)] = 962,
  [SMALL_STATE(22)] = 1000,
  [SMALL_STATE(23)] = 1038,
  [SMALL_STATE(24)] = 1076,
  [SMALL_STATE(25)] = 1114,
  [SMALL_STATE(26)] = 1152,
  [SMALL_STATE(27)] = 1190,
  [SMALL_STATE(28)] = 1228,
  [SMALL_STATE(29)] = 1279,
  [SMALL_STATE(30)] = 1330,
  [SMALL_STATE(31)] = 1381,
  [SMALL_STATE(32)] = 1410,
  [SMALL_STATE(33)] = 1439,
  [SMALL_STATE(34)] = 1478,
  [SMALL_STATE(35)] = 1509,
  [SMALL_STATE(36)] = 1545,
  [SMALL_STATE(37)] = 1581,
  [SMALL_STATE(38)] = 1609,
  [SMALL_STATE(39)] = 1645,
  [SMALL_STATE(40)] = 1673,
  [SMALL_STATE(41)] = 1723,
  [SMALL_STATE(42)] = 1773,
  [SMALL_STATE(43)] = 1801,
  [SMALL_STATE(44)] = 1848,
  [SMALL_STATE(45)] = 1895,
  [SMALL_STATE(46)] = 1942,
  [SMALL_STATE(47)] = 1989,
  [SMALL_STATE(48)] = 2036,
  [SMALL_STATE(49)] = 2083,
  [SMALL_STATE(50)] = 2127,
  [SMALL_STATE(51)] = 2171,
  [SMALL_STATE(52)] = 2215,
  [SMALL_STATE(53)] = 2259,
  [SMALL_STATE(54)] = 2301,
  [SMALL_STATE(55)] = 2343,
  [SMALL_STATE(56)] = 2387,
  [SMALL_STATE(57)] = 2431,
  [SMALL_STATE(58)] = 2475,
  [SMALL_STATE(59)] = 2517,
  [SMALL_STATE(60)] = 2559,
  [SMALL_STATE(61)] = 2580,
  [SMALL_STATE(62)] = 2614,
  [SMALL_STATE(63)] = 2648,
  [SMALL_STATE(64)] = 2665,
  [SMALL_STATE(65)] = 2682,
  [SMALL_STATE(66)] = 2703,
  [SMALL_STATE(67)] = 2729,
  [SMALL_STATE(68)] = 2755,
  [SMALL_STATE(69)] = 2775,
  [SMALL_STATE(70)] = 2791,
  [SMALL_STATE(71)] = 2811,
  [SMALL_STATE(72)] = 2837,
  [SMALL_STATE(73)] = 2863,
  [SMALL_STATE(74)] = 2889,
  [SMALL_STATE(75)] = 2904,
  [SMALL_STATE(76)] = 2919,
  [SMALL_STATE(77)] = 2934,
  [SMALL_STATE(78)] = 2949,
  [SMALL_STATE(79)] = 2964,
  [SMALL_STATE(80)] = 2979,
  [SMALL_STATE(81)] = 2994,
  [SMALL_STATE(82)] = 3009,
  [SMALL_STATE(83)] = 3024,
  [SMALL_STATE(84)] = 3039,
  [SMALL_STATE(85)] = 3054,
  [SMALL_STATE(86)] = 3069,
  [SMALL_STATE(87)] = 3084,
  [SMALL_STATE(88)] = 3106,
  [SMALL_STATE(89)] = 3128,
  [SMALL_STATE(90)] = 3150,
  [SMALL_STATE(91)] = 3170,
  [SMALL_STATE(92)] = 3182,
  [SMALL_STATE(93)] = 3200,
  [SMALL_STATE(94)] = 3212,
  [SMALL_STATE(95)] = 3224,
  [SMALL_STATE(96)] = 3236,
  [SMALL_STATE(97)] = 3254,
  [SMALL_STATE(98)] = 3266,
  [SMALL_STATE(99)] = 3284,
  [SMALL_STATE(100)] = 3302,
  [SMALL_STATE(101)] = 3320,
  [SMALL_STATE(102)] = 3332,
  [SMALL_STATE(103)] = 3350,
  [SMALL_STATE(104)] = 3368,
  [SMALL_STATE(105)] = 3380,
  [SMALL_STATE(106)] = 3397,
  [SMALL_STATE(107)] = 3410,
  [SMALL_STATE(108)] = 3423,
  [SMALL_STATE(109)] = 3440,
  [SMALL_STATE(110)] = 3457,
  [SMALL_STATE(111)] = 3474,
  [SMALL_STATE(112)] = 3487,
  [SMALL_STATE(113)] = 3500,
  [SMALL_STATE(114)] = 3511,
  [SMALL_STATE(115)] = 3524,
  [SMALL_STATE(116)] = 3543,
  [SMALL_STATE(117)] = 3560,
  [SMALL_STATE(118)] = 3579,
  [SMALL_STATE(119)] = 3592,
  [SMALL_STATE(120)] = 3609,
  [SMALL_STATE(121)] = 3622,
  [SMALL_STATE(122)] = 3639,
  [SMALL_STATE(123)] = 3652,
  [SMALL_STATE(124)] = 3669,
  [SMALL_STATE(125)] = 3682,
  [SMALL_STATE(126)] = 3699,
  [SMALL_STATE(127)] = 3712,
  [SMALL_STATE(128)] = 3729,
  [SMALL_STATE(129)] = 3748,
  [SMALL_STATE(130)] = 3761,
  [SMALL_STATE(131)] = 3780,
  [SMALL_STATE(132)] = 3791,
  [SMALL_STATE(133)] = 3808,
  [SMALL_STATE(134)] = 3827,
  [SMALL_STATE(135)] = 3840,
  [SMALL_STATE(136)] = 3857,
  [SMALL_STATE(137)] = 3870,
  [SMALL_STATE(138)] = 3889,
  [SMALL_STATE(139)] = 3902,
  [SMALL_STATE(140)] = 3915,
  [SMALL_STATE(141)] = 3934,
  [SMALL_STATE(142)] = 3953,
  [SMALL_STATE(143)] = 3969,
  [SMALL_STATE(144)] = 3985,
  [SMALL_STATE(145)] = 4001,
  [SMALL_STATE(146)] = 4015,
  [SMALL_STATE(147)] = 4031,
  [SMALL_STATE(148)] = 4047,
  [SMALL_STATE(149)] = 4061,
  [SMALL_STATE(150)] = 4071,
  [SMALL_STATE(151)] = 4087,
  [SMALL_STATE(152)] = 4099,
  [SMALL_STATE(153)] = 4109,
  [SMALL_STATE(154)] = 4123,
  [SMALL_STATE(155)] = 4137,
  [SMALL_STATE(156)] = 4153,
  [SMALL_STATE(157)] = 4169,
  [SMALL_STATE(158)] = 4183,
  [SMALL_STATE(159)] = 4199,
  [SMALL_STATE(160)] = 4215,
  [SMALL_STATE(161)] = 4225,
  [SMALL_STATE(162)] = 4235,
  [SMALL_STATE(163)] = 4245,
  [SMALL_STATE(164)] = 4259,
  [SMALL_STATE(165)] = 4273,
  [SMALL_STATE(166)] = 4285,
  [SMALL_STATE(167)] = 4297,
  [SMALL_STATE(168)] = 4310,
  [SMALL_STATE(169)] = 4323,
  [SMALL_STATE(170)] = 4336,
  [SMALL_STATE(171)] = 4349,
  [SMALL_STATE(172)] = 4362,
  [SMALL_STATE(173)] = 4375,
  [SMALL_STATE(174)] = 4388,
  [SMALL_STATE(175)] = 4397,
  [SMALL_STATE(176)] = 4410,
  [SMALL_STATE(177)] = 4423,
  [SMALL_STATE(178)] = 4436,
  [SMALL_STATE(179)] = 4449,
  [SMALL_STATE(180)] = 4462,
  [SMALL_STATE(181)] = 4475,
  [SMALL_STATE(182)] = 4488,
  [SMALL_STATE(183)] = 4497,
  [SMALL_STATE(184)] = 4508,
  [SMALL_STATE(185)] = 4521,
  [SMALL_STATE(186)] = 4534,
  [SMALL_STATE(187)] = 4547,
  [SMALL_STATE(188)] = 4560,
  [SMALL_STATE(189)] = 4573,
  [SMALL_STATE(190)] = 4582,
  [SMALL_STATE(191)] = 4591,
  [SMALL_STATE(192)] = 4604,
  [SMALL_STATE(193)] = 4617,
  [SMALL_STATE(194)] = 4630,
  [SMALL_STATE(195)] = 4643,
  [SMALL_STATE(196)] = 4656,
  [SMALL_STATE(197)] = 4669,
  [SMALL_STATE(198)] = 4678,
  [SMALL_STATE(199)] = 4691,
  [SMALL_STATE(200)] = 4704,
  [SMALL_STATE(201)] = 4717,
  [SMALL_STATE(202)] = 4730,
  [SMALL_STATE(203)] = 4743,
  [SMALL_STATE(204)] = 4752,
  [SMALL_STATE(205)] = 4765,
  [SMALL_STATE(206)] = 4774,
  [SMALL_STATE(207)] = 4787,
  [SMALL_STATE(208)] = 4797,
  [SMALL_STATE(209)] = 4807,
  [SMALL_STATE(210)] = 4817,
  [SMALL_STATE(211)] = 4827,
  [SMALL_STATE(212)] = 4835,
  [SMALL_STATE(213)] = 4845,
  [SMALL_STATE(214)] = 4855,
  [SMALL_STATE(215)] = 4865,
  [SMALL_STATE(216)] = 4875,
  [SMALL_STATE(217)] = 4885,
  [SMALL_STATE(218)] = 4895,
  [SMALL_STATE(219)] = 4905,
  [SMALL_STATE(220)] = 4915,
  [SMALL_STATE(221)] = 4925,
  [SMALL_STATE(222)] = 4935,
  [SMALL_STATE(223)] = 4943,
  [SMALL_STATE(224)] = 4951,
  [SMALL_STATE(225)] = 4961,
  [SMALL_STATE(226)] = 4971,
  [SMALL_STATE(227)] = 4981,
  [SMALL_STATE(228)] = 4991,
  [SMALL_STATE(229)] = 5001,
  [SMALL_STATE(230)] = 5009,
  [SMALL_STATE(231)] = 5019,
  [SMALL_STATE(232)] = 5029,
  [SMALL_STATE(233)] = 5037,
  [SMALL_STATE(234)] = 5047,
  [SMALL_STATE(235)] = 5055,
  [SMALL_STATE(236)] = 5065,
  [SMALL_STATE(237)] = 5075,
  [SMALL_STATE(238)] = 5085,
  [SMALL_STATE(239)] = 5093,
  [SMALL_STATE(240)] = 5101,
  [SMALL_STATE(241)] = 5109,
  [SMALL_STATE(242)] = 5119,
  [SMALL_STATE(243)] = 5129,
  [SMALL_STATE(244)] = 5139,
  [SMALL_STATE(245)] = 5147,
  [SMALL_STATE(246)] = 5157,
  [SMALL_STATE(247)] = 5167,
  [SMALL_STATE(248)] = 5174,
  [SMALL_STATE(249)] = 5181,
  [SMALL_STATE(250)] = 5188,
  [SMALL_STATE(251)] = 5195,
  [SMALL_STATE(252)] = 5202,
  [SMALL_STATE(253)] = 5209,
  [SMALL_STATE(254)] = 5216,
  [SMALL_STATE(255)] = 5223,
  [SMALL_STATE(256)] = 5230,
  [SMALL_STATE(257)] = 5237,
  [SMALL_STATE(258)] = 5244,
  [SMALL_STATE(259)] = 5251,
  [SMALL_STATE(260)] = 5258,
  [SMALL_STATE(261)] = 5265,
  [SMALL_STATE(262)] = 5272,
  [SMALL_STATE(263)] = 5279,
  [SMALL_STATE(264)] = 5286,
  [SMALL_STATE(265)] = 5293,
  [SMALL_STATE(266)] = 5300,
  [SMALL_STATE(267)] = 5307,
  [SMALL_STATE(268)] = 5314,
  [SMALL_STATE(269)] = 5321,
  [SMALL_STATE(270)] = 5328,
  [SMALL_STATE(271)] = 5335,
  [SMALL_STATE(272)] = 5342,
  [SMALL_STATE(273)] = 5349,
  [SMALL_STATE(274)] = 5356,
  [SMALL_STATE(275)] = 5363,
  [SMALL_STATE(276)] = 5370,
  [SMALL_STATE(277)] = 5377,
  [SMALL_STATE(278)] = 5384,
  [SMALL_STATE(279)] = 5391,
  [SMALL_STATE(280)] = 5398,
  [SMALL_STATE(281)] = 5405,
  [SMALL_STATE(282)] = 5412,
  [SMALL_STATE(283)] = 5419,
  [SMALL_STATE(284)] = 5426,
  [SMALL_STATE(285)] = 5433,
  [SMALL_STATE(286)] = 5440,
  [SMALL_STATE(287)] = 5447,
  [SMALL_STATE(288)] = 5454,
  [SMALL_STATE(289)] = 5461,
  [SMALL_STATE(290)] = 5468,
  [SMALL_STATE(291)] = 5475,
  [SMALL_STATE(292)] = 5482,
  [SMALL_STATE(293)] = 5489,
  [SMALL_STATE(294)] = 5496,
  [SMALL_STATE(295)] = 5503,
  [SMALL_STATE(296)] = 5510,
  [SMALL_STATE(297)] = 5517,
  [SMALL_STATE(298)] = 5524,
  [SMALL_STATE(299)] = 5531,
  [SMALL_STATE(300)] = 5538,
  [SMALL_STATE(301)] = 5545,
  [SMALL_STATE(302)] = 5552,
  [SMALL_STATE(303)] = 5559,
  [SMALL_STATE(304)] = 5566,
  [SMALL_STATE(305)] = 5573,
  [SMALL_STATE(306)] = 5580,
  [SMALL_STATE(307)] = 5587,
  [SMALL_STATE(308)] = 5594,
  [SMALL_STATE(309)] = 5601,
  [SMALL_STATE(310)] = 5608,
  [SMALL_STATE(311)] = 5615,
  [SMALL_STATE(312)] = 5622,
  [SMALL_STATE(313)] = 5629,
  [SMALL_STATE(314)] = 5636,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(170),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(212),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(219),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(218),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(217),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(33),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(36),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(257),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(250),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(244),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(61),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(90),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(165),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extensions, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(37),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(169),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(212),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(244),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(165),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2), SHIFT_REPEAT(247),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(114),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(171),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(62),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(307),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(63),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(172),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(210),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(63),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(172),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 8),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 6),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 7),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(145),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(148),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2), SHIFT_REPEAT(242),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 2), SHIFT_REPEAT(40),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 1),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat2, 9),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2), SHIFT_REPEAT(56),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2), SHIFT_REPEAT(123),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(144),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2), SHIFT_REPEAT(121),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2), SHIFT_REPEAT(146),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2), SHIFT_REPEAT(280),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [770] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
