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
#define STATE_COUNT 433
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 9
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 30

enum ts_symbol_identifiers {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  sym_nesting_selector = 14,
  anon_sym_STAR = 15,
  anon_sym_DOT = 16,
  anon_sym_has = 17,
  anon_sym_not = 18,
  anon_sym_is = 19,
  anon_sym_where = 20,
  anon_sym_host = 21,
  anon_sym_host_DASHcontext = 22,
  anon_sym_nth_DASHchild = 23,
  anon_sym_nth_DASHlast_DASHchild = 24,
  anon_sym_COLON_COLON = 25,
  anon_sym_POUND = 26,
  anon_sym_LBRACK = 27,
  anon_sym_EQ = 28,
  anon_sym_TILDE_EQ = 29,
  anon_sym_CARET_EQ = 30,
  anon_sym_PIPE_EQ = 31,
  anon_sym_STAR_EQ = 32,
  anon_sym_DOLLAR_EQ = 33,
  anon_sym_RBRACK = 34,
  anon_sym_GT = 35,
  anon_sym_TILDE = 36,
  anon_sym_PLUS = 37,
  anon_sym_PIPE = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_even = 41,
  anon_sym_odd = 42,
  anon_sym_of = 43,
  sym__nth_functional_notation = 44,
  anon_sym_COLON = 45,
  sym_important = 46,
  anon_sym_LPAREN2 = 47,
  anon_sym_and = 48,
  anon_sym_or = 49,
  anon_sym_only = 50,
  anon_sym_selector = 51,
  aux_sym_color_value_token1 = 52,
  anon_sym_SQUOTE = 53,
  aux_sym_string_value_token1 = 54,
  anon_sym_DQUOTE = 55,
  aux_sym_string_value_token2 = 56,
  sym_escape_sequence = 57,
  aux_sym_integer_value_token1 = 58,
  aux_sym_float_value_token1 = 59,
  sym_unit = 60,
  anon_sym_LBRACK2 = 61,
  anon_sym_DASH = 62,
  anon_sym_SLASH = 63,
  sym_identifier = 64,
  sym_at_keyword = 65,
  sym_js_comment = 66,
  sym_comment = 67,
  sym_plain_value = 68,
  sym__kw_color = 69,
  sym__kw_space = 70,
  sym__kw_font = 71,
  sym__kw_fontsize = 72,
  sym__kw_column = 73,
  sym__kw_display = 74,
  sym__kw_grid = 75,
  sym__kw_row = 76,
  sym__kw_abs100 = 77,
  anon_sym_fg = 78,
  anon_sym_bg = 79,
  anon_sym_fill = 80,
  anon_sym_stroke = 81,
  anon_sym_border = 82,
  anon_sym_border_DASHtop = 83,
  anon_sym_border_DASHbottom = 84,
  anon_sym_border_DASHleft = 85,
  anon_sym_border_DASHright = 86,
  anon_sym_ATresponsive = 87,
  anon_sym_ATmq = 88,
  anon_sym_ATiterate = 89,
  anon_sym_ATunpack = 90,
  anon_sym_ATif = 91,
  sym_europacss_variable = 92,
  sym_europacss_range = 93,
  sym_europacss_slash_value = 94,
  sym_europacss_dotted_name = 95,
  sym__descendant_operator = 96,
  sym__pseudo_class_selector_colon = 97,
  sym___error_recovery = 98,
  sym_stylesheet = 99,
  sym_import_statement = 100,
  sym_media_statement = 101,
  sym_charset_statement = 102,
  sym_namespace_statement = 103,
  sym_keyframes_statement = 104,
  sym_keyframe_block_list = 105,
  sym_keyframe_block = 106,
  sym_supports_statement = 107,
  sym_postcss_statement = 108,
  sym_at_rule = 109,
  sym_rule_set = 110,
  sym_selectors = 111,
  sym_block = 112,
  sym__selector = 113,
  sym_universal_selector = 114,
  sym_class_selector = 115,
  sym_pseudo_class_selector = 116,
  sym__nth_child_pseudo_class_selector = 117,
  sym_pseudo_element_selector = 118,
  sym_id_selector = 119,
  sym_attribute_selector = 120,
  sym_child_selector = 121,
  sym_descendant_selector = 122,
  sym_sibling_selector = 123,
  sym_adjacent_sibling_selector = 124,
  sym_namespace_selector = 125,
  sym_pseudo_class_arguments = 126,
  sym_pseudo_class_with_selector_arguments = 127,
  sym_pseudo_class_nth_child_arguments = 128,
  sym_pseudo_element_arguments = 129,
  sym_declaration = 130,
  sym_last_declaration = 131,
  sym__query = 132,
  sym_feature_query = 133,
  sym_parenthesized_query = 134,
  sym_binary_query = 135,
  sym_unary_query = 136,
  sym_selector_query = 137,
  sym__value = 138,
  sym_parenthesized_value = 139,
  sym_color_value = 140,
  sym_string_value = 141,
  sym_integer_value = 142,
  sym_float_value = 143,
  sym_grid_value = 144,
  sym_call_expression = 145,
  sym_binary_expression = 146,
  sym_arguments = 147,
  sym_class_name = 148,
  sym_europacss_color = 149,
  sym_europacss_color_target = 150,
  sym_europacss_space = 151,
  sym_europacss_font = 152,
  sym_europacss_fontsize = 153,
  sym_europacss_responsive = 154,
  sym_europacss_mq = 155,
  sym_europacss_column = 156,
  sym_europacss_display = 157,
  sym_europacss_grid = 158,
  sym_europacss_row = 159,
  sym_europacss_abs100 = 160,
  sym_europacss_iterate = 161,
  sym_europacss_unpack = 162,
  sym_europacss_if = 163,
  sym__europacss_value = 164,
  aux_sym_stylesheet_repeat1 = 165,
  aux_sym_import_statement_repeat1 = 166,
  aux_sym_keyframe_block_list_repeat1 = 167,
  aux_sym_postcss_statement_repeat1 = 168,
  aux_sym_selectors_repeat1 = 169,
  aux_sym_block_repeat1 = 170,
  aux_sym_pseudo_class_arguments_repeat1 = 171,
  aux_sym_declaration_repeat1 = 172,
  aux_sym_string_value_repeat1 = 173,
  aux_sym_string_value_repeat2 = 174,
  aux_sym_grid_value_repeat1 = 175,
  aux_sym_arguments_repeat1 = 176,
  aux_sym_class_name_repeat1 = 177,
  alias_sym_attribute_name = 178,
  alias_sym_feature_name = 179,
  alias_sym_function_name = 180,
  alias_sym_id_name = 181,
  alias_sym_keyframes_name = 182,
  alias_sym_keyword_query = 183,
  alias_sym_namespace_name = 184,
  alias_sym_property_name = 185,
  alias_sym_tag_name = 186,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_has] = "class_name",
  [anon_sym_not] = "not",
  [anon_sym_is] = "class_name",
  [anon_sym_where] = "class_name",
  [anon_sym_host] = "class_name",
  [anon_sym_host_DASHcontext] = "class_name",
  [anon_sym_nth_DASHchild] = "class_name",
  [anon_sym_nth_DASHlast_DASHchild] = "class_name",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_even] = "plain_value",
  [anon_sym_odd] = "plain_value",
  [anon_sym_of] = "of",
  [sym__nth_functional_notation] = "plain_value",
  [anon_sym_COLON] = ":",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_color_value_token1] = "color_value_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_value_token1] = "string_content",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_LBRACK2] = "[",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_js_comment] = "js_comment",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__kw_color] = "europacss_keyword",
  [sym__kw_space] = "europacss_keyword",
  [sym__kw_font] = "europacss_keyword",
  [sym__kw_fontsize] = "europacss_keyword",
  [sym__kw_column] = "europacss_keyword",
  [sym__kw_display] = "europacss_keyword",
  [sym__kw_grid] = "europacss_keyword",
  [sym__kw_row] = "europacss_keyword",
  [sym__kw_abs100] = "europacss_keyword",
  [anon_sym_fg] = "fg",
  [anon_sym_bg] = "bg",
  [anon_sym_fill] = "fill",
  [anon_sym_stroke] = "stroke",
  [anon_sym_border] = "border",
  [anon_sym_border_DASHtop] = "border-top",
  [anon_sym_border_DASHbottom] = "border-bottom",
  [anon_sym_border_DASHleft] = "border-left",
  [anon_sym_border_DASHright] = "border-right",
  [anon_sym_ATresponsive] = "@responsive",
  [anon_sym_ATmq] = "@mq",
  [anon_sym_ATiterate] = "@iterate",
  [anon_sym_ATunpack] = "@unpack",
  [anon_sym_ATif] = "@if",
  [sym_europacss_variable] = "europacss_variable",
  [sym_europacss_range] = "europacss_range",
  [sym_europacss_slash_value] = "europacss_slash_value",
  [sym_europacss_dotted_name] = "europacss_dotted_name",
  [sym__descendant_operator] = "_descendant_operator",
  [sym__pseudo_class_selector_colon] = ":",
  [sym___error_recovery] = "__error_recovery",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_postcss_statement] = "postcss_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym__nth_child_pseudo_class_selector] = "_nth_child_pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_namespace_selector] = "namespace_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_pseudo_class_with_selector_arguments] = "arguments",
  [sym_pseudo_class_nth_child_arguments] = "arguments",
  [sym_pseudo_element_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_string_value] = "string_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_grid_value] = "grid_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [sym_class_name] = "class_name",
  [sym_europacss_color] = "europacss_color",
  [sym_europacss_color_target] = "europacss_color_target",
  [sym_europacss_space] = "europacss_space",
  [sym_europacss_font] = "europacss_font",
  [sym_europacss_fontsize] = "europacss_fontsize",
  [sym_europacss_responsive] = "europacss_responsive",
  [sym_europacss_mq] = "europacss_mq",
  [sym_europacss_column] = "europacss_column",
  [sym_europacss_display] = "europacss_display",
  [sym_europacss_grid] = "europacss_grid",
  [sym_europacss_row] = "europacss_row",
  [sym_europacss_abs100] = "europacss_abs100",
  [sym_europacss_iterate] = "europacss_iterate",
  [sym_europacss_unpack] = "europacss_unpack",
  [sym_europacss_if] = "europacss_if",
  [sym__europacss_value] = "_europacss_value",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_postcss_statement_repeat1] = "postcss_statement_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_string_value_repeat1] = "string_value_repeat1",
  [aux_sym_string_value_repeat2] = "string_value_repeat2",
  [aux_sym_grid_value_repeat1] = "grid_value_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_class_name_repeat1] = "class_name_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATimport] = anon_sym_ATimport,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ATmedia] = anon_sym_ATmedia,
  [anon_sym_ATcharset] = anon_sym_ATcharset,
  [anon_sym_ATnamespace] = anon_sym_ATnamespace,
  [anon_sym_ATkeyframes] = anon_sym_ATkeyframes,
  [aux_sym_keyframes_statement_token1] = sym_at_keyword,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_from] = sym_from,
  [sym_to] = sym_to,
  [anon_sym_ATsupports] = anon_sym_ATsupports,
  [sym_nesting_selector] = sym_nesting_selector,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_has] = sym_class_name,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_is] = sym_class_name,
  [anon_sym_where] = sym_class_name,
  [anon_sym_host] = sym_class_name,
  [anon_sym_host_DASHcontext] = sym_class_name,
  [anon_sym_nth_DASHchild] = sym_class_name,
  [anon_sym_nth_DASHlast_DASHchild] = sym_class_name,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_DOLLAR_EQ] = anon_sym_DOLLAR_EQ,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_even] = sym_plain_value,
  [anon_sym_odd] = sym_plain_value,
  [anon_sym_of] = anon_sym_of,
  [sym__nth_functional_notation] = sym_plain_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_important] = sym_important,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_selector] = anon_sym_selector,
  [aux_sym_color_value_token1] = aux_sym_color_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_value_token1] = aux_sym_string_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_value_token2] = aux_sym_string_value_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_integer_value_token1] = aux_sym_integer_value_token1,
  [aux_sym_float_value_token1] = aux_sym_float_value_token1,
  [sym_unit] = sym_unit,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier] = sym_identifier,
  [sym_at_keyword] = sym_at_keyword,
  [sym_js_comment] = sym_js_comment,
  [sym_comment] = sym_comment,
  [sym_plain_value] = sym_plain_value,
  [sym__kw_color] = sym__kw_color,
  [sym__kw_space] = sym__kw_color,
  [sym__kw_font] = sym__kw_color,
  [sym__kw_fontsize] = sym__kw_color,
  [sym__kw_column] = sym__kw_color,
  [sym__kw_display] = sym__kw_color,
  [sym__kw_grid] = sym__kw_color,
  [sym__kw_row] = sym__kw_color,
  [sym__kw_abs100] = sym__kw_color,
  [anon_sym_fg] = anon_sym_fg,
  [anon_sym_bg] = anon_sym_bg,
  [anon_sym_fill] = anon_sym_fill,
  [anon_sym_stroke] = anon_sym_stroke,
  [anon_sym_border] = anon_sym_border,
  [anon_sym_border_DASHtop] = anon_sym_border_DASHtop,
  [anon_sym_border_DASHbottom] = anon_sym_border_DASHbottom,
  [anon_sym_border_DASHleft] = anon_sym_border_DASHleft,
  [anon_sym_border_DASHright] = anon_sym_border_DASHright,
  [anon_sym_ATresponsive] = anon_sym_ATresponsive,
  [anon_sym_ATmq] = anon_sym_ATmq,
  [anon_sym_ATiterate] = anon_sym_ATiterate,
  [anon_sym_ATunpack] = anon_sym_ATunpack,
  [anon_sym_ATif] = anon_sym_ATif,
  [sym_europacss_variable] = sym_europacss_variable,
  [sym_europacss_range] = sym_europacss_range,
  [sym_europacss_slash_value] = sym_europacss_slash_value,
  [sym_europacss_dotted_name] = sym_europacss_dotted_name,
  [sym__descendant_operator] = sym__descendant_operator,
  [sym__pseudo_class_selector_colon] = anon_sym_COLON,
  [sym___error_recovery] = sym___error_recovery,
  [sym_stylesheet] = sym_stylesheet,
  [sym_import_statement] = sym_import_statement,
  [sym_media_statement] = sym_media_statement,
  [sym_charset_statement] = sym_charset_statement,
  [sym_namespace_statement] = sym_namespace_statement,
  [sym_keyframes_statement] = sym_keyframes_statement,
  [sym_keyframe_block_list] = sym_keyframe_block_list,
  [sym_keyframe_block] = sym_keyframe_block,
  [sym_supports_statement] = sym_supports_statement,
  [sym_postcss_statement] = sym_postcss_statement,
  [sym_at_rule] = sym_at_rule,
  [sym_rule_set] = sym_rule_set,
  [sym_selectors] = sym_selectors,
  [sym_block] = sym_block,
  [sym__selector] = sym__selector,
  [sym_universal_selector] = sym_universal_selector,
  [sym_class_selector] = sym_class_selector,
  [sym_pseudo_class_selector] = sym_pseudo_class_selector,
  [sym__nth_child_pseudo_class_selector] = sym__nth_child_pseudo_class_selector,
  [sym_pseudo_element_selector] = sym_pseudo_element_selector,
  [sym_id_selector] = sym_id_selector,
  [sym_attribute_selector] = sym_attribute_selector,
  [sym_child_selector] = sym_child_selector,
  [sym_descendant_selector] = sym_descendant_selector,
  [sym_sibling_selector] = sym_sibling_selector,
  [sym_adjacent_sibling_selector] = sym_adjacent_sibling_selector,
  [sym_namespace_selector] = sym_namespace_selector,
  [sym_pseudo_class_arguments] = sym_arguments,
  [sym_pseudo_class_with_selector_arguments] = sym_arguments,
  [sym_pseudo_class_nth_child_arguments] = sym_arguments,
  [sym_pseudo_element_arguments] = sym_arguments,
  [sym_declaration] = sym_declaration,
  [sym_last_declaration] = sym_declaration,
  [sym__query] = sym__query,
  [sym_feature_query] = sym_feature_query,
  [sym_parenthesized_query] = sym_parenthesized_query,
  [sym_binary_query] = sym_binary_query,
  [sym_unary_query] = sym_unary_query,
  [sym_selector_query] = sym_selector_query,
  [sym__value] = sym__value,
  [sym_parenthesized_value] = sym_parenthesized_value,
  [sym_color_value] = sym_color_value,
  [sym_string_value] = sym_string_value,
  [sym_integer_value] = sym_integer_value,
  [sym_float_value] = sym_float_value,
  [sym_grid_value] = sym_grid_value,
  [sym_call_expression] = sym_call_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_arguments] = sym_arguments,
  [sym_class_name] = sym_class_name,
  [sym_europacss_color] = sym_europacss_color,
  [sym_europacss_color_target] = sym_europacss_color_target,
  [sym_europacss_space] = sym_europacss_space,
  [sym_europacss_font] = sym_europacss_font,
  [sym_europacss_fontsize] = sym_europacss_fontsize,
  [sym_europacss_responsive] = sym_europacss_responsive,
  [sym_europacss_mq] = sym_europacss_mq,
  [sym_europacss_column] = sym_europacss_column,
  [sym_europacss_display] = sym_europacss_display,
  [sym_europacss_grid] = sym_europacss_grid,
  [sym_europacss_row] = sym_europacss_row,
  [sym_europacss_abs100] = sym_europacss_abs100,
  [sym_europacss_iterate] = sym_europacss_iterate,
  [sym_europacss_unpack] = sym_europacss_unpack,
  [sym_europacss_if] = sym_europacss_if,
  [sym__europacss_value] = sym__europacss_value,
  [aux_sym_stylesheet_repeat1] = aux_sym_stylesheet_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_keyframe_block_list_repeat1] = aux_sym_keyframe_block_list_repeat1,
  [aux_sym_postcss_statement_repeat1] = aux_sym_postcss_statement_repeat1,
  [aux_sym_selectors_repeat1] = aux_sym_selectors_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_pseudo_class_arguments_repeat1] = aux_sym_pseudo_class_arguments_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [aux_sym_string_value_repeat1] = aux_sym_string_value_repeat1,
  [aux_sym_string_value_repeat2] = aux_sym_string_value_repeat2,
  [aux_sym_grid_value_repeat1] = aux_sym_grid_value_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_class_name_repeat1] = aux_sym_class_name_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_property_name] = alias_sym_property_name,
  [alias_sym_tag_name] = alias_sym_tag_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyframes_statement_token1] = {
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
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_host_DASHcontext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHchild] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nth_DASHlast_DASHchild] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_even] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_odd] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [sym__nth_functional_notation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_js_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_color] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_space] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_font] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_fontsize] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_column] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_display] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_grid] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_row] = {
    .visible = true,
    .named = true,
  },
  [sym__kw_abs100] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stroke] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHtop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHbottom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHleft] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_border_DASHright] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATresponsive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATiterate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATunpack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATif] = {
    .visible = true,
    .named = false,
  },
  [sym_europacss_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_range] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_slash_value] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_dotted_name] = {
    .visible = true,
    .named = true,
  },
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__pseudo_class_selector_colon] = {
    .visible = true,
    .named = false,
  },
  [sym___error_recovery] = {
    .visible = false,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_postcss_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym__nth_child_pseudo_class_selector] = {
    .visible = false,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_with_selector_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_nth_child_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_grid_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_color] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_color_target] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_space] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_font] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_fontsize] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_responsive] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_mq] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_column] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_display] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_grid] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_row] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_abs100] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_iterate] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_unpack] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_if] = {
    .visible = true,
    .named = true,
  },
  [sym__europacss_value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postcss_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grid_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_breakpoint = 1,
  field_condition = 2,
  field_family = 3,
  field_property = 4,
  field_query = 5,
  field_size = 6,
  field_target = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_breakpoint] = "breakpoint",
  [field_condition] = "condition",
  [field_family] = "family",
  [field_property] = "property",
  [field_query] = "query",
  [field_size] = "size",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [16] = {.index = 0, .length = 1},
  [17] = {.index = 1, .length = 1},
  [18] = {.index = 2, .length = 1},
  [19] = {.index = 3, .length = 1},
  [20] = {.index = 4, .length = 1},
  [22] = {.index = 5, .length = 2},
  [23] = {.index = 7, .length = 2},
  [24] = {.index = 9, .length = 2},
  [25] = {.index = 11, .length = 2},
  [26] = {.index = 13, .length = 2},
  [27] = {.index = 15, .length = 3},
  [28] = {.index = 18, .length = 3},
  [29] = {.index = 21, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_size, 1},
  [1] =
    {field_value, 1},
  [2] =
    {field_breakpoint, 1},
  [3] =
    {field_query, 1},
  [4] =
    {field_condition, 1},
  [5] =
    {field_target, 1},
    {field_value, 2},
  [7] =
    {field_property, 1},
    {field_value, 2},
  [9] =
    {field_family, 1},
    {field_size, 2},
  [11] =
    {field_breakpoint, 2},
    {field_size, 1},
  [13] =
    {field_breakpoint, 2},
    {field_value, 1},
  [15] =
    {field_breakpoint, 3},
    {field_target, 1},
    {field_value, 2},
  [18] =
    {field_breakpoint, 3},
    {field_property, 1},
    {field_value, 2},
  [21] =
    {field_breakpoint, 3},
    {field_family, 1},
    {field_size, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [1] = sym_class_name,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [0] = alias_sym_keyword_query,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = alias_sym_attribute_name,
  },
  [10] = {
    [2] = sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = alias_sym_attribute_name,
  },
  [21] = {
    [1] = alias_sym_feature_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_namespace_selector, 2,
    sym_namespace_selector,
    alias_sym_attribute_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 2,
  [7] = 4,
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
  [60] = 58,
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
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 80,
  [87] = 87,
  [88] = 38,
  [89] = 39,
  [90] = 50,
  [91] = 51,
  [92] = 40,
  [93] = 41,
  [94] = 53,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 43,
  [99] = 44,
  [100] = 45,
  [101] = 101,
  [102] = 46,
  [103] = 56,
  [104] = 104,
  [105] = 14,
  [106] = 49,
  [107] = 32,
  [108] = 35,
  [109] = 52,
  [110] = 36,
  [111] = 33,
  [112] = 47,
  [113] = 37,
  [114] = 42,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 125,
  [127] = 127,
  [128] = 128,
  [129] = 125,
  [130] = 130,
  [131] = 131,
  [132] = 132,
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
  [157] = 79,
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
  [172] = 84,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 174,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 176,
  [184] = 176,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 173,
  [189] = 187,
  [190] = 190,
  [191] = 174,
  [192] = 185,
  [193] = 190,
  [194] = 190,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 84,
  [200] = 79,
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
  [219] = 219,
  [220] = 218,
  [221] = 219,
  [222] = 217,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 226,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 161,
  [236] = 236,
  [237] = 237,
  [238] = 181,
  [239] = 239,
  [240] = 240,
  [241] = 182,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 204,
  [246] = 246,
  [247] = 236,
  [248] = 246,
  [249] = 249,
  [250] = 197,
  [251] = 251,
  [252] = 161,
  [253] = 84,
  [254] = 198,
  [255] = 202,
  [256] = 201,
  [257] = 79,
  [258] = 203,
  [259] = 206,
  [260] = 207,
  [261] = 205,
  [262] = 196,
  [263] = 195,
  [264] = 264,
  [265] = 182,
  [266] = 181,
  [267] = 204,
  [268] = 207,
  [269] = 198,
  [270] = 195,
  [271] = 203,
  [272] = 205,
  [273] = 201,
  [274] = 202,
  [275] = 196,
  [276] = 206,
  [277] = 197,
  [278] = 84,
  [279] = 79,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 280,
  [289] = 283,
  [290] = 290,
  [291] = 291,
  [292] = 284,
  [293] = 283,
  [294] = 294,
  [295] = 291,
  [296] = 282,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 304,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 318,
  [326] = 321,
  [327] = 323,
  [328] = 328,
  [329] = 329,
  [330] = 324,
  [331] = 318,
  [332] = 332,
  [333] = 329,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 40,
  [340] = 340,
  [341] = 47,
  [342] = 342,
  [343] = 52,
  [344] = 344,
  [345] = 337,
  [346] = 346,
  [347] = 347,
  [348] = 347,
  [349] = 349,
  [350] = 334,
  [351] = 351,
  [352] = 346,
  [353] = 353,
  [354] = 353,
  [355] = 336,
  [356] = 337,
  [357] = 346,
  [358] = 349,
  [359] = 334,
  [360] = 360,
  [361] = 336,
  [362] = 337,
  [363] = 346,
  [364] = 349,
  [365] = 334,
  [366] = 337,
  [367] = 346,
  [368] = 349,
  [369] = 334,
  [370] = 370,
  [371] = 349,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 373,
  [379] = 373,
  [380] = 380,
  [381] = 181,
  [382] = 382,
  [383] = 383,
  [384] = 383,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 389,
  [395] = 395,
  [396] = 396,
  [397] = 181,
  [398] = 398,
  [399] = 399,
  [400] = 392,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 405,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 409,
  [418] = 418,
  [419] = 409,
  [420] = 405,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 411,
  [425] = 411,
  [426] = 407,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 402,
  [431] = 428,
  [432] = 432,
};

