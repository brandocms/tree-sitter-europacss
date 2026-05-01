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
#define STATE_COUNT 441
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
  [177] = 177,
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
  [190] = 174,
  [191] = 177,
  [192] = 185,
  [193] = 174,
  [194] = 177,
  [195] = 174,
  [196] = 79,
  [197] = 197,
  [198] = 198,
  [199] = 84,
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
  [219] = 218,
  [220] = 220,
  [221] = 221,
  [222] = 220,
  [223] = 221,
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
  [235] = 227,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 161,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 181,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 182,
  [258] = 203,
  [259] = 259,
  [260] = 206,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 205,
  [266] = 264,
  [267] = 263,
  [268] = 268,
  [269] = 84,
  [270] = 202,
  [271] = 79,
  [272] = 201,
  [273] = 207,
  [274] = 200,
  [275] = 275,
  [276] = 198,
  [277] = 204,
  [278] = 197,
  [279] = 182,
  [280] = 280,
  [281] = 208,
  [282] = 181,
  [283] = 161,
  [284] = 206,
  [285] = 205,
  [286] = 206,
  [287] = 182,
  [288] = 203,
  [289] = 181,
  [290] = 204,
  [291] = 79,
  [292] = 203,
  [293] = 201,
  [294] = 208,
  [295] = 84,
  [296] = 202,
  [297] = 207,
  [298] = 298,
  [299] = 197,
  [300] = 198,
  [301] = 205,
  [302] = 200,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 303,
  [307] = 307,
  [308] = 307,
  [309] = 309,
  [310] = 310,
  [311] = 307,
  [312] = 310,
  [313] = 309,
  [314] = 305,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 318,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 329,
  [333] = 333,
  [334] = 327,
  [335] = 328,
  [336] = 333,
  [337] = 333,
  [338] = 325,
  [339] = 333,
  [340] = 340,
  [341] = 341,
  [342] = 40,
  [343] = 343,
  [344] = 47,
  [345] = 52,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 349,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 352,
  [358] = 358,
  [359] = 358,
  [360] = 360,
  [361] = 361,
  [362] = 349,
  [363] = 351,
  [364] = 353,
  [365] = 354,
  [366] = 361,
  [367] = 349,
  [368] = 351,
  [369] = 353,
  [370] = 354,
  [371] = 349,
  [372] = 351,
  [373] = 353,
  [374] = 354,
  [375] = 351,
  [376] = 353,
  [377] = 354,
  [378] = 361,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 380,
  [387] = 387,
  [388] = 181,
  [389] = 181,
  [390] = 182,
  [391] = 387,
  [392] = 380,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 402,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 398,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 409,
  [413] = 410,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 420,
  [424] = 424,
  [425] = 411,
  [426] = 409,
  [427] = 427,
  [428] = 428,
  [429] = 422,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 411,
  [435] = 435,
  [436] = 436,
  [437] = 430,
  [438] = 420,
  [439] = 439,
  [440] = 440,
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
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '$', 71,
        '&', 205,
        '\'', 298,
        '(', 244,
        ')', 245,
        '*', 206,
        '+', 241,
        ',', 193,
        '-', 358,
        '.', 208,
        '/', 360,
        ':', 253,
        ';', 194,
        '=', 230,
        '>', 237,
        '@', 76,
        'E', 48,
        '[', 229,
        '\\', 177,
        ']', 236,
        '^', 72,
        'a', 130,
        'b', 106,
        'e', 46,
        'f', 108,
        'h', 77,
        'i', 153,
        'n', 135,
        'o', 91,
        's', 100,
        't', 136,
        'w', 112,
        '{', 200,
        '|', 243,
        '}', 201,
        '~', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(177);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == '\\') ADVANCE(177);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '%', 354,
        '\'', 298,
        '(', 255,
        ')', 245,
        '*', 206,
        '+', 241,
        ',', 193,
        '-', 357,
        '.', 174,
        '/', 361,
        ';', 194,
        '[', 355,
        '_', 365,
        '}', 201,
        'E', 348,
        'e', 348,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '&', 205,
        '\'', 298,
        '(', 255,
        ')', 245,
        '*', 206,
        '+', 241,
        '-', 52,
        '.', 208,
        '/', 31,
        ':', 69,
        '>', 237,
        '[', 229,
        '_', 365,
        '|', 242,
        '~', 238,
        'E', 362,
        'e', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '\'', 298,
        '(', 244,
        ')', 245,
        '*', 206,
        '+', 241,
        ',', 193,
        '-', 357,
        '.', 208,
        '/', 361,
        ':', 69,
        '>', 237,
        '[', 229,
        '_', 365,
        '|', 242,
        '~', 238,
        'E', 362,
        'e', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '\'', 298,
        '(', 244,
        ')', 245,
        '*', 206,
        '+', 241,
        ',', 193,
        '-', 357,
        '.', 174,
        '/', 361,
        ';', 194,
        '[', 355,
        '_', 365,
        '}', 201,
        'E', 362,
        'e', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '\'', 298,
        '(', 244,
        '*', 206,
        '+', 241,
        ',', 193,
        '-', 357,
        '.', 174,
        '/', 361,
        ';', 194,
        '[', 355,
        '_', 365,
        'a', 373,
        'o', 377,
        '{', 200,
        'E', 362,
        'e', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '\'', 298,
        '(', 255,
        ')', 245,
        '*', 206,
        '+', 241,
        ',', 193,
        '-', 357,
        '.', 208,
        '/', 361,
        ':', 69,
        '>', 237,
        '[', 229,
        '_', 365,
        '|', 242,
        '~', 238,
        'E', 362,
        'e', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '\'', 298,
        '(', 255,
        ')', 245,
        '*', 206,
        '+', 241,
        ',', 193,
        '-', 357,
        '.', 174,
        '/', 361,
        ';', 194,
        '[', 355,
        '_', 365,
        '}', 201,
        'E', 362,
        'e', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '\'', 298,
        '(', 255,
        ')', 245,
        '+', 54,
        ',', 193,
        '-', 52,
        '.', 174,
        '/', 31,
        ';', 194,
        '[', 355,
        '_', 365,
        '}', 201,
        'E', 362,
        'e', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '\'', 298,
        '(', 255,
        '*', 206,
        '+', 241,
        ',', 193,
        '-', 357,
        '.', 174,
        '/', 361,
        ';', 194,
        '[', 355,
        '_', 365,
        'a', 373,
        'o', 377,
        '{', 200,
        'E', 362,
        'e', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '\'', 298,
        '(', 255,
        '+', 54,
        '-', 52,
        '.', 174,
        '/', 31,
        ';', 194,
        '[', 355,
        '_', 365,
        'n', 374,
        'o', 372,
        's', 369,
        '{', 200,
        'E', 362,
        'e', 362,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 304,
        '#', 228,
        '&', 205,
        '\'', 298,
        '(', 255,
        '*', 206,
        '+', 240,
        '-', 185,
        '.', 207,
        '/', 30,
        ':', 69,
        '>', 237,
        '@', 76,
        '[', 229,
        '|', 242,
        '}', 201,
        '~', 238,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '#', 228,
        '$', 70,
        '(', 244,
        ')', 245,
        '*', 73,
        '+', 240,
        ',', 193,
        '-', 185,
        '.', 207,
        '/', 30,
        ':', 69,
        '=', 230,
        '>', 237,
        '[', 229,
        '\\', 177,
        ']', 236,
        '^', 72,
        '{', 200,
        '|', 243,
        '~', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '#', 228,
        '$', 70,
        ')', 245,
        '*', 73,
        '+', 240,
        ',', 193,
        '-', 185,
        '.', 207,
        '/', 30,
        ':', 69,
        '=', 230,
        '>', 237,
        '[', 229,
        '\\', 177,
        ']', 236,
        '^', 72,
        '{', 200,
        '|', 243,
        '~', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '$', 180,
        '%', 354,
        '(', 255,
        '+', 54,
        '-', 53,
        '.', 39,
        '/', 31,
        ';', 194,
        '_', 41,
        'E', 349,
        'e', 349,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '$', 180,
        '(', 255,
        '+', 54,
        '-', 53,
        '.', 39,
        '/', 31,
        ';', 194,
        '_', 41,
        'E', 532,
        'e', 532,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '%', 354,
        '(', 255,
        '*', 206,
        '+', 240,
        '-', 359,
        '/', 360,
        ';', 194,
        'n', 341,
        'o', 340,
        's', 337,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '(', 244,
        ')', 245,
        '*', 206,
        '+', 240,
        ',', 193,
        '-', 356,
        '/', 360,
        ':', 252,
        ';', 194,
        ']', 236,
        'a', 129,
        'o', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '(', 244,
        '*', 206,
        '+', 240,
        '-', 359,
        '/', 360,
        ';', 194,
        'n', 409,
        'o', 406,
        's', 394,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '(', 255,
        '*', 206,
        '+', 240,
        '-', 359,
        '/', 360,
        ';', 194,
        'n', 409,
        'o', 406,
        's', 394,
        '{', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '(', 255,
        '*', 206,
        '+', 240,
        '-', 359,
        '/', 360,
        ';', 194,
        'n', 409,
        'o', 406,
        's', 394,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '(', 255,
        '-', 185,
        '/', 30,
        ';', 194,
        'n', 409,
        'o', 406,
        's', 394,
        '{', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        ')', 245,
        '*', 206,
        '+', 240,
        ',', 193,
        '-', 356,
        '/', 360,
        ':', 252,
        ';', 194,
        ']', 236,
        'a', 129,
        'o', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        ')', 245,
        '*', 206,
        '+', 240,
        ',', 193,
        '-', 356,
        '/', 360,
        ';', 194,
        ']', 236,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        ')', 245,
        '*', 206,
        '+', 240,
        ',', 193,
        '-', 356,
        '/', 360,
        ';', 194,
        ']', 236,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        ')', 245,
        ',', 193,
        '/', 30,
        ':', 252,
        ';', 194,
        'a', 129,
        'b', 105,
        'f', 107,
        'o', 103,
        's', 163,
        't', 136,
        '{', 200,
        '}', 201,
        '+', 176,
        '-', 176,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(245);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(245);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(530);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(527);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(531);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '+') ADVANCE(176);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(177);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == 'w') ADVANCE(398);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '>') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '{') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '{') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '>') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '>') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '>') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '0') ADVANCE(565);
      END_STATE();
    case 68:
      if (lookahead == '0') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(227);
      END_STATE();
    case 70:
      if (lookahead == '=') ADVANCE(235);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(232);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(234);
      END_STATE();
    case 74:
      if (lookahead == '>') ADVANCE(581);
      END_STATE();
    case 75:
      if (lookahead == '>') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 76:
      ADVANCE_MAP(
        'a', 440,
        'c', 464,
        'd', 468,
        'f', 483,
        'g', 497,
        'i', 461,
        'k', 446,
        'm', 447,
        'n', 430,
        'r', 458,
        's', 490,
        'u', 481,
      );
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(465);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == 'k') ADVANCE(446);
      if (lookahead == 'm') ADVANCE(448);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead == 's') ADVANCE(518);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(567);
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(567);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(99);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 'k') ADVANCE(95);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(568);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(572);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 146:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 170:
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 171:
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 172:
      if (lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 173:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(310);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 181:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(582);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(60);
      END_STATE();
    case 182:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 183:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 184:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 185:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 186:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(60);
      END_STATE();
    case 187:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 188:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '!', 115,
        '"', 304,
        '#', 228,
        '$', 71,
        '&', 205,
        '\'', 298,
        '(', 255,
        ')', 245,
        '*', 206,
        '+', 241,
        ',', 193,
        '-', 358,
        '.', 208,
        '/', 360,
        ':', 253,
        ';', 194,
        '=', 230,
        '>', 237,
        '@', 76,
        'E', 49,
        '[', 229,
        '\\', 177,
        ']', 236,
        '^', 72,
        'a', 129,
        'b', 105,
        'e', 47,
        'f', 107,
        'h', 77,
        'i', 153,
        'n', 135,
        'o', 91,
        's', 100,
        't', 136,
        'w', 112,
        '{', 200,
        '|', 243,
        '}', 201,
        '~', 239,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 189:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '"', 304,
        '#', 228,
        '&', 205,
        '\'', 298,
        '(', 244,
        ')', 245,
        '*', 206,
        '+', 240,
        ',', 193,
        '-', 185,
        '.', 207,
        '/', 30,
        ':', 253,
        ';', 194,
        '>', 237,
        '@', 81,
        '[', 229,
        '\\', 177,
        ']', 236,
        '{', 200,
        '|', 242,
        '}', 201,
        '~', 238,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '"', 304,
        '#', 228,
        '&', 205,
        '\'', 298,
        ')', 245,
        '*', 206,
        '+', 240,
        ',', 193,
        '-', 185,
        '.', 207,
        '/', 30,
        ':', 253,
        ';', 194,
        '>', 237,
        '@', 81,
        '[', 229,
        '\\', 177,
        ']', 236,
        '{', 200,
        '|', 242,
        '}', 201,
        '~', 238,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(231);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(233);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_even);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (lookahead == '+') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(227);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(33);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(539);
      if (lookahead == '.') ADVANCE(536);
      if (lookahead == '/') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '/') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'c') ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'e') ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'n') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 't') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 't') ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (lookahead == 'y') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(352);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(352);
      if (lookahead == '-') ADVANCE(538);
      if (lookahead == '.') ADVANCE(536);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '_') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(352);
      if (lookahead == '-') ADVANCE(539);
      if (lookahead == '.') ADVANCE(536);
      if (lookahead == '/') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(350);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(352);
      if (lookahead == '/') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(352);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(365);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(527);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(60);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 't') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == 'y') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(382);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(397);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(477);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(478);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(504);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(471);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(452);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(561);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'q') ADVANCE(576);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(500);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(579);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(488);
      if (lookahead == 't') ADVANCE(454);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(502);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(503);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(433);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(433);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(519);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(508);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(578);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'l') ADVANCE(434);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(488);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(459);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(480);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(456);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(457);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(557);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(501);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(473);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead == 'u') ADVANCE(495);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(435);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(487);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(438);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(549);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 's') ADVANCE(429);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 's') ADVANCE(455);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 't') ADVANCE(553);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 't') ADVANCE(505);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'u') ADVANCE(495);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'v') ADVANCE(453);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'w') ADVANCE(563);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'y') ADVANCE(462);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'y') ADVANCE(559);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'y') ADVANCE(463);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == 'z') ADVANCE(451);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(527);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(530);
      END_STATE();
    case 528:
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
          lookahead == '}') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(527);
      END_STATE();
    case 529:
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
          lookahead == '}') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(544);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(530);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(538);
      if (lookahead == '.') ADVANCE(536);
      if (lookahead == '/') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(539);
      if (lookahead == '.') ADVANCE(536);
      if (lookahead == '/') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(546);
      if (lookahead == '/') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(545);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '/') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(586);
      if (lookahead == '.') ADVANCE(537);
      if (lookahead == '/') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '/') ADVANCE(187);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '>') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '>') ADVANCE(581);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '/') ADVANCE(182);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(540);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '>') ADVANCE(581);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(187);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(529);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '>') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(543);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__kw_color);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__kw_color);
      if (lookahead == '!') ADVANCE(548);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__kw_space);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__kw_space);
      if (lookahead == '!') ADVANCE(550);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__kw_font);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__kw_font);
      if (lookahead == '!') ADVANCE(552);
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__kw_fontsize);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__kw_fontsize);
      if (lookahead == '!') ADVANCE(554);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__kw_column);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__kw_column);
      if (lookahead == '!') ADVANCE(556);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__kw_display);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__kw_display);
      if (lookahead == '!') ADVANCE(558);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__kw_grid);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__kw_grid);
      if (lookahead == '!') ADVANCE(560);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__kw_row);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__kw_row);
      if (lookahead == '!') ADVANCE(562);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__kw_abs100);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__kw_abs100);
      if (lookahead == '!') ADVANCE(564);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_fg);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_bg);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_stroke);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_border);
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_border_DASHtop);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_border_DASHbottom);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_border_DASHleft);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_border_DASHright);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_ATresponsive);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_ATmq);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_ATiterate);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_ATunpack);
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(526);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_europacss_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_europacss_range);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '-') ADVANCE(586);
      if (lookahead == '.') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '>') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 189, .external_lex_state = 2},
  [2] = {.lex_state = 13, .external_lex_state = 2},
  [3] = {.lex_state = 13, .external_lex_state = 2},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 189, .external_lex_state = 2},
  [10] = {.lex_state = 189, .external_lex_state = 2},
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
  [59] = {.lex_state = 189, .external_lex_state = 2},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 189, .external_lex_state = 2},
  [62] = {.lex_state = 189, .external_lex_state = 2},
  [63] = {.lex_state = 189, .external_lex_state = 2},
  [64] = {.lex_state = 189, .external_lex_state = 2},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 189, .external_lex_state = 2},
  [67] = {.lex_state = 189, .external_lex_state = 2},
  [68] = {.lex_state = 189, .external_lex_state = 2},
  [69] = {.lex_state = 189, .external_lex_state = 2},
  [70] = {.lex_state = 189, .external_lex_state = 2},
  [71] = {.lex_state = 189, .external_lex_state = 2},
  [72] = {.lex_state = 189, .external_lex_state = 2},
  [73] = {.lex_state = 189, .external_lex_state = 2},
  [74] = {.lex_state = 189, .external_lex_state = 2},
  [75] = {.lex_state = 189, .external_lex_state = 2},
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
  [88] = {.lex_state = 189, .external_lex_state = 2},
  [89] = {.lex_state = 189, .external_lex_state = 2},
  [90] = {.lex_state = 189, .external_lex_state = 2},
  [91] = {.lex_state = 189, .external_lex_state = 2},
  [92] = {.lex_state = 189, .external_lex_state = 2},
  [93] = {.lex_state = 189, .external_lex_state = 2},
  [94] = {.lex_state = 189, .external_lex_state = 2},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 189, .external_lex_state = 2},
  [99] = {.lex_state = 189, .external_lex_state = 2},
  [100] = {.lex_state = 189, .external_lex_state = 2},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 189, .external_lex_state = 2},
  [103] = {.lex_state = 189, .external_lex_state = 2},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 189, .external_lex_state = 2},
  [106] = {.lex_state = 189, .external_lex_state = 2},
  [107] = {.lex_state = 189, .external_lex_state = 2},
  [108] = {.lex_state = 189, .external_lex_state = 2},
  [109] = {.lex_state = 189, .external_lex_state = 2},
  [110] = {.lex_state = 189, .external_lex_state = 2},
  [111] = {.lex_state = 189, .external_lex_state = 2},
  [112] = {.lex_state = 189, .external_lex_state = 2},
  [113] = {.lex_state = 189, .external_lex_state = 2},
  [114] = {.lex_state = 189, .external_lex_state = 2},
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
  [195] = {.lex_state = 10},
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
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 14, .external_lex_state = 3},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 14, .external_lex_state = 3},
  [216] = {.lex_state = 14, .external_lex_state = 3},
  [217] = {.lex_state = 14, .external_lex_state = 3},
  [218] = {.lex_state = 21},
  [219] = {.lex_state = 21},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 23},
  [225] = {.lex_state = 189, .external_lex_state = 3},
  [226] = {.lex_state = 189, .external_lex_state = 3},
  [227] = {.lex_state = 189, .external_lex_state = 3},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 36},
  [232] = {.lex_state = 189, .external_lex_state = 3},
  [233] = {.lex_state = 189, .external_lex_state = 3},
  [234] = {.lex_state = 189, .external_lex_state = 3},
  [235] = {.lex_state = 189, .external_lex_state = 3},
  [236] = {.lex_state = 189, .external_lex_state = 3},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 36},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 189, .external_lex_state = 3},
  [245] = {.lex_state = 20},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 18},
  [254] = {.lex_state = 23},
  [255] = {.lex_state = 23},
  [256] = {.lex_state = 189, .external_lex_state = 3},
  [257] = {.lex_state = 18},
  [258] = {.lex_state = 21},
  [259] = {.lex_state = 189, .external_lex_state = 3},
  [260] = {.lex_state = 21},
  [261] = {.lex_state = 23},
  [262] = {.lex_state = 23},
  [263] = {.lex_state = 23},
  [264] = {.lex_state = 23},
  [265] = {.lex_state = 21},
  [266] = {.lex_state = 23},
  [267] = {.lex_state = 23},
  [268] = {.lex_state = 27},
  [269] = {.lex_state = 21},
  [270] = {.lex_state = 21},
  [271] = {.lex_state = 21},
  [272] = {.lex_state = 21},
  [273] = {.lex_state = 21},
  [274] = {.lex_state = 21},
  [275] = {.lex_state = 19},
  [276] = {.lex_state = 21},
  [277] = {.lex_state = 21},
  [278] = {.lex_state = 21},
  [279] = {.lex_state = 16},
  [280] = {.lex_state = 189, .external_lex_state = 3},
  [281] = {.lex_state = 21},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 19},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 17},
  [287] = {.lex_state = 26},
  [288] = {.lex_state = 17},
  [289] = {.lex_state = 26},
  [290] = {.lex_state = 19},
  [291] = {.lex_state = 19},
  [292] = {.lex_state = 19},
  [293] = {.lex_state = 19},
  [294] = {.lex_state = 19},
  [295] = {.lex_state = 19},
  [296] = {.lex_state = 19},
  [297] = {.lex_state = 19},
  [298] = {.lex_state = 17},
  [299] = {.lex_state = 19},
  [300] = {.lex_state = 19},
  [301] = {.lex_state = 19},
  [302] = {.lex_state = 19},
  [303] = {.lex_state = 27},
  [304] = {.lex_state = 27},
  [305] = {.lex_state = 189},
  [306] = {.lex_state = 27},
  [307] = {.lex_state = 19},
  [308] = {.lex_state = 19},
  [309] = {.lex_state = 27},
  [310] = {.lex_state = 27},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 27},
  [313] = {.lex_state = 27},
  [314] = {.lex_state = 189},
  [315] = {.lex_state = 27},
  [316] = {.lex_state = 27},
  [317] = {.lex_state = 19},
  [318] = {.lex_state = 27},
  [319] = {.lex_state = 27},
  [320] = {.lex_state = 27},
  [321] = {.lex_state = 27},
  [322] = {.lex_state = 27},
  [323] = {.lex_state = 27},
  [324] = {.lex_state = 19},
  [325] = {.lex_state = 189},
  [326] = {.lex_state = 27},
  [327] = {.lex_state = 27},
  [328] = {.lex_state = 189},
  [329] = {.lex_state = 19},
  [330] = {.lex_state = 19},
  [331] = {.lex_state = 34},
  [332] = {.lex_state = 19},
  [333] = {.lex_state = 19},
  [334] = {.lex_state = 27},
  [335] = {.lex_state = 189},
  [336] = {.lex_state = 19},
  [337] = {.lex_state = 19},
  [338] = {.lex_state = 189},
  [339] = {.lex_state = 19},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 189},
  [342] = {.lex_state = 27},
  [343] = {.lex_state = 27},
  [344] = {.lex_state = 27},
  [345] = {.lex_state = 27},
  [346] = {.lex_state = 27},
  [347] = {.lex_state = 2},
  [348] = {.lex_state = 189},
  [349] = {.lex_state = 1},
  [350] = {.lex_state = 1},
  [351] = {.lex_state = 2},
  [352] = {.lex_state = 27},
  [353] = {.lex_state = 1},
  [354] = {.lex_state = 2},
  [355] = {.lex_state = 189},
  [356] = {.lex_state = 189},
  [357] = {.lex_state = 27},
  [358] = {.lex_state = 189},
  [359] = {.lex_state = 189},
  [360] = {.lex_state = 189},
  [361] = {.lex_state = 189},
  [362] = {.lex_state = 1},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 1},
  [365] = {.lex_state = 2},
  [366] = {.lex_state = 189},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 2},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 2},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 2},
  [373] = {.lex_state = 1},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 2},
  [376] = {.lex_state = 1},
  [377] = {.lex_state = 2},
  [378] = {.lex_state = 189},
  [379] = {.lex_state = 189},
  [380] = {.lex_state = 189},
  [381] = {.lex_state = 189},
  [382] = {.lex_state = 189},
  [383] = {.lex_state = 27},
  [384] = {.lex_state = 189},
  [385] = {.lex_state = 189},
  [386] = {.lex_state = 189},
  [387] = {.lex_state = 189},
  [388] = {.lex_state = 28},
  [389] = {.lex_state = 56},
  [390] = {.lex_state = 56},
  [391] = {.lex_state = 189},
  [392] = {.lex_state = 189},
  [393] = {.lex_state = 189},
  [394] = {.lex_state = 189},
  [395] = {.lex_state = 189},
  [396] = {.lex_state = 189},
  [397] = {.lex_state = 189},
  [398] = {.lex_state = 189},
  [399] = {.lex_state = 189},
  [400] = {.lex_state = 189},
  [401] = {.lex_state = 189},
  [402] = {.lex_state = 189},
  [403] = {.lex_state = 189},
  [404] = {.lex_state = 27},
  [405] = {.lex_state = 189},
  [406] = {.lex_state = 37},
  [407] = {.lex_state = 189},
  [408] = {.lex_state = 189},
  [409] = {.lex_state = 189},
  [410] = {.lex_state = 189},
  [411] = {.lex_state = 189},
  [412] = {.lex_state = 189},
  [413] = {.lex_state = 189},
  [414] = {.lex_state = 189},
  [415] = {.lex_state = 189},
  [416] = {.lex_state = 189},
  [417] = {.lex_state = 189},
  [418] = {.lex_state = 189},
  [419] = {.lex_state = 189},
  [420] = {.lex_state = 58},
  [421] = {.lex_state = 189},
  [422] = {.lex_state = 189},
  [423] = {.lex_state = 58},
  [424] = {.lex_state = 189},
  [425] = {.lex_state = 189},
  [426] = {.lex_state = 189},
  [427] = {.lex_state = 189},
  [428] = {.lex_state = 13},
  [429] = {.lex_state = 189},
  [430] = {.lex_state = 189},
  [431] = {.lex_state = 59},
  [432] = {.lex_state = 189},
  [433] = {.lex_state = 189},
  [434] = {.lex_state = 189},
  [435] = {.lex_state = 189},
  [436] = {.lex_state = 189},
  [437] = {.lex_state = 189},
  [438] = {.lex_state = 58},
  [439] = {.lex_state = 189},
  [440] = {.lex_state = 189},
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
    [sym_selectors] = STATE(402),
    [sym__selector] = STATE(225),
    [sym_universal_selector] = STATE(225),
    [sym_class_selector] = STATE(225),
    [sym_pseudo_class_selector] = STATE(225),
    [sym_pseudo_element_selector] = STATE(225),
    [sym_id_selector] = STATE(225),
    [sym_attribute_selector] = STATE(225),
    [sym_child_selector] = STATE(225),
    [sym_descendant_selector] = STATE(225),
    [sym_sibling_selector] = STATE(225),
    [sym_adjacent_sibling_selector] = STATE(225),
    [sym_namespace_selector] = STATE(225),
    [sym_declaration] = STATE(9),
    [sym_string_value] = STATE(225),
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
    [sym_selectors] = STATE(403),
    [sym__selector] = STATE(225),
    [sym_universal_selector] = STATE(225),
    [sym_class_selector] = STATE(225),
    [sym_pseudo_class_selector] = STATE(225),
    [sym_pseudo_element_selector] = STATE(225),
    [sym_id_selector] = STATE(225),
    [sym_attribute_selector] = STATE(225),
    [sym_child_selector] = STATE(225),
    [sym_descendant_selector] = STATE(225),
    [sym_sibling_selector] = STATE(225),
    [sym_adjacent_sibling_selector] = STATE(225),
    [sym_namespace_selector] = STATE(225),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(409),
    [sym_string_value] = STATE(225),
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
    [sym_selectors] = STATE(403),
    [sym__selector] = STATE(225),
    [sym_universal_selector] = STATE(225),
    [sym_class_selector] = STATE(225),
    [sym_pseudo_class_selector] = STATE(225),
    [sym_pseudo_element_selector] = STATE(225),
    [sym_id_selector] = STATE(225),
    [sym_attribute_selector] = STATE(225),
    [sym_child_selector] = STATE(225),
    [sym_descendant_selector] = STATE(225),
    [sym_sibling_selector] = STATE(225),
    [sym_adjacent_sibling_selector] = STATE(225),
    [sym_namespace_selector] = STATE(225),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(426),
    [sym_string_value] = STATE(225),
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
    [sym_selectors] = STATE(403),
    [sym__selector] = STATE(225),
    [sym_universal_selector] = STATE(225),
    [sym_class_selector] = STATE(225),
    [sym_pseudo_class_selector] = STATE(225),
    [sym_pseudo_element_selector] = STATE(225),
    [sym_id_selector] = STATE(225),
    [sym_attribute_selector] = STATE(225),
    [sym_child_selector] = STATE(225),
    [sym_descendant_selector] = STATE(225),
    [sym_sibling_selector] = STATE(225),
    [sym_adjacent_sibling_selector] = STATE(225),
    [sym_namespace_selector] = STATE(225),
    [sym_declaration] = STATE(3),
    [sym_last_declaration] = STATE(434),
    [sym_string_value] = STATE(225),
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
    [sym_selectors] = STATE(403),
    [sym__selector] = STATE(225),
    [sym_universal_selector] = STATE(225),
    [sym_class_selector] = STATE(225),
    [sym_pseudo_class_selector] = STATE(225),
    [sym_pseudo_element_selector] = STATE(225),
    [sym_id_selector] = STATE(225),
    [sym_attribute_selector] = STATE(225),
    [sym_child_selector] = STATE(225),
    [sym_descendant_selector] = STATE(225),
    [sym_sibling_selector] = STATE(225),
    [sym_adjacent_sibling_selector] = STATE(225),
    [sym_namespace_selector] = STATE(225),
    [sym_declaration] = STATE(6),
    [sym_last_declaration] = STATE(425),
    [sym_string_value] = STATE(225),
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
    [sym_selectors] = STATE(403),
    [sym__selector] = STATE(225),
    [sym_universal_selector] = STATE(225),
    [sym_class_selector] = STATE(225),
    [sym_pseudo_class_selector] = STATE(225),
    [sym_pseudo_element_selector] = STATE(225),
    [sym_id_selector] = STATE(225),
    [sym_attribute_selector] = STATE(225),
    [sym_child_selector] = STATE(225),
    [sym_descendant_selector] = STATE(225),
    [sym_sibling_selector] = STATE(225),
    [sym_adjacent_sibling_selector] = STATE(225),
    [sym_namespace_selector] = STATE(225),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(412),
    [sym_string_value] = STATE(225),
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
    [sym_selectors] = STATE(403),
    [sym__selector] = STATE(225),
    [sym_universal_selector] = STATE(225),
    [sym_class_selector] = STATE(225),
    [sym_pseudo_class_selector] = STATE(225),
    [sym_pseudo_element_selector] = STATE(225),
    [sym_id_selector] = STATE(225),
    [sym_attribute_selector] = STATE(225),
    [sym_child_selector] = STATE(225),
    [sym_descendant_selector] = STATE(225),
    [sym_sibling_selector] = STATE(225),
    [sym_adjacent_sibling_selector] = STATE(225),
    [sym_namespace_selector] = STATE(225),
    [sym_declaration] = STATE(2),
    [sym_last_declaration] = STATE(411),
    [sym_string_value] = STATE(225),
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
    [sym_selectors] = STATE(403),
    [sym__selector] = STATE(225),
    [sym_universal_selector] = STATE(225),
    [sym_class_selector] = STATE(225),
    [sym_pseudo_class_selector] = STATE(225),
    [sym_pseudo_element_selector] = STATE(225),
    [sym_id_selector] = STATE(225),
    [sym_attribute_selector] = STATE(225),
    [sym_child_selector] = STATE(225),
    [sym_descendant_selector] = STATE(225),
    [sym_sibling_selector] = STATE(225),
    [sym_adjacent_sibling_selector] = STATE(225),
    [sym_namespace_selector] = STATE(225),
    [sym_declaration] = STATE(8),
    [sym_string_value] = STATE(225),
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
    STATE(402), 1,
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
    STATE(225), 13,
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
    STATE(402), 1,
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
    STATE(225), 13,
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
    STATE(212), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(236), 12,
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
    STATE(212), 8,
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
    STATE(212), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(244), 12,
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
    STATE(306), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(212), 9,
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
    STATE(383), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(333), 9,
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
    STATE(233), 13,
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
    STATE(383), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(336), 9,
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
    STATE(256), 13,
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
    STATE(232), 13,
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
    STATE(216), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(280), 12,
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
    STATE(210), 9,
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
    STATE(259), 13,
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
    STATE(215), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(280), 12,
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
    STATE(204), 1,
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
    STATE(210), 9,
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
    STATE(210), 9,
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
    STATE(366), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(212), 9,
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
    STATE(378), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(212), 9,
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
    STATE(361), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(212), 9,
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
    STATE(210), 9,
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
    STATE(382), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(212), 9,
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
    STATE(210), 9,
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
    STATE(212), 9,
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
    STATE(384), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(212), 9,
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
    STATE(212), 9,
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
    STATE(210), 9,
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
    STATE(210), 9,
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
    STATE(212), 9,
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
    STATE(212), 9,
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
    STATE(212), 9,
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
    STATE(212), 9,
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
    STATE(204), 1,
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
    STATE(212), 9,
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
    STATE(212), 9,
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
    STATE(212), 9,
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
    STATE(204), 1,
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
    STATE(212), 9,
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
    STATE(337), 9,
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
    STATE(273), 9,
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
    STATE(308), 9,
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
    STATE(317), 9,
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
    STATE(297), 9,
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
    STATE(329), 9,
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
    STATE(219), 9,
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
    STATE(332), 9,
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
    STATE(333), 9,
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
    STATE(307), 9,
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
    STATE(336), 9,
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
    STATE(311), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8308] = 13,
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
    ACTIONS(1011), 1,
      sym_important,
    ACTIONS(1013), 1,
      sym_plain_value,
    STATE(339), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8356] = 4,
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
  [8385] = 4,
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
  [8414] = 4,
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
  [8443] = 4,
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
  [8472] = 4,
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
  [8501] = 4,
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
  [8530] = 4,
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
  [8559] = 4,
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
  [8588] = 4,
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
  [8617] = 4,
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
  [8646] = 4,
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
  [8675] = 4,
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
  [8704] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1057), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1055), 11,
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
  [8733] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1059), 1,
      anon_sym_SEMI,
    ACTIONS(1061), 1,
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
  [8765] = 6,
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
    ACTIONS(1065), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1063), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8797] = 5,
    ACTIONS(1069), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1067), 6,
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
  [8827] = 6,
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
    ACTIONS(1073), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1071), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [8859] = 6,
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
  [8891] = 6,
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
  [8923] = 5,
    ACTIONS(1079), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1077), 6,
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
  [8953] = 5,
    ACTIONS(1069), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(607), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1067), 6,
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
  [8983] = 5,
    ACTIONS(1079), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(583), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1077), 6,
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
  [9013] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1081), 1,
      anon_sym_SEMI,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1087), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(334), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9052] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(1091), 1,
      anon_sym_SEMI,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1083), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1087), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(327), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9091] = 5,
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
  [9120] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1093), 1,
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
  [9149] = 5,
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
  [9178] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1059), 1,
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
  [9207] = 9,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(1095), 1,
      anon_sym_SEMI,
    ACTIONS(1097), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(303), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9242] = 14,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1101), 1,
      anon_sym_LBRACE,
    ACTIONS(1103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1105), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      anon_sym_GT,
    ACTIONS(1111), 1,
      anon_sym_TILDE,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1115), 1,
      anon_sym_PIPE,
    ACTIONS(1117), 1,
      sym__descendant_operator,
    ACTIONS(1119), 1,
      sym__pseudo_class_selector_colon,
    STATE(385), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9286] = 3,
    ACTIONS(1121), 1,
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
  [9308] = 3,
    ACTIONS(1123), 1,
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
  [9330] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1125), 1,
      anon_sym_SEMI,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1131), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1133), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(440), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9364] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1135), 1,
      anon_sym_SEMI,
    ACTIONS(1137), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1139), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(421), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9398] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1141), 1,
      anon_sym_SEMI,
    ACTIONS(1143), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1145), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(418), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9432] = 9,
    ACTIONS(1149), 1,
      anon_sym_host,
    ACTIONS(1153), 1,
      sym_escape_sequence,
    ACTIONS(1155), 1,
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
    ACTIONS(1151), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1147), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9466] = 12,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1105), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      anon_sym_GT,
    ACTIONS(1111), 1,
      anon_sym_TILDE,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1115), 1,
      anon_sym_PIPE,
    ACTIONS(1117), 1,
      sym__descendant_operator,
    ACTIONS(1119), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1157), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [9506] = 14,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1105), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      anon_sym_GT,
    ACTIONS(1111), 1,
      anon_sym_TILDE,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1115), 1,
      anon_sym_PIPE,
    ACTIONS(1117), 1,
      sym__descendant_operator,
    ACTIONS(1119), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9550] = 14,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1105), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      anon_sym_GT,
    ACTIONS(1111), 1,
      anon_sym_TILDE,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1115), 1,
      anon_sym_PIPE,
    ACTIONS(1117), 1,
      sym__descendant_operator,
    ACTIONS(1119), 1,
      sym__pseudo_class_selector_colon,
    STATE(382), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9594] = 3,
    ACTIONS(1161), 1,
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
  [9616] = 14,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1105), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      anon_sym_GT,
    ACTIONS(1111), 1,
      anon_sym_TILDE,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1115), 1,
      anon_sym_PIPE,
    ACTIONS(1117), 1,
      sym__descendant_operator,
    ACTIONS(1119), 1,
      sym__pseudo_class_selector_colon,
    STATE(384), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [9660] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1163), 1,
      anon_sym_SEMI,
    ACTIONS(1165), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1167), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(432), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9694] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1169), 1,
      anon_sym_SEMI,
    ACTIONS(1171), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1173), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(419), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9728] = 9,
    ACTIONS(1153), 1,
      sym_escape_sequence,
    ACTIONS(1155), 1,
      sym_identifier,
    ACTIONS(1177), 1,
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
    ACTIONS(1151), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1175), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [9762] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LPAREN2,
    ACTIONS(1181), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1183), 1,
      aux_sym_float_value_token1,
    ACTIONS(1185), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1187), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(229), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9793] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LPAREN2,
    ACTIONS(1181), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1183), 1,
      aux_sym_float_value_token1,
    ACTIONS(1189), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1191), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(238), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9824] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1193), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1195), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(399), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9855] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1197), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1199), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(397), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9886] = 12,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1105), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      anon_sym_GT,
    ACTIONS(1111), 1,
      anon_sym_TILDE,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1115), 1,
      anon_sym_PIPE,
    ACTIONS(1117), 1,
      sym__descendant_operator,
    ACTIONS(1119), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9925] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    STATE(277), 1,
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
  [9952] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1203), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1205), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(424), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [9983] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1207), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1209), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(435), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [10014] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LPAREN2,
    ACTIONS(1181), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1183), 1,
      aux_sym_float_value_token1,
    ACTIONS(1211), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1213), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(251), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [10045] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LPAREN2,
    ACTIONS(1181), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1183), 1,
      aux_sym_float_value_token1,
    ACTIONS(1215), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1217), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(237), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [10076] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LPAREN2,
    ACTIONS(1181), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1183), 1,
      aux_sym_float_value_token1,
    ACTIONS(1219), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1221), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(228), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [10107] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_LPAREN2,
    ACTIONS(1181), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1183), 1,
      aux_sym_float_value_token1,
    ACTIONS(1223), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1225), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(230), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [10138] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_LPAREN2,
    ACTIONS(1127), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1129), 1,
      aux_sym_float_value_token1,
    ACTIONS(1227), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1229), 3,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(400), 4,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
  [10169] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1231), 1,
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
  [10193] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
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
  [10219] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1233), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(383), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10245] = 12,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1105), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      anon_sym_GT,
    ACTIONS(1111), 1,
      anon_sym_TILDE,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1115), 1,
      anon_sym_PIPE,
    ACTIONS(1117), 1,
      sym__descendant_operator,
    ACTIONS(1119), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10283] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1237), 1,
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
  [10307] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1035), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
  [10329] = 12,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1105), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      anon_sym_GT,
    ACTIONS(1111), 1,
      anon_sym_TILDE,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1115), 1,
      anon_sym_PIPE,
    ACTIONS(1117), 1,
      sym__descendant_operator,
    ACTIONS(1119), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1239), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10367] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1047), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
  [10389] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(326), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10415] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(315), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10441] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(357), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10467] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(318), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10493] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1043), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
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
  [10515] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(320), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10541] = 6,
    ACTIONS(493), 1,
      anon_sym_selector,
    ACTIONS(1085), 1,
      anon_sym_LPAREN2,
    ACTIONS(1089), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(352), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10567] = 4,
    ACTIONS(1243), 1,
      anon_sym_border,
    STATE(250), 1,
      sym_europacss_color_target,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1241), 8,
      anon_sym_fg,
      anon_sym_bg,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_border_DASHtop,
      anon_sym_border_DASHbottom,
      anon_sym_border_DASHleft,
      anon_sym_border_DASHright,
  [10588] = 4,
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
  [10609] = 4,
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
  [10630] = 4,
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
  [10651] = 4,
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
  [10672] = 4,
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
  [10693] = 4,
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
  [10714] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    STATE(290), 1,
      sym_arguments,
    ACTIONS(581), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(757), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [10743] = 4,
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
  [10764] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1039), 4,
      anon_sym_SEMI,
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
  [10785] = 4,
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
  [10806] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1249), 1,
      sym_unit,
    ACTIONS(967), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(965), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10829] = 11,
    ACTIONS(771), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1105), 1,
      anon_sym_POUND,
    ACTIONS(1107), 1,
      anon_sym_LBRACK,
    ACTIONS(1109), 1,
      anon_sym_GT,
    ACTIONS(1111), 1,
      anon_sym_TILDE,
    ACTIONS(1113), 1,
      anon_sym_PLUS,
    ACTIONS(1115), 1,
      anon_sym_PIPE,
    ACTIONS(1117), 1,
      sym__descendant_operator,
    ACTIONS(1119), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10864] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1055), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1057), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [10885] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1251), 1,
      sym_unit,
    ACTIONS(961), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(959), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10908] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_SLASH,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
    STATE(290), 1,
      sym_arguments,
    ACTIONS(581), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [10933] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_SLASH,
    ACTIONS(1047), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [10953] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1045), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1043), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10973] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1049), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1047), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [10993] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_SLASH,
    ACTIONS(1253), 1,
      sym_unit,
    ACTIONS(965), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11015] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1037), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1035), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11035] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_SLASH,
    ACTIONS(1255), 1,
      sym_unit,
    ACTIONS(959), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11057] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_SLASH,
    ACTIONS(1039), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11076] = 4,
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
  [11095] = 4,
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
  [11114] = 4,
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
  [11133] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1057), 1,
      anon_sym_SLASH,
    ACTIONS(1055), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11152] = 4,
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
  [11171] = 4,
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
  [11190] = 4,
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
  [11209] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1257), 4,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    ACTIONS(1259), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      sym_europacss_dotted_name,
  [11228] = 4,
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
  [11247] = 4,
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
  [11266] = 4,
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
  [11285] = 4,
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
  [11304] = 7,
    ACTIONS(1097), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1263), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_block,
    STATE(328), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
  [11328] = 6,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    ACTIONS(1272), 1,
      aux_sym_integer_value_token1,
    STATE(408), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1269), 2,
      sym_from,
      sym_to,
    STATE(304), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [11350] = 7,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    ACTIONS(1275), 1,
      sym_identifier,
    STATE(277), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(429), 2,
      sym_string_value,
      sym_call_expression,
  [11374] = 7,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_block,
    STATE(335), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
  [11398] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_COMMA,
    ACTIONS(1283), 1,
      anon_sym_RBRACK,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    STATE(386), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11422] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_COMMA,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1287), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11446] = 6,
    ACTIONS(1289), 1,
      anon_sym_RBRACE,
    ACTIONS(1293), 1,
      aux_sym_integer_value_token1,
    STATE(408), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1291), 2,
      sym_from,
      sym_to,
    STATE(310), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [11468] = 6,
    ACTIONS(1293), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1295), 1,
      anon_sym_RBRACE,
    STATE(408), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1291), 2,
      sym_from,
      sym_to,
    STATE(304), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [11490] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1279), 1,
      anon_sym_COMMA,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1297), 1,
      anon_sym_RBRACK,
    STATE(380), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11514] = 6,
    ACTIONS(1293), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1299), 1,
      anon_sym_RBRACE,
    STATE(408), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1291), 2,
      sym_from,
      sym_to,
    STATE(304), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [11536] = 6,
    ACTIONS(1293), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1301), 1,
      anon_sym_RBRACE,
    STATE(408), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1291), 2,
      sym_from,
      sym_to,
    STATE(312), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [11558] = 7,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    ACTIONS(1275), 1,
      sym_identifier,
    STATE(277), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(422), 2,
      sym_string_value,
      sym_call_expression,
  [11582] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1303), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11595] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1305), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11608] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11627] = 6,
    ACTIONS(1097), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_block,
    STATE(359), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
  [11648] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1309), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11661] = 6,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      sym_block,
    STATE(358), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
  [11682] = 2,
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
  [11695] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1311), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11708] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1313), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11721] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1315), 1,
      anon_sym_RBRACK,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11739] = 5,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(1317), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(413), 2,
      sym_string_value,
      sym_call_expression,
  [11757] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1319), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [11771] = 5,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1321), 1,
      anon_sym_SEMI,
    STATE(391), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
  [11789] = 6,
    ACTIONS(1097), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1323), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      sym_block,
    STATE(348), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11809] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11827] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1327), 1,
      anon_sym_RBRACK,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11845] = 4,
    ACTIONS(1331), 1,
      aux_sym_integer_value_token1,
    STATE(404), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1329), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [11861] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1333), 1,
      anon_sym_SEMI,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11879] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11897] = 5,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1337), 1,
      anon_sym_SEMI,
    STATE(387), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
  [11915] = 6,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1339), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_block,
    STATE(348), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11935] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11953] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [11971] = 5,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    ACTIONS(1345), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(410), 2,
      sym_string_value,
      sym_call_expression,
  [11989] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1285), 1,
      anon_sym_SLASH,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    ACTIONS(1281), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12007] = 4,
    ACTIONS(1349), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1351), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12022] = 4,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(166), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1153), 2,
      sym_escape_sequence,
      sym_identifier,
  [12037] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(417), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12048] = 3,
    ACTIONS(1247), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(757), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12061] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(445), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12072] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(465), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12083] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1354), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12094] = 4,
    ACTIONS(1356), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1358), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12109] = 4,
    ACTIONS(1361), 1,
      anon_sym_COMMA,
    STATE(348), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1319), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12124] = 4,
    ACTIONS(1364), 1,
      anon_sym_SQUOTE,
    STATE(376), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1366), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12139] = 4,
    ACTIONS(1368), 1,
      anon_sym_SQUOTE,
    STATE(353), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1370), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12154] = 4,
    ACTIONS(1368), 1,
      anon_sym_DQUOTE,
    STATE(354), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1372), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12169] = 4,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
  [12184] = 4,
    ACTIONS(1374), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1376), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12199] = 4,
    ACTIONS(1374), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12214] = 4,
    ACTIONS(1380), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1157), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [12229] = 4,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1383), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12244] = 4,
    ACTIONS(1097), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
  [12259] = 5,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      sym_block,
    STATE(348), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12276] = 5,
    ACTIONS(1097), 1,
      anon_sym_LBRACE,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      sym_block,
    STATE(348), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12293] = 4,
    STATE(83), 1,
      aux_sym_class_name_repeat1,
    STATE(144), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1153), 2,
      sym_escape_sequence,
      sym_identifier,
  [12308] = 4,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12323] = 4,
    ACTIONS(1388), 1,
      anon_sym_SQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12338] = 4,
    ACTIONS(1388), 1,
      anon_sym_DQUOTE,
    STATE(365), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1392), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12353] = 4,
    ACTIONS(1394), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1376), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12368] = 4,
    ACTIONS(1394), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12383] = 4,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12398] = 4,
    ACTIONS(1398), 1,
      anon_sym_SQUOTE,
    STATE(369), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1400), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12413] = 4,
    ACTIONS(1398), 1,
      anon_sym_DQUOTE,
    STATE(370), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1402), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12428] = 4,
    ACTIONS(1404), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1376), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12443] = 4,
    ACTIONS(1404), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12458] = 4,
    ACTIONS(1406), 1,
      anon_sym_SQUOTE,
    STATE(373), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1408), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12473] = 4,
    ACTIONS(1406), 1,
      anon_sym_DQUOTE,
    STATE(374), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1410), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12488] = 4,
    ACTIONS(1412), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1376), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12503] = 4,
    ACTIONS(1412), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12518] = 4,
    ACTIONS(1364), 1,
      anon_sym_DQUOTE,
    STATE(377), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1414), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12533] = 4,
    ACTIONS(1416), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1376), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12548] = 4,
    ACTIONS(1416), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1378), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [12563] = 4,
    ACTIONS(1418), 1,
      anon_sym_RPAREN,
    STATE(356), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(599), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12578] = 4,
    ACTIONS(1307), 1,
      anon_sym_RBRACK,
    ACTIONS(1420), 1,
      anon_sym_COMMA,
    STATE(379), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12592] = 4,
    ACTIONS(1279), 1,
      anon_sym_COMMA,
    ACTIONS(1423), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12606] = 4,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12620] = 4,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12634] = 3,
    ACTIONS(1430), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1265), 2,
      anon_sym_and,
      anon_sym_or,
  [12646] = 4,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(1432), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12660] = 4,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1434), 1,
      anon_sym_LBRACE,
    STATE(355), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12674] = 4,
    ACTIONS(1279), 1,
      anon_sym_COMMA,
    ACTIONS(1436), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12688] = 4,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1438), 1,
      anon_sym_SEMI,
    STATE(348), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12702] = 4,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      anon_sym_of,
    ACTIONS(1440), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12716] = 3,
    ACTIONS(1442), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(959), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12728] = 3,
    ACTIONS(1444), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(965), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12740] = 4,
    ACTIONS(1261), 1,
      anon_sym_COMMA,
    ACTIONS(1446), 1,
      anon_sym_SEMI,
    STATE(348), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12754] = 4,
    ACTIONS(1279), 1,
      anon_sym_COMMA,
    ACTIONS(1448), 1,
      anon_sym_RBRACK,
    STATE(379), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12768] = 4,
    ACTIONS(1099), 1,
      anon_sym_COMMA,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12782] = 3,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12793] = 3,
    ACTIONS(1452), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12804] = 3,
    ACTIONS(1201), 1,
      anon_sym_LPAREN,
    STATE(277), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12815] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12826] = 3,
    ACTIONS(1454), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12837] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12848] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12859] = 3,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12870] = 3,
    ACTIONS(1097), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12881] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12892] = 3,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
    ACTIONS(1458), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12903] = 3,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12914] = 3,
    ACTIONS(1460), 1,
      aux_sym_color_value_token1,
    ACTIONS(1462), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12925] = 3,
    ACTIONS(1464), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12936] = 3,
    ACTIONS(1466), 1,
      anon_sym_LBRACE,
    STATE(346), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12947] = 2,
    ACTIONS(1468), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12955] = 2,
    ACTIONS(1470), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12963] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12971] = 2,
    ACTIONS(1472), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12979] = 2,
    ACTIONS(1474), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12987] = 2,
    ACTIONS(1476), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12995] = 2,
    ACTIONS(1478), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13003] = 2,
    ACTIONS(1480), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13011] = 2,
    ACTIONS(1482), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13019] = 2,
    ACTIONS(1484), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13027] = 2,
    ACTIONS(1486), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13035] = 2,
    ACTIONS(1488), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13043] = 2,
    ACTIONS(1490), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13051] = 2,
    ACTIONS(1492), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13059] = 2,
    ACTIONS(1494), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13067] = 2,
    ACTIONS(1496), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13075] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13083] = 2,
    ACTIONS(1498), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13091] = 2,
    ACTIONS(1500), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13099] = 2,
    ACTIONS(1502), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13107] = 2,
    ACTIONS(1504), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13115] = 2,
    ACTIONS(1506), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13123] = 3,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1508), 1,
      sym_plain_value,
  [13133] = 2,
    ACTIONS(1510), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13141] = 2,
    ACTIONS(1512), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13149] = 2,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13157] = 2,
    ACTIONS(1514), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13165] = 2,
    ACTIONS(1516), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13173] = 2,
    ACTIONS(1518), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13181] = 2,
    ACTIONS(1520), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13189] = 2,
    ACTIONS(1522), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13197] = 2,
    ACTIONS(1524), 1,
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
  [SMALL_STATE(196)] = 8356,
  [SMALL_STATE(197)] = 8385,
  [SMALL_STATE(198)] = 8414,
  [SMALL_STATE(199)] = 8443,
  [SMALL_STATE(200)] = 8472,
  [SMALL_STATE(201)] = 8501,
  [SMALL_STATE(202)] = 8530,
  [SMALL_STATE(203)] = 8559,
  [SMALL_STATE(204)] = 8588,
  [SMALL_STATE(205)] = 8617,
  [SMALL_STATE(206)] = 8646,
  [SMALL_STATE(207)] = 8675,
  [SMALL_STATE(208)] = 8704,
  [SMALL_STATE(209)] = 8733,
  [SMALL_STATE(210)] = 8765,
  [SMALL_STATE(211)] = 8797,
  [SMALL_STATE(212)] = 8827,
  [SMALL_STATE(213)] = 8859,
  [SMALL_STATE(214)] = 8891,
  [SMALL_STATE(215)] = 8923,
  [SMALL_STATE(216)] = 8953,
  [SMALL_STATE(217)] = 8983,
  [SMALL_STATE(218)] = 9013,
  [SMALL_STATE(219)] = 9052,
  [SMALL_STATE(220)] = 9091,
  [SMALL_STATE(221)] = 9120,
  [SMALL_STATE(222)] = 9149,
  [SMALL_STATE(223)] = 9178,
  [SMALL_STATE(224)] = 9207,
  [SMALL_STATE(225)] = 9242,
  [SMALL_STATE(226)] = 9286,
  [SMALL_STATE(227)] = 9308,
  [SMALL_STATE(228)] = 9330,
  [SMALL_STATE(229)] = 9364,
  [SMALL_STATE(230)] = 9398,
  [SMALL_STATE(231)] = 9432,
  [SMALL_STATE(232)] = 9466,
  [SMALL_STATE(233)] = 9506,
  [SMALL_STATE(234)] = 9550,
  [SMALL_STATE(235)] = 9594,
  [SMALL_STATE(236)] = 9616,
  [SMALL_STATE(237)] = 9660,
  [SMALL_STATE(238)] = 9694,
  [SMALL_STATE(239)] = 9728,
  [SMALL_STATE(240)] = 9762,
  [SMALL_STATE(241)] = 9793,
  [SMALL_STATE(242)] = 9824,
  [SMALL_STATE(243)] = 9855,
  [SMALL_STATE(244)] = 9886,
  [SMALL_STATE(245)] = 9925,
  [SMALL_STATE(246)] = 9952,
  [SMALL_STATE(247)] = 9983,
  [SMALL_STATE(248)] = 10014,
  [SMALL_STATE(249)] = 10045,
  [SMALL_STATE(250)] = 10076,
  [SMALL_STATE(251)] = 10107,
  [SMALL_STATE(252)] = 10138,
  [SMALL_STATE(253)] = 10169,
  [SMALL_STATE(254)] = 10193,
  [SMALL_STATE(255)] = 10219,
  [SMALL_STATE(256)] = 10245,
  [SMALL_STATE(257)] = 10283,
  [SMALL_STATE(258)] = 10307,
  [SMALL_STATE(259)] = 10329,
  [SMALL_STATE(260)] = 10367,
  [SMALL_STATE(261)] = 10389,
  [SMALL_STATE(262)] = 10415,
  [SMALL_STATE(263)] = 10441,
  [SMALL_STATE(264)] = 10467,
  [SMALL_STATE(265)] = 10493,
  [SMALL_STATE(266)] = 10515,
  [SMALL_STATE(267)] = 10541,
  [SMALL_STATE(268)] = 10567,
  [SMALL_STATE(269)] = 10588,
  [SMALL_STATE(270)] = 10609,
  [SMALL_STATE(271)] = 10630,
  [SMALL_STATE(272)] = 10651,
  [SMALL_STATE(273)] = 10672,
  [SMALL_STATE(274)] = 10693,
  [SMALL_STATE(275)] = 10714,
  [SMALL_STATE(276)] = 10743,
  [SMALL_STATE(277)] = 10764,
  [SMALL_STATE(278)] = 10785,
  [SMALL_STATE(279)] = 10806,
  [SMALL_STATE(280)] = 10829,
  [SMALL_STATE(281)] = 10864,
  [SMALL_STATE(282)] = 10885,
  [SMALL_STATE(283)] = 10908,
  [SMALL_STATE(284)] = 10933,
  [SMALL_STATE(285)] = 10953,
  [SMALL_STATE(286)] = 10973,
  [SMALL_STATE(287)] = 10993,
  [SMALL_STATE(288)] = 11015,
  [SMALL_STATE(289)] = 11035,
  [SMALL_STATE(290)] = 11057,
  [SMALL_STATE(291)] = 11076,
  [SMALL_STATE(292)] = 11095,
  [SMALL_STATE(293)] = 11114,
  [SMALL_STATE(294)] = 11133,
  [SMALL_STATE(295)] = 11152,
  [SMALL_STATE(296)] = 11171,
  [SMALL_STATE(297)] = 11190,
  [SMALL_STATE(298)] = 11209,
  [SMALL_STATE(299)] = 11228,
  [SMALL_STATE(300)] = 11247,
  [SMALL_STATE(301)] = 11266,
  [SMALL_STATE(302)] = 11285,
  [SMALL_STATE(303)] = 11304,
  [SMALL_STATE(304)] = 11328,
  [SMALL_STATE(305)] = 11350,
  [SMALL_STATE(306)] = 11374,
  [SMALL_STATE(307)] = 11398,
  [SMALL_STATE(308)] = 11422,
  [SMALL_STATE(309)] = 11446,
  [SMALL_STATE(310)] = 11468,
  [SMALL_STATE(311)] = 11490,
  [SMALL_STATE(312)] = 11514,
  [SMALL_STATE(313)] = 11536,
  [SMALL_STATE(314)] = 11558,
  [SMALL_STATE(315)] = 11582,
  [SMALL_STATE(316)] = 11595,
  [SMALL_STATE(317)] = 11608,
  [SMALL_STATE(318)] = 11627,
  [SMALL_STATE(319)] = 11648,
  [SMALL_STATE(320)] = 11661,
  [SMALL_STATE(321)] = 11682,
  [SMALL_STATE(322)] = 11695,
  [SMALL_STATE(323)] = 11708,
  [SMALL_STATE(324)] = 11721,
  [SMALL_STATE(325)] = 11739,
  [SMALL_STATE(326)] = 11757,
  [SMALL_STATE(327)] = 11771,
  [SMALL_STATE(328)] = 11789,
  [SMALL_STATE(329)] = 11809,
  [SMALL_STATE(330)] = 11827,
  [SMALL_STATE(331)] = 11845,
  [SMALL_STATE(332)] = 11861,
  [SMALL_STATE(333)] = 11879,
  [SMALL_STATE(334)] = 11897,
  [SMALL_STATE(335)] = 11915,
  [SMALL_STATE(336)] = 11935,
  [SMALL_STATE(337)] = 11953,
  [SMALL_STATE(338)] = 11971,
  [SMALL_STATE(339)] = 11989,
  [SMALL_STATE(340)] = 12007,
  [SMALL_STATE(341)] = 12022,
  [SMALL_STATE(342)] = 12037,
  [SMALL_STATE(343)] = 12048,
  [SMALL_STATE(344)] = 12061,
  [SMALL_STATE(345)] = 12072,
  [SMALL_STATE(346)] = 12083,
  [SMALL_STATE(347)] = 12094,
  [SMALL_STATE(348)] = 12109,
  [SMALL_STATE(349)] = 12124,
  [SMALL_STATE(350)] = 12139,
  [SMALL_STATE(351)] = 12154,
  [SMALL_STATE(352)] = 12169,
  [SMALL_STATE(353)] = 12184,
  [SMALL_STATE(354)] = 12199,
  [SMALL_STATE(355)] = 12214,
  [SMALL_STATE(356)] = 12229,
  [SMALL_STATE(357)] = 12244,
  [SMALL_STATE(358)] = 12259,
  [SMALL_STATE(359)] = 12276,
  [SMALL_STATE(360)] = 12293,
  [SMALL_STATE(361)] = 12308,
  [SMALL_STATE(362)] = 12323,
  [SMALL_STATE(363)] = 12338,
  [SMALL_STATE(364)] = 12353,
  [SMALL_STATE(365)] = 12368,
  [SMALL_STATE(366)] = 12383,
  [SMALL_STATE(367)] = 12398,
  [SMALL_STATE(368)] = 12413,
  [SMALL_STATE(369)] = 12428,
  [SMALL_STATE(370)] = 12443,
  [SMALL_STATE(371)] = 12458,
  [SMALL_STATE(372)] = 12473,
  [SMALL_STATE(373)] = 12488,
  [SMALL_STATE(374)] = 12503,
  [SMALL_STATE(375)] = 12518,
  [SMALL_STATE(376)] = 12533,
  [SMALL_STATE(377)] = 12548,
  [SMALL_STATE(378)] = 12563,
  [SMALL_STATE(379)] = 12578,
  [SMALL_STATE(380)] = 12592,
  [SMALL_STATE(381)] = 12606,
  [SMALL_STATE(382)] = 12620,
  [SMALL_STATE(383)] = 12634,
  [SMALL_STATE(384)] = 12646,
  [SMALL_STATE(385)] = 12660,
  [SMALL_STATE(386)] = 12674,
  [SMALL_STATE(387)] = 12688,
  [SMALL_STATE(388)] = 12702,
  [SMALL_STATE(389)] = 12716,
  [SMALL_STATE(390)] = 12728,
  [SMALL_STATE(391)] = 12740,
  [SMALL_STATE(392)] = 12754,
  [SMALL_STATE(393)] = 12768,
  [SMALL_STATE(394)] = 12782,
  [SMALL_STATE(395)] = 12793,
  [SMALL_STATE(396)] = 12804,
  [SMALL_STATE(397)] = 12815,
  [SMALL_STATE(398)] = 12826,
  [SMALL_STATE(399)] = 12837,
  [SMALL_STATE(400)] = 12848,
  [SMALL_STATE(401)] = 12859,
  [SMALL_STATE(402)] = 12870,
  [SMALL_STATE(403)] = 12881,
  [SMALL_STATE(404)] = 12892,
  [SMALL_STATE(405)] = 12903,
  [SMALL_STATE(406)] = 12914,
  [SMALL_STATE(407)] = 12925,
  [SMALL_STATE(408)] = 12936,
  [SMALL_STATE(409)] = 12947,
  [SMALL_STATE(410)] = 12955,
  [SMALL_STATE(411)] = 12963,
  [SMALL_STATE(412)] = 12971,
  [SMALL_STATE(413)] = 12979,
  [SMALL_STATE(414)] = 12987,
  [SMALL_STATE(415)] = 12995,
  [SMALL_STATE(416)] = 13003,
  [SMALL_STATE(417)] = 13011,
  [SMALL_STATE(418)] = 13019,
  [SMALL_STATE(419)] = 13027,
  [SMALL_STATE(420)] = 13035,
  [SMALL_STATE(421)] = 13043,
  [SMALL_STATE(422)] = 13051,
  [SMALL_STATE(423)] = 13059,
  [SMALL_STATE(424)] = 13067,
  [SMALL_STATE(425)] = 13075,
  [SMALL_STATE(426)] = 13083,
  [SMALL_STATE(427)] = 13091,
  [SMALL_STATE(428)] = 13099,
  [SMALL_STATE(429)] = 13107,
  [SMALL_STATE(430)] = 13115,
  [SMALL_STATE(431)] = 13123,
  [SMALL_STATE(432)] = 13133,
  [SMALL_STATE(433)] = 13141,
  [SMALL_STATE(434)] = 13149,
  [SMALL_STATE(435)] = 13157,
  [SMALL_STATE(436)] = 13165,
  [SMALL_STATE(437)] = 13173,
  [SMALL_STATE(438)] = 13181,
  [SMALL_STATE(439)] = 13189,
  [SMALL_STATE(440)] = 13197,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(338),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(241),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(417),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(264),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(263),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(341),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(414),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(349),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(375),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
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
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, 0, 14),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, 0, 14),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(368),
  [698] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [707] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [710] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 10),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 11),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, 0, 4),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, 0, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
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
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1, 0, 0),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1, 0, 0),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1, 0, 0),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [1029] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1037] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 7),
  [1041] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 7),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2, 0, 0),
  [1045] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2, 0, 0),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1057] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, 0, 14),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1065] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1, 0, 0),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0),
  [1269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [1272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3, 0, 0),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, 0, 21),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2, 0, 0),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4, 0, 0),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3, 0, 0),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0),
  [1351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0), SHIFT_REPEAT(340),
  [1354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2, 0, 0),
  [1356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0),
  [1358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0), SHIFT_REPEAT(347),
  [1361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(261),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [1383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2, 0, 0),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1480] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
