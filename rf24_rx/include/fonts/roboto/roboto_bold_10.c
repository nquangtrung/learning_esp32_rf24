/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --no-compress --stride 1 --align 1 --font Roboto-Bold.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o roboto_bold_10.c
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

#ifndef ROBOTO_BOLD_10
#define ROBOTO_BOLD_10 1
#endif

#if ROBOTO_BOLD_10

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
    0xf9,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x28, 0xa7, 0xcc, 0x53, 0xe5, 0x14,

    /* U+0024 "$" */
    0x26, 0xf9, 0x42, 0x9f, 0x62,

    /* U+0025 "%" */
    0xe1, 0x52, 0xc7, 0x82, 0xc6, 0x54, 0x86,

    /* U+0026 "&" */
    0x31, 0x27, 0x8c, 0x75, 0x74, 0x9d,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x9, 0x49, 0x24, 0x89, 0x0,

    /* U+0029 ")" */
    0x9, 0x12, 0x49, 0x29, 0x0,

    /* U+002A "*" */
    0x25, 0x5c, 0xa5, 0x0,

    /* U+002B "+" */
    0x21, 0x9, 0xf2, 0x10,

    /* U+002C "," */
    0x54,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x22, 0x26, 0x44, 0x48, 0x80,

    /* U+0030 "0" */
    0x74, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0031 "1" */
    0x3c, 0x92, 0x49,

    /* U+0032 "2" */
    0x76, 0x42, 0x31, 0x11, 0x9f,

    /* U+0033 "3" */
    0x72, 0x42, 0x61, 0x85, 0x2e,

    /* U+0034 "4" */
    0x11, 0x8c, 0xad, 0x7c, 0x42,

    /* U+0035 "5" */
    0xf8, 0x8e, 0x11, 0x9e,

    /* U+0036 "6" */
    0x32, 0x21, 0xe8, 0xc6, 0x2e,

    /* U+0037 "7" */
    0xf8, 0xc4, 0x23, 0x11, 0x88,

    /* U+0038 "8" */
    0x74, 0x62, 0xed, 0xc6, 0x2e,

    /* U+0039 "9" */
    0x74, 0x63, 0x17, 0x84, 0x4c,

    /* U+003A ":" */
    0x84,

    /* U+003B ";" */
    0x8e,

    /* U+003C "<" */
    0x17, 0xc6, 0x10,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0x87, 0x6, 0xec, 0x0,

    /* U+003F "?" */
    0x72, 0x42, 0x33, 0x10, 0x4,

    /* U+0040 "@" */
    0x3c, 0x62, 0x5d, 0xb5, 0xa5, 0xa5, 0xa9, 0xb6,
    0x40, 0x3c,

    /* U+0041 "A" */
    0x30, 0x60, 0xe3, 0x44, 0x8f, 0xb1, 0x62,

    /* U+0042 "B" */
    0xf4, 0x63, 0xf8, 0xc6, 0x3e,

    /* U+0043 "C" */
    0x7b, 0x38, 0xe0, 0x82, 0x3c, 0xde,

    /* U+0044 "D" */
    0xf4, 0xa3, 0x18, 0xc6, 0x5e,

    /* U+0045 "E" */
    0xf8, 0x8f, 0x88, 0x8f,

    /* U+0046 "F" */
    0xf8, 0x88, 0xf8, 0x88,

    /* U+0047 "G" */
    0x7b, 0x18, 0x60, 0x9e, 0x1c, 0x5e,

    /* U+0048 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x61,

    /* U+0049 "I" */
    0xff,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x85, 0x2e,

    /* U+004B "K" */
    0x9d, 0xad, 0xce, 0x5a, 0x53,

    /* U+004C "L" */
    0x88, 0x88, 0x88, 0x8f,

    /* U+004D "M" */
    0xc7, 0x8f, 0x1d, 0x5a, 0xb5, 0x64, 0xc9,

    /* U+004E "N" */
    0x87, 0x1e, 0x6d, 0xb6, 0x78, 0xe1,

    /* U+004F "O" */
    0x7b, 0x28, 0x61, 0x86, 0x14, 0x9e,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x10,

    /* U+0051 "Q" */
    0x79, 0x28, 0x61, 0x86, 0x14, 0x9e, 0xc,

    /* U+0052 "R" */
    0xf4, 0x63, 0x1f, 0x4a, 0x71,

    /* U+0053 "S" */
    0x74, 0xf1, 0xe3, 0x86, 0x2e,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x84,

    /* U+0055 "U" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e,

    /* U+0056 "V" */
    0xc5, 0x99, 0x33, 0x46, 0x87, 0xe, 0x18,

    /* U+0057 "W" */
    0x99, 0xdb, 0xdb, 0x5b, 0x7e, 0x66, 0x66, 0x66,

    /* U+0058 "X" */
    0xcd, 0xa7, 0x8c, 0x31, 0xe6, 0xb3,

    /* U+0059 "Y" */
    0x8e, 0xd4, 0xa2, 0x10, 0x84,

    /* U+005A "Z" */
    0xf8, 0x44, 0x42, 0x23, 0x1f,

    /* U+005B "[" */
    0xea, 0xaa, 0xac,

    /* U+005C "\\" */
    0xc4, 0x46, 0x22, 0x31, 0x10,

    /* U+005D "]" */
    0xd5, 0x55, 0x5c,

    /* U+005E "^" */
    0x66, 0x5d,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x40,

    /* U+0061 "a" */
    0x6d, 0x79, 0x97,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e,

    /* U+0063 "c" */
    0x74, 0xa1, 0x9, 0x38,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc6, 0x2f,

    /* U+0065 "e" */
    0x74, 0xff, 0x9, 0x38,

    /* U+0066 "f" */
    0x74, 0xe4, 0x44, 0x44,

    /* U+0067 "g" */
    0x7c, 0x63, 0x18, 0xbc, 0x2e,

    /* U+0068 "h" */
    0x88, 0xf9, 0x99, 0x99,

    /* U+0069 "i" */
    0xbf,

    /* U+006A "j" */
    0x45, 0x55, 0x70,

    /* U+006B "k" */
    0x88, 0xba, 0xce, 0xb9,

    /* U+006C "l" */
    0xff,

    /* U+006D "m" */
    0xff, 0x26, 0x4c, 0x99, 0x32, 0x40,

    /* U+006E "n" */
    0xf9, 0x99, 0x99,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xb8,

    /* U+0070 "p" */
    0xf4, 0x63, 0x18, 0xfa, 0x10,

    /* U+0071 "q" */
    0x7c, 0x63, 0x18, 0xbc, 0x21,

    /* U+0072 "r" */
    0xf2, 0x49, 0x0,

    /* U+0073 "s" */
    0x76, 0xb8, 0x69, 0x38,

    /* U+0074 "t" */
    0x4b, 0xa4, 0x93,

    /* U+0075 "u" */
    0x99, 0x99, 0x9f,

    /* U+0076 "v" */
    0x8e, 0xf6, 0xe7, 0x38,

    /* U+0077 "w" */
    0x97, 0x6b, 0xd3, 0x66, 0xc9, 0x0,

    /* U+0078 "x" */
    0xda, 0x9c, 0xe5, 0x6c,

    /* U+0079 "y" */
    0x4a, 0xde, 0x63, 0x18, 0x8c,

    /* U+007A "z" */
    0xf3, 0x24, 0xcf,

    /* U+007B "{" */
    0x29, 0x25, 0x32, 0x49, 0x80,

    /* U+007C "|" */
    0xff, 0x80,

    /* U+007D "}" */
    0x89, 0x24, 0x52, 0x4a, 0x0,

    /* U+007E "~" */
    0xcd, 0x80,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0x9f,

    /* U+00A2 "¢" */
    0x23, 0xbd, 0x9, 0xf9, 0xc4,

    /* U+00A3 "£" */
    0x32, 0xd0, 0x8f, 0x21, 0x1f,

    /* U+00A4 "¤" */
    0xff, 0x28, 0x61, 0x85, 0x2f, 0xc0,

    /* U+00A5 "¥" */
    0xda, 0x94, 0xef, 0x13, 0xc4,

    /* U+00A6 "¦" */
    0xf7, 0x80,

    /* U+00A7 "§" */
    0x74, 0xf0, 0xe9, 0xe5, 0xc3, 0x8b, 0x80,

    /* U+00A8 "¨" */
    0xd0,

    /* U+00A9 "©" */
    0x38, 0xba, 0xad, 0x1a, 0xb7, 0x51, 0x1c,

    /* U+00AA "ª" */
    0xf7, 0xf0,

    /* U+00AB "«" */
    0x53, 0x94, 0xa0,

    /* U+00AC "¬" */
    0xf1, 0x10,

    /* U+00AD "­" */
    0xe0,

    /* U+00AE "®" */
    0x38, 0xfa, 0xad, 0xda, 0xb5, 0x51, 0x1c,

    /* U+00AF "¯" */
    0xe0,

    /* U+00B0 "°" */
    0xdb, 0x0,

    /* U+00B1 "±" */
    0x22, 0xf2, 0x20, 0xf0,

    /* U+00B2 "²" */
    0xe5, 0x70,

    /* U+00B3 "³" */
    0xec, 0xf0,

    /* U+00B4 "´" */
    0x40,

    /* U+00B5 "µ" */
    0x8c, 0x63, 0x18, 0xfe, 0x10,

    /* U+00B6 "¶" */
    0x7f, 0xff, 0x71, 0x11,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x9c,

    /* U+00B9 "¹" */
    0x55,

    /* U+00BA "º" */
    0xf6, 0xf0,

    /* U+00BB "»" */
    0x53, 0x94, 0xc0,

    /* U+00BC "¼" */
    0xc1, 0x24, 0x95, 0x2c, 0xb5, 0xc1,

    /* U+00BD "½" */
    0x1, 0x91, 0x22, 0x85, 0xc5, 0x89, 0x22, 0xe,

    /* U+00BE "¾" */
    0x60, 0x48, 0x93, 0x50, 0xe2, 0xcb, 0x81,

    /* U+00BF "¿" */
    0x20, 0x8, 0xcc, 0x42, 0x4e,

    /* U+00C0 "À" */
    0x20, 0x0, 0xc1, 0x83, 0x8d, 0x12, 0x3e, 0xc5,
    0x88,

    /* U+00C1 "Á" */
    0x10, 0x0, 0xc1, 0x83, 0x8d, 0x12, 0x3e, 0xc5,
    0x88,

    /* U+00C2 "Â" */
    0x30, 0x90, 0xc1, 0x83, 0x8d, 0x12, 0x3e, 0xc5,
    0x88,

    /* U+00C3 "Ã" */
    0x78, 0x0, 0xc1, 0x83, 0x8d, 0x12, 0x3e, 0xc5,
    0x88,

    /* U+00C4 "Ä" */
    0x68, 0x0, 0xc1, 0x83, 0x8d, 0x12, 0x3e, 0xc5,
    0x88,

    /* U+00C5 "Å" */
    0x30, 0x60, 0xc1, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8a, 0x10,

    /* U+00C6 "Æ" */
    0xf, 0x86, 0x7, 0x2, 0xe3, 0x41, 0xe1, 0x90,
    0x8f,

    /* U+00C7 "Ç" */
    0x7a, 0x38, 0x20, 0x83, 0x3f, 0xde, 0x30, 0xc0,

    /* U+00C8 "È" */
    0x40, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+00C9 "É" */
    0x20, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+00CA "Ê" */
    0x69, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+00CB "Ë" */
    0xd0, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+00CC "Ì" */
    0x45, 0x55, 0x50,

    /* U+00CD "Í" */
    0x8a, 0xaa, 0xa0,

    /* U+00CE "Î" */
    0x55, 0x24, 0x92, 0x48,

    /* U+00CF "Ï" */
    0xa1, 0x24, 0x92, 0x48,

    /* U+00D0 "Ð" */
    0x79, 0x24, 0x79, 0x45, 0x14, 0x9e,

    /* U+00D1 "Ñ" */
    0x78, 0x8, 0x71, 0xe6, 0xdb, 0x67, 0x8e, 0x10,

    /* U+00D2 "Ò" */
    0x20, 0x7, 0xb2, 0x86, 0x18, 0x61, 0x49, 0xe0,

    /* U+00D3 "Ó" */
    0x10, 0x7, 0xb2, 0x86, 0x18, 0x61, 0x49, 0xe0,

    /* U+00D4 "Ô" */
    0x31, 0x27, 0xb2, 0x86, 0x18, 0x61, 0x49, 0xe0,

    /* U+00D5 "Õ" */
    0x78, 0x7, 0xb2, 0x86, 0x18, 0x61, 0x49, 0xe0,

    /* U+00D6 "Ö" */
    0x50, 0x7, 0xb2, 0x86, 0x18, 0x61, 0x49, 0xe0,

    /* U+00D7 "×" */
    0xdb, 0x8c, 0xb4, 0x80,

    /* U+00D8 "Ø" */
    0x7d, 0x29, 0x65, 0xa6, 0x94, 0x9e, 0x80,

    /* U+00D9 "Ù" */
    0x60, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DA "Ú" */
    0x30, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DB "Û" */
    0x62, 0xa3, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DC "Ü" */
    0xd0, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+00DD "Ý" */
    0x20, 0x23, 0xb5, 0x28, 0x84, 0x21, 0x0,

    /* U+00DE "Þ" */
    0x84, 0x3d, 0x18, 0xfa, 0x10,

    /* U+00DF "ß" */
    0x72, 0x49, 0x2c, 0x9a, 0x28, 0xae,

    /* U+00E0 "à" */
    0x60, 0x6d, 0x79, 0x97,

    /* U+00E1 "á" */
    0x20, 0x6d, 0x79, 0x97,

    /* U+00E2 "â" */
    0x60, 0x6d, 0x79, 0x97,

    /* U+00E3 "ã" */
    0x70, 0x6d, 0x79, 0x97,

    /* U+00E4 "ä" */
    0xb0, 0x6d, 0x79, 0x97,

    /* U+00E5 "å" */
    0x6a, 0x66, 0xd7, 0x99, 0x70,

    /* U+00E6 "æ" */
    0x6e, 0x92, 0x7f, 0x90, 0x90, 0xee,

    /* U+00E7 "ç" */
    0x74, 0xa1, 0x2f, 0x39, 0x84,

    /* U+00E8 "è" */
    0x40, 0x1d, 0x3f, 0xc2, 0x4e,

    /* U+00E9 "é" */
    0x20, 0x1d, 0x3f, 0xc2, 0x4e,

    /* U+00EA "ê" */
    0x60, 0x9d, 0x3f, 0xc2, 0x4e,

    /* U+00EB "ë" */
    0xb0, 0x1d, 0x3f, 0xc2, 0x4e,

    /* U+00EC "ì" */
    0x45, 0x55,

    /* U+00ED "í" */
    0x8a, 0xaa,

    /* U+00EE "î" */
    0x55, 0x24, 0x92,

    /* U+00EF "ï" */
    0xd0, 0x22, 0x22, 0x22,

    /* U+00F0 "ð" */
    0x69, 0x96, 0xf8, 0xc6, 0x2e,

    /* U+00F1 "ñ" */
    0xf0, 0xf9, 0x99, 0x99,

    /* U+00F2 "ò" */
    0x60, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F3 "ó" */
    0x30, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F4 "ô" */
    0x70, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F5 "õ" */
    0x70, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F6 "ö" */
    0xb0, 0x1d, 0x18, 0xc6, 0x2e,

    /* U+00F7 "÷" */
    0x20, 0x3e, 0x0, 0x10,

    /* U+00F8 "ø" */
    0xb, 0xa7, 0x5a, 0xe5, 0xd0,

    /* U+00F9 "ù" */
    0x40, 0x99, 0x99, 0x9f,

    /* U+00FA "ú" */
    0x20, 0x99, 0x99, 0x9f,

    /* U+00FB "û" */
    0x60, 0x99, 0x99, 0x9f,

    /* U+00FC "ü" */
    0xb0, 0x99, 0x99, 0x9f,

    /* U+00FD "ý" */
    0x10, 0x12, 0xb7, 0x98, 0xc6, 0x23, 0x0,

    /* U+00FE "þ" */
    0x84, 0x3d, 0x18, 0xc6, 0x3e, 0x84, 0x0,

    /* U+00FF "ÿ" */
    0x50, 0x12, 0xb7, 0x98, 0xc6, 0x23, 0x0,

    /* U+0102 "Ă" */
    0x68, 0x70, 0xc1, 0x83, 0x8d, 0x12, 0x3e, 0xc5,
    0x88,

    /* U+0103 "ă" */
    0x70, 0x6d, 0x79, 0x97,

    /* U+0104 "Ą" */
    0x30, 0x60, 0xe3, 0x44, 0x8f, 0xb1, 0x62, 0x4,
    0x8,

    /* U+0105 "ą" */
    0x6d, 0x79, 0x9f, 0x21,

    /* U+0106 "Ć" */
    0x30, 0x7, 0xb3, 0x8e, 0x8, 0x23, 0xcd, 0xe0,

    /* U+0107 "ć" */
    0x20, 0x1d, 0x28, 0x42, 0x4e,

    /* U+0110 "Đ" */
    0x79, 0x24, 0x79, 0x45, 0x14, 0x9e,

    /* U+0111 "đ" */
    0x3c, 0x27, 0xa2, 0x8a, 0x28, 0x9e,

    /* U+0118 "Ę" */
    0xfc, 0x21, 0xe8, 0x42, 0x1f, 0x21, 0x80,

    /* U+0119 "ę" */
    0x74, 0xff, 0x9, 0x38, 0x86,

    /* U+0128 "Ĩ" */
    0xe1, 0x24, 0x92, 0x48,

    /* U+0129 "ĩ" */
    0xe1, 0x24, 0x92,

    /* U+0139 "Ĺ" */
    0x80, 0x88, 0x88, 0x88, 0x8f,

    /* U+013A "ĺ" */
    0x8a, 0xaa, 0xa0,

    /* U+0143 "Ń" */
    0x10, 0x8, 0x71, 0xe6, 0xdb, 0x67, 0x8e, 0x10,

    /* U+0144 "ń" */
    0x20, 0xf9, 0x99, 0x99,

    /* U+0154 "Ŕ" */
    0x20, 0x3d, 0x18, 0xc7, 0xd2, 0x9c, 0x40,

    /* U+0155 "ŕ" */
    0x43, 0xc9, 0x24,

    /* U+015A "Ś" */
    0x30, 0x1d, 0x3c, 0x78, 0xe1, 0x8b, 0x80,

    /* U+015B "ś" */
    0x20, 0x1d, 0xae, 0x1a, 0x4e,

    /* U+0168 "Ũ" */
    0x70, 0x23, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0169 "ũ" */
    0xf0, 0x99, 0x99, 0x9f,

    /* U+0172 "Ų" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e, 0x30, 0x80,

    /* U+0173 "ų" */
    0x99, 0x99, 0x9f, 0x23,

    /* U+0179 "Ź" */
    0x30, 0x3e, 0x11, 0x10, 0x88, 0xc7, 0xc0,

    /* U+017A "ź" */
    0x20, 0xf3, 0x24, 0xcf,

    /* U+01A0 "Ơ" */
    0x7b, 0x9e, 0x14, 0x28, 0x50, 0x92, 0x3c,

    /* U+01A1 "ơ" */
    0x5, 0xe8, 0xa2, 0x8a, 0x27, 0x0,

    /* U+01AF "Ư" */
    0x8a, 0x8e, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70,

    /* U+01B0 "ư" */
    0x6, 0x59, 0xa4, 0x92, 0x4f, 0x0,

    /* U+01FA "Ǻ" */
    0x10, 0x60, 0xc1, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8b, 0x10,

    /* U+01FB "ǻ" */
    0x22, 0xe6, 0xf7, 0x99, 0x70,

    /* U+01FC "Ǽ" */
    0x4, 0x0, 0x3, 0xe1, 0x81, 0xc0, 0xb8, 0xd0,
    0x78, 0x64, 0x23, 0xc0,

    /* U+01FD "ǽ" */
    0x18, 0x0, 0x6e, 0x92, 0x7f, 0x90, 0x90, 0xee,

    /* U+01FE "Ǿ" */
    0x10, 0x7, 0xd2, 0x96, 0x5a, 0x69, 0x49, 0xe8,
    0x0,

    /* U+01FF "ǿ" */
    0x30, 0x1d, 0x5a, 0xe7, 0x2e, 0x80,

    /* U+0301 "́" */
    0xc0,

    /* U+0303 "̃" */
    0x70,

    /* U+0309 "̉" */
    0xe0,

    /* U+0323 "̣" */
    0x80,

    /* U+0385 "΅" */
    0x64, 0x90,

    /* U+0386 "Ά" */
    0xc1, 0x60, 0xc1, 0xc6, 0x89, 0x1f, 0x62, 0xc4,

    /* U+0388 "Έ" */
    0x82, 0xf2, 0x8, 0x3c, 0x82, 0x8, 0x3c,

    /* U+0389 "Ή" */
    0x80, 0xa1, 0x21, 0x21, 0x3f, 0x21, 0x21, 0x21,
    0x21,

    /* U+038A "Ί" */
    0x94, 0x92, 0x49, 0x20,

    /* U+038C "Ό" */
    0x81, 0x79, 0x92, 0x14, 0x28, 0x50, 0x92, 0x3c,

    /* U+038E "Ύ" */
    0x81, 0x44, 0xd8, 0xa1, 0x41, 0x2, 0x4, 0x8,

    /* U+038F "Ώ" */
    0x81, 0x79, 0x9a, 0x14, 0x28, 0x50, 0x92, 0x7e,

    /* U+0390 "ΐ" */
    0x21, 0x36, 0x2, 0x10, 0x84, 0x21, 0x80,

    /* U+03AC "ά" */
    0x21, 0x0, 0xe9, 0x4a, 0x52, 0x78,

    /* U+03AD "έ" */
    0x21, 0x0, 0xec, 0x73, 0x13, 0x70,

    /* U+03AE "ή" */
    0x22, 0xf, 0x99, 0x99, 0x91, 0x10,

    /* U+03AF "ί" */
    0xa2, 0xaa, 0xc0,

    /* U+03B0 "ΰ" */
    0x22, 0x90, 0x99, 0x99, 0x96,

    /* U+03CC "ό" */
    0x31, 0x0, 0xe8, 0xc6, 0x31, 0x70,

    /* U+03CD "ύ" */
    0x26, 0x9, 0x99, 0x99, 0x60,

    /* U+03CE "ώ" */
    0x18, 0x20, 0x4, 0x19, 0x32, 0x64, 0xdd, 0x6c,

    /* U+0403 "Ѓ" */
    0x20, 0xf8, 0x88, 0x88, 0x88,

    /* U+040C "Ќ" */
    0x20, 0x27, 0x6b, 0x73, 0x96, 0x94, 0xc0,

    /* U+0453 "ѓ" */
    0x43, 0xc9, 0x24,

    /* U+045C "ќ" */
    0x20, 0x2d, 0x6a, 0x72, 0xd6,

    /* U+1E00 "Ḁ" */
    0x30, 0x61, 0xe3, 0x44, 0x9f, 0xb1, 0x42, 0x30,
    0x60,

    /* U+1E01 "ḁ" */
    0x6d, 0x79, 0x9f, 0x66,

    /* U+1E3E "Ḿ" */
    0x18, 0x3, 0x1e, 0x3c, 0x75, 0x6a, 0xd5, 0x93,
    0x24,

    /* U+1E3F "ḿ" */
    0x18, 0x3, 0xfc, 0x99, 0x32, 0x64, 0xc9,

    /* U+1E82 "Ẃ" */
    0x8, 0x0, 0x99, 0xdb, 0xdb, 0x5b, 0x7e, 0x66,
    0x66, 0x66,

    /* U+1E83 "ẃ" */
    0x10, 0x2, 0x5d, 0xaf, 0x4d, 0x9b, 0x24,

    /* U+1EA0 "Ạ" */
    0x10, 0x60, 0xa1, 0x46, 0x8f, 0xb1, 0x62, 0x0,
    0x20,

    /* U+1EA1 "ạ" */
    0x69, 0x79, 0x9f, 0x4,

    /* U+1EA2 "Ả" */
    0x10, 0x30, 0x41, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8b, 0x10,

    /* U+1EA3 "ả" */
    0x22, 0x6, 0xd7, 0x99, 0x70,

    /* U+1EA4 "Ấ" */
    0x4, 0x70, 0xc1, 0x83, 0x8d, 0x12, 0x3e, 0xc5,
    0x88,

    /* U+1EA5 "ấ" */
    0xb, 0x0, 0xcd, 0x3a, 0x52, 0x70,

    /* U+1EA6 "Ầ" */
    0x81, 0x21, 0xa1, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8b, 0x10,

    /* U+1EA7 "ầ" */
    0x83, 0x80, 0x66, 0x9d, 0x29, 0x38,

    /* U+1EA8 "Ẩ" */
    0x4, 0x8, 0xc1, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8b, 0x10,

    /* U+1EA9 "ẩ" */
    0x13, 0x80, 0xcd, 0x3a, 0x52, 0x70,

    /* U+1EAA "Ẫ" */
    0x30, 0x21, 0xa1, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8b, 0x10,

    /* U+1EAB "ẫ" */
    0x66, 0x6, 0xd7, 0x99, 0x70,

    /* U+1EAC "Ậ" */
    0x10, 0xd0, 0x41, 0x82, 0x85, 0x1a, 0x3e, 0xc5,
    0x88, 0x0, 0x80,

    /* U+1EAD "ậ" */
    0x60, 0x69, 0x79, 0x9f, 0x4,

    /* U+1EAE "Ắ" */
    0x10, 0x90, 0xc1, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8b, 0x10,

    /* U+1EAF "ắ" */
    0x25, 0x66, 0xd7, 0x99, 0x70,

    /* U+1EB0 "Ằ" */
    0x20, 0x90, 0xc1, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8b, 0x10,

    /* U+1EB1 "ằ" */
    0x45, 0x66, 0xd7, 0x99, 0x70,

    /* U+1EB2 "Ẳ" */
    0x10, 0x90, 0xe1, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8b, 0x10,

    /* U+1EB3 "ẳ" */
    0x25, 0x66, 0xd7, 0x99, 0x70,

    /* U+1EB4 "Ẵ" */
    0x38, 0x90, 0xe1, 0x83, 0x7, 0x1a, 0x24, 0x7d,
    0x8b, 0x10,

    /* U+1EB5 "ẵ" */
    0x46, 0x56, 0x6d, 0x79, 0x97,

    /* U+1EB6 "Ặ" */
    0x28, 0x70, 0x41, 0x82, 0x85, 0x1a, 0x3e, 0xc5,
    0x88, 0x0, 0x80,

    /* U+1EB7 "ặ" */
    0x70, 0x69, 0x79, 0x9f, 0x4,

    /* U+1EB8 "Ẹ" */
    0xfc, 0x21, 0xe8, 0x42, 0x1f, 0x1, 0x0,

    /* U+1EB9 "ẹ" */
    0x74, 0xff, 0x9, 0x38, 0x4,

    /* U+1EBA "Ẻ" */
    0x61, 0x99, 0xf8, 0x43, 0xd0, 0x84, 0x3e,

    /* U+1EBB "ẻ" */
    0x63, 0x0, 0xe9, 0xfe, 0x12, 0x70,

    /* U+1EBC "Ẽ" */
    0x70, 0xf8, 0x8f, 0x88, 0x8f,

    /* U+1EBD "ẽ" */
    0xf0, 0x1d, 0x3f, 0xc2, 0x4e,

    /* U+1EBE "Ế" */
    0x8, 0x7d, 0xe8, 0x43, 0xd0, 0x84, 0x3c,

    /* U+1EBF "ế" */
    0x9, 0xa1, 0x1c, 0x9b, 0xe8, 0x24, 0x70,

    /* U+1EC0 "Ề" */
    0x82, 0x1e, 0xf4, 0x21, 0xe8, 0x42, 0x1e,

    /* U+1EC1 "ề" */
    0x81, 0xc0, 0x8e, 0x4d, 0xf4, 0x12, 0x38,

    /* U+1EC2 "Ể" */
    0x10, 0x59, 0xe8, 0x43, 0xd0, 0x84, 0x3c,

    /* U+1EC3 "ể" */
    0xb, 0x40, 0xe9, 0xfe, 0x12, 0x70,

    /* U+1EC4 "Ễ" */
    0x66, 0x1f, 0x88, 0xf8, 0x88, 0xf0,

    /* U+1EC5 "ễ" */
    0x63, 0x4, 0xe9, 0xfe, 0x12, 0x70,

    /* U+1EC6 "Ệ" */
    0x26, 0xbf, 0x8, 0x7a, 0x10, 0x87, 0xc0, 0x40,

    /* U+1EC7 "ệ" */
    0x60, 0x9d, 0x3f, 0xc2, 0x4e, 0x1, 0x0,

    /* U+1EC8 "Ỉ" */
    0xda, 0xaa, 0xa8,

    /* U+1EC9 "ỉ" */
    0xe2, 0xaa, 0x80,

    /* U+1ECA "Ị" */
    0xff, 0x40,

    /* U+1ECB "ị" */
    0xbf, 0x40,

    /* U+1ECC "Ọ" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c, 0x0,
    0x20,

    /* U+1ECD "ọ" */
    0x74, 0x63, 0x18, 0xb8, 0x4,

    /* U+1ECE "Ỏ" */
    0x30, 0xc0, 0x1e, 0xca, 0x18, 0x61, 0x85, 0x27,
    0x80,

    /* U+1ECF "ỏ" */
    0x31, 0x0, 0xe8, 0xc6, 0x31, 0x70,

    /* U+1ED0 "Ố" */
    0x4, 0xd4, 0x9e, 0xca, 0x18, 0x61, 0x85, 0x27,
    0x80,

    /* U+1ED1 "ố" */
    0x9, 0xe0, 0x1c, 0x8a, 0x28, 0xa2, 0x70,

    /* U+1ED2 "Ồ" */
    0x82, 0xc4, 0x9e, 0xca, 0x18, 0x61, 0x85, 0x27,
    0x80,

    /* U+1ED3 "ồ" */
    0x81, 0xe0, 0xe, 0x45, 0x14, 0x51, 0x38,

    /* U+1ED4 "Ổ" */
    0x4, 0xe0, 0x1e, 0xca, 0x18, 0x61, 0x85, 0x27,
    0x80,

    /* U+1ED5 "ổ" */
    0xb, 0xc0, 0xe8, 0xc6, 0x31, 0x70,

    /* U+1ED6 "Ỗ" */
    0x38, 0xc4, 0x9e, 0xca, 0x18, 0x61, 0x85, 0x27,
    0x80,

    /* U+1ED7 "ỗ" */
    0x73, 0x80, 0xe8, 0xc6, 0x31, 0x70,

    /* U+1ED8 "Ộ" */
    0x38, 0xd8, 0xe2, 0x28, 0x30, 0x60, 0xc1, 0x44,
    0x70, 0x0, 0x80,

    /* U+1ED9 "ộ" */
    0x22, 0x9d, 0x18, 0xc6, 0x2e, 0x1, 0x0,

    /* U+1EDA "Ớ" */
    0x10, 0x1, 0xee, 0x78, 0x50, 0xa1, 0x42, 0x48,
    0xf0,

    /* U+1EDB "ớ" */
    0x30, 0x17, 0xa2, 0x8a, 0x28, 0x9c,

    /* U+1EDC "Ờ" */
    0x20, 0x1, 0xee, 0x78, 0x50, 0xa1, 0x42, 0x48,
    0xf0,

    /* U+1EDD "ờ" */
    0x60, 0x17, 0xa2, 0x8a, 0x28, 0x9c,

    /* U+1EDE "Ở" */
    0x38, 0x60, 0x3, 0xdc, 0xf0, 0xa1, 0x42, 0x84,
    0x91, 0xe0,

    /* U+1EDF "ở" */
    0x30, 0x80, 0x5e, 0x8a, 0x28, 0xa2, 0x70,

    /* U+1EE0 "Ỡ" */
    0x78, 0x1, 0xee, 0x78, 0x50, 0xa1, 0x42, 0x48,
    0xf0,

    /* U+1EE1 "ỡ" */
    0x70, 0x17, 0xa2, 0x8a, 0x28, 0x9c,

    /* U+1EE2 "Ợ" */
    0x7b, 0x9e, 0x14, 0x28, 0x50, 0x92, 0x3c, 0x0,
    0x40,

    /* U+1EE3 "ợ" */
    0x5, 0xe8, 0xa2, 0x8a, 0x27, 0x0, 0x20,

    /* U+1EE4 "Ụ" */
    0x8c, 0x63, 0x18, 0xc6, 0x2e, 0x1, 0x0,

    /* U+1EE5 "ụ" */
    0x99, 0x99, 0x9f, 0x4,

    /* U+1EE6 "Ủ" */
    0x31, 0x1, 0x18, 0xc6, 0x31, 0x8c, 0x5c,

    /* U+1EE7 "ủ" */
    0x66, 0x9, 0x99, 0x99, 0xf0,

    /* U+1EE8 "Ứ" */
    0x30, 0x0, 0x8a, 0x8e, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x70,

    /* U+1EE9 "ứ" */
    0x20, 0x19, 0x66, 0x92, 0x49, 0x3c,

    /* U+1EEA "Ừ" */
    0x60, 0x0, 0x8a, 0x8e, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x70,

    /* U+1EEB "ừ" */
    0x40, 0x19, 0x66, 0x92, 0x49, 0x3c,

    /* U+1EEC "Ử" */
    0x30, 0x20, 0x0, 0x8a, 0x8e, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x70,

    /* U+1EED "ử" */
    0x61, 0x80, 0x65, 0x9a, 0x49, 0x24, 0xf0,

    /* U+1EEE "Ữ" */
    0x70, 0x0, 0x8a, 0x8e, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x70,

    /* U+1EEF "ữ" */
    0xf0, 0x19, 0x66, 0x92, 0x49, 0x3c,

    /* U+1EF0 "Ự" */
    0x8a, 0x8e, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70,
    0x0, 0x20,

    /* U+1EF1 "ự" */
    0x6, 0x59, 0xa4, 0x92, 0x4f, 0x0, 0x20,

    /* U+1EF2 "Ỳ" */
    0x20, 0x23, 0xb5, 0x28, 0x84, 0x21, 0x0,

    /* U+1EF3 "ỳ" */
    0x20, 0x12, 0xb7, 0x98, 0xc6, 0x23, 0x0,

    /* U+1EF4 "Ỵ" */
    0x8e, 0xd4, 0xa2, 0x10, 0x84, 0x1, 0x0,

    /* U+1EF5 "ỵ" */
    0xdd, 0x56, 0x62, 0x6d,

    /* U+1EF6 "Ỷ" */
    0x30, 0x42, 0x23, 0xd9, 0x45, 0x8, 0x20, 0x82,
    0x0,

    /* U+1EF7 "ỷ" */
    0x30, 0x88, 0x4, 0xad, 0xce, 0x31, 0x88, 0xc0,

    /* U+1EF8 "Ỹ" */
    0x70, 0x23, 0xb5, 0x28, 0x84, 0x21, 0x0,

    /* U+1EF9 "ỹ" */
    0x78, 0x12, 0xb7, 0x98, 0xc6, 0x23, 0x0,

    /* U+1F4D "Ὅ" */
    0xaf, 0xc, 0x84, 0x22, 0x11, 0x8, 0x84, 0x24,
    0x1e,

    /* U+2010 "‐" */
    0xe0,

    /* U+2011 "‑" */
    0xe0,

    /* U+2013 "–" */
    0xf8,

    /* U+2014 "—" */
    0xfe,

    /* U+2018 "‘" */
    0x60,

    /* U+2019 "’" */
    0xc0,

    /* U+201C "“" */
    0x56, 0x80,

    /* U+201D "”" */
    0xb5, 0x0,

    /* U+2020 "†" */
    0x21, 0x3e, 0x42, 0x10, 0x84,

    /* U+2021 "‡" */
    0x21, 0x3e, 0x42, 0x10, 0x9f, 0x21, 0x0,

    /* U+2026 "…" */
    0x92,

    /* U+2030 "‰" */
    0xe0, 0x52, 0x2a, 0x1e, 0x1, 0xf9, 0x55, 0x2a,
    0x1f,

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
    {.bitmap_index = 2, .adv_w = 40, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 40, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 43, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 7, .adv_w = 95, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 13, .adv_w = 92, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 18, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 26, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 32, .adv_w = 56, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 37, .adv_w = 56, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 42, .adv_w = 73, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 46, .adv_w = 87, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 50, .adv_w = 39, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 51, .adv_w = 63, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 52, .adv_w = 46, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 59, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 58, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 92, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 92, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 45, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 42, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 107, .adv_w = 82, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 110, .adv_w = 92, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 112, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 116, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 131, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 102, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 105, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 47, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 102, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 87, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 140, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 113, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 220, .adv_w = 103, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 99, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 99, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 105, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 140, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 102, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 99, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 97, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 44, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 274, .adv_w = 67, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 279, .adv_w = 44, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 282, .adv_w = 70, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 284, .adv_w = 71, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 285, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 286, .adv_w = 86, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 83, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 86, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 57, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 91, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 316, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 42, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 42, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 324, .adv_w = 85, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 42, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 139, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 90, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 90, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 347, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 352, .adv_w = 59, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 82, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 54, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 90, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 118, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 81, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 379, .adv_w = 81, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 384, .adv_w = 81, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 53, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 392, .adv_w = 40, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 394, .adv_w = 53, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 399, .adv_w = 104, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 401, .adv_w = 40, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 402, .adv_w = 45, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 403, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 408, .adv_w = 95, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 111, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 40, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 426, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 433, .adv_w = 75, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 434, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 71, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 443, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 446, .adv_w = 88, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 448, .adv_w = 63, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 449, .adv_w = 126, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 80, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 457, .adv_w = 62, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 459, .adv_w = 86, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 60, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 465, .adv_w = 60, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 467, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 468, .adv_w = 99, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 473, .adv_w = 78, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 48, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 478, .adv_w = 43, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 479, .adv_w = 60, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 480, .adv_w = 73, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 482, .adv_w = 80, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 485, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 491, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 130, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 511, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 150, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 583, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 47, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 47, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 47, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 47, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 631, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 663, .adv_w = 110, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 85, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 675, .adv_w = 110, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 682, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 98, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 748, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 135, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 83, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 764, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 774, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 44, .box_w = 2, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 44, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 788, .adv_w = 44, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 791, .adv_w = 44, .box_w = 4, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 92, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 809, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 814, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 833, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 838, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 850, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 81, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 861, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 868, .adv_w = 81, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 875, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 884, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 897, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 901, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 83, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 106, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 101, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 926, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 933, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 938, .adv_w = 47, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 44, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 945, .adv_w = 87, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 950, .adv_w = 42, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 961, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 965, .adv_w = 103, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 972, .adv_w = 59, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 975, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 982, .adv_w = 82, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 987, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 994, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 998, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1005, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1009, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1016, .adv_w = 81, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 113, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1027, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 114, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1041, .adv_w = 97, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 150, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 135, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1091, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1097, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = 7},
    {.bitmap_index = 1098, .adv_w = 0, .box_w = 4, .box_h = 1, .ofs_x = -5, .ofs_y = 7},
    {.bitmap_index = 1099, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = -4, .ofs_y = 7},
    {.bitmap_index = 1100, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = -4, .ofs_y = -2},
    {.bitmap_index = 1101, .adv_w = 88, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1103, .adv_w = 108, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1111, .adv_w = 98, .box_w = 6, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 121, .box_w = 8, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1127, .adv_w = 55, .box_w = 3, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1131, .adv_w = 112, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1139, .adv_w = 107, .box_w = 7, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1147, .adv_w = 109, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1155, .adv_w = 54, .box_w = 5, .box_h = 10, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1162, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1168, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1174, .adv_w = 90, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1180, .adv_w = 54, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1183, .adv_w = 87, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1188, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 87, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1199, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1207, .adv_w = 89, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1212, .adv_w = 102, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1219, .adv_w = 67, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1222, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1227, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1236, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1240, .adv_w = 140, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1249, .adv_w = 139, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1256, .adv_w = 140, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1266, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1273, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1282, .adv_w = 86, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1286, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1296, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1301, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1310, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1316, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1326, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1332, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1342, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1348, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1358, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1363, .adv_w = 108, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1374, .adv_w = 86, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1379, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1389, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1394, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1404, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1409, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1419, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1424, .adv_w = 108, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1434, .adv_w = 86, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 108, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1450, .adv_w = 86, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1455, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1462, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1467, .adv_w = 90, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1474, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1480, .adv_w = 90, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1485, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1490, .adv_w = 90, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1497, .adv_w = 86, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1504, .adv_w = 90, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1511, .adv_w = 86, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1518, .adv_w = 90, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1525, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1531, .adv_w = 90, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1537, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1543, .adv_w = 90, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1551, .adv_w = 86, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1558, .adv_w = 47, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1561, .adv_w = 44, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1564, .adv_w = 47, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1566, .adv_w = 42, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1568, .adv_w = 110, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1577, .adv_w = 90, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1582, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1591, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1597, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1606, .adv_w = 90, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1613, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1622, .adv_w = 90, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1629, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1638, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1644, .adv_w = 110, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1653, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1659, .adv_w = 110, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1670, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1677, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1686, .adv_w = 93, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1692, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1701, .adv_w = 93, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1707, .adv_w = 113, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1717, .adv_w = 93, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1724, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1733, .adv_w = 93, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1739, .adv_w = 113, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1748, .adv_w = 93, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1755, .adv_w = 105, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1762, .adv_w = 90, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1766, .adv_w = 105, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1773, .adv_w = 90, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1778, .adv_w = 114, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1788, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1794, .adv_w = 114, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1804, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1810, .adv_w = 114, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1821, .adv_w = 97, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1828, .adv_w = 114, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1838, .adv_w = 97, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1844, .adv_w = 114, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1854, .adv_w = 97, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1861, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1868, .adv_w = 81, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1875, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1882, .adv_w = 81, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1886, .adv_w = 99, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1895, .adv_w = 81, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1903, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1910, .adv_w = 81, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1917, .adv_w = 116, .box_w = 9, .box_h = 8, .ofs_x = -2, .ofs_y = 0},
    {.bitmap_index = 1926, .adv_w = 63, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1927, .adv_w = 63, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1928, .adv_w = 101, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1929, .adv_w = 122, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 1930, .adv_w = 37, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1931, .adv_w = 37, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1932, .adv_w = 65, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1934, .adv_w = 65, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1936, .adv_w = 86, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1941, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1948, .adv_w = 119, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1949, .adv_w = 154, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1958, .adv_w = 26, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1959, .adv_w = 51, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 5}};

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
        0, 0, 0, 0, 0, -4, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 2, 3, 0, 2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -19,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -19,
        0, 0, 0, 0, 0, 0, 0, -19,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -9, 0, 0, 0, 0,
        0, 0, -6, 0, -1, 0, 0, -10,
        -1, -6, -4, 0, -10, 0, 0, 0,
        0, 0, -3, -1, 0, 0, -1, -1,
        -4, -3, 0, 1, 0, 0, 0, 0,
        0, 0, -1, -9, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, -2, 0, 0, -4, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, 0, 0, 0, 0,
        0, 0, -1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -9, 0, 0,
        0, -2, 0, 0, 0, -5, 0, -2,
        0, -2, -3, -2, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, -1, 0, -1, 0, 0, 0, -1,
        -2, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -20, 0, 0, 0, -14, 0, -18,
        0, 2, 0, 0, 0, 0, 0, 0,
        0, -3, -2, 0, 0, -2, -2, 0,
        0, -2, -2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 0, 0, -2, 0, 0, 0, 1,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -10, 0, 0, 0, -2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, -1, -2, 0, 0, 0, -2,
        -3, -5, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 1, -5, 0,
        0, -18, -3, -15, -9, 0, -21, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, -10, -5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -30, 0, 0, 0, -13,
        0, -15, 0, 0, 0, 0, 0, -4,
        0, -3, 0, -1, -1, 0, 0, -1,
        0, 0, 1, 0, 1, 0, 0, 0,
        0, 0, 0, -18, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, -2,
        -2, 0, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -5,
        0, -1, 0, 0, -4, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -4, 0, 0, 0,
        0, -19, -20, 0, 0, -8, -2, -17,
        -1, 1, 0, 1, 1, 0, 1, 0,
        0, -12, -7, 0, -7, -14, -5, -7,
        0, -6, -6, -4, -6, -5, 0, -16,
        -13, -15, -7, -7, 0, 0, 0, 0,
        0, 2, 0, -17, -9, 0, 0, -6,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 1, -4, -3, 0, 0, -4,
        -2, 0, 0, -2, -1, 0, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 1, 0, -11, -5, 0,
        0, -3, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, -3, -2, 0,
        0, -2, -2, 0, 0, -1, 0, 0,
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -9, 0, 0, 0, -2, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, -2, 0, 0, 0, -2,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -2, 2,
        -4, -18, -9, 0, 0, -10, -2, -7,
        -1, 1, -7, 1, 1, 1, 1, 0,
        1, -5, -5, -2, -3, -5, -3, -5,
        -2, -3, -2, 0, -2, -2, 1, -6,
        -4, -7, -5, -5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, 0, 0, -2,
        0, 0, 0, -1, -2, -2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -1, 0, 0, -1, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, -2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -1, 0, -1, -1, 0, 0,
        0, 0, 0, 0, 0, -2, 0, -1,
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
        0, -5, 0, 1, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 1, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 1, 0, 0, 0,
        0, 0, 0, 1, 0, -7, 0, 0,
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
        0, -7, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, 0, -8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -1, 0, -2, -1, 0, 0, 0, 0,
        0, 0, 0, -8, 0, 1, 0, 0,
        0, -12, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, -1, 1, 0, -2, 0, 0,
        4, 0, 1, 1, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, 1, 0, 0, 0, -12, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -1, -1, 1,
        0, -1, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, -10,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -2, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -1, 0, 0, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, 0, 0, -2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -34,
        -36, 0, 0, -16, -5, 0, -4, 1,
        0, 1, 0, 0, 1, 0, 0, -14,
        -14, 0, -14, -13, -11, -13, 0, -11,
        -12, -8, -12, -10, 0, -29, -24, -26,
        -14, -14, 0, 0, 0, 0, 0, 0,
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
const lv_font_t roboto_bold_10 = {
#else
lv_font_t roboto_bold_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 14,                              /*The maximum line height required by the font*/
    .base_line = 3,                                 /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif

    .dsc = &font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};

#endif /*#if ROBOTO_BOLD_10*/