static TSCharacterRange sym_plain_value_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '\''}, {'+', '+'}, {'-', ':'}, {'<', 'Z'}, {'\\', '\\'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static TSCharacterRange sym_plain_value_character_set_2[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '\''}, {'*', '+'}, {'-', ':'}, {'<', 'Z'}, {'\\', '\\'}, {'^', 'z'},
  {'|', '|'}, {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(184);
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '$', 64,
        '&', 198,
        '\'', 291,
        '(', 237,
        ')', 238,
        '*', 199,
        '+', 234,
        ',', 186,
        '-', 340,
        '.', 201,
        '/', 342,
        ':', 246,
        ';', 187,
        '=', 223,
        '>', 230,
        '@', 68,
        'E', 43,
        '[', 222,
        '\\', 169,
        ']', 229,
        '^', 65,
        'a', 122,
        'b', 98,
        'e', 41,
        'f', 100,
        'h', 69,
        'i', 145,
        'n', 127,
        'o', 83,
        's', 92,
        't', 128,
        'w', 104,
        '{', 193,
        '|', 236,
        '}', 194,
        '~', 232,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(181);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(312);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '%', 336,
        '\'', 291,
        '(', 248,
        ')', 238,
        '*', 199,
        '+', 234,
        ',', 186,
        '-', 339,
        '.', 166,
        '/', 343,
        ';', 187,
        '[', 337,
        '_', 347,
        '}', 194,
        'E', 332,
        'e', 332,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '&', 198,
        '\'', 291,
        '(', 248,
        ')', 238,
        '*', 199,
        '+', 234,
        '-', 48,
        '.', 201,
        '/', 30,
        ':', 62,
        '>', 230,
        '[', 222,
        '_', 347,
        '|', 235,
        '~', 231,
        'E', 344,
        'e', 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '\'', 291,
        '(', 237,
        ')', 238,
        '*', 199,
        '+', 234,
        ',', 186,
        '-', 339,
        '.', 201,
        '/', 343,
        ':', 62,
        '>', 230,
        '[', 222,
        '_', 347,
        '|', 235,
        '~', 231,
        'E', 344,
        'e', 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '\'', 291,
        '(', 237,
        ')', 238,
        '*', 199,
        '+', 234,
        ',', 186,
        '-', 339,
        '.', 166,
        '/', 343,
        ';', 187,
        '[', 337,
        '_', 347,
        '}', 194,
        'E', 344,
        'e', 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '\'', 291,
        '(', 237,
        '*', 199,
        '+', 234,
        ',', 186,
        '-', 339,
        '.', 166,
        '/', 343,
        ';', 187,
        '[', 337,
        '_', 347,
        'a', 355,
        'o', 359,
        '{', 193,
        'E', 344,
        'e', 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '\'', 291,
        '(', 248,
        ')', 238,
        '*', 199,
        '+', 234,
        ',', 186,
        '-', 339,
        '.', 201,
        '/', 343,
        ':', 62,
        '>', 230,
        '[', 222,
        '_', 347,
        '|', 235,
        '~', 231,
        'E', 344,
        'e', 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '\'', 291,
        '(', 248,
        ')', 238,
        '*', 199,
        '+', 234,
        ',', 186,
        '-', 339,
        '.', 166,
        '/', 343,
        ';', 187,
        '[', 337,
        '_', 347,
        '}', 194,
        'E', 344,
        'e', 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '\'', 291,
        '(', 248,
        ')', 238,
        '+', 49,
        ',', 186,
        '-', 48,
        '.', 166,
        '/', 30,
        ';', 187,
        '[', 337,
        '_', 347,
        '}', 194,
        'E', 344,
        'e', 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '\'', 291,
        '(', 248,
        '*', 199,
        '+', 234,
        ',', 186,
        '-', 339,
        '.', 166,
        '/', 343,
        ';', 187,
        '[', 337,
        '_', 347,
        'a', 355,
        'o', 359,
        '{', 193,
        'E', 344,
        'e', 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '\'', 291,
        '(', 248,
        '+', 49,
        '-', 48,
        '.', 166,
        '/', 30,
        ';', 187,
        '[', 337,
        '_', 347,
        'n', 356,
        'o', 354,
        's', 351,
        '{', 193,
        'E', 344,
        'e', 344,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 297,
        '#', 221,
        '&', 198,
        '\'', 291,
        '(', 248,
        '*', 199,
        '+', 233,
        '-', 178,
        '.', 200,
        '/', 29,
        ':', 62,
        '>', 230,
        '@', 68,
        '[', 222,
        '|', 235,
        '}', 194,
        '~', 231,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '#', 221,
        '$', 63,
        '(', 237,
        ')', 238,
        '*', 66,
        '+', 233,
        ',', 186,
        '-', 178,
        '.', 200,
        '/', 29,
        ':', 62,
        '=', 223,
        '>', 230,
        '[', 222,
        '\\', 169,
        ']', 229,
        '^', 65,
        '{', 193,
        '|', 236,
        '~', 232,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '#', 221,
        '$', 63,
        ')', 238,
        '*', 66,
        '+', 233,
        ',', 186,
        '-', 178,
        '.', 200,
        '/', 29,
        ':', 62,
        '=', 223,
        '>', 230,
        '[', 222,
        '\\', 169,
        ']', 229,
        '^', 65,
        '{', 193,
        '|', 236,
        '~', 232,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 16:
      if (lookahead == '$') ADVANCE(172);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ';') ADVANCE(187);
      if (lookahead == '_') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '%', 336,
        '(', 248,
        '*', 199,
        '+', 233,
        '-', 341,
        '/', 342,
        ';', 187,
        'n', 325,
        'o', 324,
        's', 321,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '(', 237,
        ')', 238,
        '*', 199,
        '+', 233,
        ',', 186,
        '-', 338,
        '/', 342,
        ':', 245,
        ';', 187,
        ']', 229,
        'a', 121,
        'o', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '(', 237,
        '*', 199,
        '+', 233,
        '-', 341,
        '/', 342,
        ';', 187,
        'n', 391,
        'o', 388,
        's', 376,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '(', 248,
        '*', 199,
        '+', 233,
        '-', 341,
        '/', 342,
        ';', 187,
        'n', 391,
        'o', 388,
        's', 376,
        '{', 193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '(', 248,
        '*', 199,
        '+', 233,
        '-', 341,
        '/', 342,
        ';', 187,
        'n', 391,
        'o', 388,
        's', 376,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '(', 248,
        '-', 178,
        '/', 29,
        ';', 187,
        'n', 391,
        'o', 388,
        's', 376,
        '{', 193,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        ')', 238,
        '*', 199,
        '+', 233,
        ',', 186,
        '-', 338,
        '/', 342,
        ':', 245,
        ';', 187,
        ']', 229,
        'a', 121,
        'o', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        ')', 238,
        '*', 199,
        '+', 233,
        ',', 186,
        '-', 338,
        '/', 342,
        ';', 187,
        ']', 229,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        ')', 238,
        '*', 199,
        '+', 233,
        ',', 186,
        '-', 338,
        '/', 342,
        ';', 187,
        ']', 229,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        ')', 238,
        ',', 186,
        '/', 29,
        ':', 245,
        ';', 187,
        'a', 121,
        'b', 97,
        'f', 99,
        'o', 95,
        's', 155,
        't', 128,
        '{', 193,
        '}', 194,
        '+', 168,
        '-', 168,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(335);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(512);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(509);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(513);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '+') ADVANCE(168);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(243);
      if (lookahead == 'o') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(169);
      if (lookahead == 'h') ADVANCE(365);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead == 'w') ADVANCE(380);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '/') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '/') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(564);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == 'v') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == 'v') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(347);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '>') ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '>') ADVANCE(556);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '/') ADVANCE(175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '{') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '{') ADVANCE(193);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(521);
      END_STATE();
    case 60:
      if (lookahead == '0') ADVANCE(540);
      END_STATE();
    case 61:
      if (lookahead == '0') ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 63:
      if (lookahead == '=') ADVANCE(228);
      END_STATE();
    case 64:
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 65:
      if (lookahead == '=') ADVANCE(225);
      END_STATE();
    case 66:
      if (lookahead == '=') ADVANCE(227);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(556);
      END_STATE();
    case 68:
      ADVANCE_MAP(
        'a', 422,
        'c', 446,
        'd', 450,
        'f', 465,
        'g', 479,
        'i', 443,
        'k', 428,
        'm', 429,
        'n', 412,
        'r', 440,
        's', 472,
        'u', 463,
      );
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(447);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead == 'k') ADVANCE(428);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 'f') ADVANCE(241);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(152);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(542);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(541);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(153);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(543);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(547);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(546);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 162:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 163:
      if (lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 164:
      if (lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 165:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(303);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 173:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 174:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(59);
      END_STATE();
    case 175:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 176:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 177:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 178:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 179:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(59);
      END_STATE();
    case 180:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 181:
      if (eof) ADVANCE(184);
      ADVANCE_MAP(
        '!', 107,
        '"', 297,
        '#', 221,
        '$', 64,
        '&', 198,
        '\'', 291,
        '(', 248,
        ')', 238,
        '*', 199,
        '+', 234,
        ',', 186,
        '-', 340,
        '.', 201,
        '/', 342,
        ':', 246,
        ';', 187,
        '=', 223,
        '>', 230,
        '@', 68,
        'E', 44,
        '[', 222,
        '\\', 169,
        ']', 229,
        '^', 65,
        'a', 121,
        'b', 97,
        'e', 42,
        'f', 99,
        'h', 69,
        'i', 145,
        'n', 127,
        'o', 83,
        's', 92,
        't', 128,
        'w', 104,
        '{', 193,
        '|', 236,
        '}', 194,
        '~', 232,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 182:
      if (eof) ADVANCE(184);
      ADVANCE_MAP(
        '"', 297,
        '#', 221,
        '&', 198,
        '\'', 291,
        '(', 237,
        ')', 238,
        '*', 199,
        '+', 233,
        ',', 186,
        '-', 178,
        '.', 200,
        '/', 29,
        ':', 246,
        ';', 187,
        '>', 230,
        '@', 73,
        '[', 222,
        '\\', 169,
        ']', 229,
        '{', 193,
        '|', 235,
        '}', 194,
        '~', 231,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 183:
      if (eof) ADVANCE(184);
      ADVANCE_MAP(
        '"', 297,
        '#', 221,
        '&', 198,
        '\'', 291,
        ')', 238,
        '*', 199,
        '+', 233,
        ',', 186,
        '-', 178,
        '.', 200,
        '/', 29,
        ':', 246,
        ';', 187,
        '>', 230,
        '@', 73,
        '[', 222,
        '\\', 169,
        ']', 229,
        '{', 193,
        '|', 235,
        '}', 194,
        '~', 231,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(224);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(226);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_even);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (lookahead == '+') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(294);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'c') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'e') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'o') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'r') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 't') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 't') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'y') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(334);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(334);
      if (lookahead == '/') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(347);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(509);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(59);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(363);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 'y') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(364);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '1') ADVANCE(61);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(481);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(504);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(431);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(536);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(452);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'q') ADVANCE(551);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(427);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(497);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(554);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(470);
      if (lookahead == 't') ADVANCE(436);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(484);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(485);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(415);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(415);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(553);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'l') ADVANCE(416);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(470);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(441);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(438);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'm') ADVANCE(439);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(461);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(458);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(455);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(413);
      if (lookahead == 'u') ADVANCE(477);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(467);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(420);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(475);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(524);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(492);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(418);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(421);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 's') ADVANCE(411);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 's') ADVANCE(471);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 's') ADVANCE(449);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 's') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'u') ADVANCE(477);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'v') ADVANCE(435);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'w') ADVANCE(538);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'y') ADVANCE(444);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'y') ADVANCE(534);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'y') ADVANCE(445);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == 'z') ADVANCE(433);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(512);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(509);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '!' ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(522);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(517);
      if (lookahead == '.') ADVANCE(516);
      if (lookahead == '/') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(514);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(519);
      if (lookahead == '/') ADVANCE(180);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(515);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(515);
      if (lookahead == '/') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '>') ADVANCE(556);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(176);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '>') ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(180);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(511);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__kw_color);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__kw_color);
      if (lookahead == '!') ADVANCE(523);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__kw_space);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__kw_space);
      if (lookahead == '!') ADVANCE(525);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__kw_font);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__kw_font);
      if (lookahead == '!') ADVANCE(527);
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__kw_fontsize);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__kw_fontsize);
      if (lookahead == '!') ADVANCE(529);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__kw_column);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__kw_column);
      if (lookahead == '!') ADVANCE(531);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__kw_display);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__kw_display);
      if (lookahead == '!') ADVANCE(533);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__kw_grid);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__kw_grid);
      if (lookahead == '!') ADVANCE(535);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__kw_row);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__kw_row);
      if (lookahead == '!') ADVANCE(537);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__kw_abs100);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__kw_abs100);
      if (lookahead == '!') ADVANCE(539);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_fg);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_bg);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_stroke);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_border);
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_border_DASHtop);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_border_DASHbottom);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_border_DASHleft);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_border_DASHright);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_ATresponsive);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_ATmq);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_ATiterate);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_ATunpack);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(442);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(508);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_europacss_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_europacss_range);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '-') ADVANCE(564);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '.') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '>') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '>') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 182, .external_lex_state = 2},
  [2] = {.lex_state = 13, .external_lex_state = 2},
  [3] = {.lex_state = 13, .external_lex_state = 2},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 182, .external_lex_state = 2},
  [10] = {.lex_state = 182, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 4, .external_lex_state = 2},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 13, .external_lex_state = 2},
  [26] = {.lex_state = 13, .external_lex_state = 2},
  [27] = {.lex_state = 13, .external_lex_state = 2},
  [28] = {.lex_state = 13, .external_lex_state = 2},
  [29] = {.lex_state = 13, .external_lex_state = 2},
  [30] = {.lex_state = 13, .external_lex_state = 2},
  [31] = {.lex_state = 13, .external_lex_state = 2},
  [32] = {.lex_state = 13, .external_lex_state = 2},
  [33] = {.lex_state = 13, .external_lex_state = 2},
  [34] = {.lex_state = 13, .external_lex_state = 2},
  [35] = {.lex_state = 13, .external_lex_state = 2},
  [36] = {.lex_state = 13, .external_lex_state = 2},
  [37] = {.lex_state = 13, .external_lex_state = 2},
  [38] = {.lex_state = 13, .external_lex_state = 2},
  [39] = {.lex_state = 13, .external_lex_state = 2},
  [40] = {.lex_state = 13, .external_lex_state = 2},
  [41] = {.lex_state = 13, .external_lex_state = 2},
  [42] = {.lex_state = 13, .external_lex_state = 2},
  [43] = {.lex_state = 13, .external_lex_state = 2},
  [44] = {.lex_state = 13, .external_lex_state = 2},
  [45] = {.lex_state = 13, .external_lex_state = 2},
  [46] = {.lex_state = 13, .external_lex_state = 2},
  [47] = {.lex_state = 13, .external_lex_state = 2},
  [48] = {.lex_state = 13, .external_lex_state = 2},
  [49] = {.lex_state = 13, .external_lex_state = 2},
  [50] = {.lex_state = 13, .external_lex_state = 2},
  [51] = {.lex_state = 13, .external_lex_state = 2},
  [52] = {.lex_state = 13, .external_lex_state = 2},
  [53] = {.lex_state = 13, .external_lex_state = 2},
  [54] = {.lex_state = 13, .external_lex_state = 2},
  [55] = {.lex_state = 13, .external_lex_state = 2},
  [56] = {.lex_state = 13, .external_lex_state = 2},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 182, .external_lex_state = 2},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 182, .external_lex_state = 2},
  [62] = {.lex_state = 182, .external_lex_state = 2},
  [63] = {.lex_state = 182, .external_lex_state = 2},
  [64] = {.lex_state = 182, .external_lex_state = 2},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 182, .external_lex_state = 2},
  [67] = {.lex_state = 182, .external_lex_state = 2},
  [68] = {.lex_state = 182, .external_lex_state = 2},
  [69] = {.lex_state = 182, .external_lex_state = 2},
  [70] = {.lex_state = 182, .external_lex_state = 2},
  [71] = {.lex_state = 182, .external_lex_state = 2},
  [72] = {.lex_state = 182, .external_lex_state = 2},
  [73] = {.lex_state = 182, .external_lex_state = 2},
  [74] = {.lex_state = 182, .external_lex_state = 2},
  [75] = {.lex_state = 182, .external_lex_state = 2},
  [76] = {.lex_state = 5, .external_lex_state = 3},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 8, .external_lex_state = 3},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 8, .external_lex_state = 3},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 14, .external_lex_state = 3},
  [84] = {.lex_state = 8, .external_lex_state = 3},
  [85] = {.lex_state = 14, .external_lex_state = 3},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 182, .external_lex_state = 2},
  [89] = {.lex_state = 182, .external_lex_state = 2},
  [90] = {.lex_state = 182, .external_lex_state = 2},
  [91] = {.lex_state = 182, .external_lex_state = 2},
  [92] = {.lex_state = 182, .external_lex_state = 2},
  [93] = {.lex_state = 182, .external_lex_state = 2},
  [94] = {.lex_state = 182, .external_lex_state = 2},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 182, .external_lex_state = 2},
  [99] = {.lex_state = 182, .external_lex_state = 2},
  [100] = {.lex_state = 182, .external_lex_state = 2},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 182, .external_lex_state = 2},
  [103] = {.lex_state = 182, .external_lex_state = 2},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 182, .external_lex_state = 2},
  [106] = {.lex_state = 182, .external_lex_state = 2},
  [107] = {.lex_state = 182, .external_lex_state = 2},
  [108] = {.lex_state = 182, .external_lex_state = 2},
  [109] = {.lex_state = 182, .external_lex_state = 2},
  [110] = {.lex_state = 182, .external_lex_state = 2},
  [111] = {.lex_state = 182, .external_lex_state = 2},
  [112] = {.lex_state = 182, .external_lex_state = 2},
  [113] = {.lex_state = 182, .external_lex_state = 2},
  [114] = {.lex_state = 182, .external_lex_state = 2},
  [115] = {.lex_state = 14, .external_lex_state = 3},
  [116] = {.lex_state = 14, .external_lex_state = 3},
  [117] = {.lex_state = 14, .external_lex_state = 3},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 14, .external_lex_state = 3},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 14, .external_lex_state = 3},
  [122] = {.lex_state = 14, .external_lex_state = 3},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 14, .external_lex_state = 3},
  [131] = {.lex_state = 14, .external_lex_state = 3},
  [132] = {.lex_state = 14, .external_lex_state = 3},
  [133] = {.lex_state = 14, .external_lex_state = 3},
  [134] = {.lex_state = 14, .external_lex_state = 3},
  [135] = {.lex_state = 14, .external_lex_state = 3},
  [136] = {.lex_state = 14, .external_lex_state = 3},
  [137] = {.lex_state = 14, .external_lex_state = 3},
  [138] = {.lex_state = 14, .external_lex_state = 3},
  [139] = {.lex_state = 14, .external_lex_state = 3},
  [140] = {.lex_state = 14, .external_lex_state = 3},
  [141] = {.lex_state = 14, .external_lex_state = 3},
  [142] = {.lex_state = 14, .external_lex_state = 3},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 14, .external_lex_state = 3},
  [145] = {.lex_state = 14, .external_lex_state = 3},
  [146] = {.lex_state = 14, .external_lex_state = 3},
  [147] = {.lex_state = 14, .external_lex_state = 3},
  [148] = {.lex_state = 14, .external_lex_state = 3},
  [149] = {.lex_state = 14, .external_lex_state = 3},
  [150] = {.lex_state = 14, .external_lex_state = 3},
  [151] = {.lex_state = 14, .external_lex_state = 3},
  [152] = {.lex_state = 14, .external_lex_state = 3},
  [153] = {.lex_state = 14, .external_lex_state = 3},
  [154] = {.lex_state = 14, .external_lex_state = 3},
  [155] = {.lex_state = 14, .external_lex_state = 3},
  [156] = {.lex_state = 14, .external_lex_state = 3},
  [157] = {.lex_state = 14, .external_lex_state = 3},
  [158] = {.lex_state = 14, .external_lex_state = 3},
  [159] = {.lex_state = 14, .external_lex_state = 3},
  [160] = {.lex_state = 14, .external_lex_state = 3},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 14, .external_lex_state = 3},
  [163] = {.lex_state = 14, .external_lex_state = 3},
  [164] = {.lex_state = 14, .external_lex_state = 3},
  [165] = {.lex_state = 14, .external_lex_state = 3},
  [166] = {.lex_state = 14, .external_lex_state = 3},
  [167] = {.lex_state = 14, .external_lex_state = 3},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 14, .external_lex_state = 3},
  [170] = {.lex_state = 14, .external_lex_state = 3},
  [171] = {.lex_state = 14, .external_lex_state = 3},
  [172] = {.lex_state = 14, .external_lex_state = 3},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 14, .external_lex_state = 3},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 14, .external_lex_state = 3},
  [213] = {.lex_state = 14, .external_lex_state = 3},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 14, .external_lex_state = 3},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 20},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 20},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 22},
  [224] = {.lex_state = 182, .external_lex_state = 3},
  [225] = {.lex_state = 182, .external_lex_state = 3},
  [226] = {.lex_state = 182, .external_lex_state = 3},
  [227] = {.lex_state = 35},
  [228] = {.lex_state = 182, .external_lex_state = 3},
  [229] = {.lex_state = 182, .external_lex_state = 3},
  [230] = {.lex_state = 182, .external_lex_state = 3},
  [231] = {.lex_state = 182, .external_lex_state = 3},
  [232] = {.lex_state = 182, .external_lex_state = 3},
  [233] = {.lex_state = 35},
  [234] = {.lex_state = 182, .external_lex_state = 3},
  [235] = {.lex_state = 19},
  [236] = {.lex_state = 22},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 22},
  [240] = {.lex_state = 182, .external_lex_state = 3},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 182, .external_lex_state = 3},
  [243] = {.lex_state = 22},
  [244] = {.lex_state = 22},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 22},
  [247] = {.lex_state = 22},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 26},
  [250] = {.lex_state = 20},
  [251] = {.lex_state = 18},
  [252] = {.lex_state = 18},
  [253] = {.lex_state = 20},
  [254] = {.lex_state = 20},
  [255] = {.lex_state = 20},
  [256] = {.lex_state = 20},
  [257] = {.lex_state = 20},
  [258] = {.lex_state = 20},
  [259] = {.lex_state = 20},
  [260] = {.lex_state = 20},
  [261] = {.lex_state = 20},
  [262] = {.lex_state = 20},
  [263] = {.lex_state = 20},
  [264] = {.lex_state = 182, .external_lex_state = 3},
  [265] = {.lex_state = 25},
  [266] = {.lex_state = 25},
  [267] = {.lex_state = 18},
  [268] = {.lex_state = 18},
  [269] = {.lex_state = 18},
  [270] = {.lex_state = 18},
  [271] = {.lex_state = 18},
  [272] = {.lex_state = 18},
  [273] = {.lex_state = 18},
  [274] = {.lex_state = 18},
  [275] = {.lex_state = 18},
  [276] = {.lex_state = 18},
  [277] = {.lex_state = 18},
  [278] = {.lex_state = 18},
  [279] = {.lex_state = 18},
  [280] = {.lex_state = 26},
  [281] = {.lex_state = 26},
  [282] = {.lex_state = 182},
  [283] = {.lex_state = 18},
  [284] = {.lex_state = 26},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 16},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 26},
  [289] = {.lex_state = 18},
  [290] = {.lex_state = 16},
  [291] = {.lex_state = 26},
  [292] = {.lex_state = 26},
  [293] = {.lex_state = 18},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 26},
  [296] = {.lex_state = 182},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 18},
  [299] = {.lex_state = 26},
  [300] = {.lex_state = 26},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 26},
  [303] = {.lex_state = 16},
  [304] = {.lex_state = 26},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 16},
  [308] = {.lex_state = 26},
  [309] = {.lex_state = 16},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 26},
  [312] = {.lex_state = 26},
  [313] = {.lex_state = 16},
  [314] = {.lex_state = 16},
  [315] = {.lex_state = 16},
  [316] = {.lex_state = 16},
  [317] = {.lex_state = 26},
  [318] = {.lex_state = 18},
  [319] = {.lex_state = 26},
  [320] = {.lex_state = 18},
  [321] = {.lex_state = 26},
  [322] = {.lex_state = 18},
  [323] = {.lex_state = 182},
  [324] = {.lex_state = 18},
  [325] = {.lex_state = 18},
  [326] = {.lex_state = 26},
  [327] = {.lex_state = 182},
  [328] = {.lex_state = 33},
  [329] = {.lex_state = 182},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 18},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 182},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 26},
  [336] = {.lex_state = 182},
  [337] = {.lex_state = 2},
  [338] = {.lex_state = 182},
  [339] = {.lex_state = 26},
  [340] = {.lex_state = 26},
  [341] = {.lex_state = 26},
  [342] = {.lex_state = 182},
  [343] = {.lex_state = 26},
  [344] = {.lex_state = 182},
  [345] = {.lex_state = 2},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 26},
  [348] = {.lex_state = 26},
  [349] = {.lex_state = 2},
  [350] = {.lex_state = 1},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 1},
  [353] = {.lex_state = 182},
  [354] = {.lex_state = 182},
  [355] = {.lex_state = 182},
  [356] = {.lex_state = 2},
  [357] = {.lex_state = 1},
  [358] = {.lex_state = 2},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 182},
  [361] = {.lex_state = 182},
  [362] = {.lex_state = 2},
  [363] = {.lex_state = 1},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 2},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 182},
  [371] = {.lex_state = 2},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 182},
  [374] = {.lex_state = 182},
  [375] = {.lex_state = 182},
  [376] = {.lex_state = 182},
  [377] = {.lex_state = 26},
  [378] = {.lex_state = 182},
  [379] = {.lex_state = 182},
  [380] = {.lex_state = 182},
  [381] = {.lex_state = 27},
  [382] = {.lex_state = 182},
  [383] = {.lex_state = 182},
  [384] = {.lex_state = 182},
  [385] = {.lex_state = 182},
  [386] = {.lex_state = 182},
  [387] = {.lex_state = 182},
  [388] = {.lex_state = 182},
  [389] = {.lex_state = 182},
  [390] = {.lex_state = 182},
  [391] = {.lex_state = 182},
  [392] = {.lex_state = 182},
  [393] = {.lex_state = 182},
  [394] = {.lex_state = 182},
  [395] = {.lex_state = 182},
  [396] = {.lex_state = 26},
  [397] = {.lex_state = 56},
  [398] = {.lex_state = 36},
  [399] = {.lex_state = 182},
  [400] = {.lex_state = 182},
  [401] = {.lex_state = 182},
  [402] = {.lex_state = 182},
  [403] = {.lex_state = 182},
  [404] = {.lex_state = 182},
  [405] = {.lex_state = 182},
  [406] = {.lex_state = 182},
  [407] = {.lex_state = 182},
  [408] = {.lex_state = 182},
  [409] = {.lex_state = 182},
  [410] = {.lex_state = 182},
  [411] = {.lex_state = 58},
  [412] = {.lex_state = 182},
  [413] = {.lex_state = 182},
  [414] = {.lex_state = 13},
  [415] = {.lex_state = 182},
  [416] = {.lex_state = 182},
  [417] = {.lex_state = 182},
  [418] = {.lex_state = 182},
  [419] = {.lex_state = 182},
  [420] = {.lex_state = 182},
  [421] = {.lex_state = 182},
  [422] = {.lex_state = 182},
  [423] = {.lex_state = 182},
  [424] = {.lex_state = 58},
  [425] = {.lex_state = 58},
  [426] = {.lex_state = 182},
  [427] = {.lex_state = 182},
  [428] = {.lex_state = 182},
  [429] = {.lex_state = 182},
  [430] = {.lex_state = 182},
  [431] = {.lex_state = 182},
  [432] = {.lex_state = 182},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_host_DASHcontext] = ACTIONS(1),
    [anon_sym_nth_DASHchild] = ACTIONS(1),
    [anon_sym_nth_DASHlast_DASHchild] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_even] = ACTIONS(1),
    [anon_sym_odd] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [sym_js_comment] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(1),
    [sym__kw_space] = ACTIONS(1),
    [sym__kw_font] = ACTIONS(1),
    [sym__kw_fontsize] = ACTIONS(1),
    [sym__kw_column] = ACTIONS(1),
    [sym__kw_display] = ACTIONS(1),
    [sym__kw_grid] = ACTIONS(1),
    [sym__kw_row] = ACTIONS(1),
    [sym__kw_abs100] = ACTIONS(1),
    [anon_sym_fg] = ACTIONS(1),
    [anon_sym_bg] = ACTIONS(1),
    [anon_sym_fill] = ACTIONS(1),
    [anon_sym_stroke] = ACTIONS(1),
    [anon_sym_border] = ACTIONS(1),
    [anon_sym_border_DASHtop] = ACTIONS(1),
    [anon_sym_border_DASHbottom] = ACTIONS(1),
    [anon_sym_border_DASHleft] = ACTIONS(1),
    [anon_sym_border_DASHright] = ACTIONS(1),
    [anon_sym_ATresponsive] = ACTIONS(1),
    [anon_sym_ATmq] = ACTIONS(1),
    [anon_sym_ATiterate] = ACTIONS(1),
    [anon_sym_ATunpack] = ACTIONS(1),
    [anon_sym_ATif] = ACTIONS(1),
    [sym_europacss_variable] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(416),
    [sym_import_statement] = STATE(9),
    [sym_media_statement] = STATE(9),
    [sym_charset_statement] = STATE(9),
    [sym_namespace_statement] = STATE(9),
    [sym_keyframes_statement] = STATE(9),
    [sym_supports_statement] = STATE(9),
    [sym_at_rule] = STATE(9),
    [sym_rule_set] = STATE(9),
    [sym_selectors] = STATE(394),
    [sym__selector] = STATE(224),
    [sym_universal_selector] = STATE(224),
    [sym_class_selector] = STATE(224),
    [sym_pseudo_class_selector] = STATE(224),
    [sym_pseudo_element_selector] = STATE(224),
    [sym_id_selector] = STATE(224),
    [sym_attribute_selector] = STATE(224),
    [sym_child_selector] = STATE(224),
    [sym_descendant_selector] = STATE(224),
    [sym_sibling_selector] = STATE(224),
    [sym_adjacent_sibling_selector] = STATE(224),
    [sym_namespace_selector] = STATE(224),
    [sym_declaration] = STATE(9),
    [sym_string_value] = STATE(224),
    [aux_sym_stylesheet_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATmedia] = ACTIONS(11),
    [anon_sym_ATcharset] = ACTIONS(13),
    [anon_sym_ATnamespace] = ACTIONS(15),
    [anon_sym_ATkeyframes] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(17),
    [anon_sym_ATsupports] = ACTIONS(19),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_at_keyword] = ACTIONS(47),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [2] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(389),
    [sym__selector] = STATE(224),
    [sym_universal_selector] = STATE(224),
    [sym_class_selector] = STATE(224),
    [sym_pseudo_class_selector] = STATE(224),
    [sym_pseudo_element_selector] = STATE(224),
    [sym_id_selector] = STATE(224),
    [sym_attribute_selector] = STATE(224),
    [sym_child_selector] = STATE(224),
    [sym_descendant_selector] = STATE(224),
    [sym_sibling_selector] = STATE(224),
    [sym_adjacent_sibling_selector] = STATE(224),
    [sym_namespace_selector] = STATE(224),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(409),
    [sym_string_value] = STATE(224),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [3] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(389),
    [sym__selector] = STATE(224),
    [sym_universal_selector] = STATE(224),
    [sym_class_selector] = STATE(224),
    [sym_pseudo_class_selector] = STATE(224),
    [sym_pseudo_element_selector] = STATE(224),
    [sym_id_selector] = STATE(224),
    [sym_attribute_selector] = STATE(224),
    [sym_child_selector] = STATE(224),
    [sym_descendant_selector] = STATE(224),
    [sym_sibling_selector] = STATE(224),
    [sym_adjacent_sibling_selector] = STATE(224),
    [sym_namespace_selector] = STATE(224),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(419),
    [sym_string_value] = STATE(224),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [4] = {
    [sym_import_statement] = STATE(3),
    [sym_media_statement] = STATE(3),
    [sym_charset_statement] = STATE(3),
    [sym_namespace_statement] = STATE(3),
    [sym_keyframes_statement] = STATE(3),
    [sym_supports_statement] = STATE(3),
    [sym_postcss_statement] = STATE(3),
    [sym_at_rule] = STATE(3),
    [sym_rule_set] = STATE(3),
    [sym_selectors] = STATE(389),
    [sym__selector] = STATE(224),
    [sym_universal_selector] = STATE(224),
    [sym_class_selector] = STATE(224),
    [sym_pseudo_class_selector] = STATE(224),
    [sym_pseudo_element_selector] = STATE(224),
    [sym_id_selector] = STATE(224),
    [sym_attribute_selector] = STATE(224),
    [sym_child_selector] = STATE(224),
    [sym_descendant_selector] = STATE(224),
    [sym_sibling_selector] = STATE(224),
    [sym_adjacent_sibling_selector] = STATE(224),
    [sym_namespace_selector] = STATE(224),
    [sym_declaration] = STATE(3),
    [sym_last_declaration] = STATE(420),
    [sym_string_value] = STATE(224),
    [sym_europacss_color] = STATE(3),
    [sym_europacss_space] = STATE(3),
    [sym_europacss_font] = STATE(3),
    [sym_europacss_fontsize] = STATE(3),
    [sym_europacss_responsive] = STATE(3),
    [sym_europacss_mq] = STATE(3),
    [sym_europacss_column] = STATE(3),
    [sym_europacss_display] = STATE(3),
    [sym_europacss_grid] = STATE(3),
    [sym_europacss_row] = STATE(3),
    [sym_europacss_abs100] = STATE(3),
    [sym_europacss_iterate] = STATE(3),
    [sym_europacss_unpack] = STATE(3),
    [sym_europacss_if] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [5] = {
    [sym_import_statement] = STATE(6),
    [sym_media_statement] = STATE(6),
    [sym_charset_statement] = STATE(6),
    [sym_namespace_statement] = STATE(6),
    [sym_keyframes_statement] = STATE(6),
    [sym_supports_statement] = STATE(6),
    [sym_postcss_statement] = STATE(6),
    [sym_at_rule] = STATE(6),
    [sym_rule_set] = STATE(6),
    [sym_selectors] = STATE(389),
    [sym__selector] = STATE(224),
    [sym_universal_selector] = STATE(224),
    [sym_class_selector] = STATE(224),
    [sym_pseudo_class_selector] = STATE(224),
    [sym_pseudo_element_selector] = STATE(224),
    [sym_id_selector] = STATE(224),
    [sym_attribute_selector] = STATE(224),
    [sym_child_selector] = STATE(224),
    [sym_descendant_selector] = STATE(224),
    [sym_sibling_selector] = STATE(224),
    [sym_adjacent_sibling_selector] = STATE(224),
    [sym_namespace_selector] = STATE(224),
    [sym_declaration] = STATE(6),
    [sym_last_declaration] = STATE(406),
    [sym_string_value] = STATE(224),
    [sym_europacss_color] = STATE(6),
    [sym_europacss_space] = STATE(6),
    [sym_europacss_font] = STATE(6),
    [sym_europacss_fontsize] = STATE(6),
    [sym_europacss_responsive] = STATE(6),
    [sym_europacss_mq] = STATE(6),
    [sym_europacss_column] = STATE(6),
    [sym_europacss_display] = STATE(6),
    [sym_europacss_grid] = STATE(6),
    [sym_europacss_row] = STATE(6),
    [sym_europacss_abs100] = STATE(6),
    [sym_europacss_iterate] = STATE(6),
    [sym_europacss_unpack] = STATE(6),
    [sym_europacss_if] = STATE(6),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [6] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(389),
    [sym__selector] = STATE(224),
    [sym_universal_selector] = STATE(224),
    [sym_class_selector] = STATE(224),
    [sym_pseudo_class_selector] = STATE(224),
    [sym_pseudo_element_selector] = STATE(224),
    [sym_id_selector] = STATE(224),
    [sym_attribute_selector] = STATE(224),
    [sym_child_selector] = STATE(224),
    [sym_descendant_selector] = STATE(224),
    [sym_sibling_selector] = STATE(224),
    [sym_adjacent_sibling_selector] = STATE(224),
    [sym_namespace_selector] = STATE(224),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(417),
    [sym_string_value] = STATE(224),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [7] = {
    [sym_import_statement] = STATE(2),
    [sym_media_statement] = STATE(2),
    [sym_charset_statement] = STATE(2),
    [sym_namespace_statement] = STATE(2),
    [sym_keyframes_statement] = STATE(2),
    [sym_supports_statement] = STATE(2),
    [sym_postcss_statement] = STATE(2),
    [sym_at_rule] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(389),
    [sym__selector] = STATE(224),
    [sym_universal_selector] = STATE(224),
    [sym_class_selector] = STATE(224),
    [sym_pseudo_class_selector] = STATE(224),
    [sym_pseudo_element_selector] = STATE(224),
    [sym_id_selector] = STATE(224),
    [sym_attribute_selector] = STATE(224),
    [sym_child_selector] = STATE(224),
    [sym_descendant_selector] = STATE(224),
    [sym_sibling_selector] = STATE(224),
    [sym_adjacent_sibling_selector] = STATE(224),
    [sym_namespace_selector] = STATE(224),
    [sym_declaration] = STATE(2),
    [sym_last_declaration] = STATE(405),
    [sym_string_value] = STATE(224),
    [sym_europacss_color] = STATE(2),
    [sym_europacss_space] = STATE(2),
    [sym_europacss_font] = STATE(2),
    [sym_europacss_fontsize] = STATE(2),
    [sym_europacss_responsive] = STATE(2),
    [sym_europacss_mq] = STATE(2),
    [sym_europacss_column] = STATE(2),
    [sym_europacss_display] = STATE(2),
    [sym_europacss_grid] = STATE(2),
    [sym_europacss_row] = STATE(2),
    [sym_europacss_abs100] = STATE(2),
    [sym_europacss_iterate] = STATE(2),
    [sym_europacss_unpack] = STATE(2),
    [sym_europacss_if] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_ATimport] = ACTIONS(51),
    [anon_sym_ATmedia] = ACTIONS(53),
    [anon_sym_ATcharset] = ACTIONS(55),
    [anon_sym_ATnamespace] = ACTIONS(57),
    [anon_sym_ATkeyframes] = ACTIONS(59),
    [aux_sym_keyframes_statement_token1] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_ATsupports] = ACTIONS(63),
    [sym_nesting_selector] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_TILDE] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_identifier] = ACTIONS(65),
    [sym_at_keyword] = ACTIONS(67),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(69),
    [sym__kw_space] = ACTIONS(71),
    [sym__kw_font] = ACTIONS(73),
    [sym__kw_fontsize] = ACTIONS(75),
    [sym__kw_column] = ACTIONS(77),
    [sym__kw_display] = ACTIONS(79),
    [sym__kw_grid] = ACTIONS(81),
    [sym__kw_row] = ACTIONS(83),
    [sym__kw_abs100] = ACTIONS(85),
    [anon_sym_ATresponsive] = ACTIONS(87),
    [anon_sym_ATmq] = ACTIONS(89),
    [anon_sym_ATiterate] = ACTIONS(91),
    [anon_sym_ATunpack] = ACTIONS(93),
    [anon_sym_ATif] = ACTIONS(95),
    [sym__pseudo_class_selector_colon] = ACTIONS(49),
  },
  [8] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(389),
    [sym__selector] = STATE(224),
    [sym_universal_selector] = STATE(224),
    [sym_class_selector] = STATE(224),
    [sym_pseudo_class_selector] = STATE(224),
    [sym_pseudo_element_selector] = STATE(224),
    [sym_id_selector] = STATE(224),
    [sym_attribute_selector] = STATE(224),
    [sym_child_selector] = STATE(224),
    [sym_descendant_selector] = STATE(224),
    [sym_sibling_selector] = STATE(224),
    [sym_adjacent_sibling_selector] = STATE(224),
    [sym_namespace_selector] = STATE(224),
    [sym_declaration] = STATE(8),
    [sym_string_value] = STATE(224),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(107),
    [anon_sym_ATmedia] = ACTIONS(110),
    [anon_sym_ATcharset] = ACTIONS(113),
    [anon_sym_ATnamespace] = ACTIONS(116),
    [anon_sym_ATkeyframes] = ACTIONS(119),
    [aux_sym_keyframes_statement_token1] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_ATsupports] = ACTIONS(124),
    [sym_nesting_selector] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(133),
    [anon_sym_COLON_COLON] = ACTIONS(136),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [sym_identifier] = ACTIONS(163),
    [sym_at_keyword] = ACTIONS(166),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym__kw_color] = ACTIONS(169),
    [sym__kw_space] = ACTIONS(172),
    [sym__kw_font] = ACTIONS(175),
    [sym__kw_fontsize] = ACTIONS(178),
    [sym__kw_column] = ACTIONS(181),
    [sym__kw_display] = ACTIONS(184),
    [sym__kw_grid] = ACTIONS(187),
    [sym__kw_row] = ACTIONS(190),
    [sym__kw_abs100] = ACTIONS(193),
    [anon_sym_ATresponsive] = ACTIONS(196),
    [anon_sym_ATmq] = ACTIONS(199),
    [anon_sym_ATiterate] = ACTIONS(202),
    [anon_sym_ATunpack] = ACTIONS(205),
    [anon_sym_ATif] = ACTIONS(208),
    [sym__pseudo_class_selector_colon] = ACTIONS(211),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(9), 1,
      anon_sym_ATimport,
    ACTIONS(11), 1,
      anon_sym_ATmedia,
    ACTIONS(13), 1,
      anon_sym_ATcharset,
    ACTIONS(15), 1,
      anon_sym_ATnamespace,
    ACTIONS(19), 1,
      anon_sym_ATsupports,
    ACTIONS(21), 1,
      sym_nesting_selector,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_at_keyword,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(394), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(224), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [102] = 26,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_ATimport,
    ACTIONS(221), 1,
      anon_sym_ATmedia,
    ACTIONS(224), 1,
      anon_sym_ATcharset,
    ACTIONS(227), 1,
      anon_sym_ATnamespace,
    ACTIONS(233), 1,
      anon_sym_ATsupports,
    ACTIONS(236), 1,
      sym_nesting_selector,
    ACTIONS(239), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_COLON_COLON,
    ACTIONS(248), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_GT,
    ACTIONS(257), 1,
      anon_sym_TILDE,
    ACTIONS(260), 1,
      anon_sym_PLUS,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(275), 1,
      sym_at_keyword,
    ACTIONS(278), 1,
      sym__pseudo_class_selector_colon,
    STATE(394), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(10), 10,
      sym_import_statement,
      sym_media_statement,
      sym_charset_statement,
      sym_namespace_statement,
      sym_keyframes_statement,
      sym_supports_statement,
      sym_at_rule,
      sym_rule_set,
      sym_declaration,
      aux_sym_stylesheet_repeat1,
    STATE(224), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [204] = 27,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(281), 1,
      sym_nesting_selector,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      anon_sym_PLUS,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(303), 1,
      anon_sym_LBRACK2,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_plain_value,
    STATE(81), 1,
      sym_string_value,
    STATE(101), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(232), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [304] = 27,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(303), 1,
      anon_sym_LBRACK2,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(309), 1,
      sym_nesting_selector,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_string_value,
    STATE(95), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(231), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [404] = 26,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_POUND,
    ACTIONS(287), 1,
      anon_sym_PLUS,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(295), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(303), 1,
      anon_sym_LBRACK2,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(313), 1,
      sym_nesting_selector,
    STATE(81), 1,
      sym_string_value,
    STATE(123), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(234), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
  [501] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(315), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(317), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [547] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(319), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(321), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [593] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(323), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(325), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [639] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(327), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(329), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [685] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(331), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(333), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [731] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(335), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(337), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [777] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(339), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(341), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [823] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(343), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(345), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [869] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(347), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(349), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [915] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(351), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(353), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [961] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(355), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(357), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1007] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(359), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(361), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1053] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(363), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(365), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1099] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(367), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(369), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1145] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(371), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(373), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1191] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(375), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(377), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1237] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(379), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(381), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1283] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(383), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(385), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1329] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(387), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(389), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1375] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(391), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(393), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1421] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(387), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(389), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1467] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(395), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(397), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1513] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(399), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(401), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1559] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(403), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(405), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1605] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(407), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(409), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1651] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(411), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(413), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1697] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(415), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(417), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1743] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(419), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(421), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1789] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(423), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(425), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1835] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(427), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(429), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1881] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(431), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(433), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1927] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(435), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(437), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1973] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(439), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(441), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2019] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(443), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(445), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2065] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(447), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(449), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2111] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(451), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(453), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2157] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(455), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(457), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2203] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(459), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(461), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2249] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(463), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(465), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2295] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(467), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(469), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2341] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(471), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(473), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2387] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(475), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(477), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2433] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(479), 14,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(481), 23,
      sym__pseudo_class_selector_colon,
      anon_sym_RBRACE,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2479] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(483), 1,
      anon_sym_SEMI,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(491), 1,
      anon_sym_LPAREN2,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(501), 1,
      sym_identifier,
    STATE(32), 1,
      sym_block,
    STATE(128), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(288), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2554] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym_important,
    ACTIONS(507), 1,
      anon_sym_LPAREN2,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(521), 1,
      sym_plain_value,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(377), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(318), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2617] = 17,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(523), 1,
      sym_nesting_selector,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(230), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2682] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(507), 1,
      anon_sym_LPAREN2,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(519), 1,
      sym_identifier,
    ACTIONS(529), 1,
      sym_important,
    ACTIONS(531), 1,
      sym_plain_value,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(377), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(325), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2745] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(533), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(171), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2807] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(535), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(242), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2869] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(537), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(228), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [2931] = 17,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(539), 1,
      sym_nesting_selector,
    ACTIONS(541), 1,
      sym_identifier,
    STATE(215), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(264), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [2995] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_SEMI,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(553), 1,
      sym_important,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_plain_value,
    STATE(96), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(551), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(209), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3063] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(559), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(165), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3125] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(561), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(169), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3187] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(563), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(131), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3249] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(565), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(132), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3311] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(567), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(149), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3373] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(569), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(240), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3435] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(571), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(142), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3497] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(573), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(140), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3559] = 17,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(539), 1,
      sym_nesting_selector,
    ACTIONS(575), 1,
      sym_identifier,
    STATE(213), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(264), 12,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_string_value,
  [3623] = 16,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(577), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(147), 13,
      sym__selector,
      sym_universal_selector,
      sym_class_selector,
      sym_pseudo_class_selector,
      sym_pseudo_element_selector,
      sym_id_selector,
      sym_attribute_selector,
      sym_child_selector,
      sym_descendant_selector,
      sym_sibling_selector,
      sym_adjacent_sibling_selector,
      sym_namespace_selector,
      sym_string_value,
  [3685] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_arguments,
    ACTIONS(583), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(581), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(587), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(579), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3730] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_plain_value,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(591), 1,
      sym_important,
    STATE(118), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(551), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(209), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3795] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_SEMI,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_plain_value,
    ACTIONS(593), 1,
      sym_important,
    STATE(120), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(551), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(209), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3860] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(597), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(595), 15,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [3895] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(361), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3956] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(605), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(609), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(603), 10,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3995] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(336), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4056] = 5,
    STATE(85), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(615), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(617), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(613), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4093] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(621), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(619), 15,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [4128] = 5,
    STATE(85), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(625), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(627), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(623), 19,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4165] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(355), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4226] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      sym_important,
    ACTIONS(643), 1,
      anon_sym_LPAREN2,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
    ACTIONS(649), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      aux_sym_integer_value_token1,
    ACTIONS(655), 1,
      aux_sym_float_value_token1,
    ACTIONS(658), 1,
      anon_sym_LBRACK2,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(664), 1,
      sym_plain_value,
    STATE(87), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(635), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    STATE(209), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4284] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(407), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(409), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4316] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(411), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(413), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4348] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(455), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(457), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4380] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(459), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(461), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4412] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(415), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(417), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4444] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(419), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(421), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4476] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(467), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(469), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4508] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(374), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4568] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_plain_value,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(675), 1,
      sym_important,
    STATE(87), 1,
      aux_sym_declaration_repeat1,
    STATE(209), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4628] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(677), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4684] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(427), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(429), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4716] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(431), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(433), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4748] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(435), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(437), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4780] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(375), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4840] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(439), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(441), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4872] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(479), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(481), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4904] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      sym_important,
    ACTIONS(689), 1,
      anon_sym_LPAREN2,
    ACTIONS(692), 1,
      anon_sym_SQUOTE,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    ACTIONS(698), 1,
      aux_sym_integer_value_token1,
    ACTIONS(701), 1,
      aux_sym_float_value_token1,
    ACTIONS(704), 1,
      anon_sym_LBRACK2,
    ACTIONS(707), 1,
      sym_identifier,
    ACTIONS(710), 1,
      sym_plain_value,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(681), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4960] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(315), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(317), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [4992] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(451), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(453), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5024] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(387), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(389), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5056] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(395), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(397), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5088] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(463), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(465), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5120] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(399), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(401), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5152] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(391), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(393), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5184] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(443), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(445), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5216] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(403), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(405), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5248] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(423), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(425), 15,
      sym__pseudo_class_selector_colon,
      ts_builtin_sym_end,
      sym_nesting_selector,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_identifier,
  [5280] = 5,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(715), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(713), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5315] = 5,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(719), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5350] = 5,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(727), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(725), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5385] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_plain_value,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    ACTIONS(731), 1,
      sym_important,
    STATE(87), 1,
      aux_sym_declaration_repeat1,
    STATE(209), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5442] = 5,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(733), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5477] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_plain_value,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(737), 1,
      sym_important,
    STATE(87), 1,
      aux_sym_declaration_repeat1,
    STATE(209), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5534] = 5,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(741), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(739), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5569] = 5,
    ACTIONS(743), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(745), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5604] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5659] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5713] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5767] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5821] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_arguments,
    ACTIONS(759), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(757), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(581), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
    ACTIONS(587), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [5861] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(761), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5915] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5969] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(765), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [5998] = 4,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(773), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(769), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6029] = 4,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(775), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6060] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(781), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(779), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6089] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(785), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(783), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6118] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(787), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6147] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(793), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(791), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6176] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(795), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6205] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(801), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(799), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6234] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(805), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(803), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6263] = 4,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(807), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6294] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(735), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(733), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6323] = 4,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(813), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(811), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6354] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(124), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6405] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(817), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(815), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6434] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(821), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(819), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6463] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(823), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6492] = 4,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(827), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6523] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(833), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(831), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6552] = 4,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(835), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6583] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(841), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(839), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6612] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(715), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(713), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6641] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(845), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(843), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6670] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(579), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6699] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(849), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(847), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6728] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(853), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(851), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6757] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(857), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(855), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6786] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(597), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(595), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6815] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(861), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(859), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6844] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(865), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(863), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6873] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(867), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6902] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_arguments,
    ACTIONS(587), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(581), 10,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [6937] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(873), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(871), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6966] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(877), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(875), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [6995] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(881), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(879), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7024] = 4,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(885), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(883), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7055] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(889), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(887), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7084] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(893), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(891), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7113] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_important,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(307), 1,
      sym_plain_value,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(97), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(211), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7164] = 4,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(897), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(895), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7195] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(901), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(899), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7224] = 4,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(905), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(903), 17,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7255] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(619), 18,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
      anon_sym_RBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_RPAREN,
  [7284] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      sym_important,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(917), 1,
      aux_sym_integer_value_token1,
    ACTIONS(919), 1,
      aux_sym_float_value_token1,
    ACTIONS(921), 1,
      anon_sym_LBRACK2,
    ACTIONS(923), 1,
      sym_identifier,
    ACTIONS(925), 1,
      sym_plain_value,
    STATE(218), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7332] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(927), 1,
      sym_important,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(933), 1,
      sym_plain_value,
    STATE(293), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7380] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(935), 1,
      sym_important,
    ACTIONS(937), 1,
      sym_plain_value,
    STATE(322), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7428] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(917), 1,
      aux_sym_integer_value_token1,
    ACTIONS(919), 1,
      aux_sym_float_value_token1,
    ACTIONS(921), 1,
      anon_sym_LBRACK2,
    ACTIONS(923), 1,
      sym_identifier,
    ACTIONS(939), 1,
      sym_important,
    ACTIONS(941), 1,
      sym_plain_value,
    STATE(260), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7476] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(943), 1,
      sym_important,
    ACTIONS(945), 1,
      sym_plain_value,
    STATE(283), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7524] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(947), 1,
      sym_important,
    ACTIONS(949), 1,
      sym_plain_value,
    STATE(298), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7572] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(951), 1,
      sym_important,
    ACTIONS(953), 1,
      sym_plain_value,
    STATE(214), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7620] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(955), 1,
      sym_important,
    ACTIONS(957), 1,
      sym_plain_value,
    STATE(320), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7668] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(963), 1,
      sym_unit,
    ACTIONS(961), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(959), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7700] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(969), 1,
      sym_unit,
    ACTIONS(967), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(965), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [7732] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(971), 1,
      sym_important,
    ACTIONS(973), 1,
      sym_plain_value,
    STATE(207), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7780] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(975), 1,
      sym_important,
    ACTIONS(977), 1,
      sym_plain_value,
    STATE(268), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7828] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(979), 1,
      sym_important,
    ACTIONS(981), 1,
      sym_plain_value,
    STATE(77), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7876] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(983), 1,
      sym_important,
    ACTIONS(985), 1,
      sym_plain_value,
    STATE(65), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7924] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(987), 1,
      sym_important,
    ACTIONS(989), 1,
      sym_plain_value,
    STATE(324), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7972] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_POUND,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(917), 1,
      aux_sym_integer_value_token1,
    ACTIONS(919), 1,
      aux_sym_float_value_token1,
    ACTIONS(921), 1,
      anon_sym_LBRACK2,
    ACTIONS(923), 1,
      sym_identifier,
    ACTIONS(991), 1,
      sym_important,
    ACTIONS(993), 1,
      sym_plain_value,
    STATE(220), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8020] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(995), 1,
      sym_important,
    ACTIONS(997), 1,
      sym_plain_value,
    STATE(330), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8068] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym_important,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(521), 1,
      sym_plain_value,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(318), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8116] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(999), 1,
      sym_important,
    ACTIONS(1001), 1,
      sym_plain_value,
    STATE(289), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8164] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN2,
    ACTIONS(299), 1,
      aux_sym_integer_value_token1,
    ACTIONS(301), 1,
      aux_sym_float_value_token1,
    ACTIONS(489), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(1003), 1,
      sym_important,
    ACTIONS(1005), 1,
      sym_plain_value,
    STATE(78), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8212] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(529), 1,
      sym_important,
    ACTIONS(531), 1,
      sym_plain_value,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(325), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8260] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    ACTIONS(511), 1,
      anon_sym_DQUOTE,
    ACTIONS(513), 1,
      aux_sym_integer_value_token1,
    ACTIONS(515), 1,
      aux_sym_float_value_token1,
    ACTIONS(517), 1,
      anon_sym_LBRACK2,
    ACTIONS(929), 1,
      anon_sym_LPAREN2,
    ACTIONS(931), 1,
      sym_identifier,
    ACTIONS(1007), 1,
      sym_important,
    ACTIONS(1009), 1,
      sym_plain_value,
    STATE(331), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8308] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1013), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1011), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8337] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1017), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1015), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8366] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1021), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1019), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8395] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1025), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1023), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8424] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(621), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(619), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8453] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(597), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(595), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8482] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1029), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1027), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8511] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1033), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1031), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8540] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1037), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1035), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8569] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1041), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1039), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8598] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1045), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1043), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8627] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1049), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1047), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8656] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1053), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1051), 11,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8685] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
    ACTIONS(1057), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(605), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8717] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(551), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1061), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1059), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8749] = 5,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1063), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(579), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8779] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(551), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1069), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1067), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8811] = 5,
    ACTIONS(1073), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1071), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(579), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8841] = 5,
    ACTIONS(1073), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1071), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(603), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8871] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_STAR,
    ACTIONS(551), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1075), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(635), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8903] = 5,
    ACTIONS(1065), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1063), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(603), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [8933] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(609), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(605), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8965] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
    ACTIONS(609), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(605), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8994] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1077), 1,
      anon_sym_SEMI,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1079), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1083), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(321), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9033] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_SEMI,
    ACTIONS(609), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(605), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9062] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(1089), 1,
      anon_sym_SEMI,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1079), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1083), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(326), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9101] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_SEMI,
    ACTIONS(609), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(605), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9130] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(609), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(605), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9159] = 9,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(280), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9194] = 14,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    ACTIONS(1097), 1,
      anon_sym_LBRACE,
    ACTIONS(1099), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
    ACTIONS(1105), 1,
      anon_sym_GT,
    ACTIONS(1107), 1,
      anon_sym_TILDE,
    ACTIONS(1109), 1,
      anon_sym_PLUS,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      sym__descendant_operator,
    ACTIONS(1115), 1,
      sym__pseudo_class_selector_colon,
    STATE(376), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9238] = 3,
    ACTIONS(1117), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(579), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [9260] = 3,
    ACTIONS(1119), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(579), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [9282] = 9,
    ACTIONS(1123), 1,
      anon_sym_host,
    ACTIONS(1127), 1,
      sym_escape_sequence,
    ACTIONS(1129), 1,
      sym_identifier,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(119), 1,
      sym_class_name,
    STATE(141), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1125), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1121), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9316] = 12,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1099), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
    ACTIONS(1105), 1,
      anon_sym_GT,
    ACTIONS(1107), 1,
      anon_sym_TILDE,
    ACTIONS(1109), 1,
      anon_sym_PLUS,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      sym__descendant_operator,
    ACTIONS(1115), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1131), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [9356] = 3,
    ACTIONS(1133), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(579), 12,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_PLUS,
      anon_sym_PIPE,
  [9378] = 14,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    ACTIONS(1099), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
    ACTIONS(1105), 1,
      anon_sym_GT,
    ACTIONS(1107), 1,
      anon_sym_TILDE,
    ACTIONS(1109), 1,
      anon_sym_PLUS,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      sym__descendant_operator,
    ACTIONS(1115), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9422] = 14,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1099), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
    ACTIONS(1105), 1,
      anon_sym_GT,
    ACTIONS(1107), 1,
      anon_sym_TILDE,
    ACTIONS(1109), 1,
      anon_sym_PLUS,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      sym__descendant_operator,
    ACTIONS(1115), 1,
      sym__pseudo_class_selector_colon,
    STATE(374), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9466] = 14,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1099), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
    ACTIONS(1105), 1,
      anon_sym_GT,
    ACTIONS(1107), 1,
      anon_sym_TILDE,
    ACTIONS(1109), 1,
      anon_sym_PLUS,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      sym__descendant_operator,
    ACTIONS(1115), 1,
      sym__pseudo_class_selector_colon,
    STATE(375), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9510] = 9,
    ACTIONS(1127), 1,
      sym_escape_sequence,
    ACTIONS(1129), 1,
      sym_identifier,
    ACTIONS(1139), 1,
      anon_sym_host,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(115), 1,
      sym_class_name,
    STATE(151), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1125), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1137), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9544] = 12,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1099), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
    ACTIONS(1105), 1,
      anon_sym_GT,
    ACTIONS(1107), 1,
      anon_sym_TILDE,
    ACTIONS(1109), 1,
      anon_sym_PLUS,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      sym__descendant_operator,
    ACTIONS(1115), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9583] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_arguments,
    ACTIONS(581), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(587), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9610] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(347), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9636] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1143), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(377), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9662] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_unit,
    ACTIONS(959), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(961), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9686] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(302), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9712] = 12,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1099), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
    ACTIONS(1105), 1,
      anon_sym_GT,
    ACTIONS(1107), 1,
      anon_sym_TILDE,
    ACTIONS(1109), 1,
      anon_sym_PLUS,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      sym__descendant_operator,
    ACTIONS(1115), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9750] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1149), 1,
      sym_unit,
    ACTIONS(965), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(967), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9774] = 12,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1099), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
    ACTIONS(1105), 1,
      anon_sym_GT,
    ACTIONS(1107), 1,
      anon_sym_TILDE,
    ACTIONS(1109), 1,
      anon_sym_PLUS,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      sym__descendant_operator,
    ACTIONS(1115), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1151), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9812] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(311), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9838] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(319), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9864] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1039), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1041), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [9886] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(317), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9912] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(348), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9938] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_LPAREN2,
    ACTIONS(1085), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(304), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9964] = 4,
    ACTIONS(1155), 1,
      anon_sym_border,
    STATE(305), 1,
      sym_europacss_color_target,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1153), 8,
      anon_sym_fg,
      anon_sym_bg,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_border_DASHtop,
      anon_sym_border_DASHbottom,
      anon_sym_border_DASHleft,
      anon_sym_border_DASHright,
  [9985] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1019), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1021), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10006] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    ACTIONS(1159), 1,
      anon_sym_COLON,
    STATE(272), 1,
      sym_arguments,
    ACTIONS(581), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(757), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10035] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH,
    ACTIONS(1157), 1,
      anon_sym_LPAREN,
    STATE(272), 1,
      sym_arguments,
    ACTIONS(581), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10060] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(619), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(621), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10081] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1023), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1025), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10102] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1031), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1033), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10123] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1027), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1029), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10144] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(595), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(597), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10165] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1035), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1037), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10186] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1047), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1049), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10207] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1051), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1053), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10228] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1043), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1045), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10249] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1015), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1017), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10270] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1011), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1013), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10291] = 11,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1099), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1101), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_LBRACK,
    ACTIONS(1105), 1,
      anon_sym_GT,
    ACTIONS(1107), 1,
      anon_sym_TILDE,
    ACTIONS(1109), 1,
      anon_sym_PLUS,
    ACTIONS(1111), 1,
      anon_sym_PIPE,
    ACTIONS(1113), 1,
      sym__descendant_operator,
    ACTIONS(1115), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10326] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_SLASH,
    ACTIONS(1161), 1,
      sym_unit,
    ACTIONS(965), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10348] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_SLASH,
    ACTIONS(1163), 1,
      sym_unit,
    ACTIONS(959), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10370] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_SLASH,
    ACTIONS(1039), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [10390] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_SLASH,
    ACTIONS(1051), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10409] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_SLASH,
    ACTIONS(1023), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10428] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_SLASH,
    ACTIONS(1011), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10447] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_SLASH,
    ACTIONS(1035), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10466] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_SLASH,
    ACTIONS(1043), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10485] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_SLASH,
    ACTIONS(1027), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10504] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_SLASH,
    ACTIONS(1031), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10523] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_SLASH,
    ACTIONS(1015), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10542] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_SLASH,
    ACTIONS(1047), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10561] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_SLASH,
    ACTIONS(1019), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10580] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_SLASH,
    ACTIONS(619), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10599] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_SLASH,
    ACTIONS(595), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10618] = 7,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_block,
    STATE(327), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
  [10642] = 6,
    ACTIONS(1171), 1,
      anon_sym_RBRACE,
    ACTIONS(1176), 1,
      aux_sym_integer_value_token1,
    STATE(393), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1173), 2,
      sym_from,
      sym_to,
    STATE(281), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10664] = 7,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
    ACTIONS(1179), 1,
      sym_identifier,
    STATE(261), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(431), 2,
      sym_string_value,
      sym_call_expression,
  [10688] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RBRACK,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    STATE(373), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10712] = 6,
    ACTIONS(1189), 1,
      anon_sym_RBRACE,
    ACTIONS(1193), 1,
      aux_sym_integer_value_token1,
    STATE(393), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1191), 2,
      sym_from,
      sym_to,
    STATE(281), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10734] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1195), 1,
      anon_sym_SEMI,
    STATE(418), 1,
      sym__europacss_value,
    ACTIONS(1197), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1199), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10756] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_SEMI,
    STATE(423), 1,
      sym__europacss_value,
    ACTIONS(1203), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1205), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10778] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_SEMI,
    STATE(432), 1,
      sym__europacss_value,
    ACTIONS(1209), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1211), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10800] = 7,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_block,
    STATE(323), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
  [10824] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1215), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10848] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1217), 1,
      anon_sym_SEMI,
    STATE(422), 1,
      sym__europacss_value,
    ACTIONS(1219), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1221), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10870] = 6,
    ACTIONS(1193), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1223), 1,
      anon_sym_RBRACE,
    STATE(393), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1191), 2,
      sym_from,
      sym_to,
    STATE(292), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10892] = 6,
    ACTIONS(1193), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
    STATE(393), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1191), 2,
      sym_from,
      sym_to,
    STATE(281), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10914] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1227), 1,
      anon_sym_RBRACK,
    STATE(378), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [10938] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1229), 1,
      anon_sym_SEMI,
    STATE(410), 1,
      sym__europacss_value,
    ACTIONS(1231), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1233), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10960] = 6,
    ACTIONS(1193), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1235), 1,
      anon_sym_RBRACE,
    STATE(393), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1191), 2,
      sym_from,
      sym_to,
    STATE(284), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [10982] = 7,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
    ACTIONS(1179), 1,
      sym_identifier,
    STATE(261), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(428), 2,
      sym_string_value,
      sym_call_expression,
  [11006] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(388), 1,
      sym__europacss_value,
    ACTIONS(1237), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1239), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11025] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11044] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1243), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11057] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(757), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11070] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(287), 1,
      sym__europacss_value,
    ACTIONS(1245), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1247), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11089] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1249), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11102] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(290), 1,
      sym__europacss_value,
    ACTIONS(1251), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1253), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11121] = 6,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_block,
    STATE(354), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
  [11142] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(285), 1,
      sym__europacss_value,
    ACTIONS(1255), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1257), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11161] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(286), 1,
      sym__europacss_value,
    ACTIONS(1259), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1261), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11180] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(294), 1,
      sym__europacss_value,
    ACTIONS(1263), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1265), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11199] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1267), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11212] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(403), 1,
      sym__europacss_value,
    ACTIONS(1269), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1271), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11231] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(307), 1,
      sym__europacss_value,
    ACTIONS(1273), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1275), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11250] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1277), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11263] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1279), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11276] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(386), 1,
      sym__europacss_value,
    ACTIONS(1281), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1283), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11295] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(404), 1,
      sym__europacss_value,
    ACTIONS(1285), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1287), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11314] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(390), 1,
      sym__europacss_value,
    ACTIONS(1289), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1291), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11333] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    STATE(306), 1,
      sym__europacss_value,
    ACTIONS(1293), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1295), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11352] = 6,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      sym_block,
    STATE(353), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
  [11373] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11391] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1299), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11405] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1301), 1,
      anon_sym_RBRACK,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11423] = 5,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1303), 1,
      anon_sym_SEMI,
    STATE(384), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
  [11441] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1305), 1,
      anon_sym_RBRACK,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11459] = 6,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1307), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_block,
    STATE(370), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11479] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1309), 1,
      anon_sym_SEMI,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11497] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11515] = 5,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_SEMI,
    STATE(383), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
  [11533] = 6,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_block,
    STATE(370), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11553] = 4,
    ACTIONS(1319), 1,
      aux_sym_integer_value_token1,
    STATE(396), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1317), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [11569] = 5,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(1321), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(426), 2,
      sym_string_value,
      sym_call_expression,
  [11587] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1323), 1,
      anon_sym_SEMI,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11605] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_SLASH,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    ACTIONS(1183), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11623] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1327), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1329), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11639] = 5,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(1331), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(407), 2,
      sym_string_value,
      sym_call_expression,
  [11657] = 4,
    ACTIONS(1333), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1335), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11672] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1337), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11683] = 4,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11698] = 4,
    ACTIONS(1341), 1,
      anon_sym_SQUOTE,
    STATE(371), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1343), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11713] = 4,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(166), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1127), 2,
      sym_escape_sequence,
      sym_identifier,
  [11728] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(417), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11739] = 3,
    ACTIONS(1159), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(757), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11752] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(445), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11763] = 4,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1345), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11778] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(465), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [11789] = 4,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(144), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1127), 2,
      sym_escape_sequence,
      sym_identifier,
  [11804] = 4,
    ACTIONS(1348), 1,
      anon_sym_SQUOTE,
    STATE(349), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1350), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11819] = 4,
    ACTIONS(1348), 1,
      anon_sym_DQUOTE,
    STATE(350), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1352), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11834] = 4,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
  [11849] = 4,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
  [11864] = 4,
    ACTIONS(1354), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1356), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11879] = 4,
    ACTIONS(1354), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1335), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11894] = 4,
    ACTIONS(1358), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1360), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11909] = 4,
    ACTIONS(1341), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1363), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [11924] = 5,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      sym_block,
    STATE(370), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11941] = 5,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      sym_block,
    STATE(370), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11958] = 4,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [11973] = 4,
    ACTIONS(1367), 1,
      anon_sym_SQUOTE,
    STATE(358), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1369), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [11988] = 4,
    ACTIONS(1367), 1,
      anon_sym_DQUOTE,
    STATE(359), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1371), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12003] = 4,
    ACTIONS(1373), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1356), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12018] = 4,
    ACTIONS(1373), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1335), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12033] = 4,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1131), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [12048] = 4,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
    STATE(342), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12063] = 4,
    ACTIONS(1380), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1382), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12078] = 4,
    ACTIONS(1380), 1,
      anon_sym_DQUOTE,
    STATE(365), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1384), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12093] = 4,
    ACTIONS(1386), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1356), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12108] = 4,
    ACTIONS(1386), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1335), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12123] = 4,
    ACTIONS(1388), 1,
      anon_sym_SQUOTE,
    STATE(368), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12138] = 4,
    ACTIONS(1388), 1,
      anon_sym_DQUOTE,
    STATE(369), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1392), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12153] = 4,
    ACTIONS(1394), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1356), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12168] = 4,
    ACTIONS(1394), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1335), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12183] = 4,
    ACTIONS(1396), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1299), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12198] = 4,
    ACTIONS(1333), 1,
      anon_sym_SQUOTE,
    STATE(351), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1356), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12213] = 4,
    ACTIONS(1399), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1401), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12228] = 4,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1404), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12242] = 4,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    STATE(380), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12256] = 4,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_RPAREN,
    STATE(380), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12270] = 4,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_LBRACE,
    STATE(360), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12284] = 3,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_and,
      anon_sym_or,
  [12296] = 4,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1414), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12310] = 4,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12324] = 4,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(1418), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12338] = 4,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      anon_sym_of,
    ACTIONS(1421), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12352] = 4,
    ACTIONS(1095), 1,
      anon_sym_COMMA,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12366] = 4,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12380] = 4,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1427), 1,
      anon_sym_SEMI,
    STATE(370), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12394] = 4,
    ACTIONS(1241), 1,
      anon_sym_RBRACK,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12408] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12419] = 3,
    ACTIONS(1141), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12430] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12441] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12452] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12463] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12474] = 3,
    ACTIONS(1432), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12485] = 3,
    ACTIONS(1434), 1,
      anon_sym_LBRACE,
    STATE(335), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12496] = 3,
    ACTIONS(1093), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12507] = 3,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12518] = 3,
    ACTIONS(1436), 1,
      anon_sym_RPAREN,
    ACTIONS(1438), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12529] = 3,
    ACTIONS(959), 1,
      anon_sym_LBRACE,
    ACTIONS(1440), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12540] = 3,
    ACTIONS(1442), 1,
      aux_sym_color_value_token1,
    ACTIONS(1444), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12551] = 3,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12562] = 3,
    ACTIONS(1446), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12573] = 3,
    ACTIONS(1448), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12584] = 2,
    ACTIONS(1450), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12592] = 2,
    ACTIONS(1452), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12600] = 2,
    ACTIONS(1454), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12608] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12616] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12624] = 2,
    ACTIONS(1456), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12632] = 2,
    ACTIONS(1458), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12640] = 2,
    ACTIONS(1460), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12648] = 2,
    ACTIONS(1462), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12656] = 2,
    ACTIONS(1464), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12664] = 2,
    ACTIONS(1466), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12672] = 2,
    ACTIONS(1468), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12680] = 2,
    ACTIONS(1470), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12688] = 2,
    ACTIONS(1472), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12696] = 2,
    ACTIONS(1474), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12704] = 2,
    ACTIONS(1476), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12712] = 2,
    ACTIONS(1478), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12720] = 2,
    ACTIONS(1480), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12728] = 2,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12736] = 2,
    ACTIONS(1482), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12744] = 2,
    ACTIONS(1484), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12752] = 2,
    ACTIONS(1486), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12760] = 2,
    ACTIONS(1488), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12768] = 2,
    ACTIONS(1490), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12776] = 2,
    ACTIONS(1492), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12784] = 2,
    ACTIONS(1494), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12792] = 2,
    ACTIONS(1496), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12800] = 2,
    ACTIONS(1498), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12808] = 2,
    ACTIONS(1500), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12816] = 2,
    ACTIONS(1502), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12824] = 2,
    ACTIONS(1504), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 204,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 404,
  [SMALL_STATE(14)] = 501,
  [SMALL_STATE(15)] = 547,
  [SMALL_STATE(16)] = 593,
  [SMALL_STATE(17)] = 639,
  [SMALL_STATE(18)] = 685,
  [SMALL_STATE(19)] = 731,
  [SMALL_STATE(20)] = 777,
  [SMALL_STATE(21)] = 823,
  [SMALL_STATE(22)] = 869,
  [SMALL_STATE(23)] = 915,
  [SMALL_STATE(24)] = 961,
  [SMALL_STATE(25)] = 1007,
  [SMALL_STATE(26)] = 1053,
  [SMALL_STATE(27)] = 1099,
  [SMALL_STATE(28)] = 1145,
  [SMALL_STATE(29)] = 1191,
  [SMALL_STATE(30)] = 1237,
  [SMALL_STATE(31)] = 1283,
  [SMALL_STATE(32)] = 1329,
  [SMALL_STATE(33)] = 1375,
  [SMALL_STATE(34)] = 1421,
  [SMALL_STATE(35)] = 1467,
  [SMALL_STATE(36)] = 1513,
  [SMALL_STATE(37)] = 1559,
  [SMALL_STATE(38)] = 1605,
  [SMALL_STATE(39)] = 1651,
  [SMALL_STATE(40)] = 1697,
  [SMALL_STATE(41)] = 1743,
  [SMALL_STATE(42)] = 1789,
  [SMALL_STATE(43)] = 1835,
  [SMALL_STATE(44)] = 1881,
  [SMALL_STATE(45)] = 1927,
  [SMALL_STATE(46)] = 1973,
  [SMALL_STATE(47)] = 2019,
  [SMALL_STATE(48)] = 2065,
  [SMALL_STATE(49)] = 2111,
  [SMALL_STATE(50)] = 2157,
  [SMALL_STATE(51)] = 2203,
  [SMALL_STATE(52)] = 2249,
  [SMALL_STATE(53)] = 2295,
  [SMALL_STATE(54)] = 2341,
  [SMALL_STATE(55)] = 2387,
  [SMALL_STATE(56)] = 2433,
  [SMALL_STATE(57)] = 2479,
  [SMALL_STATE(58)] = 2554,
  [SMALL_STATE(59)] = 2617,
  [SMALL_STATE(60)] = 2682,
  [SMALL_STATE(61)] = 2745,
  [SMALL_STATE(62)] = 2807,
  [SMALL_STATE(63)] = 2869,
  [SMALL_STATE(64)] = 2931,
  [SMALL_STATE(65)] = 2995,
  [SMALL_STATE(66)] = 3063,
  [SMALL_STATE(67)] = 3125,
  [SMALL_STATE(68)] = 3187,
  [SMALL_STATE(69)] = 3249,
  [SMALL_STATE(70)] = 3311,
  [SMALL_STATE(71)] = 3373,
  [SMALL_STATE(72)] = 3435,
  [SMALL_STATE(73)] = 3497,
  [SMALL_STATE(74)] = 3559,
  [SMALL_STATE(75)] = 3623,
  [SMALL_STATE(76)] = 3685,
  [SMALL_STATE(77)] = 3730,
  [SMALL_STATE(78)] = 3795,
  [SMALL_STATE(79)] = 3860,
  [SMALL_STATE(80)] = 3895,
  [SMALL_STATE(81)] = 3956,
  [SMALL_STATE(82)] = 3995,
  [SMALL_STATE(83)] = 4056,
  [SMALL_STATE(84)] = 4093,
  [SMALL_STATE(85)] = 4128,
  [SMALL_STATE(86)] = 4165,
  [SMALL_STATE(87)] = 4226,
  [SMALL_STATE(88)] = 4284,
  [SMALL_STATE(89)] = 4316,
  [SMALL_STATE(90)] = 4348,
  [SMALL_STATE(91)] = 4380,
  [SMALL_STATE(92)] = 4412,
  [SMALL_STATE(93)] = 4444,
  [SMALL_STATE(94)] = 4476,
  [SMALL_STATE(95)] = 4508,
  [SMALL_STATE(96)] = 4568,
  [SMALL_STATE(97)] = 4628,
  [SMALL_STATE(98)] = 4684,
  [SMALL_STATE(99)] = 4716,
  [SMALL_STATE(100)] = 4748,
  [SMALL_STATE(101)] = 4780,
  [SMALL_STATE(102)] = 4840,
  [SMALL_STATE(103)] = 4872,
  [SMALL_STATE(104)] = 4904,
  [SMALL_STATE(105)] = 4960,
  [SMALL_STATE(106)] = 4992,
  [SMALL_STATE(107)] = 5024,
  [SMALL_STATE(108)] = 5056,
  [SMALL_STATE(109)] = 5088,
  [SMALL_STATE(110)] = 5120,
  [SMALL_STATE(111)] = 5152,
  [SMALL_STATE(112)] = 5184,
  [SMALL_STATE(113)] = 5216,
  [SMALL_STATE(114)] = 5248,
  [SMALL_STATE(115)] = 5280,
  [SMALL_STATE(116)] = 5315,
  [SMALL_STATE(117)] = 5350,
  [SMALL_STATE(118)] = 5385,
  [SMALL_STATE(119)] = 5442,
  [SMALL_STATE(120)] = 5477,
  [SMALL_STATE(121)] = 5534,
  [SMALL_STATE(122)] = 5569,
  [SMALL_STATE(123)] = 5604,
  [SMALL_STATE(124)] = 5659,
  [SMALL_STATE(125)] = 5713,
  [SMALL_STATE(126)] = 5767,
  [SMALL_STATE(127)] = 5821,
  [SMALL_STATE(128)] = 5861,
  [SMALL_STATE(129)] = 5915,
  [SMALL_STATE(130)] = 5969,
  [SMALL_STATE(131)] = 5998,
  [SMALL_STATE(132)] = 6029,
  [SMALL_STATE(133)] = 6060,
  [SMALL_STATE(134)] = 6089,
  [SMALL_STATE(135)] = 6118,
  [SMALL_STATE(136)] = 6147,
  [SMALL_STATE(137)] = 6176,
  [SMALL_STATE(138)] = 6205,
  [SMALL_STATE(139)] = 6234,
  [SMALL_STATE(140)] = 6263,
  [SMALL_STATE(141)] = 6294,
  [SMALL_STATE(142)] = 6323,
  [SMALL_STATE(143)] = 6354,
  [SMALL_STATE(144)] = 6405,
  [SMALL_STATE(145)] = 6434,
  [SMALL_STATE(146)] = 6463,
  [SMALL_STATE(147)] = 6492,
  [SMALL_STATE(148)] = 6523,
  [SMALL_STATE(149)] = 6552,
  [SMALL_STATE(150)] = 6583,
  [SMALL_STATE(151)] = 6612,
  [SMALL_STATE(152)] = 6641,
  [SMALL_STATE(153)] = 6670,
  [SMALL_STATE(154)] = 6699,
  [SMALL_STATE(155)] = 6728,
  [SMALL_STATE(156)] = 6757,
  [SMALL_STATE(157)] = 6786,
  [SMALL_STATE(158)] = 6815,
  [SMALL_STATE(159)] = 6844,
  [SMALL_STATE(160)] = 6873,
  [SMALL_STATE(161)] = 6902,
  [SMALL_STATE(162)] = 6937,
  [SMALL_STATE(163)] = 6966,
  [SMALL_STATE(164)] = 6995,
  [SMALL_STATE(165)] = 7024,
  [SMALL_STATE(166)] = 7055,
  [SMALL_STATE(167)] = 7084,
  [SMALL_STATE(168)] = 7113,
  [SMALL_STATE(169)] = 7164,
  [SMALL_STATE(170)] = 7195,
  [SMALL_STATE(171)] = 7224,
  [SMALL_STATE(172)] = 7255,
  [SMALL_STATE(173)] = 7284,
  [SMALL_STATE(174)] = 7332,
  [SMALL_STATE(175)] = 7380,
  [SMALL_STATE(176)] = 7428,
  [SMALL_STATE(177)] = 7476,
  [SMALL_STATE(178)] = 7524,
  [SMALL_STATE(179)] = 7572,
  [SMALL_STATE(180)] = 7620,
  [SMALL_STATE(181)] = 7668,
  [SMALL_STATE(182)] = 7700,
  [SMALL_STATE(183)] = 7732,
  [SMALL_STATE(184)] = 7780,
  [SMALL_STATE(185)] = 7828,
  [SMALL_STATE(186)] = 7876,
  [SMALL_STATE(187)] = 7924,
  [SMALL_STATE(188)] = 7972,
  [SMALL_STATE(189)] = 8020,
  [SMALL_STATE(190)] = 8068,
  [SMALL_STATE(191)] = 8116,
  [SMALL_STATE(192)] = 8164,
  [SMALL_STATE(193)] = 8212,
  [SMALL_STATE(194)] = 8260,
  [SMALL_STATE(195)] = 8308,
  [SMALL_STATE(196)] = 8337,
  [SMALL_STATE(197)] = 8366,
  [SMALL_STATE(198)] = 8395,
  [SMALL_STATE(199)] = 8424,
  [SMALL_STATE(200)] = 8453,
  [SMALL_STATE(201)] = 8482,
  [SMALL_STATE(202)] = 8511,
  [SMALL_STATE(203)] = 8540,
  [SMALL_STATE(204)] = 8569,
  [SMALL_STATE(205)] = 8598,
  [SMALL_STATE(206)] = 8627,
  [SMALL_STATE(207)] = 8656,
  [SMALL_STATE(208)] = 8685,
  [SMALL_STATE(209)] = 8717,
  [SMALL_STATE(210)] = 8749,
  [SMALL_STATE(211)] = 8779,
  [SMALL_STATE(212)] = 8811,
  [SMALL_STATE(213)] = 8841,
  [SMALL_STATE(214)] = 8871,
  [SMALL_STATE(215)] = 8903,
  [SMALL_STATE(216)] = 8933,
  [SMALL_STATE(217)] = 8965,
  [SMALL_STATE(218)] = 8994,
  [SMALL_STATE(219)] = 9033,
  [SMALL_STATE(220)] = 9062,
  [SMALL_STATE(221)] = 9101,
  [SMALL_STATE(222)] = 9130,
  [SMALL_STATE(223)] = 9159,
  [SMALL_STATE(224)] = 9194,
  [SMALL_STATE(225)] = 9238,
  [SMALL_STATE(226)] = 9260,
  [SMALL_STATE(227)] = 9282,
  [SMALL_STATE(228)] = 9316,
  [SMALL_STATE(229)] = 9356,
  [SMALL_STATE(230)] = 9378,
  [SMALL_STATE(231)] = 9422,
  [SMALL_STATE(232)] = 9466,
  [SMALL_STATE(233)] = 9510,
  [SMALL_STATE(234)] = 9544,
  [SMALL_STATE(235)] = 9583,
  [SMALL_STATE(236)] = 9610,
  [SMALL_STATE(237)] = 9636,
  [SMALL_STATE(238)] = 9662,
  [SMALL_STATE(239)] = 9686,
  [SMALL_STATE(240)] = 9712,
  [SMALL_STATE(241)] = 9750,
  [SMALL_STATE(242)] = 9774,
  [SMALL_STATE(243)] = 9812,
  [SMALL_STATE(244)] = 9838,
  [SMALL_STATE(245)] = 9864,
  [SMALL_STATE(246)] = 9886,
  [SMALL_STATE(247)] = 9912,
  [SMALL_STATE(248)] = 9938,
  [SMALL_STATE(249)] = 9964,
  [SMALL_STATE(250)] = 9985,
  [SMALL_STATE(251)] = 10006,
  [SMALL_STATE(252)] = 10035,
  [SMALL_STATE(253)] = 10060,
  [SMALL_STATE(254)] = 10081,
  [SMALL_STATE(255)] = 10102,
  [SMALL_STATE(256)] = 10123,
  [SMALL_STATE(257)] = 10144,
  [SMALL_STATE(258)] = 10165,
  [SMALL_STATE(259)] = 10186,
  [SMALL_STATE(260)] = 10207,
  [SMALL_STATE(261)] = 10228,
  [SMALL_STATE(262)] = 10249,
  [SMALL_STATE(263)] = 10270,
  [SMALL_STATE(264)] = 10291,
  [SMALL_STATE(265)] = 10326,
  [SMALL_STATE(266)] = 10348,
  [SMALL_STATE(267)] = 10370,
  [SMALL_STATE(268)] = 10390,
  [SMALL_STATE(269)] = 10409,
  [SMALL_STATE(270)] = 10428,
  [SMALL_STATE(271)] = 10447,
  [SMALL_STATE(272)] = 10466,
  [SMALL_STATE(273)] = 10485,
  [SMALL_STATE(274)] = 10504,
  [SMALL_STATE(275)] = 10523,
  [SMALL_STATE(276)] = 10542,
  [SMALL_STATE(277)] = 10561,
  [SMALL_STATE(278)] = 10580,
  [SMALL_STATE(279)] = 10599,
  [SMALL_STATE(280)] = 10618,
  [SMALL_STATE(281)] = 10642,
  [SMALL_STATE(282)] = 10664,
  [SMALL_STATE(283)] = 10688,
  [SMALL_STATE(284)] = 10712,
  [SMALL_STATE(285)] = 10734,
  [SMALL_STATE(286)] = 10756,
  [SMALL_STATE(287)] = 10778,
  [SMALL_STATE(288)] = 10800,
  [SMALL_STATE(289)] = 10824,
  [SMALL_STATE(290)] = 10848,
  [SMALL_STATE(291)] = 10870,
  [SMALL_STATE(292)] = 10892,
  [SMALL_STATE(293)] = 10914,
  [SMALL_STATE(294)] = 10938,
  [SMALL_STATE(295)] = 10960,
  [SMALL_STATE(296)] = 10982,
  [SMALL_STATE(297)] = 11006,
  [SMALL_STATE(298)] = 11025,
  [SMALL_STATE(299)] = 11044,
  [SMALL_STATE(300)] = 11057,
  [SMALL_STATE(301)] = 11070,
  [SMALL_STATE(302)] = 11089,
  [SMALL_STATE(303)] = 11102,
  [SMALL_STATE(304)] = 11121,
  [SMALL_STATE(305)] = 11142,
  [SMALL_STATE(306)] = 11161,
  [SMALL_STATE(307)] = 11180,
  [SMALL_STATE(308)] = 11199,
  [SMALL_STATE(309)] = 11212,
  [SMALL_STATE(310)] = 11231,
  [SMALL_STATE(311)] = 11250,
  [SMALL_STATE(312)] = 11263,
  [SMALL_STATE(313)] = 11276,
  [SMALL_STATE(314)] = 11295,
  [SMALL_STATE(315)] = 11314,
  [SMALL_STATE(316)] = 11333,
  [SMALL_STATE(317)] = 11352,
  [SMALL_STATE(318)] = 11373,
  [SMALL_STATE(319)] = 11391,
  [SMALL_STATE(320)] = 11405,
  [SMALL_STATE(321)] = 11423,
  [SMALL_STATE(322)] = 11441,
  [SMALL_STATE(323)] = 11459,
  [SMALL_STATE(324)] = 11479,
  [SMALL_STATE(325)] = 11497,
  [SMALL_STATE(326)] = 11515,
  [SMALL_STATE(327)] = 11533,
  [SMALL_STATE(328)] = 11553,
  [SMALL_STATE(329)] = 11569,
  [SMALL_STATE(330)] = 11587,
  [SMALL_STATE(331)] = 11605,
  [SMALL_STATE(332)] = 11623,
  [SMALL_STATE(333)] = 11639,
  [SMALL_STATE(334)] = 11657,
  [SMALL_STATE(335)] = 11672,
  [SMALL_STATE(336)] = 11683,
  [SMALL_STATE(337)] = 11698,
  [SMALL_STATE(338)] = 11713,
  [SMALL_STATE(339)] = 11728,
  [SMALL_STATE(340)] = 11739,
  [SMALL_STATE(341)] = 11752,
  [SMALL_STATE(342)] = 11763,
  [SMALL_STATE(343)] = 11778,
  [SMALL_STATE(344)] = 11789,
  [SMALL_STATE(345)] = 11804,
  [SMALL_STATE(346)] = 11819,
  [SMALL_STATE(347)] = 11834,
  [SMALL_STATE(348)] = 11849,
  [SMALL_STATE(349)] = 11864,
  [SMALL_STATE(350)] = 11879,
  [SMALL_STATE(351)] = 11894,
  [SMALL_STATE(352)] = 11909,
  [SMALL_STATE(353)] = 11924,
  [SMALL_STATE(354)] = 11941,
  [SMALL_STATE(355)] = 11958,
  [SMALL_STATE(356)] = 11973,
  [SMALL_STATE(357)] = 11988,
  [SMALL_STATE(358)] = 12003,
  [SMALL_STATE(359)] = 12018,
  [SMALL_STATE(360)] = 12033,
  [SMALL_STATE(361)] = 12048,
  [SMALL_STATE(362)] = 12063,
  [SMALL_STATE(363)] = 12078,
  [SMALL_STATE(364)] = 12093,
  [SMALL_STATE(365)] = 12108,
  [SMALL_STATE(366)] = 12123,
  [SMALL_STATE(367)] = 12138,
  [SMALL_STATE(368)] = 12153,
  [SMALL_STATE(369)] = 12168,
  [SMALL_STATE(370)] = 12183,
  [SMALL_STATE(371)] = 12198,
  [SMALL_STATE(372)] = 12213,
  [SMALL_STATE(373)] = 12228,
  [SMALL_STATE(374)] = 12242,
  [SMALL_STATE(375)] = 12256,
  [SMALL_STATE(376)] = 12270,
  [SMALL_STATE(377)] = 12284,
  [SMALL_STATE(378)] = 12296,
  [SMALL_STATE(379)] = 12310,
  [SMALL_STATE(380)] = 12324,
  [SMALL_STATE(381)] = 12338,
  [SMALL_STATE(382)] = 12352,
  [SMALL_STATE(383)] = 12366,
  [SMALL_STATE(384)] = 12380,
  [SMALL_STATE(385)] = 12394,
  [SMALL_STATE(386)] = 12408,
  [SMALL_STATE(387)] = 12419,
  [SMALL_STATE(388)] = 12430,
  [SMALL_STATE(389)] = 12441,
  [SMALL_STATE(390)] = 12452,
  [SMALL_STATE(391)] = 12463,
  [SMALL_STATE(392)] = 12474,
  [SMALL_STATE(393)] = 12485,
  [SMALL_STATE(394)] = 12496,
  [SMALL_STATE(395)] = 12507,
  [SMALL_STATE(396)] = 12518,
  [SMALL_STATE(397)] = 12529,
  [SMALL_STATE(398)] = 12540,
  [SMALL_STATE(399)] = 12551,
  [SMALL_STATE(400)] = 12562,
  [SMALL_STATE(401)] = 12573,
  [SMALL_STATE(402)] = 12584,
  [SMALL_STATE(403)] = 12592,
  [SMALL_STATE(404)] = 12600,
  [SMALL_STATE(405)] = 12608,
  [SMALL_STATE(406)] = 12616,
  [SMALL_STATE(407)] = 12624,
  [SMALL_STATE(408)] = 12632,
  [SMALL_STATE(409)] = 12640,
  [SMALL_STATE(410)] = 12648,
  [SMALL_STATE(411)] = 12656,
  [SMALL_STATE(412)] = 12664,
  [SMALL_STATE(413)] = 12672,
  [SMALL_STATE(414)] = 12680,
  [SMALL_STATE(415)] = 12688,
  [SMALL_STATE(416)] = 12696,
  [SMALL_STATE(417)] = 12704,
  [SMALL_STATE(418)] = 12712,
  [SMALL_STATE(419)] = 12720,
  [SMALL_STATE(420)] = 12728,
  [SMALL_STATE(421)] = 12736,
  [SMALL_STATE(422)] = 12744,
  [SMALL_STATE(423)] = 12752,
  [SMALL_STATE(424)] = 12760,
  [SMALL_STATE(425)] = 12768,
  [SMALL_STATE(426)] = 12776,
  [SMALL_STATE(427)] = 12784,
  [SMALL_STATE(428)] = 12792,
  [SMALL_STATE(429)] = 12800,
  [SMALL_STATE(430)] = 12808,
  [SMALL_STATE(431)] = 12816,
  [SMALL_STATE(432)] = 12824,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(329),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(316),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(310),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(301),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(309),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(421),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(427),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(429),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(313),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(314),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(315),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(333),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(412),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(223),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_grid, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_grid, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_fontsize, 3, 0, 16),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_fontsize, 3, 0, 16),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column, 3, 0, 17),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column, 3, 0, 17),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_display, 3, 0, 17),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_display, 3, 0, 17),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_responsive, 3, 0, 18),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_responsive, 3, 0, 18),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_mq, 3, 0, 19),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_mq, 3, 0, 19),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_unpack, 3, 0, 17),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_unpack, 3, 0, 17),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_if, 3, 0, 20),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_if, 3, 0, 20),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color, 4, 0, 22),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color, 4, 0, 22),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_space, 4, 0, 23),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_space, 4, 0, 23),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_font, 4, 0, 24),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_font, 4, 0, 24),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_fontsize, 4, 0, 25),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_fontsize, 4, 0, 25),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column, 4, 0, 26),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column, 4, 0, 26),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color, 5, 0, 27),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color, 5, 0, 27),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_space, 5, 0, 28),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_space, 5, 0, 28),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_font, 5, 0, 29),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_font, 5, 0, 29),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, 0, 8),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, 0, 13),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 14),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 14),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_row, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_row, 2, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, 0, 14),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 14),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 14),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 14),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_abs100, 2, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_abs100, 2, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_iterate, 2, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_iterate, 2, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, 0, 14),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, 0, 14),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(425),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, 0, 4),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, 0, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 2, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, 0, 15),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, 0, 9),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, 0, 12),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, 0, 12),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, 0, 9),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 10),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, 0, 11),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, 0, 15),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, 0, 0),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, 0, 0),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, 0, 0),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, 0, 6),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, 0, 6),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2, 0, 0),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2, 0, 0),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2, 0, 0),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2, 0, 0),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 7),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 7),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, 0, 14),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1, 0, 0),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0),
  [1173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [1176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4, 0, 0),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2, 0, 0),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3, 0, 0),
  [1269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3, 0, 0),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, 0, 21),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2, 0, 0),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [1348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [1356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0),
  [1360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(244),
  [1399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0),
  [1401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0), SHIFT_REPEAT(372),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2, 0, 0),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [1421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1474] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__descendant_operator = 0,
  ts_external_token__pseudo_class_selector_colon = 1,
  ts_external_token___error_recovery = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
  [ts_external_token__pseudo_class_selector_colon] = sym__pseudo_class_selector_colon,
  [ts_external_token___error_recovery] = sym___error_recovery,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
    [ts_external_token___error_recovery] = true,
  },
  [2] = {
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
  [3] = {
    [ts_external_token__descendant_operator] = true,
    [ts_external_token__pseudo_class_selector_colon] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_europacss_external_scanner_create(void);
void tree_sitter_europacss_external_scanner_destroy(void *);
bool tree_sitter_europacss_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_europacss_external_scanner_serialize(void *, char *);
void tree_sitter_europacss_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_europacss(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_europacss_external_scanner_create,
      tree_sitter_europacss_external_scanner_destroy,
      tree_sitter_europacss_external_scanner_scan,
      tree_sitter_europacss_external_scanner_serialize,
      tree_sitter_europacss_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
