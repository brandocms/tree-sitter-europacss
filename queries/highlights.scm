; inherits: css

; --- EuropaCSS at-rules ---

; At-rule keywords
(europacss_color "@color" @keyword)
(europacss_space "@space" @keyword)
(europacss_font "@font" @keyword)
(europacss_fontsize "@fontsize" @keyword)
(europacss_responsive "@responsive" @keyword)
(europacss_mq "@mq" @keyword)
(europacss_column "@column" @keyword)
(europacss_display "@display" @keyword)
(europacss_grid "@grid" @keyword)
(europacss_row "@row" @keyword)
(europacss_abs100 "@abs100" @keyword)
(europacss_iterate "@iterate" @keyword)
(europacss_unpack "@unpack" @keyword)
(europacss_if "@if" @keyword)

; Color targets (fg, bg, fill, stroke, border-*)
(europacss_color_target) @type

; Variables ($lg, $mobile, etc.)
(europacss_variable) @variable

; Dotted names (body.foreground, link.hover.text)
(europacss_dotted_name) @property

; Slash values (3/12, flex/row/wrap)
(europacss_slash_value) @number

; Range values (->1023px, 1024px->1440px)
(europacss_range) @number

; Field-specific highlights
(europacss_color
  value: (plain_value) @constant)

(europacss_space
  property: (plain_value) @property
  value: (plain_value) @number)

(europacss_font
  family: (plain_value) @string
  size: (plain_value) @number)

(europacss_fontsize
  size: (plain_value) @number)

(europacss_responsive
  breakpoint: (plain_value) @constant)

(europacss_mq
  query: (plain_value) @constant)

(europacss_column
  value: (plain_value) @number)

(europacss_display
  value: (plain_value) @constant)
