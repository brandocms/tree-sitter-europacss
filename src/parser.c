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
#define STATE_COUNT 470
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 188
#define ALIAS_COUNT 10
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 32

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
  anon_sym_PERCENT = 69,
  sym__kw_color = 70,
  sym__kw_space = 71,
  sym__kw_font = 72,
  sym__kw_fontsize = 73,
  sym__kw_column = 74,
  sym__kw_column_offset = 75,
  sym__kw_display = 76,
  sym__kw_grid = 77,
  sym__kw_row = 78,
  sym__kw_abs100 = 79,
  anon_sym_fg = 80,
  anon_sym_bg = 81,
  anon_sym_fill = 82,
  anon_sym_stroke = 83,
  anon_sym_border = 84,
  anon_sym_border_DASHtop = 85,
  anon_sym_border_DASHbottom = 86,
  anon_sym_border_DASHleft = 87,
  anon_sym_border_DASHright = 88,
  anon_sym_ATresponsive = 89,
  anon_sym_ATmq = 90,
  anon_sym_ATiterate = 91,
  anon_sym_ATunpack = 92,
  anon_sym_ATif = 93,
  sym_europacss_comparison = 94,
  anon_sym_calc = 95,
  anon_sym_var = 96,
  sym_europacss_variable = 97,
  sym_europacss_range = 98,
  sym_europacss_slash_value = 99,
  sym_europacss_dotted_name = 100,
  sym__descendant_operator = 101,
  sym__pseudo_class_selector_colon = 102,
  sym___error_recovery = 103,
  sym_stylesheet = 104,
  sym_import_statement = 105,
  sym_media_statement = 106,
  sym_charset_statement = 107,
  sym_namespace_statement = 108,
  sym_keyframes_statement = 109,
  sym_keyframe_block_list = 110,
  sym_keyframe_block = 111,
  sym_supports_statement = 112,
  sym_postcss_statement = 113,
  sym_at_rule = 114,
  sym_rule_set = 115,
  sym_selectors = 116,
  sym_block = 117,
  sym__selector = 118,
  sym_universal_selector = 119,
  sym_class_selector = 120,
  sym_pseudo_class_selector = 121,
  sym__nth_child_pseudo_class_selector = 122,
  sym_pseudo_element_selector = 123,
  sym_id_selector = 124,
  sym_attribute_selector = 125,
  sym_child_selector = 126,
  sym_descendant_selector = 127,
  sym_sibling_selector = 128,
  sym_adjacent_sibling_selector = 129,
  sym_namespace_selector = 130,
  sym_pseudo_class_arguments = 131,
  sym_pseudo_class_with_selector_arguments = 132,
  sym_pseudo_class_nth_child_arguments = 133,
  sym_pseudo_element_arguments = 134,
  sym_declaration = 135,
  sym_last_declaration = 136,
  sym__query = 137,
  sym_feature_query = 138,
  sym_parenthesized_query = 139,
  sym_binary_query = 140,
  sym_unary_query = 141,
  sym_selector_query = 142,
  sym__value = 143,
  sym_parenthesized_value = 144,
  sym_color_value = 145,
  sym_string_value = 146,
  sym_integer_value = 147,
  sym_float_value = 148,
  sym_grid_value = 149,
  sym_call_expression = 150,
  sym_binary_expression = 151,
  sym_arguments = 152,
  sym_class_name = 153,
  sym_europacss_placeholder_selector = 154,
  sym_europacss_color = 155,
  sym_europacss_color_target = 156,
  sym_europacss_space = 157,
  sym_europacss_font = 158,
  sym_europacss_fontsize = 159,
  sym_europacss_responsive = 160,
  sym_europacss_mq = 161,
  sym_europacss_column = 162,
  sym_europacss_column_offset = 163,
  sym_europacss_display = 164,
  sym_europacss_grid = 165,
  sym_europacss_row = 166,
  sym_europacss_abs100 = 167,
  sym_europacss_iterate = 168,
  sym_europacss_unpack = 169,
  sym_europacss_if = 170,
  sym__europacss_value = 171,
  sym_europacss_calc = 172,
  sym_europacss_var_ref = 173,
  aux_sym_stylesheet_repeat1 = 174,
  aux_sym_import_statement_repeat1 = 175,
  aux_sym_keyframe_block_list_repeat1 = 176,
  aux_sym_postcss_statement_repeat1 = 177,
  aux_sym_selectors_repeat1 = 178,
  aux_sym_block_repeat1 = 179,
  aux_sym_pseudo_class_arguments_repeat1 = 180,
  aux_sym_declaration_repeat1 = 181,
  aux_sym_string_value_repeat1 = 182,
  aux_sym_string_value_repeat2 = 183,
  aux_sym_grid_value_repeat1 = 184,
  aux_sym_arguments_repeat1 = 185,
  aux_sym_class_name_repeat1 = 186,
  aux_sym_europacss_calc_repeat1 = 187,
  alias_sym_attribute_name = 188,
  alias_sym_feature_name = 189,
  alias_sym_function_name = 190,
  alias_sym_id_name = 191,
  alias_sym_keyframes_name = 192,
  alias_sym_keyword_query = 193,
  alias_sym_namespace_name = 194,
  alias_sym_placeholder_name = 195,
  alias_sym_property_name = 196,
  alias_sym_tag_name = 197,
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
  [anon_sym_PERCENT] = "%",
  [sym__kw_color] = "europacss_keyword",
  [sym__kw_space] = "europacss_keyword",
  [sym__kw_font] = "europacss_keyword",
  [sym__kw_fontsize] = "europacss_keyword",
  [sym__kw_column] = "europacss_keyword",
  [sym__kw_column_offset] = "europacss_keyword",
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
  [sym_europacss_comparison] = "europacss_comparison",
  [anon_sym_calc] = "calc",
  [anon_sym_var] = "var",
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
  [sym_europacss_placeholder_selector] = "europacss_placeholder_selector",
  [sym_europacss_color] = "europacss_color",
  [sym_europacss_color_target] = "europacss_color_target",
  [sym_europacss_space] = "europacss_space",
  [sym_europacss_font] = "europacss_font",
  [sym_europacss_fontsize] = "europacss_fontsize",
  [sym_europacss_responsive] = "europacss_responsive",
  [sym_europacss_mq] = "europacss_mq",
  [sym_europacss_column] = "europacss_column",
  [sym_europacss_column_offset] = "europacss_column_offset",
  [sym_europacss_display] = "europacss_display",
  [sym_europacss_grid] = "europacss_grid",
  [sym_europacss_row] = "europacss_row",
  [sym_europacss_abs100] = "europacss_abs100",
  [sym_europacss_iterate] = "europacss_iterate",
  [sym_europacss_unpack] = "europacss_unpack",
  [sym_europacss_if] = "europacss_if",
  [sym__europacss_value] = "_europacss_value",
  [sym_europacss_calc] = "europacss_calc",
  [sym_europacss_var_ref] = "europacss_var_ref",
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
  [aux_sym_europacss_calc_repeat1] = "europacss_calc_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_placeholder_name] = "placeholder_name",
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
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym__kw_color] = sym__kw_color,
  [sym__kw_space] = sym__kw_color,
  [sym__kw_font] = sym__kw_color,
  [sym__kw_fontsize] = sym__kw_color,
  [sym__kw_column] = sym__kw_color,
  [sym__kw_column_offset] = sym__kw_color,
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
  [sym_europacss_comparison] = sym_europacss_comparison,
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_var] = anon_sym_var,
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
  [sym_europacss_placeholder_selector] = sym_europacss_placeholder_selector,
  [sym_europacss_color] = sym_europacss_color,
  [sym_europacss_color_target] = sym_europacss_color_target,
  [sym_europacss_space] = sym_europacss_space,
  [sym_europacss_font] = sym_europacss_font,
  [sym_europacss_fontsize] = sym_europacss_fontsize,
  [sym_europacss_responsive] = sym_europacss_responsive,
  [sym_europacss_mq] = sym_europacss_mq,
  [sym_europacss_column] = sym_europacss_column,
  [sym_europacss_column_offset] = sym_europacss_column_offset,
  [sym_europacss_display] = sym_europacss_display,
  [sym_europacss_grid] = sym_europacss_grid,
  [sym_europacss_row] = sym_europacss_row,
  [sym_europacss_abs100] = sym_europacss_abs100,
  [sym_europacss_iterate] = sym_europacss_iterate,
  [sym_europacss_unpack] = sym_europacss_unpack,
  [sym_europacss_if] = sym_europacss_if,
  [sym__europacss_value] = sym__europacss_value,
  [sym_europacss_calc] = sym_europacss_calc,
  [sym_europacss_var_ref] = sym_europacss_var_ref,
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
  [aux_sym_europacss_calc_repeat1] = aux_sym_europacss_calc_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_feature_name] = alias_sym_feature_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_id_name] = alias_sym_id_name,
  [alias_sym_keyframes_name] = alias_sym_keyframes_name,
  [alias_sym_keyword_query] = alias_sym_keyword_query,
  [alias_sym_namespace_name] = alias_sym_namespace_name,
  [alias_sym_placeholder_name] = alias_sym_placeholder_name,
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
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
  [sym__kw_column_offset] = {
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
  [sym_europacss_comparison] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_calc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
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
  [sym_europacss_placeholder_selector] = {
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
  [sym_europacss_column_offset] = {
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
  [sym_europacss_calc] = {
    .visible = true,
    .named = true,
  },
  [sym_europacss_var_ref] = {
    .visible = true,
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
  [aux_sym_europacss_calc_repeat1] = {
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
  [alias_sym_placeholder_name] = {
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
  field_name = 4,
  field_property = 5,
  field_query = 6,
  field_size = 7,
  field_target = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_breakpoint] = "breakpoint",
  [field_condition] = "condition",
  [field_family] = "family",
  [field_name] = "name",
  [field_property] = "property",
  [field_query] = "query",
  [field_size] = "size",
  [field_target] = "target",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [17] = {.index = 0, .length = 1},
  [18] = {.index = 1, .length = 1},
  [19] = {.index = 2, .length = 1},
  [20] = {.index = 3, .length = 1},
  [21] = {.index = 4, .length = 1},
  [23] = {.index = 5, .length = 2},
  [24] = {.index = 7, .length = 2},
  [25] = {.index = 9, .length = 2},
  [26] = {.index = 11, .length = 2},
  [27] = {.index = 13, .length = 2},
  [28] = {.index = 15, .length = 3},
  [29] = {.index = 18, .length = 3},
  [30] = {.index = 21, .length = 3},
  [31] = {.index = 24, .length = 1},
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
  [24] =
    {field_name, 2},
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
    [1] = alias_sym_placeholder_name,
  },
  [8] = {
    [0] = alias_sym_function_name,
  },
  [9] = {
    [1] = alias_sym_keyframes_name,
  },
  [10] = {
    [1] = alias_sym_attribute_name,
  },
  [11] = {
    [2] = sym_class_name,
  },
  [12] = {
    [2] = alias_sym_tag_name,
  },
  [13] = {
    [2] = alias_sym_id_name,
  },
  [14] = {
    [1] = alias_sym_namespace_name,
  },
  [15] = {
    [0] = alias_sym_property_name,
  },
  [16] = {
    [2] = alias_sym_attribute_name,
  },
  [22] = {
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
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 2,
  [7] = 3,
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
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 78,
  [81] = 35,
  [82] = 54,
  [83] = 55,
  [84] = 37,
  [85] = 38,
  [86] = 39,
  [87] = 40,
  [88] = 41,
  [89] = 42,
  [90] = 90,
  [91] = 43,
  [92] = 51,
  [93] = 93,
  [94] = 94,
  [95] = 44,
  [96] = 45,
  [97] = 46,
  [98] = 14,
  [99] = 48,
  [100] = 34,
  [101] = 52,
  [102] = 53,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 94,
  [107] = 49,
  [108] = 36,
  [109] = 94,
  [110] = 50,
  [111] = 111,
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
  [125] = 120,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 129,
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
  [150] = 103,
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
  [173] = 104,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 178,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 182,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 178,
  [191] = 182,
  [192] = 192,
  [193] = 186,
  [194] = 177,
  [195] = 182,
  [196] = 192,
  [197] = 180,
  [198] = 182,
  [199] = 192,
  [200] = 104,
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
  [213] = 103,
  [214] = 202,
  [215] = 215,
  [216] = 215,
  [217] = 217,
  [218] = 218,
  [219] = 219,
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
  [234] = 228,
  [235] = 235,
  [236] = 233,
  [237] = 231,
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
  [252] = 188,
  [253] = 187,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 207,
  [262] = 262,
  [263] = 205,
  [264] = 204,
  [265] = 265,
  [266] = 266,
  [267] = 257,
  [268] = 174,
  [269] = 269,
  [270] = 188,
  [271] = 187,
  [272] = 272,
  [273] = 207,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 187,
  [280] = 188,
  [281] = 281,
  [282] = 282,
  [283] = 205,
  [284] = 207,
  [285] = 204,
  [286] = 272,
  [287] = 277,
  [288] = 288,
  [289] = 205,
  [290] = 290,
  [291] = 204,
  [292] = 104,
  [293] = 293,
  [294] = 294,
  [295] = 217,
  [296] = 209,
  [297] = 208,
  [298] = 212,
  [299] = 210,
  [300] = 206,
  [301] = 211,
  [302] = 302,
  [303] = 303,
  [304] = 203,
  [305] = 174,
  [306] = 103,
  [307] = 204,
  [308] = 187,
  [309] = 188,
  [310] = 203,
  [311] = 205,
  [312] = 206,
  [313] = 207,
  [314] = 217,
  [315] = 208,
  [316] = 209,
  [317] = 210,
  [318] = 211,
  [319] = 212,
  [320] = 103,
  [321] = 104,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 324,
  [329] = 327,
  [330] = 327,
  [331] = 322,
  [332] = 323,
  [333] = 326,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 339,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 345,
  [351] = 351,
  [352] = 349,
  [353] = 348,
  [354] = 354,
  [355] = 348,
  [356] = 348,
  [357] = 347,
  [358] = 348,
  [359] = 344,
  [360] = 360,
  [361] = 361,
  [362] = 54,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 370,
  [373] = 367,
  [374] = 374,
  [375] = 369,
  [376] = 49,
  [377] = 367,
  [378] = 378,
  [379] = 374,
  [380] = 380,
  [381] = 370,
  [382] = 367,
  [383] = 374,
  [384] = 369,
  [385] = 363,
  [386] = 386,
  [387] = 367,
  [388] = 374,
  [389] = 369,
  [390] = 363,
  [391] = 374,
  [392] = 392,
  [393] = 369,
  [394] = 363,
  [395] = 42,
  [396] = 392,
  [397] = 365,
  [398] = 363,
  [399] = 399,
  [400] = 400,
  [401] = 187,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 400,
  [407] = 187,
  [408] = 188,
  [409] = 400,
  [410] = 410,
  [411] = 411,
  [412] = 404,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 288,
  [426] = 418,
  [427] = 282,
  [428] = 428,
  [429] = 429,
  [430] = 419,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 436,
  [452] = 452,
  [453] = 453,
  [454] = 445,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 439,
  [462] = 462,
  [463] = 442,
  [464] = 443,
  [465] = 445,
  [466] = 456,
  [467] = 440,
  [468] = 436,
  [469] = 440,
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
      if (eof) ADVANCE(203);
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '$', 74,
        '%', 580,
        '&', 217,
        '\'', 310,
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 379,
        '.', 220,
        '/', 381,
        ':', 265,
        ';', 206,
        '=', 242,
        '>', 249,
        '@', 80,
        'E', 51,
        '[', 241,
        '\\', 188,
        ']', 248,
        '^', 75,
        'a', 140,
        'b', 114,
        'c', 81,
        'e', 49,
        'f', 116,
        'h', 82,
        'i', 164,
        'n', 145,
        'o', 99,
        's', 107,
        't', 146,
        'v', 83,
        'w', 120,
        '{', 212,
        '|', 255,
        '}', 213,
        '~', 251,
      );
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'd') ADVANCE(190);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '%', 580,
        '&', 217,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        '-', 55,
        '.', 220,
        '/', 37,
        ':', 72,
        '>', 249,
        '[', 241,
        '_', 386,
        '|', 254,
        '~', 250,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '%', 374,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        '}', 213,
        'E', 360,
        'e', 360,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 220,
        '/', 382,
        ':', 72,
        '>', 249,
        '[', 241,
        '_', 386,
        '|', 254,
        '~', 250,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        '}', 213,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 256,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        'a', 394,
        'o', 398,
        '{', 212,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 220,
        '/', 382,
        ':', 72,
        '>', 249,
        '[', 241,
        '_', 386,
        '|', 254,
        '~', 250,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        '}', 213,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        ')', 257,
        '+', 56,
        ',', 205,
        '-', 55,
        '.', 185,
        '/', 37,
        ';', 206,
        '[', 375,
        '_', 386,
        '}', 213,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 378,
        '.', 185,
        '/', 382,
        ';', 206,
        '[', 375,
        '_', 386,
        'a', 394,
        'o', 398,
        '{', 212,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '\'', 310,
        '(', 267,
        '+', 56,
        '-', 55,
        '.', 185,
        '/', 37,
        ';', 206,
        '[', 375,
        '_', 386,
        'n', 395,
        'o', 393,
        's', 390,
        '{', 212,
        'E', 383,
        'e', 383,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '"', 316,
        '#', 240,
        '%', 580,
        '&', 217,
        '\'', 310,
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 72,
        '>', 249,
        '@', 80,
        '[', 241,
        '|', 254,
        '}', 213,
        '~', 250,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '#', 240,
        '$', 73,
        '(', 256,
        ')', 257,
        '*', 76,
        '+', 252,
        ',', 205,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 72,
        '=', 242,
        '>', 249,
        '[', 241,
        '\\', 188,
        ']', 248,
        '^', 75,
        '{', 212,
        '|', 255,
        '~', 251,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        '#', 240,
        '$', 73,
        ')', 257,
        '*', 76,
        '+', 252,
        ',', 205,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 72,
        '=', 242,
        '>', 249,
        '[', 241,
        '\\', 188,
        ']', 248,
        '^', 75,
        '{', 212,
        '|', 255,
        '~', 251,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '$', 191,
        '%', 67,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 377,
        '.', 185,
        '/', 382,
        '_', 69,
        'v', 576,
        'E', 568,
        'e', 568,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '$', 191,
        '%', 67,
        '(', 267,
        '+', 56,
        '-', 24,
        '.', 46,
        '/', 37,
        ';', 206,
        '_', 21,
        'c', 559,
        '<', 77,
        '>', 77,
        'E', 563,
        'e', 563,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '$', 191,
        '%', 368,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 377,
        '.', 185,
        '/', 382,
        '_', 69,
        'v', 370,
        'E', 367,
        'e', 367,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '$', 191,
        '%', 368,
        '(', 267,
        '+', 56,
        '-', 24,
        '.', 46,
        '/', 37,
        ';', 206,
        '_', 21,
        'c', 362,
        '<', 77,
        '>', 77,
        'E', 366,
        'e', 366,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '%', 374,
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 380,
        '/', 381,
        ';', 206,
        'n', 353,
        'o', 352,
        's', 349,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '%', 67,
        '.', 185,
        '/', 195,
        '>', 193,
        '-', 69,
        '_', 69,
        'E', 568,
        'e', 568,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 376,
        '/', 381,
        ':', 264,
        ';', 206,
        ']', 248,
        'a', 139,
        'o', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '(', 256,
        '*', 218,
        '+', 252,
        '-', 380,
        '/', 381,
        ';', 206,
        'n', 430,
        'o', 427,
        's', 415,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 380,
        '/', 381,
        ';', 206,
        'n', 430,
        'o', 427,
        's', 415,
        '{', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '(', 267,
        '*', 218,
        '+', 252,
        '-', 380,
        '/', 381,
        ';', 206,
        'n', 430,
        'o', 427,
        's', 415,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '(', 267,
        '-', 197,
        '/', 36,
        ';', 206,
        '[', 375,
        'n', 430,
        'o', 427,
        's', 415,
        '{', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 376,
        '/', 381,
        ':', 264,
        ';', 206,
        ']', 248,
        'a', 139,
        'o', 111,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 376,
        '/', 381,
        ';', 206,
        ']', 248,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 376,
        '/', 381,
        ';', 206,
        ']', 248,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        ')', 257,
        ',', 205,
        '/', 36,
        ':', 264,
        ';', 206,
        'a', 139,
        'b', 113,
        'f', 115,
        'o', 111,
        's', 174,
        't', 146,
        '{', 212,
        '}', 213,
        '+', 187,
        '-', 187,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 34:
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(257);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(557);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(554);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(558);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '+') ADVANCE(187);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 'o') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == 'w') ADVANCE(419);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == 'v') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == 'v') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '{') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '{') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 59:
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '/') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(573);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(573);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '>') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '>') ADVANCE(623);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '>') ADVANCE(623);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 69:
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 70:
      if (lookahead == '0') ADVANCE(600);
      END_STATE();
    case 71:
      if (lookahead == '0') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(239);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(623);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 80:
      ADVANCE_MAP(
        'a', 461,
        'c', 488,
        'd', 492,
        'f', 507,
        'g', 522,
        'i', 483,
        'k', 467,
        'm', 468,
        'n', 451,
        'r', 480,
        's', 515,
        'u', 505,
      );
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 81:
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 87:
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(616);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(489);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 'k') ADVANCE(467);
      if (lookahead == 'm') ADVANCE(469);
      if (lookahead == 'n') ADVANCE(451);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(260);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(602);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(601);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(601);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 127:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(603);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(607);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(606);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 167:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 181:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 182:
      if (lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 184:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(322);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 192:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 193:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 194:
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 195:
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 196:
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 197:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 198:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 199:
      if ((!eof && set_contains(sym_plain_value_character_set_1, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 200:
      if (eof) ADVANCE(203);
      ADVANCE_MAP(
        '!', 123,
        '"', 316,
        '#', 240,
        '$', 74,
        '%', 580,
        '&', 217,
        '\'', 310,
        '(', 267,
        ')', 257,
        '*', 218,
        '+', 253,
        ',', 205,
        '-', 379,
        '.', 220,
        '/', 381,
        ':', 265,
        ';', 206,
        '=', 242,
        '>', 249,
        '@', 80,
        'E', 52,
        '[', 241,
        '\\', 188,
        ']', 248,
        '^', 75,
        'a', 139,
        'b', 113,
        'c', 85,
        'e', 50,
        'f', 115,
        'h', 82,
        'i', 164,
        'n', 145,
        'o', 99,
        's', 107,
        't', 146,
        'v', 83,
        'w', 120,
        '{', 212,
        '|', 255,
        '}', 213,
        '~', 251,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 201:
      if (eof) ADVANCE(203);
      ADVANCE_MAP(
        '"', 316,
        '#', 240,
        '%', 580,
        '&', 217,
        '\'', 310,
        '(', 256,
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 265,
        ';', 206,
        '>', 249,
        '@', 89,
        '[', 241,
        '\\', 188,
        ']', 248,
        '{', 212,
        '|', 254,
        '}', 213,
        '~', 250,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 202:
      if (eof) ADVANCE(203);
      ADVANCE_MAP(
        '"', 316,
        '#', 240,
        '%', 580,
        '&', 217,
        '\'', 310,
        ')', 257,
        '*', 218,
        '+', 252,
        ',', 205,
        '-', 197,
        '.', 219,
        '/', 36,
        ':', 265,
        ';', 206,
        '>', 249,
        '@', 89,
        '[', 241,
        '\\', 188,
        ']', 248,
        '{', 212,
        '|', 254,
        '}', 213,
        '~', 250,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_has);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_host_DASHcontext);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_nth_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_nth_DASHlast_DASHchild);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_even);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_odd);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (lookahead == '+') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__nth_functional_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(239);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(39);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '/') ADVANCE(317);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'c') ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'e') ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'e') ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'l') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'r') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 't') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 't') ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (lookahead == 'y') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '/') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(565);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '_') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '_') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(369);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(579);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(579);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(579);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if ((0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(554);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(63);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == 'y') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(403);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead == 'l') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(447);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0xa0 <= lookahead && lookahead <= 0xff)) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '1') ADVANCE(71);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'b') ADVANCE(529);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(495);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(470);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(596);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'q') ADVANCE(611);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(614);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(513);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(486);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(538);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(528);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(454);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(496);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(454);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(613);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(513);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(481);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(477);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'm') ADVANCE(479);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(516);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(484);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'u') ADVANCE(500);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(526);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(452);
      if (lookahead == 'u') ADVANCE(520);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(456);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(510);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(459);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(493);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(535);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(457);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(543);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(491);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(476);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 's') ADVANCE(478);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(586);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(208);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(592);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(520);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'v') ADVANCE(474);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'w') ADVANCE(598);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(485);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(594);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'y') ADVANCE(487);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'z') ADVANCE(472);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead == '/') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(557);
      END_STATE();
    case 555:
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
          lookahead == '}') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(554);
      END_STATE();
    case 556:
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
          lookahead == '}') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(574);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_js_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(565);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(575);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '>') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '>') ADVANCE(623);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(196);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(578);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(628);
      if (lookahead == '.') ADVANCE(570);
      if (lookahead == '/') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-') ADVANCE(571);
      if (lookahead == '/') ADVANCE(199);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '>') ADVANCE(623);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(199);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(556);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '>') ADVANCE(623);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__kw_color);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__kw_color);
      if (lookahead == '!') ADVANCE(581);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__kw_space);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__kw_space);
      if (lookahead == '!') ADVANCE(583);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__kw_font);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__kw_font);
      if (lookahead == '!') ADVANCE(585);
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__kw_fontsize);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__kw_fontsize);
      if (lookahead == '!') ADVANCE(587);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__kw_column);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__kw_column);
      if (lookahead == '!') ADVANCE(589);
      if (lookahead == '-') ADVANCE(508);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__kw_column_offset);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__kw_column_offset);
      if (lookahead == '!') ADVANCE(591);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__kw_display);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__kw_display);
      if (lookahead == '!') ADVANCE(593);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__kw_grid);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__kw_grid);
      if (lookahead == '!') ADVANCE(595);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__kw_row);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__kw_row);
      if (lookahead == '!') ADVANCE(597);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__kw_abs100);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__kw_abs100);
      if (lookahead == '!') ADVANCE(599);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_fg);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_bg);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_fill);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_stroke);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_border);
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_border_DASHtop);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_border_DASHbottom);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_border_DASHleft);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_border_DASHright);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_ATresponsive);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_ATmq);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_ATiterate);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_ATunpack);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_ATif);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(553);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_europacss_comparison);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '%') ADVANCE(579);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '%') ADVANCE(372);
      if (lookahead == '-') ADVANCE(566);
      if (lookahead == '.') ADVANCE(569);
      if (lookahead == '/') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(579);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      if ((!eof && set_contains(sym_plain_value_character_set_2, 10, lookahead))) ADVANCE(573);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_europacss_variable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_europacss_range);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(625);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(624);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_europacss_slash_value);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '%' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '-') ADVANCE(628);
      if (lookahead == '.') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '>') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_europacss_dotted_name);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 201, .external_lex_state = 2},
  [2] = {.lex_state = 13, .external_lex_state = 2},
  [3] = {.lex_state = 13, .external_lex_state = 2},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 201, .external_lex_state = 2},
  [10] = {.lex_state = 201, .external_lex_state = 2},
  [11] = {.lex_state = 3, .external_lex_state = 2},
  [12] = {.lex_state = 3, .external_lex_state = 2},
  [13] = {.lex_state = 3, .external_lex_state = 2},
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
  [57] = {.lex_state = 13, .external_lex_state = 2},
  [58] = {.lex_state = 13, .external_lex_state = 2},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 201, .external_lex_state = 2},
  [61] = {.lex_state = 201, .external_lex_state = 2},
  [62] = {.lex_state = 201, .external_lex_state = 2},
  [63] = {.lex_state = 201, .external_lex_state = 2},
  [64] = {.lex_state = 201, .external_lex_state = 2},
  [65] = {.lex_state = 201, .external_lex_state = 2},
  [66] = {.lex_state = 201, .external_lex_state = 2},
  [67] = {.lex_state = 201, .external_lex_state = 2},
  [68] = {.lex_state = 201, .external_lex_state = 2},
  [69] = {.lex_state = 201, .external_lex_state = 2},
  [70] = {.lex_state = 201, .external_lex_state = 2},
  [71] = {.lex_state = 201, .external_lex_state = 2},
  [72] = {.lex_state = 201, .external_lex_state = 2},
  [73] = {.lex_state = 201, .external_lex_state = 2},
  [74] = {.lex_state = 201, .external_lex_state = 2},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 5, .external_lex_state = 3},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 201, .external_lex_state = 2},
  [82] = {.lex_state = 201, .external_lex_state = 2},
  [83] = {.lex_state = 201, .external_lex_state = 2},
  [84] = {.lex_state = 201, .external_lex_state = 2},
  [85] = {.lex_state = 201, .external_lex_state = 2},
  [86] = {.lex_state = 201, .external_lex_state = 2},
  [87] = {.lex_state = 201, .external_lex_state = 2},
  [88] = {.lex_state = 201, .external_lex_state = 2},
  [89] = {.lex_state = 201, .external_lex_state = 2},
  [90] = {.lex_state = 14, .external_lex_state = 3},
  [91] = {.lex_state = 201, .external_lex_state = 2},
  [92] = {.lex_state = 201, .external_lex_state = 2},
  [93] = {.lex_state = 8, .external_lex_state = 3},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 201, .external_lex_state = 2},
  [96] = {.lex_state = 201, .external_lex_state = 2},
  [97] = {.lex_state = 201, .external_lex_state = 2},
  [98] = {.lex_state = 201, .external_lex_state = 2},
  [99] = {.lex_state = 201, .external_lex_state = 2},
  [100] = {.lex_state = 201, .external_lex_state = 2},
  [101] = {.lex_state = 201, .external_lex_state = 2},
  [102] = {.lex_state = 201, .external_lex_state = 2},
  [103] = {.lex_state = 8, .external_lex_state = 3},
  [104] = {.lex_state = 8, .external_lex_state = 3},
  [105] = {.lex_state = 14, .external_lex_state = 3},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 201, .external_lex_state = 2},
  [108] = {.lex_state = 201, .external_lex_state = 2},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 201, .external_lex_state = 2},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 14, .external_lex_state = 3},
  [118] = {.lex_state = 14, .external_lex_state = 3},
  [119] = {.lex_state = 14, .external_lex_state = 3},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 14, .external_lex_state = 3},
  [122] = {.lex_state = 14, .external_lex_state = 3},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 14, .external_lex_state = 3},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 14, .external_lex_state = 3},
  [133] = {.lex_state = 14, .external_lex_state = 3},
  [134] = {.lex_state = 14, .external_lex_state = 3},
  [135] = {.lex_state = 14, .external_lex_state = 3},
  [136] = {.lex_state = 14, .external_lex_state = 3},
  [137] = {.lex_state = 14, .external_lex_state = 3},
  [138] = {.lex_state = 14, .external_lex_state = 3},
  [139] = {.lex_state = 14, .external_lex_state = 3},
  [140] = {.lex_state = 14, .external_lex_state = 3},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 14, .external_lex_state = 3},
  [143] = {.lex_state = 14, .external_lex_state = 3},
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
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 14, .external_lex_state = 3},
  [160] = {.lex_state = 14, .external_lex_state = 3},
  [161] = {.lex_state = 14, .external_lex_state = 3},
  [162] = {.lex_state = 14, .external_lex_state = 3},
  [163] = {.lex_state = 14, .external_lex_state = 3},
  [164] = {.lex_state = 14, .external_lex_state = 3},
  [165] = {.lex_state = 14, .external_lex_state = 3},
  [166] = {.lex_state = 14, .external_lex_state = 3},
  [167] = {.lex_state = 14, .external_lex_state = 3},
  [168] = {.lex_state = 14, .external_lex_state = 3},
  [169] = {.lex_state = 14, .external_lex_state = 3},
  [170] = {.lex_state = 14, .external_lex_state = 3},
  [171] = {.lex_state = 14, .external_lex_state = 3},
  [172] = {.lex_state = 14, .external_lex_state = 3},
  [173] = {.lex_state = 14, .external_lex_state = 3},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 14, .external_lex_state = 3},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 16},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 16},
  [215] = {.lex_state = 16},
  [216] = {.lex_state = 16},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 14, .external_lex_state = 3},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 14, .external_lex_state = 3},
  [222] = {.lex_state = 14, .external_lex_state = 3},
  [223] = {.lex_state = 14, .external_lex_state = 3},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 27},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 9},
  [234] = {.lex_state = 9},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 9},
  [237] = {.lex_state = 27},
  [238] = {.lex_state = 17},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 17},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 29},
  [252] = {.lex_state = 18},
  [253] = {.lex_state = 18},
  [254] = {.lex_state = 16},
  [255] = {.lex_state = 201, .external_lex_state = 3},
  [256] = {.lex_state = 42},
  [257] = {.lex_state = 201, .external_lex_state = 3},
  [258] = {.lex_state = 201, .external_lex_state = 3},
  [259] = {.lex_state = 201, .external_lex_state = 3},
  [260] = {.lex_state = 201, .external_lex_state = 3},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 42},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 201, .external_lex_state = 3},
  [266] = {.lex_state = 201, .external_lex_state = 3},
  [267] = {.lex_state = 201, .external_lex_state = 3},
  [268] = {.lex_state = 26},
  [269] = {.lex_state = 201, .external_lex_state = 3},
  [270] = {.lex_state = 19},
  [271] = {.lex_state = 19},
  [272] = {.lex_state = 29},
  [273] = {.lex_state = 17},
  [274] = {.lex_state = 29},
  [275] = {.lex_state = 201, .external_lex_state = 3},
  [276] = {.lex_state = 201, .external_lex_state = 3},
  [277] = {.lex_state = 29},
  [278] = {.lex_state = 29},
  [279] = {.lex_state = 20},
  [280] = {.lex_state = 20},
  [281] = {.lex_state = 29},
  [282] = {.lex_state = 17},
  [283] = {.lex_state = 27},
  [284] = {.lex_state = 27},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 29},
  [287] = {.lex_state = 29},
  [288] = {.lex_state = 17},
  [289] = {.lex_state = 17},
  [290] = {.lex_state = 29},
  [291] = {.lex_state = 27},
  [292] = {.lex_state = 27},
  [293] = {.lex_state = 201, .external_lex_state = 3},
  [294] = {.lex_state = 33},
  [295] = {.lex_state = 27},
  [296] = {.lex_state = 27},
  [297] = {.lex_state = 27},
  [298] = {.lex_state = 27},
  [299] = {.lex_state = 27},
  [300] = {.lex_state = 27},
  [301] = {.lex_state = 27},
  [302] = {.lex_state = 25},
  [303] = {.lex_state = 17},
  [304] = {.lex_state = 27},
  [305] = {.lex_state = 25},
  [306] = {.lex_state = 27},
  [307] = {.lex_state = 25},
  [308] = {.lex_state = 32},
  [309] = {.lex_state = 32},
  [310] = {.lex_state = 25},
  [311] = {.lex_state = 25},
  [312] = {.lex_state = 25},
  [313] = {.lex_state = 25},
  [314] = {.lex_state = 25},
  [315] = {.lex_state = 25},
  [316] = {.lex_state = 25},
  [317] = {.lex_state = 25},
  [318] = {.lex_state = 25},
  [319] = {.lex_state = 25},
  [320] = {.lex_state = 25},
  [321] = {.lex_state = 25},
  [322] = {.lex_state = 33},
  [323] = {.lex_state = 201},
  [324] = {.lex_state = 33},
  [325] = {.lex_state = 33},
  [326] = {.lex_state = 33},
  [327] = {.lex_state = 25},
  [328] = {.lex_state = 33},
  [329] = {.lex_state = 25},
  [330] = {.lex_state = 25},
  [331] = {.lex_state = 33},
  [332] = {.lex_state = 201},
  [333] = {.lex_state = 33},
  [334] = {.lex_state = 33},
  [335] = {.lex_state = 33},
  [336] = {.lex_state = 33},
  [337] = {.lex_state = 33},
  [338] = {.lex_state = 33},
  [339] = {.lex_state = 33},
  [340] = {.lex_state = 33},
  [341] = {.lex_state = 33},
  [342] = {.lex_state = 25},
  [343] = {.lex_state = 40},
  [344] = {.lex_state = 201},
  [345] = {.lex_state = 33},
  [346] = {.lex_state = 25},
  [347] = {.lex_state = 25},
  [348] = {.lex_state = 25},
  [349] = {.lex_state = 201},
  [350] = {.lex_state = 33},
  [351] = {.lex_state = 33},
  [352] = {.lex_state = 201},
  [353] = {.lex_state = 25},
  [354] = {.lex_state = 25},
  [355] = {.lex_state = 25},
  [356] = {.lex_state = 25},
  [357] = {.lex_state = 25},
  [358] = {.lex_state = 25},
  [359] = {.lex_state = 201},
  [360] = {.lex_state = 201},
  [361] = {.lex_state = 1},
  [362] = {.lex_state = 33},
  [363] = {.lex_state = 2},
  [364] = {.lex_state = 2},
  [365] = {.lex_state = 201},
  [366] = {.lex_state = 201},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 201},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 201},
  [371] = {.lex_state = 201},
  [372] = {.lex_state = 201},
  [373] = {.lex_state = 1},
  [374] = {.lex_state = 2},
  [375] = {.lex_state = 1},
  [376] = {.lex_state = 33},
  [377] = {.lex_state = 1},
  [378] = {.lex_state = 201},
  [379] = {.lex_state = 2},
  [380] = {.lex_state = 33},
  [381] = {.lex_state = 201},
  [382] = {.lex_state = 1},
  [383] = {.lex_state = 2},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 2},
  [386] = {.lex_state = 33},
  [387] = {.lex_state = 1},
  [388] = {.lex_state = 2},
  [389] = {.lex_state = 1},
  [390] = {.lex_state = 2},
  [391] = {.lex_state = 2},
  [392] = {.lex_state = 33},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 2},
  [395] = {.lex_state = 33},
  [396] = {.lex_state = 33},
  [397] = {.lex_state = 201},
  [398] = {.lex_state = 2},
  [399] = {.lex_state = 201},
  [400] = {.lex_state = 201},
  [401] = {.lex_state = 34},
  [402] = {.lex_state = 201},
  [403] = {.lex_state = 201},
  [404] = {.lex_state = 201},
  [405] = {.lex_state = 201},
  [406] = {.lex_state = 201},
  [407] = {.lex_state = 58},
  [408] = {.lex_state = 58},
  [409] = {.lex_state = 201},
  [410] = {.lex_state = 33},
  [411] = {.lex_state = 201},
  [412] = {.lex_state = 201},
  [413] = {.lex_state = 201},
  [414] = {.lex_state = 201},
  [415] = {.lex_state = 33},
  [416] = {.lex_state = 201},
  [417] = {.lex_state = 43},
  [418] = {.lex_state = 201},
  [419] = {.lex_state = 201},
  [420] = {.lex_state = 201},
  [421] = {.lex_state = 201},
  [422] = {.lex_state = 201},
  [423] = {.lex_state = 201},
  [424] = {.lex_state = 201},
  [425] = {.lex_state = 201},
  [426] = {.lex_state = 201},
  [427] = {.lex_state = 201},
  [428] = {.lex_state = 201},
  [429] = {.lex_state = 201},
  [430] = {.lex_state = 201},
  [431] = {.lex_state = 62},
  [432] = {.lex_state = 201},
  [433] = {.lex_state = 201},
  [434] = {.lex_state = 201},
  [435] = {.lex_state = 201},
  [436] = {.lex_state = 201},
  [437] = {.lex_state = 201},
  [438] = {.lex_state = 201},
  [439] = {.lex_state = 201},
  [440] = {.lex_state = 201},
  [441] = {.lex_state = 201},
  [442] = {.lex_state = 13},
  [443] = {.lex_state = 201},
  [444] = {.lex_state = 201},
  [445] = {.lex_state = 60},
  [446] = {.lex_state = 201},
  [447] = {.lex_state = 61},
  [448] = {.lex_state = 201},
  [449] = {.lex_state = 201},
  [450] = {.lex_state = 201},
  [451] = {.lex_state = 201},
  [452] = {.lex_state = 29},
  [453] = {.lex_state = 13},
  [454] = {.lex_state = 60},
  [455] = {.lex_state = 201},
  [456] = {.lex_state = 201},
  [457] = {.lex_state = 201},
  [458] = {.lex_state = 201},
  [459] = {.lex_state = 201},
  [460] = {.lex_state = 201},
  [461] = {.lex_state = 201},
  [462] = {.lex_state = 201},
  [463] = {.lex_state = 13},
  [464] = {.lex_state = 201},
  [465] = {.lex_state = 60},
  [466] = {.lex_state = 201},
  [467] = {.lex_state = 201},
  [468] = {.lex_state = 201},
  [469] = {.lex_state = 201},
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
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym__kw_color] = ACTIONS(1),
    [sym__kw_space] = ACTIONS(1),
    [sym__kw_font] = ACTIONS(1),
    [sym__kw_fontsize] = ACTIONS(1),
    [sym__kw_column] = ACTIONS(1),
    [sym__kw_column_offset] = ACTIONS(1),
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
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [sym_europacss_variable] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
    [sym__pseudo_class_selector_colon] = ACTIONS(1),
    [sym___error_recovery] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(434),
    [sym_import_statement] = STATE(10),
    [sym_media_statement] = STATE(10),
    [sym_charset_statement] = STATE(10),
    [sym_namespace_statement] = STATE(10),
    [sym_keyframes_statement] = STATE(10),
    [sym_supports_statement] = STATE(10),
    [sym_at_rule] = STATE(10),
    [sym_rule_set] = STATE(10),
    [sym_selectors] = STATE(418),
    [sym__selector] = STATE(266),
    [sym_universal_selector] = STATE(266),
    [sym_class_selector] = STATE(266),
    [sym_pseudo_class_selector] = STATE(266),
    [sym_pseudo_element_selector] = STATE(266),
    [sym_id_selector] = STATE(266),
    [sym_attribute_selector] = STATE(266),
    [sym_child_selector] = STATE(266),
    [sym_descendant_selector] = STATE(266),
    [sym_sibling_selector] = STATE(266),
    [sym_adjacent_sibling_selector] = STATE(266),
    [sym_namespace_selector] = STATE(266),
    [sym_declaration] = STATE(10),
    [sym_string_value] = STATE(266),
    [sym_europacss_placeholder_selector] = STATE(266),
    [aux_sym_stylesheet_repeat1] = STATE(10),
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
    [anon_sym_PERCENT] = ACTIONS(49),
    [sym__pseudo_class_selector_colon] = ACTIONS(51),
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
    [sym_selectors] = STATE(426),
    [sym__selector] = STATE(266),
    [sym_universal_selector] = STATE(266),
    [sym_class_selector] = STATE(266),
    [sym_pseudo_class_selector] = STATE(266),
    [sym_pseudo_element_selector] = STATE(266),
    [sym_id_selector] = STATE(266),
    [sym_attribute_selector] = STATE(266),
    [sym_child_selector] = STATE(266),
    [sym_descendant_selector] = STATE(266),
    [sym_sibling_selector] = STATE(266),
    [sym_adjacent_sibling_selector] = STATE(266),
    [sym_namespace_selector] = STATE(266),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(469),
    [sym_string_value] = STATE(266),
    [sym_europacss_placeholder_selector] = STATE(266),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_column_offset] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(53),
    [anon_sym_ATmedia] = ACTIONS(55),
    [anon_sym_ATcharset] = ACTIONS(57),
    [anon_sym_ATnamespace] = ACTIONS(59),
    [anon_sym_ATkeyframes] = ACTIONS(61),
    [aux_sym_keyframes_statement_token1] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_ATsupports] = ACTIONS(65),
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
    [sym_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(69),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(49),
    [sym__kw_color] = ACTIONS(71),
    [sym__kw_space] = ACTIONS(73),
    [sym__kw_font] = ACTIONS(75),
    [sym__kw_fontsize] = ACTIONS(77),
    [sym__kw_column] = ACTIONS(79),
    [sym__kw_column_offset] = ACTIONS(81),
    [sym__kw_display] = ACTIONS(83),
    [sym__kw_grid] = ACTIONS(85),
    [sym__kw_row] = ACTIONS(87),
    [sym__kw_abs100] = ACTIONS(89),
    [anon_sym_ATresponsive] = ACTIONS(91),
    [anon_sym_ATmq] = ACTIONS(93),
    [anon_sym_ATiterate] = ACTIONS(95),
    [anon_sym_ATunpack] = ACTIONS(97),
    [anon_sym_ATif] = ACTIONS(99),
    [sym__pseudo_class_selector_colon] = ACTIONS(51),
  },
  [3] = {
    [sym_import_statement] = STATE(4),
    [sym_media_statement] = STATE(4),
    [sym_charset_statement] = STATE(4),
    [sym_namespace_statement] = STATE(4),
    [sym_keyframes_statement] = STATE(4),
    [sym_supports_statement] = STATE(4),
    [sym_postcss_statement] = STATE(4),
    [sym_at_rule] = STATE(4),
    [sym_rule_set] = STATE(4),
    [sym_selectors] = STATE(426),
    [sym__selector] = STATE(266),
    [sym_universal_selector] = STATE(266),
    [sym_class_selector] = STATE(266),
    [sym_pseudo_class_selector] = STATE(266),
    [sym_pseudo_element_selector] = STATE(266),
    [sym_id_selector] = STATE(266),
    [sym_attribute_selector] = STATE(266),
    [sym_child_selector] = STATE(266),
    [sym_descendant_selector] = STATE(266),
    [sym_sibling_selector] = STATE(266),
    [sym_adjacent_sibling_selector] = STATE(266),
    [sym_namespace_selector] = STATE(266),
    [sym_declaration] = STATE(4),
    [sym_last_declaration] = STATE(451),
    [sym_string_value] = STATE(266),
    [sym_europacss_placeholder_selector] = STATE(266),
    [sym_europacss_color] = STATE(4),
    [sym_europacss_space] = STATE(4),
    [sym_europacss_font] = STATE(4),
    [sym_europacss_fontsize] = STATE(4),
    [sym_europacss_responsive] = STATE(4),
    [sym_europacss_mq] = STATE(4),
    [sym_europacss_column] = STATE(4),
    [sym_europacss_column_offset] = STATE(4),
    [sym_europacss_display] = STATE(4),
    [sym_europacss_grid] = STATE(4),
    [sym_europacss_row] = STATE(4),
    [sym_europacss_abs100] = STATE(4),
    [sym_europacss_iterate] = STATE(4),
    [sym_europacss_unpack] = STATE(4),
    [sym_europacss_if] = STATE(4),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_ATimport] = ACTIONS(53),
    [anon_sym_ATmedia] = ACTIONS(55),
    [anon_sym_ATcharset] = ACTIONS(57),
    [anon_sym_ATnamespace] = ACTIONS(59),
    [anon_sym_ATkeyframes] = ACTIONS(61),
    [aux_sym_keyframes_statement_token1] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_ATsupports] = ACTIONS(65),
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
    [sym_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(69),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(49),
    [sym__kw_color] = ACTIONS(71),
    [sym__kw_space] = ACTIONS(73),
    [sym__kw_font] = ACTIONS(75),
    [sym__kw_fontsize] = ACTIONS(77),
    [sym__kw_column] = ACTIONS(79),
    [sym__kw_column_offset] = ACTIONS(81),
    [sym__kw_display] = ACTIONS(83),
    [sym__kw_grid] = ACTIONS(85),
    [sym__kw_row] = ACTIONS(87),
    [sym__kw_abs100] = ACTIONS(89),
    [anon_sym_ATresponsive] = ACTIONS(91),
    [anon_sym_ATmq] = ACTIONS(93),
    [anon_sym_ATiterate] = ACTIONS(95),
    [anon_sym_ATunpack] = ACTIONS(97),
    [anon_sym_ATif] = ACTIONS(99),
    [sym__pseudo_class_selector_colon] = ACTIONS(51),
  },
  [4] = {
    [sym_import_statement] = STATE(8),
    [sym_media_statement] = STATE(8),
    [sym_charset_statement] = STATE(8),
    [sym_namespace_statement] = STATE(8),
    [sym_keyframes_statement] = STATE(8),
    [sym_supports_statement] = STATE(8),
    [sym_postcss_statement] = STATE(8),
    [sym_at_rule] = STATE(8),
    [sym_rule_set] = STATE(8),
    [sym_selectors] = STATE(426),
    [sym__selector] = STATE(266),
    [sym_universal_selector] = STATE(266),
    [sym_class_selector] = STATE(266),
    [sym_pseudo_class_selector] = STATE(266),
    [sym_pseudo_element_selector] = STATE(266),
    [sym_id_selector] = STATE(266),
    [sym_attribute_selector] = STATE(266),
    [sym_child_selector] = STATE(266),
    [sym_descendant_selector] = STATE(266),
    [sym_sibling_selector] = STATE(266),
    [sym_adjacent_sibling_selector] = STATE(266),
    [sym_namespace_selector] = STATE(266),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(467),
    [sym_string_value] = STATE(266),
    [sym_europacss_placeholder_selector] = STATE(266),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_column_offset] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(53),
    [anon_sym_ATmedia] = ACTIONS(55),
    [anon_sym_ATcharset] = ACTIONS(57),
    [anon_sym_ATnamespace] = ACTIONS(59),
    [anon_sym_ATkeyframes] = ACTIONS(61),
    [aux_sym_keyframes_statement_token1] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_ATsupports] = ACTIONS(65),
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
    [sym_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(69),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(49),
    [sym__kw_color] = ACTIONS(71),
    [sym__kw_space] = ACTIONS(73),
    [sym__kw_font] = ACTIONS(75),
    [sym__kw_fontsize] = ACTIONS(77),
    [sym__kw_column] = ACTIONS(79),
    [sym__kw_column_offset] = ACTIONS(81),
    [sym__kw_display] = ACTIONS(83),
    [sym__kw_grid] = ACTIONS(85),
    [sym__kw_row] = ACTIONS(87),
    [sym__kw_abs100] = ACTIONS(89),
    [anon_sym_ATresponsive] = ACTIONS(91),
    [anon_sym_ATmq] = ACTIONS(93),
    [anon_sym_ATiterate] = ACTIONS(95),
    [anon_sym_ATunpack] = ACTIONS(97),
    [anon_sym_ATif] = ACTIONS(99),
    [sym__pseudo_class_selector_colon] = ACTIONS(51),
  },
  [5] = {
    [sym_import_statement] = STATE(2),
    [sym_media_statement] = STATE(2),
    [sym_charset_statement] = STATE(2),
    [sym_namespace_statement] = STATE(2),
    [sym_keyframes_statement] = STATE(2),
    [sym_supports_statement] = STATE(2),
    [sym_postcss_statement] = STATE(2),
    [sym_at_rule] = STATE(2),
    [sym_rule_set] = STATE(2),
    [sym_selectors] = STATE(426),
    [sym__selector] = STATE(266),
    [sym_universal_selector] = STATE(266),
    [sym_class_selector] = STATE(266),
    [sym_pseudo_class_selector] = STATE(266),
    [sym_pseudo_element_selector] = STATE(266),
    [sym_id_selector] = STATE(266),
    [sym_attribute_selector] = STATE(266),
    [sym_child_selector] = STATE(266),
    [sym_descendant_selector] = STATE(266),
    [sym_sibling_selector] = STATE(266),
    [sym_adjacent_sibling_selector] = STATE(266),
    [sym_namespace_selector] = STATE(266),
    [sym_declaration] = STATE(2),
    [sym_last_declaration] = STATE(468),
    [sym_string_value] = STATE(266),
    [sym_europacss_placeholder_selector] = STATE(266),
    [sym_europacss_color] = STATE(2),
    [sym_europacss_space] = STATE(2),
    [sym_europacss_font] = STATE(2),
    [sym_europacss_fontsize] = STATE(2),
    [sym_europacss_responsive] = STATE(2),
    [sym_europacss_mq] = STATE(2),
    [sym_europacss_column] = STATE(2),
    [sym_europacss_column_offset] = STATE(2),
    [sym_europacss_display] = STATE(2),
    [sym_europacss_grid] = STATE(2),
    [sym_europacss_row] = STATE(2),
    [sym_europacss_abs100] = STATE(2),
    [sym_europacss_iterate] = STATE(2),
    [sym_europacss_unpack] = STATE(2),
    [sym_europacss_if] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_ATimport] = ACTIONS(53),
    [anon_sym_ATmedia] = ACTIONS(55),
    [anon_sym_ATcharset] = ACTIONS(57),
    [anon_sym_ATnamespace] = ACTIONS(59),
    [anon_sym_ATkeyframes] = ACTIONS(61),
    [aux_sym_keyframes_statement_token1] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_ATsupports] = ACTIONS(65),
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
    [sym_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(69),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(49),
    [sym__kw_color] = ACTIONS(71),
    [sym__kw_space] = ACTIONS(73),
    [sym__kw_font] = ACTIONS(75),
    [sym__kw_fontsize] = ACTIONS(77),
    [sym__kw_column] = ACTIONS(79),
    [sym__kw_column_offset] = ACTIONS(81),
    [sym__kw_display] = ACTIONS(83),
    [sym__kw_grid] = ACTIONS(85),
    [sym__kw_row] = ACTIONS(87),
    [sym__kw_abs100] = ACTIONS(89),
    [anon_sym_ATresponsive] = ACTIONS(91),
    [anon_sym_ATmq] = ACTIONS(93),
    [anon_sym_ATiterate] = ACTIONS(95),
    [anon_sym_ATunpack] = ACTIONS(97),
    [anon_sym_ATif] = ACTIONS(99),
    [sym__pseudo_class_selector_colon] = ACTIONS(51),
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
    [sym_selectors] = STATE(426),
    [sym__selector] = STATE(266),
    [sym_universal_selector] = STATE(266),
    [sym_class_selector] = STATE(266),
    [sym_pseudo_class_selector] = STATE(266),
    [sym_pseudo_element_selector] = STATE(266),
    [sym_id_selector] = STATE(266),
    [sym_attribute_selector] = STATE(266),
    [sym_child_selector] = STATE(266),
    [sym_descendant_selector] = STATE(266),
    [sym_sibling_selector] = STATE(266),
    [sym_adjacent_sibling_selector] = STATE(266),
    [sym_namespace_selector] = STATE(266),
    [sym_declaration] = STATE(8),
    [sym_last_declaration] = STATE(440),
    [sym_string_value] = STATE(266),
    [sym_europacss_placeholder_selector] = STATE(266),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_column_offset] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(53),
    [anon_sym_ATmedia] = ACTIONS(55),
    [anon_sym_ATcharset] = ACTIONS(57),
    [anon_sym_ATnamespace] = ACTIONS(59),
    [anon_sym_ATkeyframes] = ACTIONS(61),
    [aux_sym_keyframes_statement_token1] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_ATsupports] = ACTIONS(65),
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
    [sym_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(69),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(49),
    [sym__kw_color] = ACTIONS(71),
    [sym__kw_space] = ACTIONS(73),
    [sym__kw_font] = ACTIONS(75),
    [sym__kw_fontsize] = ACTIONS(77),
    [sym__kw_column] = ACTIONS(79),
    [sym__kw_column_offset] = ACTIONS(81),
    [sym__kw_display] = ACTIONS(83),
    [sym__kw_grid] = ACTIONS(85),
    [sym__kw_row] = ACTIONS(87),
    [sym__kw_abs100] = ACTIONS(89),
    [anon_sym_ATresponsive] = ACTIONS(91),
    [anon_sym_ATmq] = ACTIONS(93),
    [anon_sym_ATiterate] = ACTIONS(95),
    [anon_sym_ATunpack] = ACTIONS(97),
    [anon_sym_ATif] = ACTIONS(99),
    [sym__pseudo_class_selector_colon] = ACTIONS(51),
  },
  [7] = {
    [sym_import_statement] = STATE(6),
    [sym_media_statement] = STATE(6),
    [sym_charset_statement] = STATE(6),
    [sym_namespace_statement] = STATE(6),
    [sym_keyframes_statement] = STATE(6),
    [sym_supports_statement] = STATE(6),
    [sym_postcss_statement] = STATE(6),
    [sym_at_rule] = STATE(6),
    [sym_rule_set] = STATE(6),
    [sym_selectors] = STATE(426),
    [sym__selector] = STATE(266),
    [sym_universal_selector] = STATE(266),
    [sym_class_selector] = STATE(266),
    [sym_pseudo_class_selector] = STATE(266),
    [sym_pseudo_element_selector] = STATE(266),
    [sym_id_selector] = STATE(266),
    [sym_attribute_selector] = STATE(266),
    [sym_child_selector] = STATE(266),
    [sym_descendant_selector] = STATE(266),
    [sym_sibling_selector] = STATE(266),
    [sym_adjacent_sibling_selector] = STATE(266),
    [sym_namespace_selector] = STATE(266),
    [sym_declaration] = STATE(6),
    [sym_last_declaration] = STATE(436),
    [sym_string_value] = STATE(266),
    [sym_europacss_placeholder_selector] = STATE(266),
    [sym_europacss_color] = STATE(6),
    [sym_europacss_space] = STATE(6),
    [sym_europacss_font] = STATE(6),
    [sym_europacss_fontsize] = STATE(6),
    [sym_europacss_responsive] = STATE(6),
    [sym_europacss_mq] = STATE(6),
    [sym_europacss_column] = STATE(6),
    [sym_europacss_column_offset] = STATE(6),
    [sym_europacss_display] = STATE(6),
    [sym_europacss_grid] = STATE(6),
    [sym_europacss_row] = STATE(6),
    [sym_europacss_abs100] = STATE(6),
    [sym_europacss_iterate] = STATE(6),
    [sym_europacss_unpack] = STATE(6),
    [sym_europacss_if] = STATE(6),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_ATimport] = ACTIONS(53),
    [anon_sym_ATmedia] = ACTIONS(55),
    [anon_sym_ATcharset] = ACTIONS(57),
    [anon_sym_ATnamespace] = ACTIONS(59),
    [anon_sym_ATkeyframes] = ACTIONS(61),
    [aux_sym_keyframes_statement_token1] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_ATsupports] = ACTIONS(65),
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
    [sym_identifier] = ACTIONS(67),
    [sym_at_keyword] = ACTIONS(69),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(49),
    [sym__kw_color] = ACTIONS(71),
    [sym__kw_space] = ACTIONS(73),
    [sym__kw_font] = ACTIONS(75),
    [sym__kw_fontsize] = ACTIONS(77),
    [sym__kw_column] = ACTIONS(79),
    [sym__kw_column_offset] = ACTIONS(81),
    [sym__kw_display] = ACTIONS(83),
    [sym__kw_grid] = ACTIONS(85),
    [sym__kw_row] = ACTIONS(87),
    [sym__kw_abs100] = ACTIONS(89),
    [anon_sym_ATresponsive] = ACTIONS(91),
    [anon_sym_ATmq] = ACTIONS(93),
    [anon_sym_ATiterate] = ACTIONS(95),
    [anon_sym_ATunpack] = ACTIONS(97),
    [anon_sym_ATif] = ACTIONS(99),
    [sym__pseudo_class_selector_colon] = ACTIONS(51),
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
    [sym_selectors] = STATE(426),
    [sym__selector] = STATE(266),
    [sym_universal_selector] = STATE(266),
    [sym_class_selector] = STATE(266),
    [sym_pseudo_class_selector] = STATE(266),
    [sym_pseudo_element_selector] = STATE(266),
    [sym_id_selector] = STATE(266),
    [sym_attribute_selector] = STATE(266),
    [sym_child_selector] = STATE(266),
    [sym_descendant_selector] = STATE(266),
    [sym_sibling_selector] = STATE(266),
    [sym_adjacent_sibling_selector] = STATE(266),
    [sym_namespace_selector] = STATE(266),
    [sym_declaration] = STATE(8),
    [sym_string_value] = STATE(266),
    [sym_europacss_placeholder_selector] = STATE(266),
    [sym_europacss_color] = STATE(8),
    [sym_europacss_space] = STATE(8),
    [sym_europacss_font] = STATE(8),
    [sym_europacss_fontsize] = STATE(8),
    [sym_europacss_responsive] = STATE(8),
    [sym_europacss_mq] = STATE(8),
    [sym_europacss_column] = STATE(8),
    [sym_europacss_column_offset] = STATE(8),
    [sym_europacss_display] = STATE(8),
    [sym_europacss_grid] = STATE(8),
    [sym_europacss_row] = STATE(8),
    [sym_europacss_abs100] = STATE(8),
    [sym_europacss_iterate] = STATE(8),
    [sym_europacss_unpack] = STATE(8),
    [sym_europacss_if] = STATE(8),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_ATimport] = ACTIONS(111),
    [anon_sym_ATmedia] = ACTIONS(114),
    [anon_sym_ATcharset] = ACTIONS(117),
    [anon_sym_ATnamespace] = ACTIONS(120),
    [anon_sym_ATkeyframes] = ACTIONS(123),
    [aux_sym_keyframes_statement_token1] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_ATsupports] = ACTIONS(128),
    [sym_nesting_selector] = ACTIONS(131),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_COLON_COLON] = ACTIONS(140),
    [anon_sym_POUND] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym_identifier] = ACTIONS(167),
    [sym_at_keyword] = ACTIONS(170),
    [sym_js_comment] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_PERCENT] = ACTIONS(173),
    [sym__kw_color] = ACTIONS(176),
    [sym__kw_space] = ACTIONS(179),
    [sym__kw_font] = ACTIONS(182),
    [sym__kw_fontsize] = ACTIONS(185),
    [sym__kw_column] = ACTIONS(188),
    [sym__kw_column_offset] = ACTIONS(191),
    [sym__kw_display] = ACTIONS(194),
    [sym__kw_grid] = ACTIONS(197),
    [sym__kw_row] = ACTIONS(200),
    [sym__kw_abs100] = ACTIONS(203),
    [anon_sym_ATresponsive] = ACTIONS(206),
    [anon_sym_ATmq] = ACTIONS(209),
    [anon_sym_ATiterate] = ACTIONS(212),
    [anon_sym_ATunpack] = ACTIONS(215),
    [anon_sym_ATif] = ACTIONS(218),
    [sym__pseudo_class_selector_colon] = ACTIONS(221),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      anon_sym_ATimport,
    ACTIONS(229), 1,
      anon_sym_ATmedia,
    ACTIONS(232), 1,
      anon_sym_ATcharset,
    ACTIONS(235), 1,
      anon_sym_ATnamespace,
    ACTIONS(241), 1,
      anon_sym_ATsupports,
    ACTIONS(244), 1,
      sym_nesting_selector,
    ACTIONS(247), 1,
      anon_sym_STAR,
    ACTIONS(250), 1,
      anon_sym_DOT,
    ACTIONS(253), 1,
      anon_sym_COLON_COLON,
    ACTIONS(256), 1,
      anon_sym_POUND,
    ACTIONS(259), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_GT,
    ACTIONS(265), 1,
      anon_sym_TILDE,
    ACTIONS(268), 1,
      anon_sym_PLUS,
    ACTIONS(271), 1,
      anon_sym_PIPE,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_at_keyword,
    ACTIONS(286), 1,
      anon_sym_PERCENT,
    ACTIONS(289), 1,
      sym__pseudo_class_selector_colon,
    STATE(418), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(238), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 10,
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
    STATE(266), 14,
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
      sym_europacss_placeholder_selector,
  [106] = 27,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    STATE(418), 1,
      sym_selectors,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
    STATE(9), 10,
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
    STATE(266), 14,
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
      sym_europacss_placeholder_selector,
  [212] = 28,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(294), 1,
      sym_nesting_selector,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(298), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(316), 1,
      anon_sym_LBRACK2,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(320), 1,
      sym_plain_value,
    STATE(93), 1,
      sym_string_value,
    STATE(115), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
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
      sym_europacss_placeholder_selector,
  [316] = 28,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(298), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(316), 1,
      anon_sym_LBRACK2,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(322), 1,
      sym_nesting_selector,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_string_value,
    STATE(111), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(260), 13,
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
      sym_europacss_placeholder_selector,
  [420] = 27,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(298), 1,
      anon_sym_POUND,
    ACTIONS(300), 1,
      anon_sym_PLUS,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(316), 1,
      anon_sym_LBRACK2,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(326), 1,
      sym_nesting_selector,
    STATE(93), 1,
      sym_string_value,
    STATE(123), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 8,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
    STATE(269), 13,
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
      sym_europacss_placeholder_selector,
  [521] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(328), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(330), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [569] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(332), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(334), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [617] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(336), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(338), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [665] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(340), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(342), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [713] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(344), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(346), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [761] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(348), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(350), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [809] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(352), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(354), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [857] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(356), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(358), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [905] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(360), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(362), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [953] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(364), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(366), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1001] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(368), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(370), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1049] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(372), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(374), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1097] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(376), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(378), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1145] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(380), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(382), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1193] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(384), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(386), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1241] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(388), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(390), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1289] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(392), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(394), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1337] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(396), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(398), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1385] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(400), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(402), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1433] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(404), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(406), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1481] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(336), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(338), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1529] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(408), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(410), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1577] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(412), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(414), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1625] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(416), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(418), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1673] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(420), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(422), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1721] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(424), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(426), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1769] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(428), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(430), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1817] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(432), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(434), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1865] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(436), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(438), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1913] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(440), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(442), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [1961] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(444), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(446), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2009] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(448), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(450), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2057] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(452), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(454), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2105] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(456), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(458), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2153] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(460), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(462), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2201] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(464), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(466), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2249] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(468), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(470), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2297] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(472), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(474), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2345] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(478), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2393] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(482), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2441] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(484), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(486), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2489] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(488), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(490), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2537] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(492), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(494), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2585] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(496), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(498), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2633] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(500), 15,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
      sym__kw_font,
      sym__kw_column,
      anon_sym_ATresponsive,
      anon_sym_ATmq,
      anon_sym_ATiterate,
      anon_sym_ATunpack,
      anon_sym_ATif,
    ACTIONS(502), 24,
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
      anon_sym_PERCENT,
      sym__kw_color,
      sym__kw_space,
      sym__kw_fontsize,
      sym__kw_column_offset,
      sym__kw_display,
      sym__kw_grid,
      sym__kw_row,
      sym__kw_abs100,
  [2681] = 20,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      anon_sym_LPAREN2,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(522), 1,
      sym_identifier,
    STATE(34), 1,
      sym_block,
    STATE(127), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(326), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [2756] = 18,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(524), 1,
      sym_nesting_selector,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(258), 14,
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
      sym_europacss_placeholder_selector,
  [2825] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(530), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(133), 14,
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
      sym_europacss_placeholder_selector,
  [2891] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(532), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(136), 14,
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
      sym_europacss_placeholder_selector,
  [2957] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(534), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(175), 14,
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
      sym_europacss_placeholder_selector,
  [3023] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(536), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(276), 14,
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
      sym_europacss_placeholder_selector,
  [3089] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(538), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(138), 14,
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
      sym_europacss_placeholder_selector,
  [3155] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(540), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(146), 14,
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
      sym_europacss_placeholder_selector,
  [3221] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(542), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(137), 14,
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
      sym_europacss_placeholder_selector,
  [3287] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(544), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(149), 14,
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
      sym_europacss_placeholder_selector,
  [3353] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(546), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(275), 14,
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
      sym_europacss_placeholder_selector,
  [3419] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(548), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(255), 14,
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
      sym_europacss_placeholder_selector,
  [3485] = 18,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(550), 1,
      sym_nesting_selector,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(223), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(293), 13,
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
      sym_europacss_placeholder_selector,
  [3553] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(554), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(148), 14,
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
      sym_europacss_placeholder_selector,
  [3619] = 17,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(556), 1,
      sym_nesting_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(147), 14,
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
      sym_europacss_placeholder_selector,
  [3685] = 18,
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
      anon_sym_PERCENT,
    ACTIONS(51), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(550), 1,
      sym_nesting_selector,
    ACTIONS(558), 1,
      sym_identifier,
    STATE(221), 1,
      sym_namespace_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(293), 13,
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
      sym_europacss_placeholder_selector,
  [3753] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      sym_important,
    ACTIONS(564), 1,
      anon_sym_LPAREN2,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(578), 1,
      sym_plain_value,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(410), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(348), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3816] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(564), 1,
      anon_sym_LPAREN2,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(580), 1,
      sym_important,
    ACTIONS(582), 1,
      sym_plain_value,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(410), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
    STATE(353), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [3879] = 19,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(594), 1,
      sym_important,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(598), 1,
      sym_plain_value,
    STATE(113), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(592), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [3947] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(598), 1,
      sym_plain_value,
    ACTIONS(600), 1,
      anon_sym_SEMI,
    ACTIONS(602), 1,
      sym_important,
    STATE(120), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(592), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [4012] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(608), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(606), 4,
      anon_sym_STAR,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(612), 8,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(604), 10,
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
  [4057] = 18,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(598), 1,
      sym_plain_value,
    ACTIONS(614), 1,
      sym_important,
    STATE(125), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(592), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
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
  [4122] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(408), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(410), 16,
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
      anon_sym_PERCENT,
  [4155] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(484), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(486), 16,
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
      anon_sym_PERCENT,
  [4188] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(488), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(490), 16,
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
      anon_sym_PERCENT,
  [4221] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(416), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(418), 16,
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
      anon_sym_PERCENT,
  [4254] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(420), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(422), 16,
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
      anon_sym_PERCENT,
  [4287] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(424), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(426), 16,
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
      anon_sym_PERCENT,
  [4320] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(428), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(430), 16,
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
      anon_sym_PERCENT,
  [4353] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(432), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(434), 16,
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
      anon_sym_PERCENT,
  [4386] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(436), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(438), 16,
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
      anon_sym_PERCENT,
  [4419] = 5,
    STATE(105), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(620), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(616), 19,
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
  [4456] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(440), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(442), 16,
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
      anon_sym_PERCENT,
  [4489] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(472), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(474), 16,
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
      anon_sym_PERCENT,
  [4522] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_DOT,
      anon_sym_PLUS,
    ACTIONS(624), 5,
      anon_sym_STAR,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(628), 7,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(622), 10,
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
  [4561] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(370), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [4622] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(444), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(446), 16,
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
      anon_sym_PERCENT,
  [4655] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(448), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(450), 16,
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
      anon_sym_PERCENT,
  [4688] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(452), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(454), 16,
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
      anon_sym_PERCENT,
  [4721] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(328), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(330), 16,
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
      anon_sym_PERCENT,
  [4754] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(460), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(462), 16,
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
      anon_sym_PERCENT,
  [4787] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(336), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(338), 16,
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
      anon_sym_PERCENT,
  [4820] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(476), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(478), 16,
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
      anon_sym_PERCENT,
  [4853] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(480), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(482), 16,
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
      anon_sym_PERCENT,
  [4886] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(636), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(634), 15,
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
  [4921] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(640), 9,
      anon_sym_DOT,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_LBRACK2,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(638), 15,
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
  [4956] = 5,
    STATE(105), 1,
      aux_sym_class_name_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(646), 2,
      sym_escape_sequence,
      sym_identifier,
    ACTIONS(642), 19,
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
  [4993] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(372), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5054] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(464), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(466), 16,
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
      anon_sym_PERCENT,
  [5087] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(412), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(414), 16,
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
      anon_sym_PERCENT,
  [5120] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(381), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5181] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(468), 8,
      anon_sym_ATimport,
      anon_sym_ATmedia,
      anon_sym_ATcharset,
      anon_sym_ATnamespace,
      anon_sym_ATkeyframes,
      aux_sym_keyframes_statement_token1,
      anon_sym_ATsupports,
      sym_at_keyword,
    ACTIONS(470), 16,
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
      anon_sym_PERCENT,
  [5214] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(413), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5274] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      sym_important,
    ACTIONS(665), 1,
      anon_sym_LPAREN2,
    ACTIONS(668), 1,
      anon_sym_SQUOTE,
    ACTIONS(671), 1,
      anon_sym_DQUOTE,
    ACTIONS(674), 1,
      aux_sym_integer_value_token1,
    ACTIONS(677), 1,
      aux_sym_float_value_token1,
    ACTIONS(680), 1,
      anon_sym_LBRACK2,
    ACTIONS(683), 1,
      sym_identifier,
    ACTIONS(686), 1,
      sym_plain_value,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(657), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5330] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(598), 1,
      sym_plain_value,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(693), 1,
      sym_important,
    STATE(116), 1,
      aux_sym_declaration_repeat1,
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
  [5390] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(695), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5446] = 17,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(403), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5506] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      sym_important,
    ACTIONS(710), 1,
      anon_sym_LPAREN2,
    ACTIONS(713), 1,
      anon_sym_SQUOTE,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    ACTIONS(719), 1,
      aux_sym_integer_value_token1,
    ACTIONS(722), 1,
      aux_sym_float_value_token1,
    ACTIONS(725), 1,
      anon_sym_LBRACK2,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(731), 1,
      sym_plain_value,
    STATE(116), 1,
      aux_sym_declaration_repeat1,
    ACTIONS(702), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
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
  [5564] = 5,
    ACTIONS(738), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(736), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(734), 18,
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
  [5599] = 5,
    ACTIONS(738), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym_pseudo_class_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(742), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(740), 18,
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
  [5634] = 5,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(746), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(744), 18,
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
  [5669] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(598), 1,
      sym_plain_value,
    ACTIONS(750), 1,
      anon_sym_SEMI,
    ACTIONS(752), 1,
      sym_important,
    STATE(116), 1,
      aux_sym_declaration_repeat1,
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
  [5726] = 5,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(756), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(754), 18,
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
  [5761] = 5,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(762), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(760), 18,
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
  [5796] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    ACTIONS(764), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5851] = 5,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_pseudo_element_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(768), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(766), 18,
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
  [5886] = 16,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(598), 1,
      sym_plain_value,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(770), 1,
      sym_important,
    STATE(116), 1,
      aux_sym_declaration_repeat1,
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
  [5943] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [5997] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(774), 1,
      anon_sym_SEMI,
    STATE(112), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6051] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(778), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(776), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(606), 6,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
    ACTIONS(612), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
  [6091] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6145] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6199] = 15,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6253] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(788), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(786), 18,
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
  [6282] = 4,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(794), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(790), 17,
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
  [6313] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(798), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(796), 18,
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
  [6342] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(802), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(800), 18,
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
  [6371] = 4,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(806), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(804), 17,
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
  [6402] = 4,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(810), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(808), 17,
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
  [6433] = 4,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(814), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(812), 17,
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
  [6464] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(818), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(816), 18,
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
  [6493] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(820), 18,
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
  [6522] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(126), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [6573] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(826), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(824), 18,
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
  [6602] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(828), 18,
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
  [6631] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(834), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(832), 18,
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
  [6660] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(604), 18,
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
  [6689] = 4,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(838), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(836), 17,
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
  [6720] = 4,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(842), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(840), 17,
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
  [6751] = 4,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(846), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(844), 17,
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
  [6782] = 4,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(850), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(848), 17,
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
  [6813] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(636), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(634), 18,
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
  [6842] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(854), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(852), 18,
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
  [6871] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(858), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(856), 18,
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
  [6900] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(862), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(860), 18,
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
  [6929] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(866), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(864), 18,
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
  [6958] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(870), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(868), 18,
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
  [6987] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(874), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(872), 18,
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
  [7016] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(878), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(876), 18,
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
  [7045] = 14,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_important,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(320), 1,
      sym_plain_value,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(114), 1,
      aux_sym_postcss_statement_repeat1,
    STATE(224), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7096] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(882), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(880), 18,
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
  [7125] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(886), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(884), 18,
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
  [7154] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(890), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(888), 18,
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
  [7183] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(894), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(892), 18,
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
  [7212] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(898), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(896), 18,
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
  [7241] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(902), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(900), 18,
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
  [7270] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(906), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(904), 18,
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
  [7299] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(736), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(734), 18,
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
  [7328] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(910), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(908), 18,
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
  [7357] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(914), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(912), 18,
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
  [7386] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(742), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(740), 18,
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
  [7415] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(918), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(916), 18,
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
  [7444] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(922), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(920), 18,
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
  [7473] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(926), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(924), 18,
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
  [7502] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(640), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(638), 18,
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
  [7531] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_arguments,
    ACTIONS(612), 8,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(606), 10,
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
  [7566] = 4,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(930), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(928), 17,
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
  [7597] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(932), 1,
      sym_important,
    ACTIONS(934), 1,
      sym_plain_value,
    STATE(226), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7645] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(936), 1,
      sym_important,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(942), 1,
      sym_plain_value,
    STATE(357), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7693] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      sym_important,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(950), 1,
      anon_sym_SQUOTE,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    ACTIONS(954), 1,
      aux_sym_integer_value_token1,
    ACTIONS(956), 1,
      aux_sym_float_value_token1,
    ACTIONS(958), 1,
      anon_sym_LBRACK2,
    ACTIONS(960), 1,
      sym_identifier,
    ACTIONS(962), 1,
      sym_plain_value,
    STATE(296), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7741] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(964), 1,
      sym_important,
    ACTIONS(966), 1,
      sym_plain_value,
    STATE(316), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7789] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(968), 1,
      sym_important,
    ACTIONS(970), 1,
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
  [7837] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(972), 1,
      sym_important,
    ACTIONS(974), 1,
      sym_plain_value,
    STATE(342), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7885] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(976), 1,
      sym_important,
    ACTIONS(978), 1,
      sym_plain_value,
    STATE(358), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [7933] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(980), 1,
      sym_important,
    ACTIONS(982), 1,
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
  [7981] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(984), 1,
      sym_important,
    ACTIONS(986), 1,
      sym_plain_value,
    STATE(354), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8029] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(988), 1,
      sym_important,
    ACTIONS(990), 1,
      sym_plain_value,
    STATE(355), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8077] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_POUND,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(950), 1,
      anon_sym_SQUOTE,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    ACTIONS(954), 1,
      aux_sym_integer_value_token1,
    ACTIONS(956), 1,
      aux_sym_float_value_token1,
    ACTIONS(958), 1,
      anon_sym_LBRACK2,
    ACTIONS(960), 1,
      sym_identifier,
    ACTIONS(992), 1,
      sym_important,
    ACTIONS(994), 1,
      sym_plain_value,
    STATE(237), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8125] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1000), 1,
      sym_unit,
    ACTIONS(998), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(996), 11,
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
  [8157] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym_unit,
    ACTIONS(1004), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1002), 11,
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
  [8189] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(1008), 1,
      sym_important,
    ACTIONS(1010), 1,
      sym_plain_value,
    STATE(346), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8237] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(1012), 1,
      sym_important,
    ACTIONS(1014), 1,
      sym_plain_value,
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
  [8285] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(1016), 1,
      sym_important,
    ACTIONS(1018), 1,
      sym_plain_value,
    STATE(356), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8333] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(1020), 1,
      sym_important,
    ACTIONS(1022), 1,
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
  [8381] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_POUND,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(950), 1,
      anon_sym_SQUOTE,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    ACTIONS(954), 1,
      aux_sym_integer_value_token1,
    ACTIONS(956), 1,
      aux_sym_float_value_token1,
    ACTIONS(958), 1,
      anon_sym_LBRACK2,
    ACTIONS(960), 1,
      sym_identifier,
    ACTIONS(1024), 1,
      sym_important,
    ACTIONS(1026), 1,
      sym_plain_value,
    STATE(231), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8429] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(1028), 1,
      sym_important,
    ACTIONS(1030), 1,
      sym_plain_value,
    STATE(347), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8477] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      sym_important,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(578), 1,
      sym_plain_value,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    STATE(348), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8525] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(1032), 1,
      sym_important,
    ACTIONS(1034), 1,
      sym_plain_value,
    STATE(327), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8573] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN2,
    ACTIONS(312), 1,
      aux_sym_integer_value_token1,
    ACTIONS(314), 1,
      aux_sym_float_value_token1,
    ACTIONS(510), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(520), 1,
      anon_sym_LBRACK2,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(1036), 1,
      sym_important,
    ACTIONS(1038), 1,
      sym_plain_value,
    STATE(80), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8621] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(580), 1,
      sym_important,
    ACTIONS(582), 1,
      sym_plain_value,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    STATE(353), 9,
      sym__value,
      sym_parenthesized_value,
      sym_color_value,
      sym_string_value,
      sym_integer_value,
      sym_float_value,
      sym_grid_value,
      sym_call_expression,
      sym_binary_expression,
  [8669] = 13,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      aux_sym_integer_value_token1,
    ACTIONS(572), 1,
      aux_sym_float_value_token1,
    ACTIONS(574), 1,
      anon_sym_LBRACK2,
    ACTIONS(938), 1,
      anon_sym_LPAREN2,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(1040), 1,
      sym_important,
    ACTIONS(1042), 1,
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
  [8717] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(640), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(638), 11,
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
  [8746] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    ACTIONS(1052), 1,
      anon_sym_LPAREN2,
    ACTIONS(1055), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1058), 1,
      aux_sym_float_value_token1,
    ACTIONS(1061), 1,
      anon_sym_var,
    ACTIONS(1044), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1047), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(201), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8787] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(1070), 1,
      anon_sym_LPAREN2,
    ACTIONS(1072), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1074), 1,
      aux_sym_float_value_token1,
    ACTIONS(1076), 1,
      anon_sym_var,
    ACTIONS(1064), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1066), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(216), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [8828] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1080), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1078), 11,
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
  [8857] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1084), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1082), 11,
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
  [8886] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1088), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1086), 11,
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
  [8915] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1092), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1090), 11,
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
  [8944] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1096), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1094), 11,
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
  [8973] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1100), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1098), 11,
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
  [9002] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1102), 11,
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
  [9031] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1108), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1106), 11,
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
  [9060] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1112), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1110), 11,
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
  [9089] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1116), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1114), 11,
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
  [9118] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(636), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(634), 11,
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
  [9147] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LPAREN2,
    ACTIONS(1072), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1074), 1,
      aux_sym_float_value_token1,
    ACTIONS(1076), 1,
      anon_sym_var,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    ACTIONS(1118), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1120), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(215), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [9188] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LPAREN2,
    ACTIONS(1072), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1074), 1,
      aux_sym_float_value_token1,
    ACTIONS(1076), 1,
      anon_sym_var,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
    ACTIONS(1124), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1126), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(201), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [9229] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1070), 1,
      anon_sym_LPAREN2,
    ACTIONS(1072), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1074), 1,
      aux_sym_float_value_token1,
    ACTIONS(1076), 1,
      anon_sym_var,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    ACTIONS(1124), 4,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1126), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
    STATE(201), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym_europacss_var_ref,
      aux_sym_europacss_calc_repeat1,
  [9270] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1134), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1132), 11,
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
  [9299] = 5,
    ACTIONS(1138), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1136), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(604), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9329] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(592), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1142), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1140), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9361] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(624), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9393] = 5,
    ACTIONS(1138), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1136), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(622), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9423] = 5,
    ACTIONS(1146), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(608), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1144), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(604), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9453] = 5,
    ACTIONS(1146), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(626), 2,
      anon_sym_TILDE,
      anon_sym_PIPE,
    ACTIONS(1144), 6,
      anon_sym_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_STAR_EQ,
      anon_sym_DOLLAR_EQ,
    ACTIONS(622), 8,
      sym__descendant_operator,
      sym__pseudo_class_selector_colon,
      anon_sym_DOT,
      anon_sym_COLON_COLON,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_GT,
      anon_sym_PLUS,
  [9483] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(592), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1150), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(1148), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_RPAREN,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9515] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
    ACTIONS(628), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(624), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9547] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_STAR,
    ACTIONS(592), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(1156), 4,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_identifier,
      sym_plain_value,
    ACTIONS(702), 9,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9579] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1158), 1,
      anon_sym_SEMI,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1164), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1166), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(448), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9618] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1170), 1,
      anon_sym_SEMI,
    ACTIONS(628), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(624), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9647] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1172), 1,
      anon_sym_SEMI,
    ACTIONS(1174), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1176), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(437), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9686] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1178), 1,
      anon_sym_SEMI,
    ACTIONS(1180), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1182), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(438), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9725] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1184), 1,
      anon_sym_SEMI,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1186), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1190), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(350), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9764] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1194), 1,
      anon_sym_SEMI,
    ACTIONS(1196), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1198), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(457), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9803] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_SEMI,
    ACTIONS(628), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(624), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9832] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1152), 1,
      anon_sym_SEMI,
    ACTIONS(628), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(624), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9861] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1200), 1,
      anon_sym_SEMI,
    ACTIONS(1202), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1204), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(449), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [9900] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_SEMI,
    ACTIONS(628), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
      sym_plain_value,
    ACTIONS(624), 8,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_important,
      anon_sym_LPAREN2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_LBRACK2,
  [9929] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(1206), 1,
      anon_sym_SEMI,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    ACTIONS(1186), 2,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(1190), 2,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(345), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [9968] = 10,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1208), 1,
      anon_sym_SEMI,
    ACTIONS(1210), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1212), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(462), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10007] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LPAREN2,
    ACTIONS(1216), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1218), 1,
      aux_sym_float_value_token1,
    ACTIONS(1224), 1,
      anon_sym_calc,
    ACTIONS(1220), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1222), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(235), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10043] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LPAREN2,
    ACTIONS(1216), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1218), 1,
      aux_sym_float_value_token1,
    ACTIONS(1224), 1,
      anon_sym_calc,
    ACTIONS(1226), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1228), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(229), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10079] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LPAREN2,
    ACTIONS(1216), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1218), 1,
      aux_sym_float_value_token1,
    ACTIONS(1224), 1,
      anon_sym_calc,
    ACTIONS(1230), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1232), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(227), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10115] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1234), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1236), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(421), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10151] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1238), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1240), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(428), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10187] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LPAREN2,
    ACTIONS(1216), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1218), 1,
      aux_sym_float_value_token1,
    ACTIONS(1224), 1,
      anon_sym_calc,
    ACTIONS(1242), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1244), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(232), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10223] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1246), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1248), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(422), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10259] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1250), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1252), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(446), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10295] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LPAREN2,
    ACTIONS(1216), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1218), 1,
      aux_sym_float_value_token1,
    ACTIONS(1224), 1,
      anon_sym_calc,
    ACTIONS(1254), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1256), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(238), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10331] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LPAREN2,
    ACTIONS(1216), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1218), 1,
      aux_sym_float_value_token1,
    ACTIONS(1224), 1,
      anon_sym_calc,
    ACTIONS(1258), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1260), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(244), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10367] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1214), 1,
      anon_sym_LPAREN2,
    ACTIONS(1216), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1218), 1,
      aux_sym_float_value_token1,
    ACTIONS(1224), 1,
      anon_sym_calc,
    ACTIONS(1262), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1264), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(230), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10403] = 9,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_LPAREN2,
    ACTIONS(1160), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1162), 1,
      aux_sym_float_value_token1,
    ACTIONS(1168), 1,
      anon_sym_calc,
    ACTIONS(1266), 2,
      sym_plain_value,
      sym_europacss_dotted_name,
    ACTIONS(1268), 4,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    STATE(435), 5,
      sym_parenthesized_value,
      sym_integer_value,
      sym_float_value,
      sym__europacss_value,
      sym_europacss_calc,
  [10439] = 9,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(1270), 1,
      anon_sym_SEMI,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(333), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [10474] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1274), 1,
      sym_unit,
    ACTIONS(1002), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1004), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10501] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1276), 1,
      sym_unit,
    ACTIONS(996), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(998), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10528] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1278), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1280), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10552] = 12,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(1290), 1,
      anon_sym_GT,
    ACTIONS(1292), 1,
      anon_sym_TILDE,
    ACTIONS(1294), 1,
      anon_sym_PLUS,
    ACTIONS(1296), 1,
      anon_sym_PIPE,
    ACTIONS(1298), 1,
      sym__descendant_operator,
    ACTIONS(1300), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1282), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [10592] = 9,
    ACTIONS(1304), 1,
      anon_sym_host,
    ACTIONS(1308), 1,
      sym_escape_sequence,
    ACTIONS(1310), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym_class_name_repeat1,
    STATE(117), 1,
      sym_class_name,
    STATE(166), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1306), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1302), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [10626] = 3,
    ACTIONS(1312), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(604), 12,
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
  [10648] = 14,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(1290), 1,
      anon_sym_GT,
    ACTIONS(1292), 1,
      anon_sym_TILDE,
    ACTIONS(1294), 1,
      anon_sym_PLUS,
    ACTIONS(1296), 1,
      anon_sym_PIPE,
    ACTIONS(1298), 1,
      sym__descendant_operator,
    ACTIONS(1300), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1314), 1,
      anon_sym_COMMA,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10692] = 14,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(1290), 1,
      anon_sym_GT,
    ACTIONS(1292), 1,
      anon_sym_TILDE,
    ACTIONS(1294), 1,
      anon_sym_PLUS,
    ACTIONS(1296), 1,
      anon_sym_PIPE,
    ACTIONS(1298), 1,
      sym__descendant_operator,
    ACTIONS(1300), 1,
      sym__pseudo_class_selector_colon,
    STATE(403), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10736] = 14,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(1290), 1,
      anon_sym_GT,
    ACTIONS(1292), 1,
      anon_sym_TILDE,
    ACTIONS(1294), 1,
      anon_sym_PLUS,
    ACTIONS(1296), 1,
      anon_sym_PIPE,
    ACTIONS(1298), 1,
      sym__descendant_operator,
    ACTIONS(1300), 1,
      sym__pseudo_class_selector_colon,
    STATE(413), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10780] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1094), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1096), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10804] = 9,
    ACTIONS(1308), 1,
      sym_escape_sequence,
    ACTIONS(1310), 1,
      sym_identifier,
    ACTIONS(1320), 1,
      anon_sym_host,
    STATE(90), 1,
      aux_sym_class_name_repeat1,
    STATE(118), 1,
      sym_class_name,
    STATE(169), 1,
      sym__nth_child_pseudo_class_selector,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1306), 2,
      anon_sym_nth_DASHchild,
      anon_sym_nth_DASHlast_DASHchild,
    ACTIONS(1318), 5,
      anon_sym_has,
      anon_sym_not,
      anon_sym_is,
      anon_sym_where,
      anon_sym_host_DASHcontext,
  [10838] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1086), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1088), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10862] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1082), 6,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
      sym_europacss_variable,
      sym_europacss_slash_value,
    ACTIONS(1084), 7,
      anon_sym_PLUS,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_plain_value,
      anon_sym_var,
  [10886] = 3,
    ACTIONS(1322), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(604), 12,
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
  [10908] = 14,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(1290), 1,
      anon_sym_GT,
    ACTIONS(1292), 1,
      anon_sym_TILDE,
    ACTIONS(1294), 1,
      anon_sym_PLUS,
    ACTIONS(1296), 1,
      anon_sym_PIPE,
    ACTIONS(1298), 1,
      sym__descendant_operator,
    ACTIONS(1300), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1314), 1,
      anon_sym_COMMA,
    ACTIONS(1324), 1,
      anon_sym_LBRACE,
    STATE(405), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [10952] = 3,
    ACTIONS(1326), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(604), 12,
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
  [10974] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym_arguments,
    ACTIONS(606), 3,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(612), 7,
      anon_sym_not,
      anon_sym_LPAREN2,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11001] = 12,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(1290), 1,
      anon_sym_GT,
    ACTIONS(1292), 1,
      anon_sym_TILDE,
    ACTIONS(1294), 1,
      anon_sym_PLUS,
    ACTIONS(1296), 1,
      anon_sym_PIPE,
    ACTIONS(1298), 1,
      sym__descendant_operator,
    ACTIONS(1300), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(764), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11040] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1330), 1,
      sym_unit,
    ACTIONS(1004), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1002), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11065] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1332), 1,
      sym_unit,
    ACTIONS(998), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(996), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11090] = 6,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(340), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11116] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1096), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1094), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11138] = 6,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1334), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(410), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11164] = 12,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(1290), 1,
      anon_sym_GT,
    ACTIONS(1292), 1,
      anon_sym_TILDE,
    ACTIONS(1294), 1,
      anon_sym_PLUS,
    ACTIONS(1296), 1,
      anon_sym_PIPE,
    ACTIONS(1298), 1,
      sym__descendant_operator,
    ACTIONS(1300), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11202] = 12,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(1290), 1,
      anon_sym_GT,
    ACTIONS(1292), 1,
      anon_sym_TILDE,
    ACTIONS(1294), 1,
      anon_sym_PLUS,
    ACTIONS(1296), 1,
      anon_sym_PIPE,
    ACTIONS(1298), 1,
      sym__descendant_operator,
    ACTIONS(1300), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11240] = 6,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(396), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11266] = 6,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(351), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11292] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1340), 1,
      sym_unit,
    ACTIONS(996), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(998), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11316] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1342), 1,
      sym_unit,
    ACTIONS(1002), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1004), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11340] = 6,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(337), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11366] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1346), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1344), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11388] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1086), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1088), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11410] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1094), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1096), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11432] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1084), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1082), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11454] = 6,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(339), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11480] = 6,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(392), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11506] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1350), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1348), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11528] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1088), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
    ACTIONS(1086), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
  [11550] = 6,
    ACTIONS(514), 1,
      anon_sym_selector,
    ACTIONS(1188), 1,
      anon_sym_LPAREN2,
    ACTIONS(1192), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_not,
      anon_sym_only,
    STATE(334), 6,
      sym__query,
      sym_feature_query,
      sym_parenthesized_query,
      sym_binary_query,
      sym_unary_query,
      sym_selector_query,
  [11576] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1082), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1084), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11598] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(638), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(640), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11619] = 11,
    ACTIONS(792), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(1286), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    ACTIONS(1290), 1,
      anon_sym_GT,
    ACTIONS(1292), 1,
      anon_sym_TILDE,
    ACTIONS(1294), 1,
      anon_sym_PLUS,
    ACTIONS(1296), 1,
      anon_sym_PIPE,
    ACTIONS(1298), 1,
      sym__descendant_operator,
    ACTIONS(1300), 1,
      sym__pseudo_class_selector_colon,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [11654] = 4,
    ACTIONS(1354), 1,
      anon_sym_border,
    STATE(241), 1,
      sym_europacss_color_target,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1352), 8,
      anon_sym_fg,
      anon_sym_bg,
      anon_sym_fill,
      anon_sym_stroke,
      anon_sym_border_DASHtop,
      anon_sym_border_DASHbottom,
      anon_sym_border_DASHleft,
      anon_sym_border_DASHright,
  [11675] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1132), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1134), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11696] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1102), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1104), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11717] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1098), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1100), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11738] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1114), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1116), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11759] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1106), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1108), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11780] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1090), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1092), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11801] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1110), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1112), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11822] = 8,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_SLASH,
    ACTIONS(1356), 1,
      anon_sym_LPAREN,
    ACTIONS(1358), 1,
      anon_sym_COLON,
    STATE(312), 1,
      sym_arguments,
    ACTIONS(606), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(776), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [11851] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1360), 5,
      anon_sym_LPAREN2,
      sym_europacss_comparison,
      sym_europacss_variable,
      sym_europacss_range,
      sym_europacss_slash_value,
    ACTIONS(1362), 5,
      aux_sym_integer_value_token1,
      aux_sym_float_value_token1,
      sym_plain_value,
      anon_sym_calc,
      sym_europacss_dotted_name,
  [11872] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1078), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(1080), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11893] = 6,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_SLASH,
    ACTIONS(1356), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym_arguments,
    ACTIONS(606), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11918] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(634), 4,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN2,
    ACTIONS(636), 6,
      anon_sym_not,
      anon_sym_only,
      anon_sym_selector,
      anon_sym_DASH,
      anon_sym_SLASH,
      sym_identifier,
  [11939] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1084), 1,
      anon_sym_SLASH,
    ACTIONS(1082), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_of,
      anon_sym_DASH,
  [11959] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_SLASH,
    ACTIONS(1364), 1,
      sym_unit,
    ACTIONS(996), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [11981] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_SLASH,
    ACTIONS(1366), 1,
      sym_unit,
    ACTIONS(1002), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12003] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1080), 1,
      anon_sym_SLASH,
    ACTIONS(1078), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12022] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1088), 1,
      anon_sym_SLASH,
    ACTIONS(1086), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12041] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1092), 1,
      anon_sym_SLASH,
    ACTIONS(1090), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12060] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1096), 1,
      anon_sym_SLASH,
    ACTIONS(1094), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12079] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1134), 1,
      anon_sym_SLASH,
    ACTIONS(1132), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12098] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1100), 1,
      anon_sym_SLASH,
    ACTIONS(1098), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12117] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1104), 1,
      anon_sym_SLASH,
    ACTIONS(1102), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12136] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1108), 1,
      anon_sym_SLASH,
    ACTIONS(1106), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12155] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1112), 1,
      anon_sym_SLASH,
    ACTIONS(1110), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12174] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_SLASH,
    ACTIONS(1114), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12193] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_SLASH,
    ACTIONS(634), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12212] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_SLASH,
    ACTIONS(638), 7,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
  [12231] = 6,
    ACTIONS(1368), 1,
      anon_sym_RBRACE,
    ACTIONS(1372), 1,
      aux_sym_integer_value_token1,
    STATE(423), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1370), 2,
      sym_from,
      sym_to,
    STATE(325), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12253] = 7,
    ACTIONS(950), 1,
      anon_sym_SQUOTE,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    ACTIONS(1328), 1,
      anon_sym_LPAREN,
    ACTIONS(1374), 1,
      sym_identifier,
    STATE(300), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(439), 2,
      sym_string_value,
      sym_call_expression,
  [12277] = 6,
    ACTIONS(1372), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1376), 1,
      anon_sym_RBRACE,
    STATE(423), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1370), 2,
      sym_from,
      sym_to,
    STATE(322), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12299] = 6,
    ACTIONS(1378), 1,
      anon_sym_RBRACE,
    ACTIONS(1383), 1,
      aux_sym_integer_value_token1,
    STATE(423), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1380), 2,
      sym_from,
      sym_to,
    STATE(325), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12321] = 7,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_block,
    STATE(352), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
  [12345] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RBRACK,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    STATE(400), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12369] = 6,
    ACTIONS(1372), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1400), 1,
      anon_sym_RBRACE,
    STATE(423), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1370), 2,
      sym_from,
      sym_to,
    STATE(331), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12391] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1402), 1,
      anon_sym_RBRACK,
    STATE(406), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12415] = 7,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1404), 1,
      anon_sym_RBRACK,
    STATE(409), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12439] = 6,
    ACTIONS(1372), 1,
      aux_sym_integer_value_token1,
    ACTIONS(1406), 1,
      anon_sym_RBRACE,
    STATE(423), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1370), 2,
      sym_from,
      sym_to,
    STATE(325), 2,
      sym_keyframe_block,
      aux_sym_keyframe_block_list_repeat1,
  [12461] = 7,
    ACTIONS(950), 1,
      anon_sym_SQUOTE,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    ACTIONS(1328), 1,
      anon_sym_LPAREN,
    ACTIONS(1374), 1,
      sym_identifier,
    STATE(300), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(461), 2,
      sym_string_value,
      sym_call_expression,
  [12485] = 7,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1408), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_block,
    STATE(349), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
  [12509] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1410), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12522] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1412), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12535] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1414), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12548] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1416), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12561] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(776), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12574] = 6,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      sym_block,
    STATE(365), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
  [12595] = 6,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      sym_block,
    STATE(397), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
  [12616] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1418), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [12629] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1420), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12648] = 4,
    ACTIONS(1424), 1,
      aux_sym_integer_value_token1,
    STATE(415), 1,
      sym_integer_value,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1422), 3,
      anon_sym_even,
      anon_sym_odd,
      sym__nth_functional_notation,
  [12664] = 5,
    ACTIONS(950), 1,
      anon_sym_SQUOTE,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    ACTIONS(1426), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(443), 2,
      sym_string_value,
      sym_call_expression,
  [12682] = 5,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1428), 1,
      anon_sym_SEMI,
    STATE(412), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
  [12700] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1430), 1,
      anon_sym_RBRACK,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12718] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1432), 1,
      anon_sym_SEMI,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12736] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1434), 1,
      anon_sym_RPAREN,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12754] = 6,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1436), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_block,
    STATE(378), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12774] = 5,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1438), 1,
      anon_sym_SEMI,
    STATE(404), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
  [12792] = 3,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(1440), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [12806] = 6,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1442), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_block,
    STATE(378), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [12826] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1444), 1,
      anon_sym_RPAREN,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12844] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1446), 1,
      anon_sym_RBRACK,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12862] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1448), 1,
      anon_sym_RPAREN,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12880] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12898] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1452), 1,
      anon_sym_SEMI,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12916] = 5,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1398), 1,
      anon_sym_SLASH,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
    ACTIONS(1394), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [12934] = 5,
    ACTIONS(950), 1,
      anon_sym_SQUOTE,
    ACTIONS(952), 1,
      anon_sym_DQUOTE,
    ACTIONS(1456), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    STATE(464), 2,
      sym_string_value,
      sym_call_expression,
  [12952] = 4,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1458), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12967] = 4,
    ACTIONS(1461), 1,
      anon_sym_SQUOTE,
    STATE(361), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1463), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [12982] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [12993] = 4,
    ACTIONS(1466), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1468), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13008] = 4,
    ACTIONS(1470), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1472), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13023] = 5,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      sym_block,
    STATE(378), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13040] = 4,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(366), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1282), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [13055] = 4,
    ACTIONS(1478), 1,
      anon_sym_SQUOTE,
    STATE(369), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1480), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13070] = 4,
    STATE(90), 1,
      aux_sym_class_name_repeat1,
    STATE(134), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1308), 2,
      sym_escape_sequence,
      sym_identifier,
  [13085] = 4,
    ACTIONS(1466), 1,
      anon_sym_SQUOTE,
    STATE(361), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1482), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13100] = 4,
    ACTIONS(1484), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13115] = 4,
    STATE(90), 1,
      aux_sym_class_name_repeat1,
    STATE(142), 1,
      sym_class_name,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1308), 2,
      sym_escape_sequence,
      sym_identifier,
  [13130] = 4,
    ACTIONS(1486), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13145] = 4,
    ACTIONS(1488), 1,
      anon_sym_SQUOTE,
    STATE(375), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1490), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13160] = 4,
    ACTIONS(1488), 1,
      anon_sym_DQUOTE,
    STATE(398), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1492), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13175] = 4,
    ACTIONS(1494), 1,
      anon_sym_SQUOTE,
    STATE(361), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1482), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13190] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(466), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [13201] = 4,
    ACTIONS(1496), 1,
      anon_sym_SQUOTE,
    STATE(393), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1498), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13216] = 4,
    ACTIONS(1500), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1440), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13231] = 4,
    ACTIONS(1496), 1,
      anon_sym_DQUOTE,
    STATE(394), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1503), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13246] = 3,
    ACTIONS(1358), 1,
      anon_sym_COLON,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(776), 3,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
  [13259] = 4,
    ACTIONS(1505), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(630), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [13274] = 4,
    ACTIONS(1507), 1,
      anon_sym_SQUOTE,
    STATE(384), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1509), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13289] = 4,
    ACTIONS(1507), 1,
      anon_sym_DQUOTE,
    STATE(385), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1511), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13304] = 4,
    ACTIONS(1513), 1,
      anon_sym_SQUOTE,
    STATE(361), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1482), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13319] = 4,
    ACTIONS(1513), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1468), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13334] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1515), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [13345] = 4,
    ACTIONS(1517), 1,
      anon_sym_SQUOTE,
    STATE(389), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1519), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13360] = 4,
    ACTIONS(1517), 1,
      anon_sym_DQUOTE,
    STATE(390), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1521), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13375] = 4,
    ACTIONS(1523), 1,
      anon_sym_SQUOTE,
    STATE(361), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1482), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13390] = 4,
    ACTIONS(1523), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1468), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13405] = 4,
    ACTIONS(1478), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1525), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13420] = 4,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
  [13435] = 4,
    ACTIONS(1527), 1,
      anon_sym_SQUOTE,
    STATE(361), 1,
      aux_sym_string_value_repeat1,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1482), 2,
      aux_sym_string_value_token1,
      sym_escape_sequence,
  [13450] = 4,
    ACTIONS(1527), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1468), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13465] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_RBRACE,
      sym_from,
      sym_to,
      aux_sym_integer_value_token1,
  [13476] = 4,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
  [13491] = 5,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_block,
    STATE(378), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13508] = 4,
    ACTIONS(1494), 1,
      anon_sym_DQUOTE,
    STATE(364), 1,
      aux_sym_string_value_repeat2,
    ACTIONS(3), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1468), 2,
      aux_sym_string_value_token2,
      sym_escape_sequence,
  [13523] = 4,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    ACTIONS(1529), 1,
      anon_sym_COMMA,
    STATE(399), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13537] = 4,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1532), 1,
      anon_sym_RBRACK,
    STATE(402), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13551] = 4,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(998), 1,
      anon_sym_of,
    ACTIONS(1534), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13565] = 4,
    ACTIONS(1420), 1,
      anon_sym_RBRACK,
    ACTIONS(1536), 1,
      anon_sym_COMMA,
    STATE(402), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13579] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(1539), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13593] = 4,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1541), 1,
      anon_sym_SEMI,
    STATE(378), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13607] = 4,
    ACTIONS(1314), 1,
      anon_sym_COMMA,
    ACTIONS(1543), 1,
      anon_sym_LBRACE,
    STATE(366), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13621] = 4,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1545), 1,
      anon_sym_RBRACK,
    STATE(402), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13635] = 3,
    ACTIONS(1547), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(996), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13647] = 3,
    ACTIONS(1549), 1,
      sym_unit,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1002), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13659] = 4,
    ACTIONS(1392), 1,
      anon_sym_COMMA,
    ACTIONS(1551), 1,
      anon_sym_RBRACK,
    STATE(402), 1,
      aux_sym_grid_value_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13673] = 3,
    ACTIONS(1553), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1390), 2,
      anon_sym_and,
      anon_sym_or,
  [13685] = 4,
    ACTIONS(1314), 1,
      anon_sym_COMMA,
    ACTIONS(1555), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      aux_sym_selectors_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13699] = 4,
    ACTIONS(1386), 1,
      anon_sym_COMMA,
    ACTIONS(1557), 1,
      anon_sym_SEMI,
    STATE(378), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13713] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(1559), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym_pseudo_class_arguments_repeat1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13727] = 3,
    ACTIONS(1328), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13738] = 3,
    ACTIONS(1561), 1,
      anon_sym_RPAREN,
    ACTIONS(1563), 1,
      anon_sym_of,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13749] = 3,
    ACTIONS(1565), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      sym_pseudo_class_nth_child_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13760] = 3,
    ACTIONS(1567), 1,
      aux_sym_color_value_token1,
    ACTIONS(1569), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13771] = 3,
    ACTIONS(1272), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13782] = 3,
    ACTIONS(1571), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13793] = 3,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13804] = 3,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13815] = 3,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13826] = 3,
    ACTIONS(1573), 1,
      anon_sym_LBRACE,
    STATE(386), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13837] = 3,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13848] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1348), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13857] = 3,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13868] = 2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
    ACTIONS(1344), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [13877] = 3,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13888] = 3,
    ACTIONS(758), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_pseudo_class_with_selector_arguments,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13899] = 3,
    ACTIONS(1575), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_keyframe_block_list,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13910] = 4,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1577), 1,
      sym_plain_value,
    ACTIONS(1579), 1,
      sym_europacss_slash_value,
  [13923] = 2,
    ACTIONS(1581), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13931] = 2,
    ACTIONS(1583), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13939] = 2,
    ACTIONS(1585), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13947] = 2,
    ACTIONS(1587), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13955] = 2,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13963] = 2,
    ACTIONS(1589), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13971] = 2,
    ACTIONS(1591), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13979] = 2,
    ACTIONS(1593), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13987] = 2,
    ACTIONS(1595), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [13995] = 2,
    ACTIONS(1597), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14003] = 2,
    ACTIONS(1599), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14011] = 2,
    ACTIONS(1601), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14019] = 2,
    ACTIONS(1603), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14027] = 2,
    ACTIONS(1605), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14035] = 2,
    ACTIONS(1607), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14043] = 3,
    ACTIONS(3), 1,
      sym_js_comment,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(1609), 1,
      sym_plain_value,
  [14053] = 2,
    ACTIONS(1611), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14061] = 2,
    ACTIONS(1613), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14069] = 2,
    ACTIONS(1615), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14077] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14085] = 2,
    ACTIONS(1617), 1,
      anon_sym_LBRACK2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14093] = 2,
    ACTIONS(1619), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14101] = 2,
    ACTIONS(1621), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14109] = 2,
    ACTIONS(1623), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14117] = 2,
    ACTIONS(1625), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14125] = 2,
    ACTIONS(1627), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14133] = 2,
    ACTIONS(1629), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14141] = 2,
    ACTIONS(1631), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14149] = 2,
    ACTIONS(1633), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14157] = 2,
    ACTIONS(1635), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14165] = 2,
    ACTIONS(1637), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14173] = 2,
    ACTIONS(1639), 1,
      anon_sym_LPAREN2,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14181] = 2,
    ACTIONS(1641), 1,
      anon_sym_SEMI,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14189] = 2,
    ACTIONS(1643), 1,
      aux_sym_color_value_token1,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14197] = 2,
    ACTIONS(1645), 1,
      sym_identifier,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14205] = 2,
    ACTIONS(1647), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14213] = 2,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
  [14221] = 2,
    ACTIONS(1649), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym_js_comment,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 212,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 521,
  [SMALL_STATE(15)] = 569,
  [SMALL_STATE(16)] = 617,
  [SMALL_STATE(17)] = 665,
  [SMALL_STATE(18)] = 713,
  [SMALL_STATE(19)] = 761,
  [SMALL_STATE(20)] = 809,
  [SMALL_STATE(21)] = 857,
  [SMALL_STATE(22)] = 905,
  [SMALL_STATE(23)] = 953,
  [SMALL_STATE(24)] = 1001,
  [SMALL_STATE(25)] = 1049,
  [SMALL_STATE(26)] = 1097,
  [SMALL_STATE(27)] = 1145,
  [SMALL_STATE(28)] = 1193,
  [SMALL_STATE(29)] = 1241,
  [SMALL_STATE(30)] = 1289,
  [SMALL_STATE(31)] = 1337,
  [SMALL_STATE(32)] = 1385,
  [SMALL_STATE(33)] = 1433,
  [SMALL_STATE(34)] = 1481,
  [SMALL_STATE(35)] = 1529,
  [SMALL_STATE(36)] = 1577,
  [SMALL_STATE(37)] = 1625,
  [SMALL_STATE(38)] = 1673,
  [SMALL_STATE(39)] = 1721,
  [SMALL_STATE(40)] = 1769,
  [SMALL_STATE(41)] = 1817,
  [SMALL_STATE(42)] = 1865,
  [SMALL_STATE(43)] = 1913,
  [SMALL_STATE(44)] = 1961,
  [SMALL_STATE(45)] = 2009,
  [SMALL_STATE(46)] = 2057,
  [SMALL_STATE(47)] = 2105,
  [SMALL_STATE(48)] = 2153,
  [SMALL_STATE(49)] = 2201,
  [SMALL_STATE(50)] = 2249,
  [SMALL_STATE(51)] = 2297,
  [SMALL_STATE(52)] = 2345,
  [SMALL_STATE(53)] = 2393,
  [SMALL_STATE(54)] = 2441,
  [SMALL_STATE(55)] = 2489,
  [SMALL_STATE(56)] = 2537,
  [SMALL_STATE(57)] = 2585,
  [SMALL_STATE(58)] = 2633,
  [SMALL_STATE(59)] = 2681,
  [SMALL_STATE(60)] = 2756,
  [SMALL_STATE(61)] = 2825,
  [SMALL_STATE(62)] = 2891,
  [SMALL_STATE(63)] = 2957,
  [SMALL_STATE(64)] = 3023,
  [SMALL_STATE(65)] = 3089,
  [SMALL_STATE(66)] = 3155,
  [SMALL_STATE(67)] = 3221,
  [SMALL_STATE(68)] = 3287,
  [SMALL_STATE(69)] = 3353,
  [SMALL_STATE(70)] = 3419,
  [SMALL_STATE(71)] = 3485,
  [SMALL_STATE(72)] = 3553,
  [SMALL_STATE(73)] = 3619,
  [SMALL_STATE(74)] = 3685,
  [SMALL_STATE(75)] = 3753,
  [SMALL_STATE(76)] = 3816,
  [SMALL_STATE(77)] = 3879,
  [SMALL_STATE(78)] = 3947,
  [SMALL_STATE(79)] = 4012,
  [SMALL_STATE(80)] = 4057,
  [SMALL_STATE(81)] = 4122,
  [SMALL_STATE(82)] = 4155,
  [SMALL_STATE(83)] = 4188,
  [SMALL_STATE(84)] = 4221,
  [SMALL_STATE(85)] = 4254,
  [SMALL_STATE(86)] = 4287,
  [SMALL_STATE(87)] = 4320,
  [SMALL_STATE(88)] = 4353,
  [SMALL_STATE(89)] = 4386,
  [SMALL_STATE(90)] = 4419,
  [SMALL_STATE(91)] = 4456,
  [SMALL_STATE(92)] = 4489,
  [SMALL_STATE(93)] = 4522,
  [SMALL_STATE(94)] = 4561,
  [SMALL_STATE(95)] = 4622,
  [SMALL_STATE(96)] = 4655,
  [SMALL_STATE(97)] = 4688,
  [SMALL_STATE(98)] = 4721,
  [SMALL_STATE(99)] = 4754,
  [SMALL_STATE(100)] = 4787,
  [SMALL_STATE(101)] = 4820,
  [SMALL_STATE(102)] = 4853,
  [SMALL_STATE(103)] = 4886,
  [SMALL_STATE(104)] = 4921,
  [SMALL_STATE(105)] = 4956,
  [SMALL_STATE(106)] = 4993,
  [SMALL_STATE(107)] = 5054,
  [SMALL_STATE(108)] = 5087,
  [SMALL_STATE(109)] = 5120,
  [SMALL_STATE(110)] = 5181,
  [SMALL_STATE(111)] = 5214,
  [SMALL_STATE(112)] = 5274,
  [SMALL_STATE(113)] = 5330,
  [SMALL_STATE(114)] = 5390,
  [SMALL_STATE(115)] = 5446,
  [SMALL_STATE(116)] = 5506,
  [SMALL_STATE(117)] = 5564,
  [SMALL_STATE(118)] = 5599,
  [SMALL_STATE(119)] = 5634,
  [SMALL_STATE(120)] = 5669,
  [SMALL_STATE(121)] = 5726,
  [SMALL_STATE(122)] = 5761,
  [SMALL_STATE(123)] = 5796,
  [SMALL_STATE(124)] = 5851,
  [SMALL_STATE(125)] = 5886,
  [SMALL_STATE(126)] = 5943,
  [SMALL_STATE(127)] = 5997,
  [SMALL_STATE(128)] = 6051,
  [SMALL_STATE(129)] = 6091,
  [SMALL_STATE(130)] = 6145,
  [SMALL_STATE(131)] = 6199,
  [SMALL_STATE(132)] = 6253,
  [SMALL_STATE(133)] = 6282,
  [SMALL_STATE(134)] = 6313,
  [SMALL_STATE(135)] = 6342,
  [SMALL_STATE(136)] = 6371,
  [SMALL_STATE(137)] = 6402,
  [SMALL_STATE(138)] = 6433,
  [SMALL_STATE(139)] = 6464,
  [SMALL_STATE(140)] = 6493,
  [SMALL_STATE(141)] = 6522,
  [SMALL_STATE(142)] = 6573,
  [SMALL_STATE(143)] = 6602,
  [SMALL_STATE(144)] = 6631,
  [SMALL_STATE(145)] = 6660,
  [SMALL_STATE(146)] = 6689,
  [SMALL_STATE(147)] = 6720,
  [SMALL_STATE(148)] = 6751,
  [SMALL_STATE(149)] = 6782,
  [SMALL_STATE(150)] = 6813,
  [SMALL_STATE(151)] = 6842,
  [SMALL_STATE(152)] = 6871,
  [SMALL_STATE(153)] = 6900,
  [SMALL_STATE(154)] = 6929,
  [SMALL_STATE(155)] = 6958,
  [SMALL_STATE(156)] = 6987,
  [SMALL_STATE(157)] = 7016,
  [SMALL_STATE(158)] = 7045,
  [SMALL_STATE(159)] = 7096,
  [SMALL_STATE(160)] = 7125,
  [SMALL_STATE(161)] = 7154,
  [SMALL_STATE(162)] = 7183,
  [SMALL_STATE(163)] = 7212,
  [SMALL_STATE(164)] = 7241,
  [SMALL_STATE(165)] = 7270,
  [SMALL_STATE(166)] = 7299,
  [SMALL_STATE(167)] = 7328,
  [SMALL_STATE(168)] = 7357,
  [SMALL_STATE(169)] = 7386,
  [SMALL_STATE(170)] = 7415,
  [SMALL_STATE(171)] = 7444,
  [SMALL_STATE(172)] = 7473,
  [SMALL_STATE(173)] = 7502,
  [SMALL_STATE(174)] = 7531,
  [SMALL_STATE(175)] = 7566,
  [SMALL_STATE(176)] = 7597,
  [SMALL_STATE(177)] = 7645,
  [SMALL_STATE(178)] = 7693,
  [SMALL_STATE(179)] = 7741,
  [SMALL_STATE(180)] = 7789,
  [SMALL_STATE(181)] = 7837,
  [SMALL_STATE(182)] = 7885,
  [SMALL_STATE(183)] = 7933,
  [SMALL_STATE(184)] = 7981,
  [SMALL_STATE(185)] = 8029,
  [SMALL_STATE(186)] = 8077,
  [SMALL_STATE(187)] = 8125,
  [SMALL_STATE(188)] = 8157,
  [SMALL_STATE(189)] = 8189,
  [SMALL_STATE(190)] = 8237,
  [SMALL_STATE(191)] = 8285,
  [SMALL_STATE(192)] = 8333,
  [SMALL_STATE(193)] = 8381,
  [SMALL_STATE(194)] = 8429,
  [SMALL_STATE(195)] = 8477,
  [SMALL_STATE(196)] = 8525,
  [SMALL_STATE(197)] = 8573,
  [SMALL_STATE(198)] = 8621,
  [SMALL_STATE(199)] = 8669,
  [SMALL_STATE(200)] = 8717,
  [SMALL_STATE(201)] = 8746,
  [SMALL_STATE(202)] = 8787,
  [SMALL_STATE(203)] = 8828,
  [SMALL_STATE(204)] = 8857,
  [SMALL_STATE(205)] = 8886,
  [SMALL_STATE(206)] = 8915,
  [SMALL_STATE(207)] = 8944,
  [SMALL_STATE(208)] = 8973,
  [SMALL_STATE(209)] = 9002,
  [SMALL_STATE(210)] = 9031,
  [SMALL_STATE(211)] = 9060,
  [SMALL_STATE(212)] = 9089,
  [SMALL_STATE(213)] = 9118,
  [SMALL_STATE(214)] = 9147,
  [SMALL_STATE(215)] = 9188,
  [SMALL_STATE(216)] = 9229,
  [SMALL_STATE(217)] = 9270,
  [SMALL_STATE(218)] = 9299,
  [SMALL_STATE(219)] = 9329,
  [SMALL_STATE(220)] = 9361,
  [SMALL_STATE(221)] = 9393,
  [SMALL_STATE(222)] = 9423,
  [SMALL_STATE(223)] = 9453,
  [SMALL_STATE(224)] = 9483,
  [SMALL_STATE(225)] = 9515,
  [SMALL_STATE(226)] = 9547,
  [SMALL_STATE(227)] = 9579,
  [SMALL_STATE(228)] = 9618,
  [SMALL_STATE(229)] = 9647,
  [SMALL_STATE(230)] = 9686,
  [SMALL_STATE(231)] = 9725,
  [SMALL_STATE(232)] = 9764,
  [SMALL_STATE(233)] = 9803,
  [SMALL_STATE(234)] = 9832,
  [SMALL_STATE(235)] = 9861,
  [SMALL_STATE(236)] = 9900,
  [SMALL_STATE(237)] = 9929,
  [SMALL_STATE(238)] = 9968,
  [SMALL_STATE(239)] = 10007,
  [SMALL_STATE(240)] = 10043,
  [SMALL_STATE(241)] = 10079,
  [SMALL_STATE(242)] = 10115,
  [SMALL_STATE(243)] = 10151,
  [SMALL_STATE(244)] = 10187,
  [SMALL_STATE(245)] = 10223,
  [SMALL_STATE(246)] = 10259,
  [SMALL_STATE(247)] = 10295,
  [SMALL_STATE(248)] = 10331,
  [SMALL_STATE(249)] = 10367,
  [SMALL_STATE(250)] = 10403,
  [SMALL_STATE(251)] = 10439,
  [SMALL_STATE(252)] = 10474,
  [SMALL_STATE(253)] = 10501,
  [SMALL_STATE(254)] = 10528,
  [SMALL_STATE(255)] = 10552,
  [SMALL_STATE(256)] = 10592,
  [SMALL_STATE(257)] = 10626,
  [SMALL_STATE(258)] = 10648,
  [SMALL_STATE(259)] = 10692,
  [SMALL_STATE(260)] = 10736,
  [SMALL_STATE(261)] = 10780,
  [SMALL_STATE(262)] = 10804,
  [SMALL_STATE(263)] = 10838,
  [SMALL_STATE(264)] = 10862,
  [SMALL_STATE(265)] = 10886,
  [SMALL_STATE(266)] = 10908,
  [SMALL_STATE(267)] = 10952,
  [SMALL_STATE(268)] = 10974,
  [SMALL_STATE(269)] = 11001,
  [SMALL_STATE(270)] = 11040,
  [SMALL_STATE(271)] = 11065,
  [SMALL_STATE(272)] = 11090,
  [SMALL_STATE(273)] = 11116,
  [SMALL_STATE(274)] = 11138,
  [SMALL_STATE(275)] = 11164,
  [SMALL_STATE(276)] = 11202,
  [SMALL_STATE(277)] = 11240,
  [SMALL_STATE(278)] = 11266,
  [SMALL_STATE(279)] = 11292,
  [SMALL_STATE(280)] = 11316,
  [SMALL_STATE(281)] = 11340,
  [SMALL_STATE(282)] = 11366,
  [SMALL_STATE(283)] = 11388,
  [SMALL_STATE(284)] = 11410,
  [SMALL_STATE(285)] = 11432,
  [SMALL_STATE(286)] = 11454,
  [SMALL_STATE(287)] = 11480,
  [SMALL_STATE(288)] = 11506,
  [SMALL_STATE(289)] = 11528,
  [SMALL_STATE(290)] = 11550,
  [SMALL_STATE(291)] = 11576,
  [SMALL_STATE(292)] = 11598,
  [SMALL_STATE(293)] = 11619,
  [SMALL_STATE(294)] = 11654,
  [SMALL_STATE(295)] = 11675,
  [SMALL_STATE(296)] = 11696,
  [SMALL_STATE(297)] = 11717,
  [SMALL_STATE(298)] = 11738,
  [SMALL_STATE(299)] = 11759,
  [SMALL_STATE(300)] = 11780,
  [SMALL_STATE(301)] = 11801,
  [SMALL_STATE(302)] = 11822,
  [SMALL_STATE(303)] = 11851,
  [SMALL_STATE(304)] = 11872,
  [SMALL_STATE(305)] = 11893,
  [SMALL_STATE(306)] = 11918,
  [SMALL_STATE(307)] = 11939,
  [SMALL_STATE(308)] = 11959,
  [SMALL_STATE(309)] = 11981,
  [SMALL_STATE(310)] = 12003,
  [SMALL_STATE(311)] = 12022,
  [SMALL_STATE(312)] = 12041,
  [SMALL_STATE(313)] = 12060,
  [SMALL_STATE(314)] = 12079,
  [SMALL_STATE(315)] = 12098,
  [SMALL_STATE(316)] = 12117,
  [SMALL_STATE(317)] = 12136,
  [SMALL_STATE(318)] = 12155,
  [SMALL_STATE(319)] = 12174,
  [SMALL_STATE(320)] = 12193,
  [SMALL_STATE(321)] = 12212,
  [SMALL_STATE(322)] = 12231,
  [SMALL_STATE(323)] = 12253,
  [SMALL_STATE(324)] = 12277,
  [SMALL_STATE(325)] = 12299,
  [SMALL_STATE(326)] = 12321,
  [SMALL_STATE(327)] = 12345,
  [SMALL_STATE(328)] = 12369,
  [SMALL_STATE(329)] = 12391,
  [SMALL_STATE(330)] = 12415,
  [SMALL_STATE(331)] = 12439,
  [SMALL_STATE(332)] = 12461,
  [SMALL_STATE(333)] = 12485,
  [SMALL_STATE(334)] = 12509,
  [SMALL_STATE(335)] = 12522,
  [SMALL_STATE(336)] = 12535,
  [SMALL_STATE(337)] = 12548,
  [SMALL_STATE(338)] = 12561,
  [SMALL_STATE(339)] = 12574,
  [SMALL_STATE(340)] = 12595,
  [SMALL_STATE(341)] = 12616,
  [SMALL_STATE(342)] = 12629,
  [SMALL_STATE(343)] = 12648,
  [SMALL_STATE(344)] = 12664,
  [SMALL_STATE(345)] = 12682,
  [SMALL_STATE(346)] = 12700,
  [SMALL_STATE(347)] = 12718,
  [SMALL_STATE(348)] = 12736,
  [SMALL_STATE(349)] = 12754,
  [SMALL_STATE(350)] = 12774,
  [SMALL_STATE(351)] = 12792,
  [SMALL_STATE(352)] = 12806,
  [SMALL_STATE(353)] = 12826,
  [SMALL_STATE(354)] = 12844,
  [SMALL_STATE(355)] = 12862,
  [SMALL_STATE(356)] = 12880,
  [SMALL_STATE(357)] = 12898,
  [SMALL_STATE(358)] = 12916,
  [SMALL_STATE(359)] = 12934,
  [SMALL_STATE(360)] = 12952,
  [SMALL_STATE(361)] = 12967,
  [SMALL_STATE(362)] = 12982,
  [SMALL_STATE(363)] = 12993,
  [SMALL_STATE(364)] = 13008,
  [SMALL_STATE(365)] = 13023,
  [SMALL_STATE(366)] = 13040,
  [SMALL_STATE(367)] = 13055,
  [SMALL_STATE(368)] = 13070,
  [SMALL_STATE(369)] = 13085,
  [SMALL_STATE(370)] = 13100,
  [SMALL_STATE(371)] = 13115,
  [SMALL_STATE(372)] = 13130,
  [SMALL_STATE(373)] = 13145,
  [SMALL_STATE(374)] = 13160,
  [SMALL_STATE(375)] = 13175,
  [SMALL_STATE(376)] = 13190,
  [SMALL_STATE(377)] = 13201,
  [SMALL_STATE(378)] = 13216,
  [SMALL_STATE(379)] = 13231,
  [SMALL_STATE(380)] = 13246,
  [SMALL_STATE(381)] = 13259,
  [SMALL_STATE(382)] = 13274,
  [SMALL_STATE(383)] = 13289,
  [SMALL_STATE(384)] = 13304,
  [SMALL_STATE(385)] = 13319,
  [SMALL_STATE(386)] = 13334,
  [SMALL_STATE(387)] = 13345,
  [SMALL_STATE(388)] = 13360,
  [SMALL_STATE(389)] = 13375,
  [SMALL_STATE(390)] = 13390,
  [SMALL_STATE(391)] = 13405,
  [SMALL_STATE(392)] = 13420,
  [SMALL_STATE(393)] = 13435,
  [SMALL_STATE(394)] = 13450,
  [SMALL_STATE(395)] = 13465,
  [SMALL_STATE(396)] = 13476,
  [SMALL_STATE(397)] = 13491,
  [SMALL_STATE(398)] = 13508,
  [SMALL_STATE(399)] = 13523,
  [SMALL_STATE(400)] = 13537,
  [SMALL_STATE(401)] = 13551,
  [SMALL_STATE(402)] = 13565,
  [SMALL_STATE(403)] = 13579,
  [SMALL_STATE(404)] = 13593,
  [SMALL_STATE(405)] = 13607,
  [SMALL_STATE(406)] = 13621,
  [SMALL_STATE(407)] = 13635,
  [SMALL_STATE(408)] = 13647,
  [SMALL_STATE(409)] = 13659,
  [SMALL_STATE(410)] = 13673,
  [SMALL_STATE(411)] = 13685,
  [SMALL_STATE(412)] = 13699,
  [SMALL_STATE(413)] = 13713,
  [SMALL_STATE(414)] = 13727,
  [SMALL_STATE(415)] = 13738,
  [SMALL_STATE(416)] = 13749,
  [SMALL_STATE(417)] = 13760,
  [SMALL_STATE(418)] = 13771,
  [SMALL_STATE(419)] = 13782,
  [SMALL_STATE(420)] = 13793,
  [SMALL_STATE(421)] = 13804,
  [SMALL_STATE(422)] = 13815,
  [SMALL_STATE(423)] = 13826,
  [SMALL_STATE(424)] = 13837,
  [SMALL_STATE(425)] = 13848,
  [SMALL_STATE(426)] = 13857,
  [SMALL_STATE(427)] = 13868,
  [SMALL_STATE(428)] = 13877,
  [SMALL_STATE(429)] = 13888,
  [SMALL_STATE(430)] = 13899,
  [SMALL_STATE(431)] = 13910,
  [SMALL_STATE(432)] = 13923,
  [SMALL_STATE(433)] = 13931,
  [SMALL_STATE(434)] = 13939,
  [SMALL_STATE(435)] = 13947,
  [SMALL_STATE(436)] = 13955,
  [SMALL_STATE(437)] = 13963,
  [SMALL_STATE(438)] = 13971,
  [SMALL_STATE(439)] = 13979,
  [SMALL_STATE(440)] = 13987,
  [SMALL_STATE(441)] = 13995,
  [SMALL_STATE(442)] = 14003,
  [SMALL_STATE(443)] = 14011,
  [SMALL_STATE(444)] = 14019,
  [SMALL_STATE(445)] = 14027,
  [SMALL_STATE(446)] = 14035,
  [SMALL_STATE(447)] = 14043,
  [SMALL_STATE(448)] = 14053,
  [SMALL_STATE(449)] = 14061,
  [SMALL_STATE(450)] = 14069,
  [SMALL_STATE(451)] = 14077,
  [SMALL_STATE(452)] = 14085,
  [SMALL_STATE(453)] = 14093,
  [SMALL_STATE(454)] = 14101,
  [SMALL_STATE(455)] = 14109,
  [SMALL_STATE(456)] = 14117,
  [SMALL_STATE(457)] = 14125,
  [SMALL_STATE(458)] = 14133,
  [SMALL_STATE(459)] = 14141,
  [SMALL_STATE(460)] = 14149,
  [SMALL_STATE(461)] = 14157,
  [SMALL_STATE(462)] = 14165,
  [SMALL_STATE(463)] = 14173,
  [SMALL_STATE(464)] = 14181,
  [SMALL_STATE(465)] = 14189,
  [SMALL_STATE(466)] = 14197,
  [SMALL_STATE(467)] = 14205,
  [SMALL_STATE(468)] = 14213,
  [SMALL_STATE(469)] = 14221,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(287),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(247),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(444),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(455),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(272),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(367),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(391),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(251),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(433),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stylesheet_repeat1, 2, 0, 0), SHIFT_REPEAT(262),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet, 1, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_iterate, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_iterate, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postcss_statement, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_fontsize, 3, 0, 17),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_fontsize, 3, 0, 17),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column, 3, 0, 18),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column, 3, 0, 18),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column_offset, 3, 0, 18),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column_offset, 3, 0, 18),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_display, 3, 0, 18),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_display, 3, 0, 18),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_responsive, 3, 0, 19),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_responsive, 3, 0, 19),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_mq, 3, 0, 20),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_mq, 3, 0, 20),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_unpack, 3, 0, 18),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_unpack, 3, 0, 18),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_if, 3, 0, 21),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_if, 3, 0, 21),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color, 4, 0, 23),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color, 4, 0, 23),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_space, 4, 0, 24),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_space, 4, 0, 24),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_font, 4, 0, 25),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_font, 4, 0, 25),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_fontsize, 4, 0, 26),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_fontsize, 4, 0, 26),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column, 4, 0, 27),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column, 4, 0, 27),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_column_offset, 4, 0, 27),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_column_offset, 4, 0, 27),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color, 5, 0, 28),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color, 5, 0, 28),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_space, 5, 0, 29),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_space, 5, 0, 29),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_set, 2, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_set, 2, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 3, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 3, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_charset_statement, 3, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 3, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframes_statement, 3, 0, 9),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframes_statement, 3, 0, 9),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_supports_statement, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 3, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 3, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_media_statement, 4, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_media_statement, 4, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_statement, 4, 0, 14),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_statement, 4, 0, 14),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_grid, 2, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_grid, 2, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, 0, 15),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, 0, 15),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_at_rule, 4, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_rule, 4, 0, 0),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 5, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 5, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block_list, 3, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 5, 0, 15),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 5, 0, 15),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 6, 0, 15),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 6, 0, 15),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_row, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_row, 2, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_abs100, 2, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_abs100, 2, 0, 0),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_font, 5, 0, 30),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_font, 5, 0, 30),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 3, 0, 15),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 3),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, 0, 0),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, 0, 0),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__selector, 1, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__selector, 1, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 2, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 2, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_name_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 4, 0, 15),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(383),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [728] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 0),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 12),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 12),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 11),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 11),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 2, 0, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 2, 0, 5),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, 0, 4),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__query, 1, 0, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 3, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_descendant_selector, 3, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 3, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 3, 0, 0),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 3, 0, 13),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 3, 0, 13),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 3, 0, 0),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 3, 0, 0),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 3, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 2, 0, 0),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 2, 0, 0),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_selector, 2, 0, 0),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_selector, 2, 0, 0),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 2, 0, 0),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_selector, 2, 0, 6),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id_selector, 2, 0, 6),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 2, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 2, 0, 0),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sibling_selector, 2, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adjacent_sibling_selector, 2, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_selector, 2, 0, 0),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 11),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 11),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 4, 0, 0),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 4, 0, 12),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 4, 0, 12),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 4, 0, 16),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 4, 0, 16),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 3, 0, 0),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 3, 0, 0),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_placeholder_selector, 2, 0, 7),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_placeholder_selector, 2, 0, 7),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 3, 0, 0),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 5, 0, 10),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 5, 0, 10),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_selector, 3, 0, 2),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_with_selector_arguments, 4, 0, 0),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_arguments, 4, 0, 0),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__nth_child_pseudo_class_selector, 2, 0, 0),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_arguments, 4, 0, 0),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 6, 0, 16),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 6, 0, 16),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_class_nth_child_arguments, 5, 0, 0),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_universal_selector, 1, 0, 0),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [922] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pseudo_element_selector, 3, 0, 5),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_selector, 3, 0, 10),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_selector, 3, 0, 10),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child_selector, 3, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child_selector, 3, 0, 0),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 1, 0, 0),
  [998] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 1, 0, 0),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 1, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 1, 0, 0),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1044] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [1047] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0),
  [1052] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [1055] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(253),
  [1058] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(252),
  [1061] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_europacss_calc_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_value, 2, 0, 0),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color_value, 2, 0, 0),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_value, 2, 0, 0),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_value, 2, 0, 0),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_value, 2, 0, 0),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, 0, 8),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, 0, 8),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_value, 3, 0, 0),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2, 0, 0),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 4, 0, 0),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3, 0, 0),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4, 0, 0),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grid_value, 3, 0, 0),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 1, 0, 0),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postcss_statement_repeat1, 1, 0, 0),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_last_declaration, 5, 0, 15),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_declaration_repeat1, 2, 0, 0),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_var_ref, 4, 0, 31),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_var_ref, 4, 0, 31),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 1, 0, 0),
  [1326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_calc, 3, 0, 0),
  [1346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_calc, 3, 0, 0),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_calc, 4, 0, 0),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_calc, 4, 0, 0),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_europacss_color_target, 1, 0, 0),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0),
  [1380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [1383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2, 0, 0), SHIFT_REPEAT(407),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_query, 2, 0, 0),
  [1412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_query, 4, 0, 0),
  [1414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_query, 3, 0, 0),
  [1416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_query, 3, 0, 0),
  [1418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_query, 5, 0, 22),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0),
  [1463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [1466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [1470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0),
  [1472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_value_repeat2, 2, 0, 0), SHIFT_REPEAT(364),
  [1475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selectors_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [1478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [1480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [1503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [1511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [1513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyframe_block, 2, 0, 0),
  [1517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [1521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [1527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grid_value_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selectors, 2, 0, 0),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [1569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1585] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
