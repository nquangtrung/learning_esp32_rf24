/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: --bpp 1 --size 12 --no-compress --stride 1 --align 1 --font Roboto-Regular.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o roboto_regular_12.c
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

#ifndef ROBOTO_REGULAR_12
#define ROBOTO_REGULAR_12 1
#endif

#if ROBOTO_REGULAR_12

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
    0xfc, 0x80,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x28, 0xaf, 0xca, 0x4b, 0xf5, 0x14, 0x50,

    /* U+0024 "$" */
    0x10, 0x43, 0x9b, 0x45, 0x3, 0x3, 0x45, 0xf3,
    0x84,

    /* U+0025 "%" */
    0x60, 0x94, 0x94, 0x68, 0x10, 0x16, 0x29, 0x29,
    0x6,

    /* U+0026 "&" */
    0x30, 0x91, 0x23, 0x86, 0x12, 0xa7, 0x44, 0x74,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x91, 0x22,

    /* U+0029 ")" */
    0x89, 0x12, 0x49, 0x25, 0x28,

    /* U+002A "*" */
    0x21, 0x3e, 0xc5, 0x0,

    /* U+002B "+" */
    0x21, 0x9, 0xf2, 0x10, 0x80,

    /* U+002C "," */
    0x54,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x10, 0x84, 0x42, 0x11, 0x8, 0x44, 0x0,

    /* U+0030 "0" */
    0x74, 0x63, 0x18, 0xc6, 0x3b, 0x70,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49, 0x20,

    /* U+0032 "2" */
    0x74, 0x62, 0x11, 0x11, 0x88, 0xf8,

    /* U+0033 "3" */
    0x74, 0x42, 0x33, 0x4, 0x31, 0x70,

    /* U+0034 "4" */
    0x8, 0x62, 0x8a, 0x4b, 0x2f, 0xc2, 0x8,

    /* U+0035 "5" */
    0xfc, 0x21, 0xe1, 0x86, 0x31, 0x70,

    /* U+0036 "6" */
    0x32, 0x21, 0xe8, 0xc6, 0x39, 0x70,

    /* U+0037 "7" */
    0xfc, 0x10, 0x82, 0x10, 0x43, 0x8, 0x20,

    /* U+0038 "8" */
    0x74, 0x63, 0xb7, 0x46, 0x31, 0x70,

    /* U+0039 "9" */
    0x74, 0xe3, 0x18, 0xbc, 0x22, 0x60,

    /* U+003A ":" */
    0x82,

    /* U+003B ";" */
    0x87,

    /* U+003C "<" */
    0x9, 0xb1, 0xc3, 0x84,

    /* U+003D "=" */
    0xf8, 0x1, 0xf0,

    /* U+003E ">" */
    0x83, 0x6, 0x7e, 0x40,

    /* U+003F "?" */
    0x72, 0x42, 0x11, 0x10, 0x80, 0x20,

    /* U+0040 "@" */
    0x1f, 0x8, 0x64, 0xb, 0x39, 0x92, 0x64, 0x99,
    0x26, 0x5b, 0x9b, 0x90, 0x6, 0x0, 0xf8,

    /* U+0041 "A" */
    0x10, 0x70, 0xa1, 0x46, 0xc8, 0xbf, 0x41, 0x82,

    /* U+0042 "B" */
    0xfa, 0x18, 0x61, 0xfa, 0x18, 0x61, 0xf8,

    /* U+0043 "C" */
    0x39, 0x18, 0x60, 0x82, 0x8, 0x51, 0x38,

    /* U+0044 "D" */
    0xf2, 0x28, 0x61, 0x86, 0x18, 0x62, 0xf0,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0xf8,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0x80,

    /* U+0047 "G" */
    0x3c, 0x8e, 0x4, 0x8, 0xf0, 0x60, 0xa1, 0x3c,

    /* U+0048 "H" */
    0x83, 0x6, 0xc, 0x1f, 0xf0, 0x60, 0xc1, 0x82,

    /* U+0049 "I" */
    0xff, 0x80,

    /* U+004A "J" */
    0x4, 0x10, 0x41, 0x4, 0x14, 0x51, 0x78,

    /* U+004B "K" */
    0x8e, 0x69, 0x28, 0xe2, 0x49, 0xa2, 0x84,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x42, 0x10, 0xf8,

    /* U+004D "M" */
    0xc3, 0xc3, 0xc3, 0xa5, 0xa5, 0xa5, 0x99, 0x99,
    0x99,

    /* U+004E "N" */
    0x83, 0x87, 0x8d, 0x99, 0x33, 0x63, 0xc3, 0x82,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x20, 0x80,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x3c,
    0xc,

    /* U+0052 "R" */
    0xfa, 0x18, 0x61, 0xfa, 0x68, 0xa3, 0x84,

    /* U+0053 "S" */
    0x3c, 0x8d, 0xb, 0x1, 0x80, 0xd0, 0xa1, 0x3c,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+0056 "V" */
    0xc2, 0x85, 0x1b, 0x22, 0x45, 0x8e, 0xc, 0x18,

    /* U+0057 "W" */
    0xc4, 0x53, 0x14, 0xa5, 0x2b, 0x4a, 0x8c, 0xa3,
    0x18, 0xc6, 0x31, 0x0,

    /* U+0058 "X" */
    0x42, 0xc8, 0xb0, 0xc1, 0x7, 0xb, 0x32, 0x42,

    /* U+0059 "Y" */
    0xc6, 0x89, 0xb1, 0x43, 0x82, 0x4, 0x8, 0x10,

    /* U+005A "Z" */
    0xfc, 0x10, 0x84, 0x20, 0x84, 0x20, 0xfc,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xc0,

    /* U+005C "\\" */
    0x82, 0x10, 0xc2, 0x10, 0x42, 0x10, 0x40,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0xc0,

    /* U+005E "^" */
    0x21, 0x14, 0xa5, 0x0,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0x4c,

    /* U+0061 "a" */
    0x74, 0x42, 0xf8, 0xc5, 0xe0,

    /* U+0062 "b" */
    0x84, 0x21, 0xe9, 0xc6, 0x31, 0x9f, 0x80,

    /* U+0063 "c" */
    0x7b, 0x28, 0x20, 0x83, 0x27, 0x0,

    /* U+0064 "d" */
    0x8, 0x42, 0xfc, 0xc6, 0x31, 0xcb, 0xc0,

    /* U+0065 "e" */
    0x73, 0x28, 0xbf, 0x83, 0x27, 0x80,

    /* U+0066 "f" */
    0x34, 0x4e, 0x44, 0x44, 0x44,

    /* U+0067 "g" */
    0x7e, 0x63, 0x18, 0xe5, 0xe1, 0x8b, 0x80,

    /* U+0068 "h" */
    0x84, 0x21, 0xe8, 0xc6, 0x31, 0x8c, 0x40,

    /* U+0069 "i" */
    0xbf, 0x80,

    /* U+006A "j" */
    0x45, 0x55, 0x57,

    /* U+006B "k" */
    0x84, 0x21, 0x2b, 0x73, 0x94, 0x94, 0x40,

    /* U+006C "l" */
    0xff, 0xc0,

    /* U+006D "m" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x8c, 0x46, 0x22,

    /* U+006E "n" */
    0xf4, 0x63, 0x18, 0xc6, 0x20,

    /* U+006F "o" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x80,

    /* U+0070 "p" */
    0xf4, 0xe3, 0x18, 0xcf, 0xd0, 0x84, 0x0,

    /* U+0071 "q" */
    0x7e, 0x63, 0x18, 0xe5, 0xe1, 0x8, 0x40,

    /* U+0072 "r" */
    0xf2, 0x49, 0x20,

    /* U+0073 "s" */
    0x74, 0x60, 0xe0, 0xc5, 0xc0,

    /* U+0074 "t" */
    0x4b, 0xa4, 0x92, 0x60,

    /* U+0075 "u" */
    0x8c, 0x63, 0x18, 0xc5, 0xe0,

    /* U+0076 "v" */
    0x89, 0x24, 0x94, 0x30, 0xc2, 0x0,

    /* U+0077 "w" */
    0x88, 0xa4, 0x95, 0x4a, 0xa5, 0x51, 0x10, 0x88,

    /* U+0078 "x" */
    0x49, 0x23, 0xc, 0x31, 0x24, 0x80,

    /* U+0079 "y" */
    0x89, 0x24, 0x94, 0x30, 0xc3, 0x8, 0x23, 0x0,

    /* U+007A "z" */
    0xf8, 0xc4, 0x44, 0x63, 0xe0,

    /* U+007B "{" */
    0x29, 0x24, 0xa2, 0x49, 0x22,

    /* U+007C "|" */
    0xff, 0xe0,

    /* U+007D "}" */
    0x89, 0x24, 0x8b, 0x49, 0x28,

    /* U+007E "~" */
    0xe6, 0x70,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0x9f, 0x80,

    /* U+00A2 "¢" */
    0x20, 0x87, 0xbe, 0x8a, 0x8, 0xfe, 0x70, 0x82,
    0x0,

    /* U+00A3 "£" */
    0x39, 0x34, 0x10, 0xf1, 0x4, 0x10, 0xfc,

    /* U+00A4 "¤" */
    0xba, 0x8a, 0xc, 0x18, 0x30, 0x71, 0xdd,

    /* U+00A5 "¥" */
    0x8a, 0x25, 0x14, 0xf8, 0x8f, 0x88, 0x20,

    /* U+00A6 "¦" */
    0xfb, 0xe0,

    /* U+00A7 "§" */
    0x7a, 0x38, 0x70, 0x72, 0x38, 0x71, 0x38, 0x38,
    0x71, 0x78,

    /* U+00A8 "¨" */
    0xa0,

    /* U+00A9 "©" */
    0x3c, 0x66, 0xda, 0xa5, 0xa1, 0xa1, 0xa5, 0x5a,
    0x66, 0x3c,

    /* U+00AA "ª" */
    0x75, 0x79, 0x70,

    /* U+00AB "«" */
    0x5a, 0xaa, 0x50,

    /* U+00AC "¬" */
    0xf8, 0x42,

    /* U+00AD "­" */
    0xe0,

    /* U+00AE "®" */
    0x3c, 0x66, 0xfa, 0xa5, 0xa5, 0xbd, 0xa5, 0x66,
    0x66, 0x3c,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0xf7, 0x80,

    /* U+00B1 "±" */
    0x21, 0x9, 0xf2, 0x10, 0x1f,

    /* U+00B2 "²" */
    0xea, 0x24, 0xf0,

    /* U+00B3 "³" */
    0xe5, 0x9e,

    /* U+00B4 "´" */
    0x60,

    /* U+00B5 "µ" */
    0x8c, 0x63, 0x18, 0xc7, 0xf0, 0x84, 0x0,

    /* U+00B6 "¶" */
    0x3b, 0xde, 0xf7, 0x9c, 0x21, 0x8,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0xdc,

    /* U+00B9 "¹" */
    0x35, 0x40,

    /* U+00BA "º" */
    0x69, 0x99, 0x60,

    /* U+00BB "»" */
    0xaa, 0x55, 0xa0,

    /* U+00BC "¼" */
    0xc0, 0x44, 0x48, 0x48, 0x52, 0x16, 0x2a, 0x4f,
    0x2,

    /* U+00BD "½" */
    0xc0, 0x44, 0x48, 0x50, 0x57, 0x29, 0x22, 0x44,
    0xf,

    /* U+00BE "¾" */
    0xe0, 0x24, 0x64, 0xa8, 0xf2, 0x16, 0x2a, 0x2f,
    0x2,

    /* U+00BF "¿" */
    0x30, 0x8, 0x46, 0x62, 0x10, 0x9b, 0x80,

    /* U+00C0 "À" */
    0x20, 0x60, 0x0, 0x83, 0x85, 0xa, 0x36, 0x45,
    0xfa, 0xc, 0x10,

    /* U+00C1 "Á" */
    0x8, 0x30, 0x0, 0x83, 0x85, 0xa, 0x36, 0x45,
    0xfa, 0xc, 0x10,

    /* U+00C2 "Â" */
    0x10, 0x50, 0x0, 0x83, 0x85, 0xa, 0x36, 0x45,
    0xfa, 0xc, 0x10,

    /* U+00C3 "Ã" */
    0x34, 0xb0, 0x0, 0x83, 0x85, 0xa, 0x36, 0x45,
    0xfa, 0xc, 0x10,

    /* U+00C4 "Ä" */
    0x48, 0x0, 0x41, 0xc2, 0x85, 0x1b, 0x22, 0xfd,
    0x6, 0x8,

    /* U+00C5 "Å" */
    0x10, 0x50, 0xa1, 0x81, 0x7, 0xa, 0x14, 0x6c,
    0x89, 0xf4, 0x18, 0x20,

    /* U+00C6 "Æ" */
    0x7, 0xe0, 0xc0, 0x28, 0xd, 0x1, 0x3c, 0x64,
    0xf, 0x82, 0x10, 0x43, 0xe0,

    /* U+00C7 "Ç" */
    0x38, 0x8a, 0x14, 0x8, 0x10, 0x21, 0x22, 0x38,
    0x20, 0x20, 0x80,

    /* U+00C8 "È" */
    0x41, 0x1, 0xf8, 0x42, 0x1f, 0x84, 0x21, 0xf0,

    /* U+00C9 "É" */
    0x11, 0x1, 0xf8, 0x42, 0x1f, 0x84, 0x21, 0xf0,

    /* U+00CA "Ê" */
    0x22, 0x81, 0xf8, 0x42, 0x1f, 0x84, 0x21, 0xf0,

    /* U+00CB "Ë" */
    0x58, 0x3f, 0x8, 0x43, 0xf0, 0x84, 0x3e,

    /* U+00CC "Ì" */
    0x91, 0x55, 0x55,

    /* U+00CD "Í" */
    0x62, 0xaa, 0xaa,

    /* U+00CE "Î" */
    0x54, 0x24, 0x92, 0x49, 0x20,

    /* U+00CF "Ï" */
    0xb0, 0x44, 0x44, 0x44, 0x44, 0x40,

    /* U+00D0 "Ð" */
    0x78, 0x89, 0xa, 0x1f, 0x28, 0x50, 0xa2, 0x78,

    /* U+00D1 "Ñ" */
    0x24, 0xb0, 0x4, 0x1c, 0x3c, 0x6c, 0xc9, 0x9b,
    0x1e, 0x1c, 0x10,

    /* U+00D2 "Ò" */
    0x20, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00D3 "Ó" */
    0x8, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00D4 "Ô" */
    0x10, 0x50, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00D5 "Õ" */
    0x34, 0xb0, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+00D6 "Ö" */
    0x68, 0x0, 0xe2, 0x28, 0x30, 0x60, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+00D7 "×" */
    0x8e, 0x98, 0xe9, 0x0,

    /* U+00D8 "Ø" */
    0x2, 0x79, 0x14, 0x59, 0x32, 0x68, 0xd1, 0x44,
    0xf2, 0x0,

    /* U+00D9 "Ù" */
    0x20, 0x80, 0x21, 0x86, 0x18, 0x61, 0x86, 0x1c,
    0xde,

    /* U+00DA "Ú" */
    0x10, 0x40, 0x21, 0x86, 0x18, 0x61, 0x86, 0x1c,
    0xde,

    /* U+00DB "Û" */
    0x31, 0x40, 0x21, 0x86, 0x18, 0x61, 0x86, 0x1c,
    0xde,

    /* U+00DC "Ü" */
    0x48, 0x8, 0x61, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x80,

    /* U+00DD "Ý" */
    0x8, 0x20, 0x6, 0x34, 0x4d, 0x8a, 0x1c, 0x10,
    0x20, 0x40, 0x80,

    /* U+00DE "Þ" */
    0x82, 0xf, 0xa1, 0x86, 0x1f, 0xa0, 0x80,

    /* U+00DF "ß" */
    0x62, 0x49, 0x24, 0x92, 0x48, 0xa1, 0x86, 0xe0,

    /* U+00E0 "à" */
    0x61, 0x0, 0xe8, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+00E1 "á" */
    0x11, 0x0, 0xe8, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+00E2 "â" */
    0x32, 0x80, 0xe8, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+00E3 "ã" */
    0x6c, 0x80, 0xe8, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+00E4 "ä" */
    0x50, 0x1d, 0x10, 0xbe, 0x31, 0x78,

    /* U+00E5 "å" */
    0x72, 0x9c, 0x7, 0x44, 0x2f, 0x8c, 0x5e,

    /* U+00E6 "æ" */
    0x77, 0x66, 0x42, 0x2f, 0xf8, 0x84, 0x65, 0xdc,

    /* U+00E7 "ç" */
    0x7b, 0x28, 0x20, 0x83, 0x27, 0xc, 0x10, 0xc0,

    /* U+00E8 "è" */
    0x60, 0x80, 0x1c, 0xca, 0x2f, 0xe0, 0xc9, 0xe0,

    /* U+00E9 "é" */
    0x10, 0x80, 0x1c, 0xca, 0x2f, 0xe0, 0xc9, 0xe0,

    /* U+00EA "ê" */
    0x31, 0x40, 0x1c, 0xca, 0x2f, 0xe0, 0xc9, 0xe0,

    /* U+00EB "ë" */
    0xd0, 0x7, 0x32, 0x8b, 0xf8, 0x32, 0x78,

    /* U+00EC "ì" */
    0x91, 0x55, 0x50,

    /* U+00ED "í" */
    0x62, 0xaa, 0xa0,

    /* U+00EE "î" */
    0x54, 0x24, 0x92, 0x48,

    /* U+00EF "ï" */
    0xa1, 0x24, 0x92, 0x40,

    /* U+00F0 "ð" */
    0x41, 0x8c, 0x37, 0xc6, 0x31, 0xdb, 0x80,

    /* U+00F1 "ñ" */
    0x6d, 0x81, 0xe8, 0xc6, 0x31, 0x8c, 0x40,

    /* U+00F2 "ò" */
    0x60, 0x80, 0x1e, 0xce, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00F3 "ó" */
    0x18, 0x40, 0x1e, 0xce, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00F4 "ô" */
    0x31, 0x20, 0x1e, 0xce, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00F5 "õ" */
    0x69, 0x60, 0x1e, 0xce, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00F6 "ö" */
    0xd0, 0x7, 0xb3, 0x86, 0x18, 0x73, 0x78,

    /* U+00F7 "÷" */
    0x20, 0xf, 0xc0, 0x0, 0x80,

    /* U+00F8 "ø" */
    0x9, 0xec, 0xe5, 0xa6, 0x9c, 0xde, 0x0,

    /* U+00F9 "ù" */
    0x41, 0x1, 0x18, 0xc6, 0x31, 0x8b, 0xc0,

    /* U+00FA "ú" */
    0x11, 0x1, 0x18, 0xc6, 0x31, 0x8b, 0xc0,

    /* U+00FB "û" */
    0x22, 0x81, 0x18, 0xc6, 0x31, 0x8b, 0xc0,

    /* U+00FC "ü" */
    0xd0, 0x23, 0x18, 0xc6, 0x31, 0x78,

    /* U+00FD "ý" */
    0x10, 0x40, 0x22, 0x49, 0x25, 0xc, 0x30, 0xc2,
    0x8, 0xc0,

    /* U+00FE "þ" */
    0x84, 0x21, 0xe9, 0xc6, 0x31, 0x9f, 0xa1, 0x8,
    0x0,

    /* U+00FF "ÿ" */
    0x48, 0x8, 0x92, 0x49, 0x43, 0xc, 0x30, 0x82,
    0x30,

    /* U+0102 "Ă" */
    0x0, 0x70, 0x0, 0x83, 0x85, 0xa, 0x36, 0x45,
    0xfa, 0xc, 0x10,

    /* U+0103 "ă" */
    0x4b, 0x80, 0xe0, 0x85, 0xf1, 0x8b, 0xc0,

    /* U+0104 "Ą" */
    0x10, 0x70, 0xa1, 0x46, 0xc8, 0xbf, 0x41, 0x82,
    0x4, 0x10, 0x30,

    /* U+0105 "ą" */
    0x74, 0x42, 0xf8, 0xc5, 0xe2, 0x10, 0xc0,

    /* U+0106 "Ć" */
    0x18, 0x40, 0xe, 0x46, 0x18, 0x20, 0x82, 0x14,
    0x4e,

    /* U+0107 "ć" */
    0x10, 0x80, 0x1e, 0xca, 0x8, 0x20, 0xc9, 0xc0,

    /* U+0110 "Đ" */
    0x78, 0x89, 0xa, 0x1f, 0x28, 0x50, 0xa2, 0x78,

    /* U+0111 "đ" */
    0x8, 0x70, 0x9e, 0xca, 0x28, 0xa2, 0xc9, 0xe0,

    /* U+0118 "Ę" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0xf8, 0x84, 0x30,

    /* U+0119 "ę" */
    0x73, 0x28, 0xbf, 0x83, 0x27, 0x84, 0x20, 0x40,

    /* U+0128 "Ĩ" */
    0x55, 0x80, 0x42, 0x10, 0x84, 0x21, 0x8, 0x40,

    /* U+0129 "ĩ" */
    0x6d, 0x80, 0x42, 0x10, 0x84, 0x21, 0x0,

    /* U+0139 "Ĺ" */
    0x44, 0x1, 0x8, 0x42, 0x10, 0x84, 0x21, 0xf0,

    /* U+013A "ĺ" */
    0x7a, 0xaa, 0xaa, 0x80,

    /* U+0143 "Ń" */
    0xc, 0x20, 0x4, 0x1c, 0x3c, 0x6c, 0xc9, 0x9b,
    0x1e, 0x1c, 0x10,

    /* U+0144 "ń" */
    0x11, 0x1, 0xe8, 0xc6, 0x31, 0x8c, 0x40,

    /* U+0154 "Ŕ" */
    0x18, 0xc0, 0x3e, 0x86, 0x18, 0x7e, 0x9a, 0x28,
    0xe1,

    /* U+0155 "ŕ" */
    0x28, 0x79, 0x24, 0x90,

    /* U+015A "Ś" */
    0xc, 0x10, 0x1, 0xe4, 0x68, 0x58, 0xc, 0x6,
    0x85, 0x9, 0xe0,

    /* U+015B "ś" */
    0x11, 0x0, 0xe8, 0xc1, 0xc1, 0x8b, 0x80,

    /* U+0168 "Ũ" */
    0x69, 0x60, 0x21, 0x86, 0x18, 0x61, 0x86, 0x1c,
    0xde,

    /* U+0169 "ũ" */
    0x6d, 0x81, 0x18, 0xc6, 0x31, 0x8b, 0xc0,

    /* U+0172 "Ų" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x73, 0x78, 0x41,
    0x6,

    /* U+0173 "ų" */
    0x8c, 0x63, 0x18, 0xc5, 0xe2, 0x10, 0xc0,

    /* U+0179 "Ź" */
    0x8, 0x40, 0x3f, 0x4, 0x21, 0x8, 0x21, 0x8,
    0x3f,

    /* U+017A "ź" */
    0x11, 0x1, 0xf1, 0x88, 0x88, 0xc7, 0xc0,

    /* U+01A0 "Ơ" */
    0x1, 0x1, 0x3a, 0x44, 0x82, 0x82, 0x82, 0x82,
    0x82, 0x44, 0x38,

    /* U+01A1 "ơ" */
    0x4, 0xfb, 0x34, 0x28, 0x50, 0xb3, 0x3c,

    /* U+01AF "Ư" */
    0x1, 0x85, 0x86, 0x84, 0x84, 0x84, 0x84, 0x84,
    0xcc, 0x78,

    /* U+01B0 "ư" */
    0x3, 0x16, 0x34, 0x48, 0x91, 0x22, 0x3c,

    /* U+01FA "Ǻ" */
    0x8, 0x10, 0x43, 0xc3, 0x7, 0xe, 0x14, 0x6c,
    0x8b, 0xf4, 0x18, 0x20,

    /* U+01FB "ǻ" */
    0x18, 0xc, 0xa7, 0x44, 0x2f, 0x8c, 0x5e,

    /* U+01FC "Ǽ" */
    0x2, 0x0, 0x80, 0x0, 0x3, 0xf0, 0x60, 0x14,
    0x6, 0x80, 0x9e, 0x32, 0x7, 0xc1, 0x8, 0x21,
    0xf0,

    /* U+01FD "ǽ" */
    0x4, 0x4, 0x0, 0xe, 0xec, 0xc8, 0x45, 0xff,
    0x10, 0x8c, 0xbb, 0x80,

    /* U+01FE "Ǿ" */
    0xc, 0x10, 0x40, 0x13, 0xc8, 0xa2, 0xc9, 0x93,
    0x46, 0x8a, 0x27, 0x90, 0x0,

    /* U+01FF "ǿ" */
    0x10, 0x80, 0x1e, 0xce, 0x5a, 0x69, 0xcd, 0xe0,
    0x0,

    /* U+0301 "́" */
    0x50,

    /* U+0303 "̃" */
    0xdb,

    /* U+0309 "̉" */
    0xd8,

    /* U+0323 "̣" */
    0x80,

    /* U+0385 "΅" */
    0x29,

    /* U+0386 "Ά" */
    0x41, 0x20, 0xe1, 0x42, 0x8d, 0x91, 0x7e, 0x83,
    0x4,

    /* U+0388 "Έ" */
    0x81, 0x7c, 0x81, 0x2, 0x7, 0xc8, 0x10, 0x20,
    0x7c,

    /* U+0389 "Ή" */
    0x80, 0x50, 0x48, 0x24, 0x12, 0x9, 0xfc, 0x82,
    0x41, 0x20, 0x90, 0x40,

    /* U+038A "Ί" */
    0x94, 0x92, 0x49, 0x24,

    /* U+038C "Ό" */
    0x80, 0x9c, 0x22, 0x41, 0x41, 0x41, 0x41, 0x41,
    0x22, 0x1c,

    /* U+038E "Ύ" */
    0x80, 0xe3, 0x22, 0x36, 0x14, 0x1c, 0x8, 0x8,
    0x8, 0x8,

    /* U+038F "Ώ" */
    0x80, 0x9c, 0x22, 0x41, 0x41, 0x41, 0x41, 0x41,
    0x22, 0x77,

    /* U+0390 "ΐ" */
    0x26, 0x40, 0x42, 0x10, 0x84, 0x21, 0x80,

    /* U+03AC "ά" */
    0x10, 0x80, 0x1e, 0xca, 0x28, 0xa2, 0xc9, 0xf0,

    /* U+03AD "έ" */
    0x21, 0x0, 0xe8, 0xc1, 0xd0, 0x8b, 0x80,

    /* U+03AE "ή" */
    0x21, 0x1, 0xe8, 0xc6, 0x31, 0x8c, 0x42, 0x10,
    0x80,

    /* U+03AF "ί" */
    0xa2, 0xaa, 0xb0,

    /* U+03B0 "ΰ" */
    0x24, 0x81, 0x38, 0xc6, 0x31, 0x9b, 0x80,

    /* U+03CC "ό" */
    0x10, 0x80, 0x1e, 0xce, 0x18, 0x61, 0xcd, 0xe0,

    /* U+03CD "ύ" */
    0x21, 0x1, 0x38, 0xc6, 0x31, 0x9b, 0x80,

    /* U+03CE "ώ" */
    0x8, 0x8, 0x0, 0xc2, 0x81, 0x89, 0x89, 0x89,
    0x9d, 0x76,

    /* U+0403 "Ѓ" */
    0x11, 0x1, 0xf8, 0x42, 0x10, 0x84, 0x21, 0x0,

    /* U+040C "Ќ" */
    0x10, 0x80, 0x23, 0x9a, 0x4a, 0x38, 0x92, 0x68,
    0xa1,

    /* U+0453 "ѓ" */
    0x24, 0xf, 0x88, 0x88, 0x88,

    /* U+045C "ќ" */
    0x11, 0x1, 0x39, 0x53, 0x96, 0x94, 0x40,

    /* U+1E00 "Ḁ" */
    0x10, 0x70, 0xa1, 0x46, 0xc8, 0xbf, 0x41, 0x82,
    0x0, 0x61, 0xc0,

    /* U+1E01 "ḁ" */
    0x74, 0x42, 0xf8, 0xc5, 0xe0, 0x63, 0x0,

    /* U+1E3E "Ḿ" */
    0xc, 0x8, 0x0, 0xc3, 0xc3, 0xc3, 0xa5, 0xa5,
    0xa5, 0x99, 0x99, 0x99,

    /* U+1E3F "ḿ" */
    0x4, 0x4, 0x0, 0x1e, 0xe8, 0x8c, 0x46, 0x23,
    0x11, 0x88, 0xc4, 0x40,

    /* U+1E82 "Ẃ" */
    0x2, 0x1, 0x0, 0x3, 0x11, 0x4c, 0x52, 0x94,
    0xad, 0x2a, 0x32, 0x8c, 0x63, 0x18, 0xc4,

    /* U+1E83 "ẃ" */
    0x4, 0x4, 0x0, 0x11, 0x14, 0x92, 0xa9, 0x54,
    0xaa, 0x22, 0x11, 0x0,

    /* U+1EA0 "Ạ" */
    0x10, 0x70, 0xa1, 0x46, 0xc8, 0xbf, 0x41, 0x82,
    0x0, 0xc0,

    /* U+1EA1 "ạ" */
    0x74, 0x42, 0xf8, 0xc5, 0xe0, 0x60,

    /* U+1EA2 "Ả" */
    0x18, 0x10, 0x40, 0x1, 0x7, 0xa, 0x14, 0x6c,
    0x8b, 0xf4, 0x18, 0x20,

    /* U+1EA3 "ả" */
    0x30, 0x88, 0x7, 0x44, 0x2f, 0x8c, 0x5e,

    /* U+1EA4 "Ấ" */
    0x2, 0x24, 0xa0, 0x1, 0x7, 0xa, 0x14, 0x6c,
    0x8b, 0xf4, 0x18, 0x20,

    /* U+1EA5 "ấ" */
    0x4, 0xc5, 0x80, 0x72, 0x20, 0x9e, 0x8a, 0x27,
    0x80,

    /* U+1EA6 "Ầ" */
    0x81, 0x20, 0xa0, 0x1, 0x7, 0xa, 0x14, 0x6c,
    0x8b, 0xf4, 0x18, 0x20,

    /* U+1EA7 "ầ" */
    0x58, 0xa0, 0xe, 0x44, 0x13, 0xd1, 0x44, 0xf0,

    /* U+1EA8 "Ẩ" */
    0x4, 0x79, 0xa0, 0x1, 0x7, 0xa, 0x14, 0x6c,
    0x8b, 0xf4, 0x18, 0x20,

    /* U+1EA9 "ẩ" */
    0xc, 0x13, 0x92, 0x72, 0x20, 0x9e, 0x8a, 0x27,
    0x80,

    /* U+1EAA "Ẫ" */
    0x38, 0x30, 0x43, 0x61, 0x7, 0xa, 0x14, 0x6c,
    0x8b, 0xf4, 0x18, 0x20,

    /* U+1EAB "ẫ" */
    0x70, 0xc, 0x87, 0x44, 0x2f, 0x8c, 0x5e,

    /* U+1EAC "Ậ" */
    0x10, 0x50, 0x0, 0x83, 0x85, 0xa, 0x36, 0x45,
    0xfa, 0xc, 0x10, 0x6, 0x0,

    /* U+1EAD "ậ" */
    0x32, 0x80, 0xe8, 0x85, 0xf1, 0x8b, 0xc0, 0xc0,

    /* U+1EAE "Ắ" */
    0x8, 0x20, 0xe0, 0x1, 0x7, 0xa, 0x14, 0x6c,
    0x8b, 0xf4, 0x18, 0x20,

    /* U+1EAF "ắ" */
    0x11, 0x1c, 0x7, 0x44, 0x2f, 0x8c, 0x5e,

    /* U+1EB0 "Ằ" */
    0x20, 0x20, 0xe0, 0x1, 0x7, 0xa, 0x14, 0x6c,
    0x8b, 0xf4, 0x18, 0x20,

    /* U+1EB1 "ằ" */
    0x1, 0x1c, 0x7, 0x44, 0x2f, 0x8c, 0x5e,

    /* U+1EB2 "Ẳ" */
    0x18, 0x10, 0x41, 0xc0, 0x2, 0xe, 0x14, 0x28,
    0xd9, 0x17, 0xe8, 0x30, 0x40,

    /* U+1EB3 "ẳ" */
    0x30, 0x88, 0xe0, 0x3a, 0x21, 0x7c, 0x62, 0xf0,

    /* U+1EB4 "Ẵ" */
    0x38, 0x10, 0xe0, 0x1, 0x7, 0xa, 0x14, 0x6c,
    0x8b, 0xf4, 0x18, 0x20,

    /* U+1EB5 "ẵ" */
    0x70, 0x1c, 0x7, 0x44, 0x2f, 0x8c, 0x5e,

    /* U+1EB6 "Ặ" */
    0x0, 0x70, 0x0, 0x83, 0x85, 0xa, 0x36, 0x45,
    0xfa, 0xc, 0x10, 0x6, 0x0,

    /* U+1EB7 "ặ" */
    0x4b, 0x80, 0xe0, 0x85, 0xf1, 0x8b, 0xc0, 0xc0,

    /* U+1EB8 "Ẹ" */
    0xfc, 0x21, 0xf, 0xc2, 0x10, 0xf8, 0x8,

    /* U+1EB9 "ẹ" */
    0x73, 0x28, 0xbf, 0x83, 0x27, 0x80, 0x20,

    /* U+1EBA "Ẻ" */
    0x30, 0x88, 0xf, 0xc2, 0x10, 0xfc, 0x21, 0xf,
    0x80,

    /* U+1EBB "ẻ" */
    0x30, 0x42, 0x0, 0x73, 0x28, 0xbf, 0x83, 0x27,
    0x80,

    /* U+1EBC "Ẽ" */
    0x6d, 0x81, 0xf8, 0x42, 0x1f, 0x84, 0x21, 0xf0,

    /* U+1EBD "ẽ" */
    0x6a, 0x60, 0x1c, 0xca, 0x2f, 0xe0, 0xc9, 0xe0,

    /* U+1EBE "Ế" */
    0x4, 0xa5, 0x0, 0xfa, 0x8, 0x20, 0xfa, 0x8,
    0x20, 0xf8,

    /* U+1EBF "ế" */
    0x4, 0x69, 0x60, 0x7, 0x19, 0x22, 0x7e, 0x81,
    0x91, 0xe0,

    /* U+1EC0 "Ề" */
    0x81, 0x42, 0x80, 0x7d, 0x4, 0x10, 0x7d, 0x4,
    0x10, 0x7c,

    /* U+1EC1 "ề" */
    0x80, 0xb0, 0xb0, 0x3, 0x8c, 0x91, 0x3f, 0x40,
    0xc8, 0xf0,

    /* U+1EC2 "Ể" */
    0xc, 0xe5, 0x80, 0xfe, 0x8, 0x20, 0xfa, 0x8,
    0x20, 0xfc,

    /* U+1EC3 "ể" */
    0xc, 0x13, 0x92, 0x73, 0x28, 0xbf, 0x83, 0x27,
    0x80,

    /* U+1EC4 "Ễ" */
    0x70, 0x1c, 0xf, 0xc2, 0x10, 0xfc, 0x21, 0xf,
    0x80,

    /* U+1EC5 "ễ" */
    0x70, 0x3, 0x10, 0x73, 0x28, 0xbf, 0x83, 0x27,
    0x80,

    /* U+1EC6 "Ệ" */
    0x22, 0x81, 0xf8, 0x42, 0x1f, 0x84, 0x21, 0xf0,
    0x10,

    /* U+1EC7 "ệ" */
    0x31, 0x40, 0x1c, 0xca, 0x2f, 0xe0, 0xc9, 0xe0,
    0x8,

    /* U+1EC8 "Ỉ" */
    0xd8, 0xaa, 0xaa, 0x80,

    /* U+1EC9 "ỉ" */
    0xd8, 0xaa, 0xa8,

    /* U+1ECA "Ị" */
    0xff, 0xa0,

    /* U+1ECB "ị" */
    0xbf, 0xa0,

    /* U+1ECC "Ọ" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xa2, 0x38,
    0x0, 0xc0,

    /* U+1ECD "ọ" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x80, 0x20,

    /* U+1ECE "Ỏ" */
    0x18, 0x10, 0x40, 0x3, 0x88, 0xa0, 0xc1, 0x83,
    0x6, 0xa, 0x23, 0x80,

    /* U+1ECF "ỏ" */
    0x30, 0x41, 0x0, 0x7b, 0x38, 0x61, 0x87, 0x37,
    0x80,

    /* U+1ED0 "Ố" */
    0x2, 0x24, 0xa0, 0x3, 0x88, 0xa0, 0xc1, 0x83,
    0x6, 0xa, 0x23, 0x80,

    /* U+1ED1 "ố" */
    0x4, 0x69, 0x20, 0x7, 0x99, 0xa1, 0x42, 0x85,
    0x99, 0xe0,

    /* U+1ED2 "Ồ" */
    0x81, 0x20, 0xa0, 0x3, 0x88, 0xa0, 0xc1, 0x83,
    0x6, 0xa, 0x23, 0x80,

    /* U+1ED3 "ồ" */
    0x80, 0xb0, 0x90, 0x3, 0xcc, 0xd0, 0xa1, 0x42,
    0xcc, 0xf0,

    /* U+1ED4 "Ổ" */
    0x6, 0x78, 0xa0, 0x3, 0x88, 0xa0, 0xc1, 0x83,
    0x6, 0xa, 0x23, 0x80,

    /* U+1ED5 "ổ" */
    0x4, 0x13, 0x92, 0x7b, 0x38, 0x61, 0x87, 0x37,
    0x80,

    /* U+1ED6 "Ỗ" */
    0x38, 0x0, 0xe2, 0x23, 0x88, 0xa0, 0xc1, 0x83,
    0x6, 0xa, 0x23, 0x80,

    /* U+1ED7 "ỗ" */
    0x70, 0x3, 0x12, 0x7b, 0x38, 0x61, 0x87, 0x37,
    0x80,

    /* U+1ED8 "Ộ" */
    0x10, 0x50, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0, 0x6, 0x0,

    /* U+1ED9 "ộ" */
    0x31, 0x20, 0x1e, 0xce, 0x18, 0x61, 0xcd, 0xe0,
    0x8,

    /* U+1EDA "Ớ" */
    0x8, 0x11, 0x1, 0x3a, 0x44, 0x82, 0x82, 0x82,
    0x82, 0x82, 0x44, 0x38,

    /* U+1EDB "ớ" */
    0x18, 0x20, 0xb, 0xec, 0xd0, 0xa1, 0x42, 0xcc,
    0xf0,

    /* U+1EDC "Ờ" */
    0x20, 0x11, 0x1, 0x3a, 0x44, 0x82, 0x82, 0x82,
    0x82, 0x82, 0x44, 0x38,

    /* U+1EDD "ờ" */
    0x60, 0x40, 0xb, 0xec, 0xd0, 0xa1, 0x42, 0xcc,
    0xf0,

    /* U+1EDE "Ở" */
    0x18, 0x8, 0x10, 0x1, 0x3a, 0x44, 0x82, 0x82,
    0x82, 0x82, 0x82, 0x44, 0x38,

    /* U+1EDF "ở" */
    0x30, 0x20, 0x40, 0x17, 0xd9, 0xa1, 0x42, 0x85,
    0x99, 0xe0,

    /* U+1EE0 "Ỡ" */
    0x34, 0x48, 0x1, 0x3a, 0x44, 0x82, 0x82, 0x82,
    0x82, 0x82, 0x44, 0x38,

    /* U+1EE1 "ỡ" */
    0x68, 0xb0, 0xb, 0xec, 0xd0, 0xa1, 0x42, 0xcc,
    0xf0,

    /* U+1EE2 "Ợ" */
    0x1, 0x1, 0x3a, 0x44, 0x82, 0x82, 0x82, 0x82,
    0x82, 0x44, 0x38, 0x0, 0x30,

    /* U+1EE3 "ợ" */
    0x4, 0xfb, 0x34, 0x28, 0x50, 0xb3, 0x3c, 0x0,
    0x40,

    /* U+1EE4 "Ụ" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x73, 0x78, 0x3,
    0x0,

    /* U+1EE5 "ụ" */
    0x8c, 0x63, 0x18, 0xc5, 0xe0, 0x60,

    /* U+1EE6 "Ủ" */
    0x10, 0x41, 0x0, 0x86, 0x18, 0x61, 0x86, 0x18,
    0x73, 0x78,

    /* U+1EE7 "ủ" */
    0x30, 0x88, 0x8, 0xc6, 0x31, 0x8c, 0x5e,

    /* U+1EE8 "Ứ" */
    0x18, 0x10, 0x1, 0x85, 0x86, 0x84, 0x84, 0x84,
    0x84, 0x84, 0xcc, 0x78,

    /* U+1EE9 "ứ" */
    0x10, 0x40, 0xc, 0x58, 0xd1, 0x22, 0x44, 0x88,
    0xf0,

    /* U+1EEA "Ừ" */
    0x20, 0x30, 0x1, 0x85, 0x86, 0x84, 0x84, 0x84,
    0x84, 0x84, 0xcc, 0x78,

    /* U+1EEB "ừ" */
    0x40, 0x40, 0xc, 0x58, 0xd1, 0x22, 0x44, 0x88,
    0xf0,

    /* U+1EEC "Ử" */
    0x10, 0x8, 0x10, 0x1, 0x85, 0x86, 0x84, 0x84,
    0x84, 0x84, 0x84, 0xcc, 0x78,

    /* U+1EED "ử" */
    0x30, 0x20, 0x80, 0x18, 0xb1, 0xa2, 0x44, 0x89,
    0x11, 0xe0,

    /* U+1EEE "Ữ" */
    0x68, 0x58, 0x1, 0x85, 0x86, 0x84, 0x84, 0x84,
    0x84, 0x84, 0xcc, 0x78,

    /* U+1EEF "ữ" */
    0x78, 0x6, 0x2c, 0x68, 0x91, 0x22, 0x44, 0x78,

    /* U+1EF0 "Ự" */
    0x1, 0x85, 0x86, 0x84, 0x84, 0x84, 0x84, 0x84,
    0xcc, 0x78, 0x0, 0x30,

    /* U+1EF1 "ự" */
    0x3, 0x16, 0x34, 0x48, 0x91, 0x22, 0x3c, 0x0,
    0x40,

    /* U+1EF2 "Ỳ" */
    0x20, 0x20, 0x6, 0x34, 0x4d, 0x8a, 0x1c, 0x10,
    0x20, 0x40, 0x80,

    /* U+1EF3 "ỳ" */
    0x20, 0x80, 0x22, 0x49, 0x25, 0xc, 0x30, 0xc2,
    0x8, 0xc0,

    /* U+1EF4 "Ỵ" */
    0xc6, 0x89, 0xb1, 0x43, 0x82, 0x4, 0x8, 0x10,
    0x0, 0x40,

    /* U+1EF5 "ỵ" */
    0x89, 0x24, 0x94, 0x30, 0xc3, 0x8, 0x23, 0x60,

    /* U+1EF6 "Ỷ" */
    0x18, 0x10, 0x40, 0xc, 0x28, 0x99, 0x14, 0x28,
    0x20, 0x40, 0x81, 0x0,

    /* U+1EF7 "ỷ" */
    0x30, 0x88, 0x8, 0xc5, 0x4a, 0x51, 0x88, 0x42,
    0x60,

    /* U+1EF8 "Ỹ" */
    0x34, 0x90, 0x6, 0x34, 0x4d, 0x8a, 0x1c, 0x10,
    0x20, 0x40, 0x80,

    /* U+1EF9 "ỹ" */
    0x69, 0x60, 0x22, 0x49, 0x25, 0xc, 0x30, 0xc2,
    0x8, 0xc0,

    /* U+1F4D "Ὅ" */
    0xa7, 0x22, 0x21, 0x4, 0x41, 0x10, 0x44, 0x11,
    0x4, 0x22, 0x7, 0x0,

    /* U+2010 "‐" */
    0xe0,

    /* U+2011 "‑" */
    0xe0,

    /* U+2013 "–" */
    0xfc,

    /* U+2014 "—" */
    0xff,

    /* U+2018 "‘" */
    0xe8,

    /* U+2019 "’" */
    0x54,

    /* U+201C "“" */
    0xfa, 0xa0,

    /* U+201D "”" */
    0x55, 0x70,

    /* U+2020 "†" */
    0x21, 0x3e, 0x42, 0x10, 0x84, 0x20,

    /* U+2021 "‡" */
    0x21, 0x3e, 0x42, 0x10, 0x84, 0xf9, 0x8, 0x40,

    /* U+2026 "…" */
    0x92,

    /* U+2030 "‰" */
    0x60, 0x12, 0x82, 0x50, 0x34, 0x1, 0x0, 0x2d,
    0x8a, 0x49, 0x49, 0x6, 0xc0,

    /* U+2032 "′" */
    0xe0,

    /* U+2033 "″" */
    0xb6, 0x80};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 50, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 62, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 8, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 108, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 24, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 119, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 34, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 42, .adv_w = 66, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 47, .adv_w = 67, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 52, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 56, .adv_w = 109, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 61, .adv_w = 38, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 62, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 63, .adv_w = 51, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 79, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 71, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 108, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 108, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 47, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 41, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 133, .adv_w = 98, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 137, .adv_w = 105, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 140, .adv_w = 100, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 144, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 165, .adv_w = 125, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 125, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 126, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 109, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 52, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 103, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 168, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 132, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 285, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 114, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 115, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 125, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 170, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 115, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 51, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 362, .adv_w = 79, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 369, .adv_w = 51, .box_w = 2, .box_h = 13, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 373, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 377, .adv_w = 87, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 378, .adv_w = 59, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 379, .adv_w = 104, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 108, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 397, .adv_w = 108, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 102, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 67, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 108, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 422, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 47, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 46, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 434, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 47, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 168, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 106, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 110, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 108, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 469, .adv_w = 109, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 476, .adv_w = 65, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 63, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 106, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 144, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 95, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 91, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 521, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 65, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 531, .adv_w = 47, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 533, .adv_w = 65, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 538, .adv_w = 131, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 540, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 47, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 543, .adv_w = 105, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 552, .adv_w = 112, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 137, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 46, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 575, .adv_w = 118, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 585, .adv_w = 80, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 586, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 86, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 599, .adv_w = 90, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 602, .adv_w = 106, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 604, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 605, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 88, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 616, .adv_w = 72, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 618, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 70, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 626, .adv_w = 70, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 628, .adv_w = 60, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 629, .adv_w = 109, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 636, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 50, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 643, .adv_w = 48, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 644, .adv_w = 70, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 646, .adv_w = 87, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 649, .adv_w = 90, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 652, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 149, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 686, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 719, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 179, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 776, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 792, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 109, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 52, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 52, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 52, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 52, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 129, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 137, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 897, .adv_w = 102, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 901, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 911, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 929, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 938, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 115, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 958, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 965, .adv_w = 114, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 980, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 987, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 994, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1007, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 162, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1022, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1030, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1046, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 102, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1061, .adv_w = 48, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1064, .adv_w = 48, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1067, .adv_w = 48, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1071, .adv_w = 48, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 113, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1089, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1097, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1105, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1128, .adv_w = 110, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1133, .adv_w = 109, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1140, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1147, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1154, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1167, .adv_w = 91, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1177, .adv_w = 111, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1186, .adv_w = 91, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1195, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1206, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1213, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1224, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1231, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1240, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1248, .adv_w = 129, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1256, .adv_w = 115, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1264, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1272, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1280, .adv_w = 52, .box_w = 5, .box_h = 12, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1288, .adv_w = 48, .box_w = 5, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1295, .adv_w = 103, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1303, .adv_w = 47, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1307, .adv_w = 137, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1318, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1325, .adv_w = 118, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1334, .adv_w = 65, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1338, .adv_w = 114, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1349, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1356, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1365, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1372, .adv_w = 125, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1381, .adv_w = 106, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1388, .adv_w = 115, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1397, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1404, .adv_w = 132, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1415, .adv_w = 110, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1422, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1432, .adv_w = 119, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1451, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1458, .adv_w = 179, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1475, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1487, .adv_w = 132, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1500, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1509, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1510, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = -5, .ofs_y = 8},
    {.bitmap_index = 1511, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -4, .ofs_y = 8},
    {.bitmap_index = 1512, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 1513, .adv_w = 97, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1514, .adv_w = 125, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1523, .adv_w = 119, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1532, .adv_w = 146, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1544, .adv_w = 62, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1548, .adv_w = 134, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1558, .adv_w = 125, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1568, .adv_w = 130, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1578, .adv_w = 62, .box_w = 5, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1585, .adv_w = 109, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1593, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1600, .adv_w = 109, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1609, .adv_w = 62, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1612, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1619, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1627, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1634, .adv_w = 158, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1644, .adv_w = 107, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1652, .adv_w = 120, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1661, .adv_w = 81, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1666, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1673, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1684, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1691, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1703, .adv_w = 168, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1715, .adv_w = 170, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1730, .adv_w = 144, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1742, .adv_w = 125, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1752, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1758, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1770, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1777, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1789, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1810, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1818, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1830, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1839, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1851, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1858, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1871, .adv_w = 104, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1879, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1891, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1898, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1910, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1917, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1930, .adv_w = 104, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1938, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1950, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1957, .adv_w = 125, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1970, .adv_w = 104, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1978, .adv_w = 109, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1985, .adv_w = 102, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1992, .adv_w = 109, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2001, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2010, .adv_w = 109, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2018, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2026, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2036, .adv_w = 102, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2046, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2056, .adv_w = 102, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2066, .adv_w = 109, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2076, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2085, .adv_w = 109, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2094, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2103, .adv_w = 109, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2112, .adv_w = 102, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2121, .adv_w = 52, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2125, .adv_w = 48, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2128, .adv_w = 52, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2130, .adv_w = 47, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2132, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2142, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2149, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2161, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2170, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2182, .adv_w = 110, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2192, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2204, .adv_w = 110, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2214, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2226, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2235, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2247, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2256, .adv_w = 132, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2269, .adv_w = 110, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2278, .adv_w = 132, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2290, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2299, .adv_w = 132, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2311, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2320, .adv_w = 132, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2333, .adv_w = 110, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2343, .adv_w = 132, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2355, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2364, .adv_w = 132, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2377, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2386, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2395, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2401, .adv_w = 125, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2411, .adv_w = 106, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2418, .adv_w = 134, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2430, .adv_w = 119, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2439, .adv_w = 134, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2451, .adv_w = 119, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2460, .adv_w = 134, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2473, .adv_w = 119, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2483, .adv_w = 134, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2495, .adv_w = 119, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2503, .adv_w = 134, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2515, .adv_w = 119, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2524, .adv_w = 115, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2535, .adv_w = 91, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2545, .adv_w = 115, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2555, .adv_w = 91, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2563, .adv_w = 115, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2575, .adv_w = 91, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2584, .adv_w = 115, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2595, .adv_w = 91, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2605, .adv_w = 139, .box_w = 10, .box_h = 9, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 2617, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2618, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2619, .adv_w = 126, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2620, .adv_w = 150, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2621, .adv_w = 38, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2622, .adv_w = 38, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 2623, .adv_w = 68, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2625, .adv_w = 69, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 2627, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2633, .adv_w = 110, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 2641, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2642, .adv_w = 184, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2655, .adv_w = 34, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2656, .adv_w = 62, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 7}};

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
        0, 31, 31, 33, 27, 0, 34, 0,
        35, 0, 36, 37, 38, 36, 39, 40,
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
        0, 0, 0, 0, 31, 33, 33, 33,
        33, 33, 0, 0, 0, 0, 0, 0,
        36, 27, 36, 6, 26, 6, 26, 8,
        28, 9, 0, 10, 29, 12, 0, 15,
        0, 12, 31, 0, 34, 0, 0, 13,
        0, 13, 0, 24, 39, 0, 0, 0,
        0, 6, 26, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 6, 10, 12, 12,
        9, 23, 0, 0, 0, 0, 31, 0,
        0, 33, 0, 0, 41, 14, 38, 0,
        6, 26, 12, 31, 21, 0, 6, 26,
        6, 26, 6, 26, 6, 26, 6, 26,
        6, 26, 6, 26, 6, 26, 6, 26,
        6, 26, 6, 26, 6, 26, 10, 29,
        10, 29, 10, 29, 10, 29, 10, 29,
        10, 29, 10, 29, 10, 29, 12, 0,
        12, 0, 9, 33, 9, 33, 9, 33,
        9, 33, 9, 33, 9, 33, 9, 33,
        0, 0, 0, 0, 0, 0, 0, 33,
        0, 0, 13, 0, 13, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        23, 36, 23, 36, 23, 36, 23, 36,
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
        0, 0, 0, 0, 0, -4, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -10, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -10, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 2, 2, 0, 2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -16,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -16,
        0, 0, 0, 0, 0, 0, 0, -21,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -11, 0, 0, 0, 0,
        0, 0, -6, 0, -1, 0, 0, -12,
        -2, -8, -6, 0, -9, 0, 0, 0,
        0, 0, 0, -1, 0, 0, -2, -1,
        -5, -3, 0, 1, 0, 0, 0, 0,
        0, 0, -2, -11, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, 0, -2, 0, 0, -5, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, 0, 0,
        0, 0, -1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -10, 0, 0,
        0, -2, 0, 0, 0, -3, 0, -2,
        0, -2, -4, -2, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, -2, 0, -2, 0, 0, 0, -2,
        -2, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -22, 0, 0, 0, -16, 0, -25,
        0, 2, 0, 0, 0, 0, 0, 0,
        0, -3, -2, 0, 0, -2, -2, 0,
        0, -2, -2, 0, 0, 0, 0, 0,
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
        -6, 0, 0, 0, -3, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, -2, -3, 0, 0, 0, -2,
        -4, -6, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 2, -6, 0,
        0, -26, -5, -16, -13, 0, -22, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -4, -12, -9, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -30, 0, 0, 0, -13,
        0, -19, 0, 0, 0, 0, 0, -3,
        0, -2, 0, -1, -1, 0, 0, -1,
        0, 0, 1, 0, 1, 0, 0, 0,
        0, 0, 0, -9, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -4, 0, -3,
        -2, 0, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -7,
        0, -2, 0, 0, -4, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -4, 0, 0, 0,
        0, -20, -22, 0, 0, -7, -3, -22,
        -1, 2, 0, 2, 1, 0, 2, 0,
        0, -11, -9, 0, -10, -9, -7, -11,
        0, -9, -7, -5, -7, -6, 0, -31,
        -20, -17, -11, -9, 0, 0, 0, 0,
        0, 2, 0, -21, -3, 0, 0, -7,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 2, -4, -4, 0, 0, -4,
        -3, 0, 0, -3, -1, 0, 0, 0,
        2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 0, -12, -6, 0,
        0, -4, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, -3, -3, 0,
        0, -3, -2, 0, 0, -2, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -4, 0, 0, 0, -2, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, -2, 0, 0, 0, -2,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -3, 2,
        -5, -20, -5, 0, 0, -9, -3, -9,
        -1, 2, -9, 2, 2, 1, 2, 0,
        2, -7, -6, -2, -4, -6, -4, -5,
        -2, -4, -2, 0, -2, -3, 2, -8,
        -5, -9, -6, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, -2,
        0, 0, 0, -2, -3, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, 0, 0, -2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -1, 0, -1, -1, 0, 0,
        0, 0, 0, 0, 0, -3, 0, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -1,
        0, -1, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -1, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -7, 0, 2, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 2, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 2, 0, 0, 0,
        0, 0, 0, 2, 0, -10, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -7, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -13, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -1, 0,
        -2, -1, 0, 0, 0, 0, 0, 0,
        0, -7, 0, 2, 0, 0, 0, -12,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -4,
        -2, 1, 0, -2, 0, 0, 5, 0,
        2, 2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 2, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, -10, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -1, -1, 1, 0, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, -12, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, -2, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -1, 0, 0, -1, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, -2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -37, -39, 0,
        0, -18, -6, 0, -4, 1, 0, 1,
        0, 0, 1, 0, 0, -20, -18, 0,
        -19, -18, -14, -20, 0, -17, -13, -11,
        -14, -11, 0, -54, -36, -30, -20, -17,
        0, 0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
    {
        .class_pair_values = kern_class_values,
        .left_class_mapping = kern_left_class_mapping,
        .right_class_mapping = kern_right_class_mapping,
        .left_class_cnt = 41,
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
const lv_font_t roboto_regular_12 = {
#else
lv_font_t roboto_regular_12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 18,                              /*The maximum line height required by the font*/
    .base_line = 4,                                 /*Baseline measured from the bottom of the line*/
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

#endif /*#if ROBOTO_REGULAR_12*/
