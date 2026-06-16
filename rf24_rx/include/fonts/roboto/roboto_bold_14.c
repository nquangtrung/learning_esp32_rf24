/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --stride 1 --align 1 --font Roboto-Bold.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o roboto_bold_14.c
 ******************************************************************************/

#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTO_BOLD_14
#define ROBOTO_BOLD_14 1
#endif

#if ROBOTO_BOLD_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0000 "\u0000" */
    0x0,

    /* U+0002 "\u0002" */
    0x0,

    /* U+000D "\r" */
    0x0,

    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0xc,

    /* U+0022 "\"" */
    0xff, 0xff,

    /* U+0023 "#" */
    0x14, 0x14, 0x14, 0x7f, 0x34, 0x24, 0x2c, 0xfe,
    0x28, 0x28, 0x28,

    /* U+0024 "$" */
    0x8, 0x10, 0xf3, 0xf6, 0x6c, 0xdc, 0xe, 0xf,
    0xcd, 0x9b, 0xf3, 0xc1, 0x2, 0x0,

    /* U+0025 "%" */
    0x70, 0x6d, 0x37, 0x9b, 0x87, 0x40, 0x40, 0x2c,
    0x2b, 0x15, 0x92, 0xc0, 0xc0,

    /* U+0026 "&" */
    0x38, 0x36, 0x1b, 0xf, 0x87, 0x83, 0xc3, 0xed,
    0xbe, 0xce, 0x63, 0x9e, 0xc0,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x13, 0x66, 0xcc, 0xcc, 0xcc, 0xc4, 0x62, 0x10,

    /* U+0029 ")" */
    0x8c, 0x66, 0x33, 0x33, 0x33, 0x32, 0x64, 0x80,

    /* U+002A "*" */
    0x21, 0x3e, 0xe5, 0x6c,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0x6d, 0xe0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x18, 0xc4, 0x63, 0x11, 0x8c, 0x42, 0x31, 0x0,

    /* U+0030 "0" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+0031 "1" */
    0x1b, 0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6,

    /* U+0032 "2" */
    0x79, 0x9b, 0x30, 0x60, 0xc3, 0xe, 0x18, 0x61,
    0xc3, 0xf8,

    /* U+0033 "3" */
    0x3c, 0xcf, 0x18, 0x31, 0xe3, 0x87, 0x83, 0x46,
    0xcc, 0xf0,

    /* U+0034 "4" */
    0xc, 0x38, 0xf1, 0xe6, 0xcd, 0xb3, 0x7f, 0xc,
    0x18, 0x30,

    /* U+0035 "5" */
    0x7e, 0xc1, 0x83, 0x7, 0xc9, 0xc1, 0x83, 0xc6,
    0xdc, 0xf0,

    /* U+0036 "6" */
    0x18, 0x61, 0x86, 0xf, 0xd9, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+0037 "7" */
    0xfe, 0xc, 0x30, 0x60, 0xc3, 0x6, 0x18, 0x30,
    0x61, 0x80,

    /* U+0038 "8" */
    0x7d, 0x8f, 0x1e, 0x3f, 0xef, 0xbb, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+0039 "9" */
    0x38, 0xdb, 0x1e, 0x3c, 0x7c, 0xdf, 0x83, 0x4,
    0x18, 0xc0,

    /* U+003A ":" */
    0xc0, 0x3,

    /* U+003B ";" */
    0xc0, 0x3f, 0x80,

    /* U+003C "<" */
    0x4, 0x7f, 0xb0, 0xf8, 0x70, 0x40,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0x83, 0x87, 0xc3, 0x7f, 0x88, 0x0,

    /* U+003F "?" */
    0x7b, 0x3c, 0xc3, 0x1c, 0x63, 0xc, 0x30, 0x3,
    0x0,

    /* U+0040 "@" */
    0xf, 0x6, 0x11, 0x81, 0x30, 0x1c, 0x73, 0x92,
    0x76, 0x4e, 0xc9, 0xd9, 0x3b, 0x6b, 0x37, 0x30,
    0x3, 0x0, 0x3e, 0x0,

    /* U+0041 "A" */
    0xc, 0xe, 0x7, 0x3, 0xc3, 0x61, 0x90, 0xcc,
    0xfe, 0x63, 0x30, 0xf8, 0x60,

    /* U+0042 "B" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x7f, 0xb1, 0xe3, 0xc7,
    0x8f, 0xf0,

    /* U+0043 "C" */
    0x3c, 0x66, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc3, 0x66, 0x3c,

    /* U+0044 "D" */
    0xf8, 0xc6, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc6, 0xc6, 0xf8,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xb0, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xb0, 0x60, 0xc1,
    0x83, 0x0,

    /* U+0047 "G" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc0, 0xc0, 0xcf, 0xc3,
    0xc3, 0x63, 0x3e,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x66,
    0xcc, 0xf0,

    /* U+004B "K" */
    0xc7, 0xce, 0xcc, 0xd8, 0xf8, 0xf8, 0xf8, 0xcc,
    0xce, 0xc6, 0xc7,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+004D "M" */
    0xe0, 0xfc, 0x1f, 0xc7, 0xf8, 0xfd, 0x17, 0xb6,
    0xf6, 0xde, 0x53, 0xce, 0x79, 0xcf, 0x11, 0x80,

    /* U+004E "N" */
    0xc3, 0xe3, 0xe3, 0xf3, 0xf3, 0xdb, 0xcf, 0xcf,
    0xc7, 0xc7, 0xc3,

    /* U+004F "O" */
    0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+0050 "P" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc0,
    0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3e, 0x7, 0x2,

    /* U+0052 "R" */
    0xfd, 0x9f, 0x1e, 0x3c, 0x79, 0xbe, 0x6c, 0xcd,
    0x9f, 0x18,

    /* U+0053 "S" */
    0x1e, 0x63, 0x63, 0x70, 0x7c, 0x3e, 0x1f, 0x7,
    0x63, 0x63, 0x3e,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c,

    /* U+0056 "V" */
    0xc1, 0xb1, 0xd8, 0xcc, 0x67, 0x31, 0xb0, 0xd8,
    0x6c, 0x1c, 0xe, 0x7, 0x0,

    /* U+0057 "W" */
    0xc6, 0x3c, 0x63, 0xc6, 0x36, 0xf6, 0x6f, 0x66,
    0xf6, 0x69, 0x67, 0x9e, 0x39, 0xc3, 0x9c, 0x30,
    0xc0,

    /* U+0058 "X" */
    0xe3, 0x31, 0x8d, 0x86, 0xc1, 0xc0, 0xe0, 0x70,
    0x6c, 0x76, 0x31, 0xb8, 0xc0,

    /* U+0059 "Y" */
    0xc3, 0xe7, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xff, 0x7, 0x6, 0xc, 0xc, 0x18, 0x38, 0x30,
    0x60, 0xe0, 0xff,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6d, 0xc0,

    /* U+005C "\\" */
    0xc1, 0x86, 0x18, 0x30, 0xc3, 0x6, 0x18, 0x60,
    0xc3,

    /* U+005D "]" */
    0xed, 0xb6, 0xdb, 0x6d, 0xb7, 0xc0,

    /* U+005E "^" */
    0x30, 0xc3, 0x9e, 0x4b, 0x30,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x60,

    /* U+0061 "a" */
    0x3c, 0xcc, 0x19, 0xf6, 0x7c, 0xd9, 0x9f,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xee, 0xd8, 0xf1, 0xe3, 0xc7,
    0xcb, 0xf0,

    /* U+0063 "c" */
    0x38, 0x9b, 0x16, 0xc, 0x18, 0xd3, 0x1c,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xf6, 0xf8, 0xf1, 0xe3, 0xc6,
    0xdd, 0xf8,

    /* U+0065 "e" */
    0x38, 0xdb, 0x17, 0xfc, 0x18, 0x19, 0x1e,

    /* U+0066 "f" */
    0x3b, 0x19, 0xe6, 0x31, 0x8c, 0x63, 0x18,

    /* U+0067 "g" */
    0x7e, 0xcf, 0x1e, 0x3c, 0x78, 0xd9, 0xbf, 0x6,
    0x8d, 0xe0,

    /* U+0068 "h" */
    0xc3, 0xc, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0069 "i" */
    0xc3, 0xff, 0xfc,

    /* U+006A "j" */
    0x30, 0x3, 0x33, 0x33, 0x33, 0x33, 0x3e,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0x6d, 0x9f, 0x3c, 0x7c, 0xd9,
    0x9b, 0x38,

    /* U+006C "l" */
    0xff, 0xff, 0xfc,

    /* U+006D "m" */
    0xfb, 0xd9, 0x8f, 0x31, 0xe6, 0x3c, 0xc7, 0x98,
    0xf3, 0x1e, 0x63,

    /* U+006E "n" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3,

    /* U+006F "o" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xdb, 0x1c,

    /* U+0070 "p" */
    0xfd, 0xdb, 0x1e, 0x3c, 0x78, 0xfb, 0x7e, 0xc1,
    0x83, 0x0,

    /* U+0071 "q" */
    0x7e, 0xdf, 0x1e, 0x3c, 0x78, 0xdb, 0xbf, 0x6,
    0xc, 0x18,

    /* U+0072 "r" */
    0xfc, 0xcc, 0xcc, 0xcc,

    /* U+0073 "s" */
    0x7b, 0x3c, 0x3e, 0x7c, 0x3c, 0xde,

    /* U+0074 "t" */
    0x66, 0xf6, 0x66, 0x66, 0x73,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf,

    /* U+0076 "v" */
    0xc7, 0x8d, 0xb3, 0x66, 0xc7, 0xe, 0x1c,

    /* U+0077 "w" */
    0xcc, 0xf3, 0x34, 0xc9, 0xfe, 0x7f, 0x9c, 0xe7,
    0x38, 0xcc,

    /* U+0078 "x" */
    0x66, 0xd8, 0xf1, 0xc3, 0x8f, 0x9b, 0x73,

    /* U+0079 "y" */
    0xc6, 0xcd, 0xb3, 0x62, 0xc7, 0xe, 0xc, 0x10,
    0x61, 0x80,

    /* U+007A "z" */
    0xfc, 0x61, 0x8c, 0x21, 0x8c, 0x3f,

    /* U+007B "{" */
    0x13, 0x66, 0x66, 0xec, 0xe6, 0x66, 0x63, 0x10,

    /* U+007C "|" */
    0xff, 0xf0,

    /* U+007D "}" */
    0x8c, 0x66, 0x66, 0x73, 0x76, 0x66, 0x6c, 0x80,

    /* U+007E "~" */
    0x72, 0xde, 0x8e,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xc0, 0xff, 0xfc,

    /* U+00A2 "¢" */
    0x30, 0x60, 0xe3, 0xec, 0xd8, 0x30, 0x66, 0x7c,
    0x70, 0xc1, 0x80,

    /* U+00A3 "£" */
    0x3c, 0xcd, 0x9b, 0x6, 0x1f, 0x18, 0x30, 0x60,
    0xc3, 0xf8,

    /* U+00A4 "¤" */
    0xbd, 0x43, 0xc3, 0x81, 0x81, 0x81, 0xc3, 0xc7,
    0xbd,

    /* U+00A5 "¥" */
    0x66, 0x66, 0x66, 0x3c, 0x3c, 0x1c, 0x7e, 0x18,
    0x7e, 0x18, 0x18,

    /* U+00A6 "¦" */
    0xff, 0xcf, 0xff,

    /* U+00A7 "§" */
    0x7d, 0x9f, 0x1f, 0xf, 0x9f, 0xf3, 0xf3, 0xfe,
    0xfc, 0x3e, 0x3c, 0x6f, 0x80,

    /* U+00A8 "¨" */
    0xd8,

    /* U+00A9 "©" */
    0x1e, 0x8, 0x45, 0xca, 0x89, 0xa0, 0x68, 0x1a,
    0x6, 0x89, 0x5c, 0x88, 0x41, 0xe0,

    /* U+00AA "ª" */
    0x79, 0xf9, 0xf0,

    /* U+00AB "«" */
    0x6a, 0xf5, 0x6d, 0xa4,

    /* U+00AC "¬" */
    0xfe, 0xc, 0x18,

    /* U+00AD "­" */
    0xf0,

    /* U+00AE "®" */
    0x1e, 0x8, 0x45, 0xca, 0x49, 0x92, 0x67, 0x99,
    0x26, 0x49, 0x40, 0x88, 0x41, 0xe0,

    /* U+00AF "¯" */
    0xf8,

    /* U+00B0 "°" */
    0x69, 0x96,

    /* U+00B1 "±" */
    0x30, 0xc3, 0xc, 0xfc, 0xc3, 0xc, 0x3, 0xf0,

    /* U+00B2 "²" */
    0xf9, 0x34, 0xf0,

    /* U+00B3 "³" */
    0xe1, 0x71, 0xe0,

    /* U+00B4 "´" */
    0xc0,

    /* U+00B5 "µ" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0xc1,
    0x83, 0x0,

    /* U+00B6 "¶" */
    0x3d, 0xff, 0xff, 0xfd, 0xf7, 0xc3, 0xc, 0x30,
    0xc0,

    /* U+00B7 "·" */
    0xc0,

    /* U+00B8 "¸" */
    0xcb, 0x0,

    /* U+00B9 "¹" */
    0xd5, 0x40,

    /* U+00BA "º" */
    0x74, 0x63, 0x17, 0x0,

    /* U+00BB "»" */
    0xb6, 0x96, 0xdd, 0xc8,

    /* U+00BC "¼" */
    0x70, 0x2c, 0x83, 0x20, 0xd0, 0x35, 0x8f, 0xe1,
    0xb8, 0x7e, 0x37, 0xc0, 0x60,

    /* U+00BD "½" */
    0x10, 0x3c, 0x3, 0x20, 0xc8, 0x34, 0xf, 0x60,
    0xa4, 0x63, 0x11, 0x8c, 0x40, 0x3c,

    /* U+00BE "¾" */
    0xf0, 0x2, 0x20, 0xc4, 0x49, 0xf, 0x6c, 0xb,
    0x82, 0xf0, 0xd6, 0x13, 0xe0, 0x18,

    /* U+00BF "¿" */
    0x30, 0x0, 0xc, 0x31, 0x8e, 0x30, 0xcf, 0x37,
    0x80,

    /* U+00C0 "À" */
    0x18, 0x0, 0x3, 0x3, 0x81, 0xc0, 0xf0, 0xd8,
    0x64, 0x33, 0x3f, 0x98, 0xcc, 0x3e, 0x18,

    /* U+00C1 "Á" */
    0x4, 0x0, 0x3, 0x3, 0x81, 0xc0, 0xf0, 0xd8,
    0x64, 0x33, 0x3f, 0x98, 0xcc, 0x3e, 0x18,

    /* U+00C2 "Â" */
    0x8, 0xe, 0xc, 0x81, 0x81, 0xc0, 0xe0, 0x78,
    0x6c, 0x32, 0x19, 0x9f, 0xcc, 0x66, 0x1f, 0xc,

    /* U+00C3 "Ã" */
    0x1e, 0x0, 0x3, 0x3, 0x81, 0xc0, 0xf0, 0xd8,
    0x64, 0x33, 0x3f, 0x98, 0xcc, 0x3e, 0x18,

    /* U+00C4 "Ä" */
    0x33, 0x0, 0x0, 0xc0, 0x78, 0x1e, 0x7, 0x83,
    0x70, 0xcc, 0x33, 0x1f, 0xe6, 0x19, 0x87, 0xc1,
    0xc0,

    /* U+00C5 "Å" */
    0x1c, 0xa, 0x7, 0x1, 0x1, 0xc0, 0xa0, 0x58,
    0x6c, 0x36, 0x11, 0x9f, 0xcc, 0x66, 0x1e, 0xc,

    /* U+00C6 "Æ" */
    0x7, 0xf0, 0x78, 0x3, 0xc0, 0x36, 0x1, 0xb0,
    0x19, 0xf8, 0xcc, 0xf, 0xe0, 0x63, 0x7, 0x18,
    0x30, 0xfe,

    /* U+00C7 "Ç" */
    0x3c, 0x63, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3,
    0xff, 0x7e, 0x3c, 0x18, 0xc, 0x18,

    /* U+00C8 "È" */
    0x30, 0x3, 0xfe, 0xc, 0x18, 0x30, 0x7e, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+00C9 "É" */
    0x18, 0x3, 0xfe, 0xc, 0x18, 0x30, 0x7e, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+00CA "Ê" */
    0x10, 0x71, 0x17, 0xfc, 0x18, 0x30, 0x60, 0xfd,
    0x83, 0x6, 0xc, 0x1f, 0xc0,

    /* U+00CB "Ë" */
    0x6c, 0x3, 0xfe, 0xc, 0x18, 0x30, 0x7e, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+00CC "Ì" */
    0x60, 0x33, 0x33, 0x33, 0x33, 0x33, 0x30,

    /* U+00CD "Í" */
    0x60, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc0,

    /* U+00CE "Î" */
    0x31, 0xec, 0xcc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0xc0,

    /* U+00CF "Ï" */
    0xd8, 0xc, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x63,
    0x0,

    /* U+00D0 "Ð" */
    0x7c, 0x31, 0x98, 0x4c, 0x36, 0x1f, 0xcd, 0x86,
    0xc3, 0x63, 0x31, 0x9f, 0x0,

    /* U+00D1 "Ñ" */
    0x3c, 0x0, 0xc3, 0xe3, 0xe3, 0xf3, 0xf3, 0xdb,
    0xcf, 0xcf, 0xc7, 0xc7, 0xc3,

    /* U+00D2 "Ò" */
    0x10, 0x0, 0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+00D3 "Ó" */
    0x8, 0x0, 0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+00D4 "Ô" */
    0x18, 0x38, 0x24, 0x3c, 0x66, 0xc2, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+00D5 "Õ" */
    0x3c, 0x0, 0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+00D6 "Ö" */
    0x36, 0x0, 0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+00D7 "×" */
    0x46, 0xd8, 0xe1, 0xc6, 0xcc, 0xc0, 0x0,

    /* U+00D8 "Ø" */
    0x3e, 0x66, 0xc6, 0xc7, 0xcb, 0xcb, 0xd3, 0xf3,
    0xe3, 0x66, 0x7c, 0xc0,

    /* U+00D9 "Ù" */
    0x30, 0x0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+00DA "Ú" */
    0xc, 0x0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+00DB "Û" */
    0x18, 0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+00DC "Ü" */
    0x6c, 0x0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+00DD "Ý" */
    0xc, 0x0, 0xc3, 0xe7, 0x66, 0x66, 0x3c, 0x3c,
    0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+00DE "Þ" */
    0xc1, 0x83, 0x7, 0xec, 0x78, 0xf1, 0xe3, 0xfd,
    0x83, 0x0,

    /* U+00DF "ß" */
    0x79, 0x9b, 0x36, 0x6d, 0x9b, 0x37, 0x67, 0xc7,
    0x8f, 0xf0,

    /* U+00E0 "à" */
    0x30, 0x0, 0x1, 0xe6, 0x60, 0xcf, 0xb3, 0xe6,
    0xcc, 0xf8,

    /* U+00E1 "á" */
    0xc, 0x0, 0x1, 0xe6, 0x60, 0xcf, 0xb3, 0xe6,
    0xcc, 0xf8,

    /* U+00E2 "â" */
    0x18, 0x48, 0x1, 0xe6, 0x60, 0xcf, 0xb3, 0xe6,
    0xcc, 0xf8,

    /* U+00E3 "ã" */
    0x7c, 0x0, 0x1, 0xe6, 0x60, 0xcf, 0xb3, 0xe6,
    0xcc, 0xf8,

    /* U+00E4 "ä" */
    0x6c, 0x0, 0x1, 0xe6, 0x60, 0xcf, 0xb3, 0xe6,
    0xcd, 0xf8,

    /* U+00E5 "å" */
    0x38, 0xa3, 0x80, 0x7b, 0xb0, 0xdf, 0xcf, 0x3c,
    0xdf,

    /* U+00E6 "æ" */
    0x7b, 0xd9, 0xcc, 0x31, 0xbf, 0xfc, 0xc1, 0x98,
    0x33, 0x93, 0xdf,

    /* U+00E7 "ç" */
    0x38, 0x9b, 0x6, 0xc, 0x7d, 0x9f, 0x1c, 0x30,
    0x30, 0xc0,

    /* U+00E8 "è" */
    0x20, 0x0, 0x1, 0xc6, 0xd8, 0xbf, 0xe0, 0xc0,
    0xc8, 0xf0,

    /* U+00E9 "é" */
    0x18, 0x0, 0x1, 0xc6, 0xd8, 0xbf, 0xe0, 0xc0,
    0xc8, 0xf0,

    /* U+00EA "ê" */
    0x30, 0xd0, 0x1, 0xc6, 0xd8, 0xbf, 0xe0, 0xc0,
    0xc8, 0xf0,

    /* U+00EB "ë" */
    0x6c, 0x0, 0x1, 0xc6, 0x58, 0xbf, 0xe0, 0xc0,
    0xc8, 0xf0,

    /* U+00EC "ì" */
    0x60, 0x3, 0x33, 0x33, 0x33, 0x30,

    /* U+00ED "í" */
    0x60, 0xc, 0xcc, 0xcc, 0xcc, 0xc0,

    /* U+00EE "î" */
    0x31, 0x20, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+00EF "ï" */
    0xd8, 0x0, 0x63, 0x18, 0xc6, 0x31, 0x8c,

    /* U+00F0 "ð" */
    0x74, 0x70, 0xf0, 0x77, 0xfc, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+00F1 "ñ" */
    0x78, 0x0, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+00F2 "ò" */
    0x30, 0x0, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+00F3 "ó" */
    0x18, 0x0, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+00F4 "ô" */
    0x38, 0xd8, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+00F5 "õ" */
    0x7c, 0x0, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+00F6 "ö" */
    0x6c, 0x0, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+00F7 "÷" */
    0x18, 0x3, 0xf8, 0x0, 0x0, 0x6, 0x0,

    /* U+00F8 "ø" */
    0x4, 0x79, 0xb6, 0x7d, 0x7a, 0xf9, 0xb6, 0x78,
    0x80,

    /* U+00F9 "ù" */
    0x20, 0x0, 0x33, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0xc0,

    /* U+00FA "ú" */
    0x10, 0x0, 0x33, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0xc0,

    /* U+00FB "û" */
    0x31, 0x60, 0x33, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0xc0,

    /* U+00FC "ü" */
    0x6c, 0x0, 0x33, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0xc0,

    /* U+00FD "ý" */
    0x18, 0x0, 0x6, 0x36, 0x6d, 0x9b, 0x16, 0x38,
    0x70, 0x60, 0x83, 0xc, 0x0,

    /* U+00FE "þ" */
    0xc1, 0x83, 0x7, 0xec, 0xd8, 0xf1, 0xe3, 0xc7,
    0xdb, 0xf6, 0xc, 0x18, 0x0,

    /* U+00FF "ÿ" */
    0x6c, 0x0, 0x6, 0x36, 0xcd, 0x9b, 0x14, 0x38,
    0x70, 0x60, 0x83, 0xc, 0x0,

    /* U+0102 "Ă" */
    0x12, 0xe, 0x3, 0x3, 0x81, 0xc0, 0xf0, 0xd8,
    0x64, 0x33, 0x3f, 0x98, 0xcc, 0x3e, 0x18,

    /* U+0103 "ă" */
    0x24, 0x78, 0x1, 0xe6, 0x60, 0xcf, 0xb3, 0xe6,
    0xcc, 0xf8,

    /* U+0104 "Ą" */
    0xc, 0xe, 0x7, 0x3, 0xc3, 0x61, 0x90, 0xcc,
    0xfe, 0x63, 0x30, 0xf8, 0x60, 0x20, 0x30, 0xc,

    /* U+0105 "ą" */
    0x3c, 0xcc, 0x19, 0xf6, 0x7c, 0xd9, 0xbf, 0x4,
    0x18, 0x18,

    /* U+0106 "Ć" */
    0xc, 0x0, 0x3c, 0x66, 0xc3, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc3, 0x66, 0x3c,

    /* U+0107 "ć" */
    0x18, 0x0, 0x1, 0xc4, 0xd8, 0xb0, 0x60, 0xc6,
    0x98, 0xe0,

    /* U+0110 "Đ" */
    0x7c, 0x31, 0x98, 0x4c, 0x36, 0x1f, 0xcd, 0x86,
    0xc3, 0x63, 0x31, 0x9f, 0x0,

    /* U+0111 "đ" */
    0x6, 0x1f, 0x6, 0x7e, 0x6e, 0xc6, 0xc6, 0xc6,
    0xc6, 0x6e, 0x7e,

    /* U+0118 "Ę" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xb0, 0x60, 0xc1,
    0x83, 0xf8, 0xc1, 0x83, 0x80,

    /* U+0119 "ę" */
    0x38, 0xdb, 0x16, 0x2f, 0xf8, 0x19, 0x1e, 0x18,
    0x20, 0x60,

    /* U+0128 "Ĩ" */
    0x78, 0x3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30,

    /* U+0129 "ĩ" */
    0x78, 0x0, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+0139 "Ĺ" */
    0x60, 0x3, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+013A "ĺ" */
    0x60, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc0,

    /* U+0143 "Ń" */
    0xc, 0x0, 0xc3, 0xe3, 0xe3, 0xf3, 0xf3, 0xdb,
    0xcf, 0xcf, 0xc7, 0xc7, 0xc3,

    /* U+0144 "ń" */
    0x10, 0x0, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0154 "Ŕ" */
    0x18, 0x3, 0xf6, 0x7c, 0x78, 0xf1, 0xe6, 0xf9,
    0xb3, 0x36, 0x7c, 0x60,

    /* U+0155 "ŕ" */
    0x30, 0xf, 0xcc, 0xcc, 0xcc, 0xc0,

    /* U+015A "Ś" */
    0xc, 0x0, 0x1e, 0x63, 0x63, 0x70, 0x7c, 0x3e,
    0x1f, 0x7, 0x63, 0x63, 0x3e,

    /* U+015B "ś" */
    0x18, 0x0, 0x1e, 0xcf, 0xf, 0x9f, 0xf, 0x37,
    0x80,

    /* U+0168 "Ũ" */
    0x7e, 0x0, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0169 "ũ" */
    0x78, 0x0, 0x33, 0xcf, 0x3c, 0xf3, 0xcf, 0x37,
    0xc0,

    /* U+0172 "Ų" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c, 0xc, 0xe,

    /* U+0173 "ų" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf, 0x8, 0x60,
    0xc0,

    /* U+0179 "Ź" */
    0xc, 0x0, 0xff, 0x7, 0x6, 0xc, 0xc, 0x18,
    0x38, 0x30, 0x60, 0xe0, 0xff,

    /* U+017A "ź" */
    0x30, 0x0, 0x3f, 0x18, 0x63, 0x8, 0x63, 0xf,
    0xc0,

    /* U+01A0 "Ơ" */
    0x3c, 0xd9, 0xbc, 0x3b, 0xc, 0xc3, 0x30, 0xcc,
    0x33, 0xc, 0xc3, 0x19, 0x83, 0xc0,

    /* U+01A1 "ơ" */
    0x1, 0x39, 0x6e, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c,
    0x38,

    /* U+01AF "Ư" */
    0xc3, 0x78, 0x6f, 0xf, 0x61, 0x8c, 0x31, 0x86,
    0x30, 0xc6, 0x18, 0xc3, 0xc, 0xc0, 0xf0, 0x0,

    /* U+01B0 "ư" */
    0x1, 0xe6, 0xb3, 0xd9, 0x8c, 0xc6, 0x63, 0x31,
    0x98, 0x7c, 0x0,

    /* U+01FA "Ǻ" */
    0x2, 0x2, 0x3, 0x2, 0x80, 0xc0, 0xe0, 0x70,
    0x3c, 0x36, 0x19, 0xc, 0xcf, 0xe6, 0x33, 0xf,
    0x86,

    /* U+01FB "ǻ" */
    0xc, 0x30, 0xa0, 0xc3, 0xcf, 0xd9, 0x9f, 0x67,
    0xcd, 0x99, 0xf0,

    /* U+01FC "Ǽ" */
    0x3, 0x0, 0x0, 0x1, 0xfc, 0x1e, 0x0, 0xf0,
    0xd, 0x80, 0x6c, 0x6, 0x7e, 0x33, 0x3, 0xf8,
    0x18, 0xc1, 0xc6, 0xc, 0x3f, 0x80,

    /* U+01FD "ǽ" */
    0x6, 0x0, 0x0, 0x0, 0x3d, 0xec, 0xe6, 0x18,
    0xdf, 0xfe, 0x60, 0xcc, 0x19, 0xc9, 0xef, 0x80,

    /* U+01FE "Ǿ" */
    0xc, 0x0, 0x3e, 0x66, 0xc6, 0xc7, 0xcb, 0xcb,
    0xd3, 0xf3, 0xe3, 0x66, 0x7c, 0xc0,

    /* U+01FF "ǿ" */
    0x18, 0x8, 0x11, 0xc6, 0xdb, 0xf5, 0xeb, 0xe6,
    0xd9, 0xe2, 0x0,

    /* U+0301 "́" */
    0x60,

    /* U+0303 "̃" */
    0xcd, 0x80,

    /* U+0309 "̉" */
    0xcf, 0x0,

    /* U+0323 "̣" */
    0xc0,

    /* U+0385 "΅" */
    0x13, 0x3c, 0xc0,

    /* U+0386 "Ά" */
    0x4c, 0xe, 0x7, 0x3, 0xc3, 0x61, 0x90, 0xcc,
    0xfe, 0x63, 0x30, 0xf8, 0x60,

    /* U+0388 "Έ" */
    0x9f, 0xc6, 0x1, 0x80, 0x60, 0x18, 0x7, 0xe1,
    0x80, 0x60, 0x18, 0x6, 0x1, 0xfc,

    /* U+0389 "Ή" */
    0x98, 0x63, 0xc, 0x61, 0x8c, 0x31, 0x86, 0x3f,
    0xc6, 0x18, 0xc3, 0x18, 0x63, 0xc, 0x61, 0x80,

    /* U+038A "Ί" */
    0x98, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6,

    /* U+038C "Ό" */
    0x4f, 0x6, 0x63, 0x8, 0xc3, 0x30, 0xcc, 0x33,
    0xc, 0xc3, 0x30, 0xc6, 0x60, 0xf0,

    /* U+038E "Ύ" */
    0x58, 0x63, 0x9c, 0x33, 0x6, 0x60, 0x78, 0xf,
    0x0, 0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x0,

    /* U+038F "Ώ" */
    0x4f, 0x6, 0x63, 0xc, 0xc3, 0x30, 0xcc, 0x33,
    0xc, 0xc3, 0x19, 0x82, 0x43, 0xfc,

    /* U+0390 "ΐ" */
    0x13, 0x30, 0x0, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x86,

    /* U+03AC "ά" */
    0x18, 0x0, 0x0, 0x7e, 0x66, 0xc6, 0xc6, 0xc6,
    0xc6, 0x66, 0x7b,

    /* U+03AD "έ" */
    0x10, 0x0, 0x3, 0xec, 0xdc, 0x1c, 0x70, 0xc1,
    0x99, 0xe0,

    /* U+03AE "ή" */
    0x10, 0x0, 0x3e, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xc3, 0xc, 0x30,

    /* U+03AF "ί" */
    0x40, 0x6d, 0xb6, 0xdd, 0x80,

    /* U+03B0 "ΰ" */
    0x13, 0x30, 0x0, 0xcb, 0x3c, 0xf3, 0xcf, 0x3d,
    0x9e,

    /* U+03CC "ό" */
    0x10, 0x0, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0,

    /* U+03CD "ύ" */
    0x10, 0x0, 0x32, 0xcf, 0x3c, 0xf3, 0xcf, 0x67,
    0x80,

    /* U+03CE "ώ" */
    0x4, 0x0, 0x0, 0x1, 0x82, 0xc0, 0xf3, 0xbc,
    0xef, 0x3b, 0xce, 0xd3, 0xb7, 0xb8,

    /* U+0403 "Ѓ" */
    0x18, 0x3, 0xfe, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x6, 0xc, 0x0,

    /* U+040C "Ќ" */
    0x18, 0x0, 0xc7, 0xce, 0xcc, 0xd8, 0xf8, 0xf8,
    0xf8, 0xcc, 0xce, 0xc6, 0xc7,

    /* U+0453 "ѓ" */
    0x30, 0x3f, 0x8c, 0x63, 0x18, 0xc6, 0x0,

    /* U+045C "ќ" */
    0x18, 0x3, 0x3e, 0x6d, 0x9b, 0x3c, 0x6c, 0xcd,
    0x9c,

    /* U+1E00 "Ḁ" */
    0xc, 0x6, 0x7, 0x83, 0xc1, 0x61, 0x98, 0xcc,
    0xe6, 0x7f, 0xb0, 0xf8, 0x61, 0x81, 0x40, 0x60,

    /* U+1E01 "ḁ" */
    0x3c, 0xcd, 0x98, 0x33, 0xec, 0xd9, 0xbf, 0x30,
    0x60, 0xc0,

    /* U+1E3E "Ḿ" */
    0x6, 0x0, 0x3, 0x83, 0xf0, 0x7f, 0x1f, 0xe3,
    0xf4, 0x5e, 0xdb, 0xdb, 0x79, 0x4f, 0x39, 0xe7,
    0x3c, 0x46,

    /* U+1E3F "ḿ" */
    0x6, 0x0, 0x0, 0x0, 0x7d, 0xec, 0xc7, 0x98,
    0xf3, 0x1e, 0x63, 0xcc, 0x79, 0x8f, 0x31, 0x80,

    /* U+1E82 "Ẃ" */
    0x3, 0x0, 0x0, 0xc6, 0x3c, 0x63, 0xc6, 0x36,
    0xf6, 0x6f, 0x66, 0xf6, 0x69, 0x67, 0x9e, 0x39,
    0xc3, 0x9c, 0x30, 0xc0,

    /* U+1E83 "ẃ" */
    0x6, 0x0, 0x0, 0x3, 0x33, 0xcc, 0xd3, 0x27,
    0xf9, 0xfe, 0x73, 0x9c, 0xe3, 0x30,

    /* U+1EA0 "Ạ" */
    0xc, 0x6, 0x7, 0x83, 0xc3, 0x61, 0x98, 0xcc,
    0xfe, 0x63, 0xb0, 0xf8, 0x60, 0x0, 0xc0,

    /* U+1EA1 "ạ" */
    0x3c, 0xcc, 0x19, 0xf6, 0x7c, 0xd9, 0xbf, 0x0,
    0x60,

    /* U+1EA2 "Ả" */
    0xc, 0x2, 0x3, 0x1, 0x81, 0xc0, 0xe0, 0x78,
    0x6c, 0x32, 0x19, 0x9f, 0xcc, 0x66, 0x1f, 0xc,

    /* U+1EA3 "ả" */
    0x18, 0x18, 0x60, 0x3, 0xcc, 0xc1, 0x9f, 0x67,
    0xcd, 0x99, 0xf0,

    /* U+1EA4 "Ấ" */
    0x1, 0x86, 0x8c, 0x81, 0x81, 0xc0, 0xe0, 0x78,
    0x6c, 0x32, 0x19, 0x9f, 0xcc, 0x66, 0x1f, 0xc,

    /* U+1EA5 "ấ" */
    0x1, 0xd, 0x9, 0x0, 0x3, 0xc3, 0x30, 0x18,
    0x7c, 0x66, 0x73, 0x19, 0x87, 0xc0,

    /* U+1EA6 "Ầ" */
    0x40, 0x36, 0x5, 0x81, 0x81, 0xc0, 0xe0, 0x78,
    0x6c, 0x32, 0x19, 0x9f, 0xcc, 0x66, 0x1f, 0xc,

    /* U+1EA7 "ầ" */
    0x40, 0x6c, 0x12, 0x0, 0x1e, 0x33, 0x3, 0x1f,
    0x33, 0x73, 0x33, 0x1f,

    /* U+1EA8 "Ẩ" */
    0x3, 0x1, 0x7, 0x1, 0x81, 0xc0, 0xf0, 0x78,
    0x6c, 0x33, 0x19, 0x9f, 0xcc, 0x76, 0x1f, 0xc,

    /* U+1EA9 "ẩ" */
    0x3e, 0x0, 0x0, 0x3c, 0x66, 0x6, 0x3e, 0x66,
    0xe6, 0x66, 0x3e,

    /* U+1EAA "Ẫ" */
    0x1c, 0xa, 0x3, 0x2, 0x40, 0xc0, 0xe0, 0x70,
    0x3c, 0x36, 0x19, 0xc, 0xcf, 0xe6, 0x33, 0xf,
    0x86,

    /* U+1EAB "ẫ" */
    0x3c, 0x30, 0x90, 0x3, 0xcc, 0xc1, 0x9f, 0x67,
    0xcd, 0x99, 0xf0,

    /* U+1EAC "Ậ" */
    0x8, 0xe, 0xc, 0x81, 0x80, 0xc0, 0xf0, 0x78,
    0x6c, 0x33, 0x19, 0x9f, 0xcc, 0x76, 0x1f, 0xc,
    0x0, 0x18,

    /* U+1EAD "ậ" */
    0x38, 0xd8, 0x1, 0xe6, 0x60, 0xcf, 0xb3, 0xe6,
    0xcd, 0xf8, 0x3, 0x0,

    /* U+1EAE "Ắ" */
    0x4, 0x9, 0x7, 0x1, 0x81, 0xc0, 0xe0, 0x78,
    0x6c, 0x32, 0x19, 0x9f, 0xcc, 0x66, 0x1f, 0xc,

    /* U+1EAF "ắ" */
    0x8, 0x48, 0xf0, 0x3, 0xcc, 0xc1, 0x9f, 0x67,
    0xcd, 0x99, 0xf0,

    /* U+1EB0 "Ằ" */
    0x8, 0x9, 0x7, 0x1, 0x81, 0xc0, 0xe0, 0x78,
    0x6c, 0x32, 0x19, 0x9f, 0xcc, 0x66, 0x1f, 0xc,

    /* U+1EB1 "ằ" */
    0x10, 0x48, 0xf0, 0x3, 0xcc, 0xc1, 0x9f, 0x67,
    0xcd, 0x99, 0xf0,

    /* U+1EB2 "Ẳ" */
    0x4, 0x19, 0x4, 0x83, 0x80, 0xc0, 0xe0, 0x70,
    0x3c, 0x36, 0x19, 0xc, 0xcf, 0xe6, 0x33, 0xf,
    0x86,

    /* U+1EB3 "ẳ" */
    0xc, 0xc8, 0xf0, 0x3, 0xcc, 0xc1, 0x9f, 0x67,
    0xcd, 0x99, 0xf0,

    /* U+1EB4 "Ẵ" */
    0x1a, 0xa, 0xc, 0x83, 0x80, 0xc0, 0xe0, 0x70,
    0x3c, 0x36, 0x19, 0xc, 0xcf, 0xe6, 0x33, 0xf,
    0x86,

    /* U+1EB5 "ẵ" */
    0x34, 0x58, 0x91, 0xe0, 0x7, 0x99, 0x83, 0x3e,
    0xcf, 0x9b, 0x33, 0xe0,

    /* U+1EB6 "Ặ" */
    0x12, 0xe, 0x3, 0x1, 0x81, 0xe0, 0xf0, 0xd8,
    0x66, 0x33, 0x3f, 0x98, 0xec, 0x3e, 0x18, 0x0,
    0x30,

    /* U+1EB7 "ặ" */
    0x64, 0x78, 0x1, 0xe6, 0x60, 0xcf, 0xb3, 0xe6,
    0xcd, 0xf8, 0x3, 0x0,

    /* U+1EB8 "Ẹ" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xb0, 0x60, 0xc1,
    0x83, 0xf8, 0x3, 0x0,

    /* U+1EB9 "ẹ" */
    0x38, 0x9b, 0x36, 0x6f, 0xf8, 0x19, 0x1e, 0x0,
    0x0, 0xc0,

    /* U+1EBA "Ẻ" */
    0x10, 0x30, 0x47, 0xfc, 0x18, 0x30, 0x60, 0xfd,
    0x83, 0x6, 0xc, 0x1f, 0xc0,

    /* U+1EBB "ẻ" */
    0x30, 0x30, 0xc0, 0x3, 0x8d, 0xb1, 0x7f, 0xc1,
    0x81, 0x91, 0xe0,

    /* U+1EBC "Ẽ" */
    0x7c, 0x3, 0xfe, 0xc, 0x18, 0x30, 0x7e, 0xc1,
    0x83, 0x6, 0xf, 0xe0,

    /* U+1EBD "ẽ" */
    0x78, 0x0, 0x1, 0xc6, 0xd8, 0xbf, 0xe0, 0xc0,
    0xc8, 0xf0,

    /* U+1EBE "Ế" */
    0x3, 0x32, 0x68, 0xfe, 0xc0, 0xc0, 0xc0, 0xc0,
    0xfc, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe,

    /* U+1EBF "ế" */
    0x2, 0x34, 0x68, 0x0, 0x38, 0x6c, 0xc4, 0xfe,
    0xc0, 0xc0, 0x64, 0x3c,

    /* U+1EC0 "Ề" */
    0xc0, 0x58, 0x34, 0x7f, 0x60, 0x60, 0x60, 0x60,
    0x7e, 0x60, 0x60, 0x60, 0x60, 0x7f,

    /* U+1EC1 "ề" */
    0x80, 0x58, 0x34, 0x0, 0x1c, 0x36, 0x62, 0x7f,
    0x60, 0x60, 0x32, 0x1e,

    /* U+1EC2 "Ể" */
    0x6, 0x28, 0xa7, 0xfc, 0x18, 0x30, 0x60, 0xfd,
    0x83, 0x6, 0xc, 0x1f, 0xc0,

    /* U+1EC3 "ể" */
    0x6, 0x70, 0x0, 0x3, 0x8d, 0xb1, 0x7f, 0xc1,
    0x81, 0x91, 0xe0,

    /* U+1EC4 "Ễ" */
    0x28, 0x70, 0x43, 0x6f, 0xf8, 0x30, 0x60, 0xc1,
    0xfb, 0x6, 0xc, 0x18, 0x3f, 0x80,

    /* U+1EC5 "ễ" */
    0x38, 0x61, 0xa0, 0x3, 0x8d, 0xb1, 0x7f, 0xc1,
    0x81, 0x91, 0xe0,

    /* U+1EC6 "Ệ" */
    0x30, 0x71, 0x37, 0xfc, 0x18, 0x30, 0x60, 0xfd,
    0x83, 0x6, 0xc, 0x1f, 0xc0, 0x18,

    /* U+1EC7 "ệ" */
    0x30, 0xb0, 0x1, 0xc4, 0xd9, 0xb3, 0x7f, 0xc0,
    0xc8, 0xf0, 0x0, 0x6, 0x0,

    /* U+1EC8 "Ỉ" */
    0xcf, 0x6d, 0xb6, 0xdb, 0x6d, 0x80,

    /* U+1EC9 "ỉ" */
    0xcf, 0xd, 0xb6, 0xdb, 0x60,

    /* U+1ECA "Ị" */
    0xff, 0xff, 0xfc, 0x30,

    /* U+1ECB "ị" */
    0xc3, 0xff, 0xfc, 0xc0,

    /* U+1ECC "Ọ" */
    0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c, 0x0, 0x0, 0x18,

    /* U+1ECD "ọ" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xdb, 0x1c, 0x0,
    0x0, 0xc0,

    /* U+1ECE "Ỏ" */
    0x18, 0xc, 0x18, 0x0, 0x3c, 0x66, 0xc2, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+1ECF "ỏ" */
    0x18, 0x10, 0x40, 0x3, 0x8d, 0xb1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+1ED0 "Ố" */
    0x1, 0x3, 0x1a, 0x24, 0x3c, 0x66, 0xc2, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+1ED1 "ố" */
    0x3, 0x3a, 0x6c, 0x0, 0x38, 0x6c, 0xc6, 0xc6,
    0xc6, 0xc6, 0x6c, 0x38,

    /* U+1ED2 "Ồ" */
    0x80, 0xc0, 0x58, 0x24, 0x3c, 0x66, 0xc2, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+1ED3 "ồ" */
    0xc0, 0x5c, 0x34, 0x0, 0x1c, 0x36, 0x63, 0x63,
    0x63, 0x63, 0x36, 0x1c,

    /* U+1ED4 "Ổ" */
    0x3, 0x38, 0x0, 0x3c, 0x66, 0xc2, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+1ED5 "ổ" */
    0x6, 0x70, 0x0, 0x3, 0x8d, 0xb1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+1ED6 "Ỗ" */
    0x14, 0x28, 0x18, 0x24, 0x3c, 0x66, 0xc2, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+1ED7 "ỗ" */
    0x38, 0x71, 0xa0, 0x3, 0x8d, 0xb1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+1ED8 "Ộ" */
    0x18, 0x2c, 0x3c, 0x66, 0xc2, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c, 0x0, 0x0, 0x18,

    /* U+1ED9 "ộ" */
    0x30, 0xb8, 0x1, 0xc6, 0xd8, 0xf1, 0xe3, 0xc6,
    0xd8, 0xe0, 0x0, 0x6, 0x0,

    /* U+1EDA "Ớ" */
    0xc, 0x0, 0x3, 0xcd, 0x9b, 0xc3, 0xb0, 0xcc,
    0x33, 0xc, 0xc3, 0x30, 0xcc, 0x31, 0x98, 0x3c,
    0x0,

    /* U+1EDB "ớ" */
    0x18, 0x0, 0x1, 0x39, 0x6e, 0xc6, 0xc6, 0xc6,
    0xc6, 0x6c, 0x38,

    /* U+1EDC "Ờ" */
    0x10, 0x0, 0x3, 0xcd, 0x9b, 0xc3, 0xb0, 0xcc,
    0x33, 0xc, 0xc3, 0x30, 0xcc, 0x31, 0x98, 0x3c,
    0x0,

    /* U+1EDD "ờ" */
    0x30, 0x0, 0x1, 0x39, 0x6e, 0xc6, 0xc6, 0xc6,
    0xc6, 0x6c, 0x38,

    /* U+1EDE "Ở" */
    0x18, 0x3, 0x1, 0x80, 0x0, 0x3c, 0xd9, 0xbc,
    0x3b, 0xc, 0xc3, 0x30, 0xcc, 0x33, 0xc, 0xc3,
    0x19, 0x83, 0xc0,

    /* U+1EDF "ở" */
    0x18, 0x8, 0x10, 0x1, 0x39, 0x6e, 0xc6, 0xc6,
    0xc6, 0xc6, 0x6c, 0x38,

    /* U+1EE0 "Ỡ" */
    0x3c, 0x0, 0x3, 0xcd, 0x9b, 0xc3, 0xb0, 0xcc,
    0x33, 0xc, 0xc3, 0x30, 0xcc, 0x31, 0x98, 0x3c,
    0x0,

    /* U+1EE1 "ỡ" */
    0x7c, 0x0, 0x1, 0x39, 0x6e, 0xc6, 0xc6, 0xc6,
    0xc6, 0x6c, 0x38,

    /* U+1EE2 "Ợ" */
    0x3c, 0xd9, 0xbc, 0x3b, 0xc, 0xc3, 0x30, 0xcc,
    0x33, 0xc, 0xc3, 0x19, 0x83, 0xc0, 0x0, 0x0,
    0x6, 0x0,

    /* U+1EE3 "ợ" */
    0x1, 0x39, 0x6e, 0xc6, 0xc6, 0xc6, 0xc6, 0x6c,
    0x38, 0x0, 0x0, 0x18,

    /* U+1EE4 "Ụ" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0x66, 0x3c, 0x0, 0x0, 0x18,

    /* U+1EE5 "ụ" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xdf, 0x0, 0x3,
    0x0,

    /* U+1EE6 "Ủ" */
    0x18, 0xc, 0x18, 0x0, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+1EE7 "ủ" */
    0x30, 0x63, 0x0, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xdf,

    /* U+1EE8 "Ứ" */
    0xc, 0x0, 0x3, 0xd, 0xe1, 0xbc, 0x3d, 0x86,
    0x30, 0xc6, 0x18, 0xc3, 0x18, 0x63, 0xc, 0x33,
    0x3, 0xc0,

    /* U+1EE9 "ứ" */
    0x10, 0x0, 0xc0, 0x59, 0xac, 0xe6, 0x63, 0x31,
    0x98, 0xcc, 0x66, 0x1f, 0x0,

    /* U+1EEA "Ừ" */
    0x18, 0x0, 0x3, 0xd, 0xe1, 0xbc, 0x3d, 0x86,
    0x30, 0xc6, 0x18, 0xc3, 0x18, 0x63, 0xc, 0x33,
    0x3, 0xc0,

    /* U+1EEB "ừ" */
    0x20, 0x0, 0xc0, 0x59, 0xac, 0xe6, 0x63, 0x31,
    0x98, 0xcc, 0x66, 0x1f, 0x0,

    /* U+1EEC "Ử" */
    0x1c, 0x1, 0x80, 0x60, 0x0, 0xc, 0x37, 0x86,
    0xf0, 0xf6, 0x18, 0xc3, 0x18, 0x63, 0xc, 0x61,
    0x8c, 0x30, 0xcc, 0xf, 0x0,

    /* U+1EED "ử" */
    0x30, 0xc, 0xc, 0x0, 0x3c, 0xd6, 0x7b, 0x31,
    0x98, 0xcc, 0x66, 0x33, 0xf, 0x80,

    /* U+1EEE "Ữ" */
    0x3e, 0x0, 0x3, 0xd, 0xe1, 0xbc, 0x3d, 0x86,
    0x30, 0xc6, 0x18, 0xc3, 0x18, 0x63, 0xc, 0x33,
    0x3, 0xc0,

    /* U+1EEF "ữ" */
    0x78, 0x0, 0x0, 0x59, 0xac, 0xe6, 0x63, 0x31,
    0x98, 0xcc, 0x66, 0x1f, 0x0,

    /* U+1EF0 "Ự" */
    0xc3, 0x78, 0x6f, 0xf, 0x61, 0x8c, 0x31, 0x86,
    0x30, 0xc6, 0x18, 0xc3, 0xc, 0xc0, 0xf0, 0x0,
    0x0, 0x0, 0x30, 0x0,

    /* U+1EF1 "ự" */
    0xcd, 0x67, 0xb3, 0x19, 0x8c, 0xc6, 0x63, 0x30,
    0xf8, 0x0, 0x0, 0xc, 0x0,

    /* U+1EF2 "Ỳ" */
    0x30, 0x0, 0xc3, 0xe7, 0x66, 0x66, 0x3c, 0x3c,
    0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+1EF3 "ỳ" */
    0x30, 0x0, 0x6, 0x36, 0x6d, 0x9b, 0x16, 0x38,
    0x70, 0x60, 0x83, 0xc, 0x0,

    /* U+1EF4 "Ỵ" */
    0xc3, 0xe7, 0x66, 0x66, 0x3c, 0x3c, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x0, 0x18,

    /* U+1EF5 "ỵ" */
    0xcf, 0x3c, 0xda, 0x79, 0xe3, 0xc, 0x30, 0x8e,
    0xc0,

    /* U+1EF6 "Ỷ" */
    0x18, 0x6, 0x6, 0x18, 0x6e, 0x33, 0x31, 0x98,
    0x78, 0x3c, 0xc, 0x6, 0x3, 0x1, 0x80, 0xc0,

    /* U+1EF7 "ỷ" */
    0x18, 0x18, 0x60, 0xc, 0x6c, 0xdb, 0x36, 0x2c,
    0x70, 0xe0, 0xc1, 0x6, 0x18, 0x0,

    /* U+1EF8 "Ỹ" */
    0x3c, 0x0, 0xc3, 0xe7, 0x66, 0x66, 0x3c, 0x3c,
    0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+1EF9 "ỹ" */
    0x7c, 0x0, 0x6, 0x36, 0x6d, 0x9b, 0x16, 0x38,
    0x70, 0x60, 0x83, 0xc, 0x0,

    /* U+1F4D "Ὅ" */
    0x93, 0xca, 0x66, 0xc, 0x20, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0x66, 0x3,
    0xc0,

    /* U+2010 "‐" */
    0xf0,

    /* U+2011 "‑" */
    0xf0,

    /* U+2013 "–" */
    0xfe,

    /* U+2014 "—" */
    0xff, 0x80,

    /* U+2018 "‘" */
    0x5b, 0x60,

    /* U+2019 "’" */
    0x6d, 0xa0,

    /* U+201C "“" */
    0x57, 0xbd, 0xe0,

    /* U+201D "”" */
    0x7b, 0xde, 0xa0,

    /* U+2020 "†" */
    0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18,

    /* U+2021 "‡" */
    0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0xff, 0x18, 0x18, 0x18,

    /* U+2026 "…" */
    0xdb,

    /* U+2030 "‰" */
    0x70, 0x4, 0xc8, 0x26, 0x81, 0x3c, 0x7, 0x40,
    0x6, 0x0, 0x2d, 0xc2, 0xd3, 0x36, 0x99, 0x34,
    0xc0, 0xdc,

    /* U+2032 "′" */
    0xff,

    /* U+2033 "″" */
    0xff, 0xff};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 56, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 56, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 61, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 9, .adv_w = 133, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 129, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 34, .adv_w = 166, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 61, .adv_w = 78, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 69, .adv_w = 79, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 77, .adv_w = 102, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 81, .adv_w = 122, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 89, .adv_w = 55, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 91, .adv_w = 88, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 92, .adv_w = 65, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 83, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 101, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 129, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 63, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 59, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 203, .adv_w = 114, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 209, .adv_w = 129, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 212, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 218, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 201, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 247, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 143, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 147, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 146, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 123, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 66, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 142, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 196, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 154, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 144, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 430, .adv_w = 144, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 148, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 146, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 486, .adv_w = 196, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 142, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 139, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 62, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 544, .adv_w = 94, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 553, .adv_w = 62, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 559, .adv_w = 98, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 564, .adv_w = 100, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 565, .adv_w = 74, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 566, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 121, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 80, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 614, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 624, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 59, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 58, .box_w = 4, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 643, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 59, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 656, .adv_w = 194, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 690, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 700, .adv_w = 82, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 76, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 165, .box_w = 10, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 114, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 113, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 755, .adv_w = 114, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 74, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 769, .adv_w = 56, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 771, .adv_w = 74, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 779, .adv_w = 145, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 782, .adv_w = 56, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 63, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 786, .adv_w = 129, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 797, .adv_w = 133, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 120, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 56, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 830, .adv_w = 141, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 843, .adv_w = 105, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 844, .adv_w = 176, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 99, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 861, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 865, .adv_w = 123, .box_w = 7, .box_h = 3, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 868, .adv_w = 88, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 869, .adv_w = 176, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 112, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 884, .adv_w = 87, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 886, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 894, .adv_w = 83, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 897, .adv_w = 83, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 900, .adv_w = 74, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 901, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 911, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 68, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 921, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 923, .adv_w = 83, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 925, .adv_w = 102, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 929, .adv_w = 112, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 933, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 170, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 181, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 974, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 983, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 998, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1013, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1029, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 151, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1061, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1077, .adv_w = 210, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 147, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1109, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1133, .adv_w = 126, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1146, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1158, .adv_w = 66, .box_w = 4, .box_h = 13, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1165, .adv_w = 66, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1172, .adv_w = 66, .box_w = 6, .box_h = 14, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1183, .adv_w = 66, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1192, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1205, .adv_w = 158, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1218, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1231, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1244, .adv_w = 154, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1258, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1271, .adv_w = 154, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1284, .adv_w = 119, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1291, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1303, .adv_w = 148, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 148, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1329, .adv_w = 148, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1343, .adv_w = 148, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1356, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1369, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1379, .adv_w = 142, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1389, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1399, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1409, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1419, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1429, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 120, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1448, .adv_w = 189, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1459, .adv_w = 117, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1469, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1479, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1489, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1499, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1509, .adv_w = 61, .box_w = 4, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1515, .adv_w = 61, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1521, .adv_w = 61, .box_w = 6, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1530, .adv_w = 61, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1537, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1547, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1556, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1566, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1576, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1586, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1596, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1606, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 1613, .adv_w = 126, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1622, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1631, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1640, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1649, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1658, .adv_w = 113, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1671, .adv_w = 127, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1684, .adv_w = 113, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1697, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1712, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1722, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1738, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1748, .adv_w = 147, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1761, .adv_w = 117, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1771, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1784, .adv_w = 141, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1795, .adv_w = 126, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1808, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1818, .adv_w = 66, .box_w = 6, .box_h = 13, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1828, .adv_w = 61, .box_w = 6, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1837, .adv_w = 121, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1849, .adv_w = 59, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1856, .adv_w = 158, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1869, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1878, .adv_w = 144, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1890, .adv_w = 82, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1896, .adv_w = 138, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1909, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1918, .adv_w = 148, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1931, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1940, .adv_w = 148, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1953, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1962, .adv_w = 136, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1975, .adv_w = 114, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1984, .adv_w = 158, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1998, .adv_w = 130, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2007, .adv_w = 160, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2023, .adv_w = 136, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2034, .adv_w = 151, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2051, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2062, .adv_w = 210, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2084, .adv_w = 189, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2100, .adv_w = 154, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2114, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2125, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -5, .ofs_y = 10},
    {.bitmap_index = 2126, .adv_w = 0, .box_w = 5, .box_h = 2, .ofs_x = -6, .ofs_y = 9},
    {.bitmap_index = 2128, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -5, .ofs_y = 9},
    {.bitmap_index = 2130, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -5, .ofs_y = -2},
    {.bitmap_index = 2131, .adv_w = 123, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 2134, .adv_w = 151, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2147, .adv_w = 137, .box_w = 10, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2161, .adv_w = 169, .box_w = 11, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2177, .adv_w = 76, .box_w = 5, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2184, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2198, .adv_w = 150, .box_w = 11, .box_h = 11, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 2214, .adv_w = 153, .box_w = 10, .box_h = 11, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2228, .adv_w = 75, .box_w = 6, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2237, .adv_w = 126, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2248, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2258, .adv_w = 126, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2269, .adv_w = 75, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2274, .adv_w = 122, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2283, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2293, .adv_w = 122, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2302, .adv_w = 184, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2316, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2328, .adv_w = 142, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2341, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2348, .adv_w = 126, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2357, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2373, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2383, .adv_w = 196, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2401, .adv_w = 194, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2417, .adv_w = 196, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2437, .adv_w = 165, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2451, .adv_w = 151, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2466, .adv_w = 120, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2475, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2491, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2502, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2518, .adv_w = 120, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2532, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2548, .adv_w = 120, .box_w = 8, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 2560, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2576, .adv_w = 120, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2587, .adv_w = 151, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2604, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2615, .adv_w = 151, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2633, .adv_w = 120, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2645, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2661, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2672, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2688, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2699, .adv_w = 151, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2716, .adv_w = 120, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2727, .adv_w = 151, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2744, .adv_w = 120, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2756, .adv_w = 151, .box_w = 9, .box_h = 15, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2773, .adv_w = 120, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2785, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2797, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2807, .adv_w = 126, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2820, .adv_w = 121, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2831, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2843, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2853, .adv_w = 126, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2867, .adv_w = 121, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2879, .adv_w = 126, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2893, .adv_w = 121, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2905, .adv_w = 126, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2918, .adv_w = 121, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2929, .adv_w = 126, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2943, .adv_w = 121, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2954, .adv_w = 126, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2968, .adv_w = 121, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2981, .adv_w = 66, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2987, .adv_w = 61, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2992, .adv_w = 66, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2996, .adv_w = 59, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 3000, .adv_w = 154, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3014, .adv_w = 126, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3024, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3039, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3050, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3065, .adv_w = 126, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3077, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3092, .adv_w = 126, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3104, .adv_w = 154, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3118, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3129, .adv_w = 154, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3144, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3155, .adv_w = 154, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3171, .adv_w = 126, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3184, .adv_w = 158, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3201, .adv_w = 130, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3212, .adv_w = 158, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3229, .adv_w = 130, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3240, .adv_w = 158, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3259, .adv_w = 130, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3271, .adv_w = 158, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3288, .adv_w = 130, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3299, .adv_w = 158, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3317, .adv_w = 130, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3329, .adv_w = 148, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3343, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3352, .adv_w = 148, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3367, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3376, .adv_w = 160, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3394, .adv_w = 136, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3407, .adv_w = 160, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3425, .adv_w = 136, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3438, .adv_w = 160, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3459, .adv_w = 136, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3473, .adv_w = 160, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3491, .adv_w = 136, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3504, .adv_w = 160, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3524, .adv_w = 136, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 3537, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3550, .adv_w = 113, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3563, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 3576, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3585, .adv_w = 139, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3601, .adv_w = 113, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3615, .adv_w = 139, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3628, .adv_w = 113, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3641, .adv_w = 162, .box_w = 12, .box_h = 11, .ofs_x = -3, .ofs_y = 0},
    {.bitmap_index = 3658, .adv_w = 88, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 3659, .adv_w = 88, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 3660, .adv_w = 141, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3661, .adv_w = 171, .box_w = 9, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3663, .adv_w = 52, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 3665, .adv_w = 51, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 3667, .adv_w = 90, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 3670, .adv_w = 91, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 3673, .adv_w = 121, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3684, .adv_w = 130, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 3698, .adv_w = 166, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3699, .adv_w = 215, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3717, .adv_w = 36, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 3718, .adv_w = 71, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 7}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x2, 0xd};

static const uint16_t unicode_list_3[] = {
    0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0xe, 0xf,
    0x16, 0x17, 0x26, 0x27, 0x37, 0x38, 0x41, 0x42,
    0x52, 0x53, 0x58, 0x59, 0x66, 0x67, 0x70, 0x71,
    0x77, 0x78, 0x9e, 0x9f, 0xad, 0xae, 0xf8, 0xf9,
    0xfa, 0xfb, 0xfc, 0xfd, 0x1ff, 0x201, 0x207, 0x221,
    0x283, 0x284, 0x286, 0x287, 0x288, 0x28a, 0x28c, 0x28d,
    0x28e, 0x2aa, 0x2ab, 0x2ac, 0x2ad, 0x2ae, 0x2ca, 0x2cb,
    0x2cc, 0x301, 0x30a, 0x351, 0x35a, 0x1cfe, 0x1cff, 0x1d3c,
    0x1d3d, 0x1d80, 0x1d81};

static const uint16_t unicode_list_5[] = {
    0x0, 0xc3, 0xc4, 0xc6, 0xc7, 0xcb, 0xcc, 0xcf,
    0xd0, 0xd3, 0xd4, 0xd9, 0xe3, 0xe5, 0xe6};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
    {
        {.range_start = 0, .range_length = 14, .glyph_id_start = 1, .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY},
        {.range_start = 32, .range_length = 95, .glyph_id_start = 4, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 160, .range_length = 96, .glyph_id_start = 99, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 258, .range_length = 7554, .glyph_id_start = 195, .unicode_list = unicode_list_3, .glyph_id_ofs_list = NULL, .list_length = 67, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY},
        {.range_start = 7840, .range_length = 90, .glyph_id_start = 262, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 8013, .range_length = 231, .glyph_id_start = 352, .unicode_list = unicode_list_5, .glyph_id_ofs_list = NULL, .list_length = 15, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
    {
        0, 0, 0, 0, 1, 0, 2, 0,
        0, 0, 0, 2, 3, 0, 0, 0,
        4, 0, 4, 5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 6, 7, 8,
        9, 10, 11, 0, 12, 12, 13, 14,
        15, 12, 12, 9, 16, 17, 18, 0,
        19, 13, 20, 21, 22, 23, 24, 25,
        0, 0, 0, 0, 0, 26, 27, 28,
        0, 29, 30, 0, 31, 0, 0, 32,
        0, 33, 33, 34, 27, 0, 35, 0,
        36, 0, 37, 38, 39, 37, 40, 41,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 6, 6, 6, 6, 6,
        6, 0, 8, 10, 10, 10, 10, 12,
        12, 12, 12, 9, 12, 9, 9, 9,
        9, 9, 0, 0, 13, 13, 13, 13,
        23, 0, 0, 26, 26, 26, 26, 26,
        26, 0, 28, 29, 29, 29, 29, 0,
        0, 0, 0, 0, 33, 34, 34, 34,
        34, 34, 0, 0, 0, 0, 0, 0,
        37, 27, 37, 6, 26, 6, 26, 8,
        28, 9, 0, 10, 29, 12, 0, 15,
        0, 12, 33, 0, 35, 0, 0, 13,
        0, 13, 0, 24, 40, 0, 0, 0,
        0, 6, 26, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 6, 10, 12, 12,
        9, 23, 0, 0, 0, 0, 33, 0,
        0, 34, 0, 0, 42, 14, 43, 0,
        6, 26, 12, 33, 21, 0, 6, 26,
        6, 26, 6, 26, 6, 26, 6, 26,
        6, 26, 6, 26, 6, 26, 6, 26,
        6, 26, 6, 26, 6, 26, 10, 29,
        10, 29, 10, 29, 10, 29, 10, 29,
        10, 29, 10, 29, 10, 29, 12, 0,
        12, 0, 9, 34, 9, 34, 9, 34,
        9, 34, 9, 34, 9, 34, 9, 34,
        0, 0, 0, 0, 0, 0, 0, 34,
        0, 0, 13, 0, 13, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        23, 37, 23, 37, 23, 37, 23, 37,
        9, 0, 0, 0, 0, 2, 2, 2,
        2, 0, 0, 4, 0, 2, 2};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
    {
        0, 0, 0, 0, 1, 0, 2, 0,
        0, 0, 3, 2, 0, 4, 5, 0,
        6, 7, 6, 8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 9, 0, 10, 0, 11,
        0, 0, 0, 11, 0, 0, 12, 0,
        0, 0, 0, 11, 0, 11, 0, 13,
        14, 15, 16, 17, 18, 19, 20, 0,
        0, 21, 0, 0, 0, 22, 0, 23,
        23, 23, 24, 23, 0, 0, 0, 0,
        0, 25, 25, 26, 25, 23, 27, 28,
        29, 30, 31, 32, 33, 31, 34, 0,
        0, 35, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 36, 0,
        7, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 37, 0,
        0, 0, 0, 10, 10, 10, 10, 10,
        10, 38, 11, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 11, 11, 11,
        11, 11, 0, 11, 15, 15, 15, 15,
        19, 0, 0, 22, 22, 22, 22, 22,
        22, 39, 23, 23, 23, 23, 23, 0,
        0, 0, 0, 0, 25, 26, 26, 26,
        26, 26, 0, 40, 30, 30, 30, 30,
        31, 0, 31, 10, 22, 10, 22, 11,
        23, 0, 0, 0, 23, 0, 0, 0,
        0, 0, 25, 0, 0, 13, 28, 15,
        30, 15, 30, 20, 34, 11, 23, 41,
        30, 10, 22, 0, 0, 11, 0, 0,
        0, 0, 0, 0, 10, 0, 0, 0,
        11, 19, 0, 0, 23, 0, 25, 0,
        30, 26, 30, 0, 0, 0, 25, 25,
        10, 22, 0, 25, 17, 0, 10, 22,
        10, 22, 10, 22, 10, 22, 10, 22,
        10, 22, 10, 22, 10, 22, 10, 22,
        10, 22, 10, 22, 10, 22, 0, 23,
        0, 23, 0, 23, 0, 23, 0, 23,
        0, 23, 0, 23, 0, 23, 0, 0,
        0, 0, 11, 26, 11, 26, 11, 26,
        11, 26, 11, 26, 11, 26, 11, 26,
        11, 23, 11, 23, 11, 23, 11, 26,
        11, 23, 15, 30, 15, 30, 0, 30,
        0, 30, 0, 30, 0, 30, 0, 30,
        19, 31, 19, 31, 19, 31, 19, 31,
        0, 0, 0, 7, 7, 2, 42, 2,
        2, 0, 0, 6, 0, 2, 2};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
    {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -6, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -7, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -7, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 2, 4, 0, 2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -27,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -27,
        0, 0, 0, 0, 0, 0, 0, -26,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -13, 0, 0, 0, 0,
        0, 0, -8, 0, -2, 0, 0, -13,
        -2, -9, -5, 0, -14, 0, 0, 0,
        0, 0, -4, -1, 0, 0, -2, -1,
        -5, -4, 0, 1, 0, 0, 0, 0,
        0, 0, -2, -13, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, 0, -3, 0, 0, -6, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, 0, 0,
        0, 0, -1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -13, 0, 0,
        0, -2, 0, 0, 0, -7, 0, -2,
        0, -2, -5, -3, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -4, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, -2, 0, -2, 0, 0, 0, -2,
        -3, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -29, 0, 0, 0, -20, 0, -25,
        0, 2, 0, 0, 0, 0, 0, 0,
        0, -4, -2, 0, 0, -2, -3, 0,
        0, -2, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, 0, 0, -3, 0, 0, 0, 2,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -14, 0, 0, 0, -3, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -3, 0, -1, -3, 0, 0, 0, -3,
        -4, -7, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 2, -7, 0,
        0, -25, -4, -21, -12, 0, -29, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, -14, -7, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -41, 0, 0, 0, -18,
        0, -21, 0, 0, 0, 0, 0, -5,
        0, -4, 0, -1, -1, 0, 0, -1,
        0, 0, 2, 0, 2, 0, 0, 0,
        0, 0, 0, -25, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -4, 0, -3,
        -2, 0, -4, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -7,
        0, -2, 0, 0, -5, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -6, 0, 0, 0,
        0, -27, -28, 0, 0, -12, -3, -24,
        -2, 2, 0, 2, 2, 0, 2, 0,
        0, -16, -10, 0, -10, -19, -7, -10,
        0, -8, -9, -5, -8, -7, 0, -23,
        -18, -20, -10, -10, 0, 0, 0, 0,
        0, 2, 0, -24, -13, 0, 0, -8,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 2, -5, -5, 0, 0, -5,
        -3, 0, 0, -3, -1, 0, 0, 0,
        2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 2, 0, -15, -7, 0,
        0, -5, 0, 0, 0, 2, 0, 0,
        0, 0, 0, 0, 1, -4, -3, 0,
        0, -3, -2, 0, 0, -2, 0, 0,
        0, 0, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -13, 0, 0, 0, -3, 0, 0, 0,
        0, 2, 0, 0, 0, 0, 0, 0,
        -3, 0, 0, -2, 0, 0, 0, -2,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -3, 2,
        -5, -25, -13, 0, 0, -14, -3, -10,
        -2, 2, -10, 2, 2, 1, 2, 0,
        2, -7, -7, -2, -4, -7, -4, -6,
        -2, -4, -2, 0, -3, -3, 2, -9,
        -6, -10, -7, -7, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, -2,
        0, 0, 0, -2, -3, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, 0, 0, -2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -4, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -4, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -1, 0, -2, -2, 0, 0,
        0, 0, 0, 0, 0, -3, 0, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -1,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -1, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, 0, 2, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 2, 0,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 2, 0, 0, 0,
        0, 0, 0, 2, 0, -10, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -10, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -10, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -12, 0, -11, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, -2, -2, 0, 0, 0, 0,
        0, 0, 0, -11, 0, 2, 0, 0,
        0, -17, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -4, -2, 2, 0, -3, 0, 0,
        5, 0, 2, 2, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -3,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, 2, 0, 0, 0, -16, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -2, -1, 1,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 2, 0, 0, 0, 0, 0, -14,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -2, 0, 0, -4, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, -2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, 0, 0, -2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -48,
        -50, 0, 0, -22, -7, 0, -5, 1,
        0, 1, 1, 0, 1, 0, 0, -19,
        -19, 0, -20, -18, -15, -19, 0, -16,
        -17, -11, -16, -13, 0, -40, -33, -37,
        -19, -20, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -2, 0, 0, -2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
    {
        .class_pair_values = kern_class_values,
        .left_class_mapping = kern_left_class_mapping,
        .right_class_mapping = kern_right_class_mapping,
        .left_class_cnt = 43,
        .right_class_cnt = 42,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 6,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t roboto_bold_14 = {
#else
lv_font_t roboto_bold_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 18,                              /*The maximum line height required by the font*/
    .base_line = 3,                                 /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif

    .dsc = &font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if ROBOTO_BOLD_14*/
