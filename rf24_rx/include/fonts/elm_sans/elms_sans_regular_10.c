/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --no-compress --stride 1 --align 1 --font ElmsSans-Regular.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o elms_sans_regular_10.c
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

#ifndef ELMS_SANS_REGULAR_10
#define ELMS_SANS_REGULAR_10 1
#endif

#if ELMS_SANS_REGULAR_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfa,

    /* U+0022 "\"" */
    0xf0,

    /* U+0023 "#" */
    0x24, 0xfc, 0x92, 0x4f, 0xc9, 0x24, 0x0,

    /* U+0024 "$" */
    0x39, 0xa6, 0xe, 0x25, 0x97, 0x80,

    /* U+0025 "%" */
    0xe1, 0x53, 0xc0, 0x82, 0xe5, 0x53, 0xa0,

    /* U+0026 "&" */
    0x79, 0x7, 0xe2, 0x8a, 0x27, 0x0,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x2a, 0x49, 0x22, 0x20,

    /* U+0029 ")" */
    0x88, 0x92, 0x4a, 0x80,

    /* U+002A "*" */
    0x30,

    /* U+002B "+" */
    0x27, 0xc8, 0x40,

    /* U+002C "," */
    0xd0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x22, 0x24, 0x44, 0x88,

    /* U+0030 "0" */
    0x76, 0xe3, 0x18, 0xed, 0xc0,

    /* U+0031 "1" */
    0xd5, 0x54,

    /* U+0032 "2" */
    0x72, 0x42, 0x26, 0x43, 0xe0,

    /* U+0033 "3" */
    0x70, 0x8c, 0x10, 0xc5, 0xc0,

    /* U+0034 "4" */
    0x18, 0xa2, 0x92, 0xfc, 0x20, 0x80,

    /* U+0035 "5" */
    0x79, 0x7, 0x93, 0x5, 0x13, 0x80,

    /* U+0036 "6" */
    0x22, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+0037 "7" */
    0xf1, 0x12, 0x22, 0x40,

    /* U+0038 "8" */
    0xf4, 0x99, 0x38, 0xc5, 0xc0,

    /* U+0039 "9" */
    0x74, 0x63, 0x17, 0x8, 0x80,

    /* U+003A ":" */
    0x88,

    /* U+003B ";" */
    0x40, 0xd0,

    /* U+003C "<" */
    0x1e, 0xc3,

    /* U+003D "=" */
    0xff,

    /* U+003E ">" */
    0x86, 0x2c,

    /* U+003F "?" */
    0x69, 0x12, 0x40, 0x40,

    /* U+0040 "@" */
    0x3c, 0x43, 0x9d, 0xa5, 0xc5, 0xa5, 0xbe, 0xc0,
    0x30,

    /* U+0041 "A" */
    0x10, 0xc2, 0x92, 0x49, 0xf8, 0x40,

    /* U+0042 "B" */
    0xf4, 0x63, 0xe8, 0xc7, 0xc0,

    /* U+0043 "C" */
    0x3c, 0x86, 0x4, 0x8, 0x8, 0x4f, 0x0,

    /* U+0044 "D" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x0,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf8, 0x43, 0xe0,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf8, 0x42, 0x0,

    /* U+0047 "G" */
    0x38, 0x8a, 0x4, 0x78, 0x28, 0x8e, 0x0,

    /* U+0048 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x40,

    /* U+0049 "I" */
    0xfe,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0xcd, 0xc0,

    /* U+004B "K" */
    0x8c, 0xa9, 0x8a, 0x4a, 0x20,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x43, 0xe0,

    /* U+004D "M" */
    0x81, 0xc3, 0xc3, 0xa5, 0xa5, 0x99, 0x99,

    /* U+004E "N" */
    0x87, 0x1a, 0x6d, 0x96, 0x38, 0x40,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x0,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8f, 0x1,

    /* U+0052 "R" */
    0xf4, 0x63, 0xea, 0x4a, 0x20,

    /* U+0053 "S" */
    0x39, 0x24, 0xe, 0x5, 0x13, 0x80,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x0,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0x80,

    /* U+0056 "V" */
    0x86, 0x14, 0x92, 0x28, 0xc1, 0x0,

    /* U+0057 "W" */
    0x8c, 0x63, 0x24, 0xc9, 0x52, 0x53, 0xc, 0xc2,
    0x10,

    /* U+0058 "X" */
    0x45, 0x23, 0x4, 0x29, 0x28, 0x40,

    /* U+0059 "Y" */
    0x84, 0x88, 0xa0, 0x81, 0x2, 0x4, 0x0,

    /* U+005A "Z" */
    0x78, 0x44, 0x44, 0x23, 0xe0,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0xe0,

    /* U+005C "\\" */
    0x91, 0x24, 0x49,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0xe0,

    /* U+005E "^" */
    0x6, 0xa0,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x7c, 0x63, 0x17, 0x80,

    /* U+0062 "b" */
    0x84, 0x3d, 0x18, 0xc7, 0xc0,

    /* U+0063 "c" */
    0x76, 0x61, 0x17, 0x0,

    /* U+0064 "d" */
    0x8, 0x5f, 0x18, 0xc5, 0xe0,

    /* U+0065 "e" */
    0x74, 0x7f, 0x7, 0x0,

    /* U+0066 "f" */
    0x34, 0xe4, 0x44, 0x40,

    /* U+0067 "g" */
    0x7c, 0x63, 0x17, 0xc5, 0xc0,

    /* U+0068 "h" */
    0x84, 0x2d, 0x98, 0xc6, 0x20,

    /* U+0069 "i" */
    0xbe,

    /* U+006A "j" */
    0x20, 0x92, 0x49, 0xc0,

    /* U+006B "k" */
    0x88, 0x9a, 0xca, 0x90,

    /* U+006C "l" */
    0xfe,

    /* U+006D "m" */
    0xed, 0x26, 0x4c, 0x99, 0x20,

    /* U+006E "n" */
    0xb6, 0x63, 0x18, 0x80,

    /* U+006F "o" */
    0x74, 0x63, 0x17, 0x0,

    /* U+0070 "p" */
    0xf4, 0x63, 0x1f, 0x42, 0x0,

    /* U+0071 "q" */
    0x7c, 0x63, 0x17, 0x84, 0x20,

    /* U+0072 "r" */
    0xe9, 0x88, 0x80,

    /* U+0073 "s" */
    0xe9, 0x69, 0xf0,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x30,

    /* U+0075 "u" */
    0x8c, 0x63, 0x17, 0x80,

    /* U+0076 "v" */
    0x8c, 0x54, 0xa2, 0x0,

    /* U+0077 "w" */
    0x93, 0x35, 0xab, 0x62, 0x40,

    /* U+0078 "x" */
    0x92, 0x88, 0xa9, 0x0,

    /* U+0079 "y" */
    0x8a, 0x54, 0x62, 0x11, 0x0,

    /* U+007A "z" */
    0x71, 0x24, 0xf0,

    /* U+007B "{" */
    0x34, 0x44, 0xc4, 0x44, 0x30,

    /* U+007C "|" */
    0xff, 0x80,

    /* U+007D "}" */
    0xc2, 0x22, 0x32, 0x22, 0xc0,

    /* U+007E "~" */
    0xdb,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xbe,

    /* U+00A2 "¢" */
    0x23, 0xab, 0x4a, 0xb8, 0x80,

    /* U+00A3 "£" */
    0x3a, 0x51, 0xe4, 0x23, 0xe0,

    /* U+00A4 "¤" */
    0xfc, 0x63, 0x1f, 0x80,

    /* U+00A5 "¥" */
    0x84, 0x88, 0xa1, 0x43, 0x87, 0x4, 0x0,

    /* U+00A6 "¦" */
    0xef,

    /* U+00A7 "§" */
    0x69, 0x69, 0x79, 0x70,

    /* U+00A8 "¨" */
    0xe0,

    /* U+00A9 "©" */
    0x38, 0x8a, 0xce, 0x5c, 0x2f, 0x8e, 0x0,

    /* U+00AA "ª" */
    0xff, 0x80,

    /* U+00AB "«" */
    0xba, 0x80,

    /* U+00AC "¬" */
    0xf1, 0x10,

    /* U+00AE "®" */
    0x6f, 0xf6,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0xf7, 0x80,

    /* U+00B1 "±" */
    0x27, 0xc8, 0x4f, 0x80,

    /* U+00B2 "²" */
    0xdb,

    /* U+00B3 "³" */
    0x6c, 0xb0,

    /* U+00B4 "´" */
    0x60,

    /* U+00B5 "µ" */
    0x8a, 0x28, 0xa2, 0xfe, 0x8, 0x0,

    /* U+00B6 "¶" */
    0x7d, 0xf7, 0xdf, 0xc, 0x30, 0xc3,

    /* U+00B7 "·" */
    0xc0,

    /* U+00B8 "¸" */
    0x70,

    /* U+00B9 "¹" */
    0xf0,

    /* U+00BA "º" */
    0xf7, 0x80,

    /* U+00BB "»" */
    0xcf, 0x0,

    /* U+00BC "¼" */
    0x92, 0x4a, 0x28, 0x2d, 0x34, 0xe1, 0x80,

    /* U+00BD "½" */
    0x91, 0x22, 0x81, 0x22, 0xc9, 0x13, 0xc0,

    /* U+00BE "¾" */
    0xc4, 0x48, 0x48, 0xc8, 0x13, 0x13, 0x27, 0x21,
    0x0,

    /* U+00BF "¿" */
    0x20, 0x24, 0x89, 0x60,

    /* U+00C0 "À" */
    0x20, 0x80, 0x4, 0x30, 0xa4, 0x92, 0x7e, 0x10,

    /* U+00C1 "Á" */
    0x0, 0x41, 0x4, 0x30, 0xa4, 0x92, 0x7e, 0x10,

    /* U+00C2 "Â" */
    0x10, 0xa1, 0xc, 0x29, 0x24, 0x9f, 0x84,

    /* U+00C3 "Ã" */
    0x69, 0x42, 0xc, 0x51, 0x28, 0xbe, 0x84,

    /* U+00C4 "Ä" */
    0x28, 0x1, 0xc, 0x29, 0x24, 0x9f, 0x84,

    /* U+00C5 "Å" */
    0x30, 0xc3, 0xc, 0x31, 0x44, 0x92, 0xfe, 0x10,

    /* U+00C6 "Æ" */
    0x1e, 0x60, 0xc2, 0x75, 0xf, 0x23, 0x80,

    /* U+00C7 "Ç" */
    0x3c, 0x86, 0x4, 0x8, 0x8, 0x4f, 0x4, 0x18,

    /* U+00C8 "È" */
    0x41, 0x9, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+00C9 "É" */
    0x11, 0x9, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+00CA "Ê" */
    0x22, 0xbf, 0x8, 0x7e, 0x10, 0xf8,

    /* U+00CB "Ë" */
    0x60, 0x3f, 0x8, 0x7e, 0x10, 0xf8,

    /* U+00CC "Ì" */
    0xa5, 0x55, 0x50,

    /* U+00CD "Í" */
    0x6a, 0xaa, 0xa0,

    /* U+00CE "Î" */
    0x55, 0x24, 0x92, 0x40,

    /* U+00CF "Ï" */
    0xc5, 0x55, 0x40,

    /* U+00D0 "Ð" */
    0x7c, 0x42, 0x41, 0xe1, 0x41, 0x42, 0x7c,

    /* U+00D1 "Ñ" */
    0x29, 0x48, 0x71, 0xa6, 0xd9, 0x63, 0x84,

    /* U+00D2 "Ò" */
    0x20, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+00D3 "Ó" */
    0x8, 0x20, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+00D4 "Ô" */
    0x10, 0x50, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+00D5 "Õ" */
    0x38, 0xb0, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+00D6 "Ö" */
    0x18, 0x0, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+00D7 "×" */
    0xa6, 0xa0,

    /* U+00D8 "Ø" */
    0x3a, 0x8a, 0x2c, 0x9a, 0x28, 0x9e, 0x0,

    /* U+00D9 "Ù" */
    0x20, 0x80, 0x21, 0x86, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00DA "Ú" */
    0x10, 0x40, 0x21, 0x86, 0x18, 0x61, 0xcd, 0xe0,

    /* U+00DB "Û" */
    0x30, 0x8, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+00DC "Ü" */
    0x30, 0x8, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+00DD "Ý" */
    0x8, 0x20, 0x44, 0x24, 0x45, 0x4, 0x8, 0x10,
    0x20,

    /* U+00DE "Þ" */
    0x87, 0xa3, 0x18, 0xfa, 0x0,

    /* U+00DF "ß" */
    0xf4, 0xa9, 0x38, 0xc6, 0xc0,

    /* U+00E0 "à" */
    0x41, 0x1f, 0x18, 0xc5, 0xe0,

    /* U+00E1 "á" */
    0x21, 0x1f, 0x18, 0xc5, 0xe0,

    /* U+00E2 "â" */
    0x22, 0x9f, 0x18, 0xc5, 0xe0,

    /* U+00E3 "ã" */
    0x73, 0x9f, 0x18, 0xc5, 0xe0,

    /* U+00E4 "ä" */
    0x30, 0x1f, 0x18, 0xc5, 0xe0,

    /* U+00E5 "å" */
    0x21, 0x1f, 0x18, 0xc5, 0xe0,

    /* U+00E6 "æ" */
    0x77, 0x9, 0x7f, 0x88, 0x77,

    /* U+00E7 "ç" */
    0x74, 0x61, 0x17, 0x10, 0x80,

    /* U+00E8 "è" */
    0x41, 0x1d, 0x1f, 0xc1, 0xc0,

    /* U+00E9 "é" */
    0x21, 0x1d, 0x1f, 0xc1, 0xc0,

    /* U+00EA "ê" */
    0x22, 0x9d, 0x1f, 0xc1, 0xc0,

    /* U+00EB "ë" */
    0x50, 0x1d, 0x1f, 0xc1, 0xc0,

    /* U+00EC "ì" */
    0x85, 0x54,

    /* U+00ED "í" */
    0x4a, 0xa8,

    /* U+00EE "î" */
    0xc1, 0x24, 0x90,

    /* U+00EF "ï" */
    0xc5, 0x54,

    /* U+00F0 "ð" */
    0x30, 0x9d, 0x18, 0xc5, 0xc0,

    /* U+00F1 "ñ" */
    0x55, 0xad, 0x98, 0xc6, 0x20,

    /* U+00F2 "ò" */
    0x41, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F3 "ó" */
    0x21, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F4 "ô" */
    0x22, 0x9d, 0x18, 0xc5, 0xc0,

    /* U+00F5 "õ" */
    0x73, 0x9d, 0x18, 0xc5, 0xc0,

    /* U+00F6 "ö" */
    0x30, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F7 "÷" */
    0x40, 0xf4,

    /* U+00F8 "ø" */
    0x3, 0xe7, 0x5c, 0xb8,

    /* U+00F9 "ù" */
    0x40, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FA "ú" */
    0x20, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FB "û" */
    0x60, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FC "ü" */
    0x60, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FD "ý" */
    0x10, 0x22, 0x95, 0x18, 0x84, 0x40,

    /* U+00FE "þ" */
    0x84, 0x3d, 0x18, 0xc7, 0xd0, 0x80,

    /* U+00FF "ÿ" */
    0x50, 0x22, 0x95, 0x18, 0x84, 0x40,

    /* U+0102 "Ă" */
    0x48, 0xc1, 0xc, 0x29, 0x24, 0x9f, 0x84,

    /* U+0103 "ă" */
    0x51, 0x1f, 0x18, 0xc5, 0xe0,

    /* U+0104 "Ą" */
    0x10, 0x60, 0xa2, 0x44, 0x8f, 0xa1, 0x2, 0x8,
    0x8,

    /* U+0105 "ą" */
    0x7c, 0x63, 0x17, 0x88, 0x60,

    /* U+0106 "Ć" */
    0x8, 0x20, 0x1, 0xe4, 0x30, 0x20, 0x40, 0x42,
    0x78,

    /* U+0107 "ć" */
    0x10, 0x1d, 0x98, 0x45, 0xc0,

    /* U+0110 "Đ" */
    0x7c, 0x42, 0x41, 0xe1, 0x41, 0x42, 0x7c,

    /* U+0111 "đ" */
    0x8, 0x77, 0xa2, 0x8a, 0x27, 0x80,

    /* U+0118 "Ę" */
    0xfc, 0x21, 0xf8, 0x43, 0xe2, 0x10, 0x40,

    /* U+0119 "ę" */
    0x77, 0xe1, 0x17, 0x10, 0x40,

    /* U+0128 "Ĩ" */
    0xfd, 0x24, 0x92, 0x40,

    /* U+0129 "ĩ" */
    0xfd, 0x24, 0x90,

    /* U+0139 "Ĺ" */
    0x44, 0x21, 0x8, 0x42, 0x10, 0x87, 0xc0,

    /* U+013A "ĺ" */
    0x62, 0xaa, 0xa0,

    /* U+0143 "Ń" */
    0x10, 0x40, 0x21, 0xc6, 0x9b, 0x65, 0x8e, 0x10,

    /* U+0144 "ń" */
    0x21, 0x2d, 0x98, 0xc6, 0x20,

    /* U+0154 "Ŕ" */
    0x21, 0x1, 0xe8, 0xc7, 0xd4, 0x94, 0x40,

    /* U+0155 "ŕ" */
    0x20, 0xe9, 0x88, 0x80,

    /* U+015A "Ś" */
    0x0, 0x40, 0xe, 0x49, 0x3, 0x81, 0x44, 0xe0,

    /* U+015B "ś" */
    0x20, 0xe8, 0x69, 0x70,

    /* U+0168 "Ũ" */
    0x31, 0x48, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+0169 "ũ" */
    0x55, 0xa3, 0x18, 0xc5, 0xe0,

    /* U+0172 "Ų" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0x88, 0x30,

    /* U+0173 "ų" */
    0x8c, 0x63, 0x17, 0x88, 0x60,

    /* U+0179 "Ź" */
    0x10, 0x80, 0xf0, 0x88, 0x88, 0x47, 0xc0,

    /* U+017A "ź" */
    0x20, 0x71, 0x24, 0xf0,

    /* U+01A0 "Ơ" */
    0x4, 0x8, 0xf2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+01A1 "ơ" */
    0xb, 0xe3, 0x18, 0xb8,

    /* U+01AF "Ư" */
    0x2, 0x6, 0x1c, 0x28, 0x50, 0xa1, 0x66, 0x78,

    /* U+01B0 "ư" */
    0x6, 0x38, 0xa2, 0x89, 0xe0,

    /* U+01D7 "Ǘ" */
    0x10, 0x40, 0xc, 0x2, 0x18, 0x61, 0x86, 0x1c,
    0xde,

    /* U+01D8 "ǘ" */
    0x21, 0x18, 0x8, 0xc6, 0x31, 0x78,

    /* U+01EA "Ǫ" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x8, 0x18,

    /* U+01EB "ǫ" */
    0x74, 0x63, 0x17, 0x20, 0x80,

    /* U+01F4 "Ǵ" */
    0x8, 0x20, 0x1, 0xc4, 0x50, 0x23, 0xc1, 0x44,
    0x70,

    /* U+01F5 "ǵ" */
    0x20, 0x1f, 0x18, 0xc5, 0xf1, 0x70,

    /* U+01FE "Ǿ" */
    0x8, 0x20, 0x1, 0xd4, 0x51, 0x64, 0xd1, 0x44,
    0xf0,

    /* U+01FF "ǿ" */
    0x21, 0x1f, 0x3a, 0xe5, 0xc0,

    /* U+0228 "Ȩ" */
    0xfc, 0x3d, 0x8, 0x43, 0xe4, 0x20,

    /* U+0229 "ȩ" */
    0x77, 0xe1, 0x17, 0x10, 0x80,

    /* U+022C "Ȭ" */
    0x38, 0x0, 0xe2, 0xc3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+022D "ȭ" */
    0x70, 0x1c, 0xe7, 0x46, 0x31, 0x70,

    /* U+0301 "́" */
    0x60,

    /* U+0302 "̂" */
    0x6,

    /* U+0303 "̃" */
    0xda,

    /* U+0306 "̆" */
    0x96,

    /* U+0309 "̉" */
    0x54,

    /* U+031B "̛" */
    0x70,

    /* U+0323 "̣" */
    0xc0,

    /* U+1E00 "Ḁ" */
    0x30, 0xc5, 0x12, 0x7a, 0x18, 0x4c, 0x30,

    /* U+1E01 "ḁ" */
    0x7c, 0x63, 0x17, 0x90, 0x80,

    /* U+1E04 "Ḅ" */
    0xfc, 0x7d, 0x18, 0xc7, 0xc0, 0x40,

    /* U+1E05 "ḅ" */
    0x84, 0x3d, 0x18, 0xc7, 0xc0, 0x20,

    /* U+1E08 "Ḉ" */
    0x8, 0x20, 0x1, 0xe4, 0x30, 0x20, 0x40, 0x42,
    0x78, 0x20, 0xc0,

    /* U+1E09 "ḉ" */
    0x21, 0x1d, 0x18, 0x45, 0xc4, 0x20,

    /* U+1E0C "Ḍ" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x0, 0x20,

    /* U+1E0D "ḍ" */
    0x8, 0x5f, 0x18, 0xc5, 0xe0, 0x10,

    /* U+1E16 "Ḗ" */
    0x11, 0x1c, 0xf, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1E17 "ḗ" */
    0x11, 0x1c, 0x7, 0x47, 0xf0, 0x70,

    /* U+1E18 "Ḙ" */
    0xfc, 0x21, 0xf8, 0x43, 0xe4, 0x50,

    /* U+1E19 "ḙ" */
    0x74, 0x7f, 0x7, 0x11, 0x80,

    /* U+1E1A "Ḛ" */
    0xfc, 0x3f, 0x8, 0x43, 0xee, 0xb0,

    /* U+1E1B "ḛ" */
    0x74, 0x7f, 0x7, 0x39, 0xc0,

    /* U+1E24 "Ḥ" */
    0x86, 0x1f, 0xe1, 0x86, 0x18, 0x40, 0x20,

    /* U+1E25 "ḥ" */
    0x84, 0x2d, 0x98, 0xc6, 0x20, 0x60,

    /* U+1E2E "Ḯ" */
    0x29, 0x60, 0x92, 0x49, 0x20,

    /* U+1E2F "ḯ" */
    0x2b, 0x4, 0x92, 0x40,

    /* U+1E30 "Ḱ" */
    0x11, 0x9, 0x19, 0x53, 0x14, 0x94, 0x40,

    /* U+1E31 "ḱ" */
    0x48, 0x8, 0x89, 0xac, 0xa9,

    /* U+1E32 "Ḳ" */
    0x95, 0x31, 0x49, 0x4a, 0x20, 0x40,

    /* U+1E33 "ḳ" */
    0x88, 0xbc, 0xaa, 0x90, 0x40,

    /* U+1E36 "Ḷ" */
    0x84, 0x21, 0x8, 0x43, 0xe0, 0x40,

    /* U+1E37 "ḷ" */
    0xfe, 0x80,

    /* U+1E38 "Ḹ" */
    0xe0, 0x4, 0x10, 0x41, 0x4, 0x10, 0x7c, 0x2,
    0x0,

    /* U+1E39 "ḹ" */
    0xe1, 0x24, 0x92, 0x41, 0x0,

    /* U+1E3E "Ḿ" */
    0x8, 0x8, 0x0, 0x81, 0xc3, 0xc3, 0xa5, 0xa5,
    0x99, 0x99,

    /* U+1E3F "ḿ" */
    0x10, 0x23, 0xb4, 0x99, 0x32, 0x64, 0x80,

    /* U+1E42 "Ṃ" */
    0x81, 0xc3, 0xc3, 0xa5, 0xa5, 0x99, 0x99, 0x0,
    0x10,

    /* U+1E43 "ṃ" */
    0xed, 0x26, 0x4c, 0x99, 0x20, 0x4, 0x0,

    /* U+1E46 "Ṇ" */
    0x87, 0x1a, 0x6d, 0x96, 0x38, 0x40, 0x20,

    /* U+1E47 "ṇ" */
    0xb6, 0x63, 0x18, 0x81, 0x80,

    /* U+1E4C "Ṍ" */
    0x8, 0x20, 0x1, 0xc5, 0x87, 0x11, 0x41, 0x83,
    0x5, 0x11, 0xc0,

    /* U+1E4D "ṍ" */
    0x1, 0x8, 0xe7, 0x3a, 0x31, 0x8b, 0x80,

    /* U+1E4E "Ṏ" */
    0x18, 0x0, 0xe2, 0xc3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1E4F "ṏ" */
    0x30, 0x1c, 0xe7, 0x46, 0x31, 0x70,

    /* U+1E52 "Ṓ" */
    0x10, 0x20, 0xe0, 0x3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1E53 "ṓ" */
    0x0, 0x1c, 0x7, 0x46, 0x31, 0x70,

    /* U+1E54 "Ṕ" */
    0x21, 0x1, 0xe8, 0xc6, 0x3e, 0x84, 0x0,

    /* U+1E55 "ṕ" */
    0x21, 0x3d, 0x18, 0xc7, 0xd0, 0x80,

    /* U+1E5A "Ṛ" */
    0xf4, 0x63, 0xea, 0x4a, 0x20, 0x20,

    /* U+1E5B "ṛ" */
    0xe9, 0x88, 0x80, 0x40,

    /* U+1E5C "Ṝ" */
    0x60, 0x3d, 0x18, 0xfa, 0x92, 0x88, 0x8,

    /* U+1E5D "ṝ" */
    0xe0, 0xe9, 0x88, 0x80, 0x40,

    /* U+1E62 "Ṣ" */
    0x39, 0x24, 0xe, 0x5, 0x13, 0x80, 0x20,

    /* U+1E63 "ṣ" */
    0xe9, 0x69, 0xf0, 0x20,

    /* U+1E64 "Ṥ" */
    0x10, 0x1, 0x4, 0x39, 0x24, 0xe, 0x5, 0x13,
    0x80,

    /* U+1E65 "ṥ" */
    0x20, 0x20, 0xe8, 0x69, 0x70,

    /* U+1E68 "Ṩ" */
    0x20, 0x0, 0xe, 0x49, 0x3, 0x81, 0x44, 0xe0,
    0x8,

    /* U+1E69 "ṩ" */
    0x20, 0xe9, 0x69, 0xf0, 0x20,

    /* U+1E6C "Ṭ" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x0, 0x30,

    /* U+1E6D "ṭ" */
    0x44, 0xf4, 0x44, 0x30, 0x20,

    /* U+1E78 "Ṹ" */
    0x10, 0x40, 0xc, 0x52, 0x18, 0x61, 0x86, 0x1c,
    0xde,

    /* U+1E79 "ṹ" */
    0x11, 0x8, 0xab, 0x46, 0x31, 0x8b, 0xc0,

    /* U+1E7C "Ṽ" */
    0x69, 0x48, 0x62, 0x89, 0x25, 0xc, 0x20,

    /* U+1E7D "ṽ" */
    0x6a, 0xa2, 0x95, 0x18, 0xc0,

    /* U+1E7E "Ṿ" */
    0x86, 0x14, 0x92, 0x28, 0xc1, 0x0, 0x10,

    /* U+1E7F "ṿ" */
    0x8c, 0x54, 0xa2, 0x0, 0x80,

    /* U+1E82 "Ẃ" */
    0x4, 0x1, 0x0, 0x2, 0x31, 0x8c, 0x93, 0x25,
    0x49, 0x4c, 0x33, 0x8, 0x40,

    /* U+1E83 "ẃ" */
    0x8, 0x2, 0x4c, 0xd6, 0xad, 0x89, 0x0,

    /* U+1E88 "Ẉ" */
    0x8c, 0x63, 0x24, 0xc9, 0x52, 0x53, 0xc, 0xc2,
    0x10, 0x0, 0x8, 0x0,

    /* U+1E89 "ẉ" */
    0x93, 0x35, 0xab, 0x62, 0x40, 0x4, 0x0,

    /* U+1E92 "Ẓ" */
    0x78, 0x44, 0x44, 0x23, 0xe0, 0x20,

    /* U+1E93 "ẓ" */
    0x71, 0x24, 0xf0, 0x20,

    /* U+1EA0 "Ạ" */
    0x10, 0xc2, 0x92, 0x7a, 0x18, 0x40, 0x10,

    /* U+1EA1 "ạ" */
    0x7c, 0x63, 0x17, 0x80, 0x40,

    /* U+1EA2 "Ả" */
    0x10, 0x40, 0x4, 0x30, 0xa4, 0x92, 0x7e, 0x10,

    /* U+1EA3 "ả" */
    0x21, 0x1f, 0x18, 0xc5, 0xe0,

    /* U+1EA4 "Ấ" */
    0x8, 0x23, 0x0, 0x10, 0xc2, 0x92, 0x49, 0xf8,
    0x40,

    /* U+1EA5 "ấ" */
    0x10, 0x98, 0x7, 0xc6, 0x31, 0x78,

    /* U+1EA6 "Ầ" */
    0x10, 0x41, 0xa, 0x10, 0xc2, 0x92, 0x49, 0xf8,
    0x40,

    /* U+1EA7 "ầ" */
    0x1, 0x8, 0xa7, 0xc6, 0x31, 0x78,

    /* U+1EA8 "Ẩ" */
    0x8, 0x21, 0x8, 0x10, 0xc2, 0x92, 0x49, 0xf8,
    0x40,

    /* U+1EA9 "ẩ" */
    0x10, 0x8, 0xa7, 0xc6, 0x31, 0x78,

    /* U+1EAA "Ẫ" */
    0x70, 0x85, 0x8, 0x31, 0x44, 0xa2, 0xfa, 0x10,

    /* U+1EAB "ẫ" */
    0x73, 0x98, 0x7, 0xc6, 0x31, 0x78,

    /* U+1EAC "Ậ" */
    0x30, 0x1, 0xc, 0x29, 0x27, 0xa1, 0x84, 0x1,
    0x0,

    /* U+1EAD "ậ" */
    0x22, 0x9f, 0x18, 0xc5, 0xe0, 0x10,

    /* U+1EAE "Ắ" */
    0x0, 0x41, 0x12, 0x30, 0x43, 0xa, 0x49, 0x27,
    0xe1,

    /* U+1EAF "ắ" */
    0x21, 0x14, 0x47, 0xc6, 0x31, 0x78,

    /* U+1EB0 "Ằ" */
    0x20, 0x80, 0x12, 0x30, 0x43, 0xa, 0x49, 0x27,
    0xe1,

    /* U+1EB1 "ằ" */
    0x41, 0x14, 0x47, 0xc6, 0x31, 0x78,

    /* U+1EB2 "Ẳ" */
    0x10, 0x41, 0x12, 0x30, 0x43, 0xa, 0x49, 0x27,
    0xe1,

    /* U+1EB3 "ẳ" */
    0x21, 0x8, 0xa2, 0x3e, 0x31, 0x8b, 0xc0,

    /* U+1EB4 "Ẵ" */
    0x69, 0x44, 0x8c, 0x20, 0xc5, 0x12, 0x8b, 0xe8,
    0x40,

    /* U+1EB5 "ẵ" */
    0x73, 0x94, 0x47, 0xc6, 0x31, 0x78,

    /* U+1EB6 "Ặ" */
    0x48, 0xc0, 0x4, 0x30, 0xa4, 0x9e, 0x86, 0x10,
    0x4,

    /* U+1EB7 "ặ" */
    0x70, 0x1f, 0x18, 0xc5, 0xe0, 0x10,

    /* U+1EB8 "Ẹ" */
    0xfc, 0x3f, 0x8, 0x43, 0xe0, 0x20,

    /* U+1EB9 "ẹ" */
    0x74, 0x7f, 0x7, 0x0, 0x80,

    /* U+1EBA "Ẻ" */
    0x21, 0x1, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+1EBB "ẻ" */
    0x21, 0x1d, 0x1f, 0xc1, 0xc0,

    /* U+1EBC "Ẽ" */
    0x75, 0xbf, 0x8, 0x7e, 0x10, 0xf8,

    /* U+1EBD "ẽ" */
    0x55, 0x9d, 0x1f, 0xc1, 0xc0,

    /* U+1EBE "Ế" */
    0x10, 0x9c, 0xf, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1EBF "ế" */
    0x10, 0x98, 0x7, 0x47, 0xf0, 0x70,

    /* U+1EC0 "Ề" */
    0x0, 0x88, 0xaf, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1EC1 "ề" */
    0x21, 0x8, 0xa7, 0x47, 0xf0, 0x70,

    /* U+1EC2 "Ể" */
    0x10, 0x88, 0x2f, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1EC3 "ể" */
    0x10, 0x8, 0xa7, 0x47, 0xf0, 0x70,

    /* U+1EC4 "Ễ" */
    0x71, 0x15, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+1EC5 "ễ" */
    0x55, 0x98, 0x7, 0x47, 0xf0, 0x70,

    /* U+1EC6 "Ệ" */
    0x30, 0x3f, 0xf, 0xc2, 0x10, 0xf8, 0x8,

    /* U+1EC7 "ệ" */
    0x22, 0x9d, 0x1f, 0xc1, 0xc0, 0x20,

    /* U+1EC8 "Ỉ" */
    0x48, 0x24, 0x92, 0x48,

    /* U+1EC9 "ỉ" */
    0x69, 0x24, 0x90,

    /* U+1ECA "Ị" */
    0xfe, 0x80,

    /* U+1ECB "ị" */
    0x45, 0x54, 0xc0,

    /* U+1ECC "Ọ" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0, 0x10,

    /* U+1ECD "ọ" */
    0x74, 0x63, 0x17, 0x0, 0x80,

    /* U+1ECE "Ỏ" */
    0x10, 0x20, 0x41, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1ECF "ỏ" */
    0x21, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+1ED0 "Ố" */
    0x8, 0x10, 0xc0, 0x3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1ED1 "ố" */
    0x10, 0x98, 0x7, 0x46, 0x31, 0x70,

    /* U+1ED2 "Ồ" */
    0x10, 0x10, 0xc0, 0x3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1ED3 "ồ" */
    0x21, 0x8, 0xa7, 0x46, 0x31, 0x70,

    /* U+1ED4 "Ổ" */
    0x8, 0x10, 0x61, 0x43, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1ED5 "ổ" */
    0x10, 0x8, 0xa7, 0x46, 0x31, 0x70,

    /* U+1ED6 "Ỗ" */
    0x38, 0xb0, 0x40, 0x3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1ED7 "ỗ" */
    0x73, 0x98, 0x7, 0x46, 0x31, 0x70,

    /* U+1ED8 "Ộ" */
    0x30, 0x0, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,
    0x0, 0x40,

    /* U+1ED9 "ộ" */
    0x22, 0x9d, 0x18, 0xc5, 0xc0, 0x20,

    /* U+1EDA "Ớ" */
    0x0, 0x28, 0x11, 0xe4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1EDB "ớ" */
    0x21, 0x5f, 0x18, 0xc5, 0xc0,

    /* U+1EDC "Ờ" */
    0x20, 0x48, 0x11, 0xe4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1EDD "ờ" */
    0x41, 0x5f, 0x18, 0xc5, 0xc0,

    /* U+1EDE "Ở" */
    0x10, 0x20, 0x51, 0xe4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1EDF "ở" */
    0x21, 0x1f, 0x18, 0xc5, 0xc0,

    /* U+1EE0 "Ỡ" */
    0x28, 0xb8, 0xf2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+1EE1 "ỡ" */
    0x73, 0xdf, 0x18, 0xc5, 0xc0,

    /* U+1EE2 "Ợ" */
    0x4, 0x8, 0xf2, 0x28, 0x30, 0x60, 0xa2, 0x38,
    0x0, 0x20,

    /* U+1EE3 "ợ" */
    0x8, 0x5f, 0x18, 0xc5, 0xc0, 0x20,

    /* U+1EE4 "Ụ" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0x80, 0x20,

    /* U+1EE5 "ụ" */
    0x8c, 0x63, 0x17, 0x81, 0x0,

    /* U+1EE6 "Ủ" */
    0x30, 0x40, 0x21, 0x86, 0x18, 0x61, 0xcd, 0xe0,

    /* U+1EE7 "ủ" */
    0x21, 0x23, 0x18, 0xc5, 0xe0,

    /* U+1EE8 "Ứ" */
    0x10, 0x24, 0xc, 0x38, 0x50, 0xa1, 0x42, 0xcc,
    0xf0,

    /* U+1EE9 "ứ" */
    0x20, 0x18, 0xe2, 0x8a, 0x27, 0x80,

    /* U+1EEA "Ừ" */
    0x20, 0x44, 0xc, 0x38, 0x50, 0xa1, 0x42, 0xcc,
    0xf0,

    /* U+1EEB "ừ" */
    0x40, 0x18, 0xe2, 0x8a, 0x27, 0x80,

    /* U+1EEC "Ử" */
    0x10, 0x20, 0xc, 0x38, 0x50, 0xa1, 0x42, 0xcc,
    0xf0,

    /* U+1EED "ử" */
    0x20, 0x98, 0xe2, 0x8a, 0x27, 0x80,

    /* U+1EEE "Ữ" */
    0x28, 0xa6, 0x1c, 0x28, 0x50, 0xa1, 0x66, 0x78,

    /* U+1EEF "ữ" */
    0x72, 0xd8, 0xe2, 0x8a, 0x27, 0x80,

    /* U+1EF0 "Ự" */
    0x2, 0x6, 0x1c, 0x28, 0x50, 0xa1, 0x66, 0x78,
    0x0, 0xc0,

    /* U+1EF1 "ự" */
    0x4, 0x18, 0xe2, 0x8a, 0x27, 0x80, 0x20,

    /* U+1EF2 "Ỳ" */
    0x20, 0x40, 0x44, 0x24, 0x45, 0x4, 0x8, 0x10,
    0x20,

    /* U+1EF3 "ỳ" */
    0x20, 0x22, 0x95, 0x18, 0x84, 0x40,

    /* U+1EF4 "Ỵ" */
    0x84, 0x88, 0xa0, 0x81, 0x2, 0x4, 0x0, 0x10,

    /* U+1EF5 "ỵ" */
    0x8a, 0x54, 0x62, 0x11, 0x40,

    /* U+1EF6 "Ỷ" */
    0x10, 0x20, 0x4, 0x24, 0x45, 0x4, 0x8, 0x10,
    0x20,

    /* U+1EF7 "ỷ" */
    0x31, 0x22, 0x95, 0x18, 0x84, 0x40,

    /* U+1EF8 "Ỹ" */
    0x38, 0xb2, 0x12, 0x22, 0x82, 0x4, 0x8, 0x10,

    /* U+1EF9 "ỹ" */
    0x69, 0x48, 0x92, 0x50, 0xc2, 0x8, 0x20,

    /* U+2013 "–" */
    0xf8,

    /* U+2014 "—" */
    0xfc,

    /* U+2018 "‘" */
    0x28,

    /* U+2019 "’" */
    0xd0,

    /* U+201C "“" */
    0xa, 0xa0,

    /* U+201D "”" */
    0xf5,

    /* U+2020 "†" */
    0x5d, 0x20,

    /* U+2021 "‡" */
    0x5f, 0xa0,

    /* U+2026 "…" */
    0xa8,

    /* U+2030 "‰" */
    0xe0, 0x2a, 0xf, 0x0, 0x40, 0x2f, 0xca, 0xd4,
    0xfd, 0x0,

    /* U+2032 "′" */
    0x60,

    /* U+2033 "″" */
    0x74};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 69, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 44, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 53, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 87, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 103, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 36, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 30, .adv_w = 66, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 34, .adv_w = 66, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 38, .adv_w = 59, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 39, .adv_w = 96, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 42, .adv_w = 48, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 43, .adv_w = 75, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 44, .adv_w = 46, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 60, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 49, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 46, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 87, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 73, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 46, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 48, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 100, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 102, .adv_w = 96, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 103, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 105, .adv_w = 94, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 158, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 118, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 124, .adv_w = 103, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 120, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 123, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 121, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 36, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 86, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 144, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 117, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 102, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 130, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 214, .adv_w = 101, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 90, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 97, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 122, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 159, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 102, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 90, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 70, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 275, .adv_w = 56, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 278, .adv_w = 70, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 282, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 284, .adv_w = 93, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 285, .adv_w = 22, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 286, .adv_w = 100, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 90, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 55, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 317, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 33, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 50, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 327, .adv_w = 78, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 31, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 140, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 97, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 92, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 350, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 355, .adv_w = 71, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 72, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 60, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 95, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 120, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 76, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 86, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 387, .adv_w = 75, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 74, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 395, .adv_w = 36, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 397, .adv_w = 74, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 402, .adv_w = 96, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 403, .adv_w = 69, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 44, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 405, .adv_w = 90, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 410, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 98, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 419, .adv_w = 103, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 36, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 427, .adv_w = 65, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 37, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 432, .adv_w = 116, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 45, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 441, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 443, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 447, .adv_w = 66, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 448, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 450, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 46, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 455, .adv_w = 46, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 457, .adv_w = 22, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 458, .adv_w = 103, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 464, .adv_w = 100, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 470, .adv_w = 70, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 471, .adv_w = 51, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 472, .adv_w = 27, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 473, .adv_w = 42, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 475, .adv_w = 77, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 477, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 484, .adv_w = 117, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 491, .adv_w = 139, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 500, .adv_w = 94, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 504, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 125, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 564, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 578, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 36, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 36, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 36, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 36, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 120, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 661, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 122, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 122, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 102, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 707, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 747, .adv_w = 136, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 90, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 757, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 772, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 33, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 33, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 781, .adv_w = 33, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 33, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 791, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 823, .adv_w = 92, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 847, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 853, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 859, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 865, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 872, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 877, .adv_w = 104, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 886, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 891, .adv_w = 124, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 900, .adv_w = 90, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 120, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 918, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 925, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 930, .adv_w = 36, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 934, .adv_w = 33, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 86, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 31, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 117, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 955, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 960, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 967, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 90, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 72, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 983, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 990, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1002, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1007, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 75, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1018, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 92, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1030, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 95, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 122, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1052, .adv_w = 95, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1058, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1066, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1071, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1086, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1106, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1111, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1127, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1128, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1129, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1130, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1131, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1132, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1133, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1134, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1141, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1146, .adv_w = 103, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1152, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1158, .adv_w = 124, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1169, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1175, .adv_w = 120, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1183, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1189, .adv_w = 93, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1196, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1202, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1208, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1213, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1219, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1224, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1231, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1237, .adv_w = 36, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1242, .adv_w = 33, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1246, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 78, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1258, .adv_w = 95, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1264, .adv_w = 78, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1269, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1275, .adv_w = 31, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1277, .adv_w = 86, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1286, .adv_w = 31, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1291, .adv_w = 144, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1301, .adv_w = 140, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1308, .adv_w = 144, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1317, .adv_w = 140, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1324, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1331, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1336, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1347, .adv_w = 92, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1354, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1364, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1370, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1380, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 102, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1393, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1399, .adv_w = 101, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1405, .adv_w = 71, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1409, .adv_w = 101, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1416, .adv_w = 71, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1421, .adv_w = 90, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1428, .adv_w = 72, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1432, .adv_w = 90, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1441, .adv_w = 72, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1446, .adv_w = 90, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1455, .adv_w = 72, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1460, .adv_w = 97, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1468, .adv_w = 60, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1473, .adv_w = 122, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1482, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1489, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1496, .adv_w = 83, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1501, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1508, .adv_w = 83, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1513, .adv_w = 159, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1526, .adv_w = 120, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1533, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1545, .adv_w = 120, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1552, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1558, .adv_w = 75, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1562, .adv_w = 104, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1569, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1574, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1582, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1587, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1596, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1602, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1611, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1617, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1626, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1632, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1640, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1646, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1655, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1661, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1670, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1676, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1685, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1691, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1700, .adv_w = 100, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1707, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1716, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1722, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1731, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1737, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1743, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1748, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1755, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1760, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1766, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1771, .adv_w = 93, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1778, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1784, .adv_w = 93, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1791, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1797, .adv_w = 93, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1804, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1810, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1817, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1823, .adv_w = 93, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1830, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1836, .adv_w = 36, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1840, .adv_w = 33, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1843, .adv_w = 36, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1845, .adv_w = 33, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1848, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1856, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1861, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1870, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1875, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1885, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1891, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1901, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1907, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1917, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1923, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1933, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1939, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1949, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1955, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1964, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1969, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1978, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1983, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1992, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1997, .adv_w = 128, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2005, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2010, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2020, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2026, .adv_w = 122, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2033, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2038, .adv_w = 122, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2046, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2051, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2060, .adv_w = 95, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2066, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2075, .adv_w = 95, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2081, .adv_w = 122, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2090, .adv_w = 95, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2096, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2104, .adv_w = 95, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2110, .adv_w = 122, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2120, .adv_w = 95, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2127, .adv_w = 102, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2136, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2142, .adv_w = 102, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2150, .adv_w = 86, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2155, .adv_w = 102, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2164, .adv_w = 86, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2170, .adv_w = 102, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2178, .adv_w = 86, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2185, .adv_w = 102, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2186, .adv_w = 129, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2187, .adv_w = 41, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2188, .adv_w = 41, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2189, .adv_w = 74, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2191, .adv_w = 74, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2192, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2194, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2196, .adv_w = 107, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2197, .adv_w = 182, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2207, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2208, .adv_w = 59, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 5}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_3[] = {
    0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0xe, 0xf,
    0x16, 0x17, 0x26, 0x27, 0x37, 0x38, 0x41, 0x42,
    0x52, 0x53, 0x58, 0x59, 0x66, 0x67, 0x70, 0x71,
    0x77, 0x78, 0x9e, 0x9f, 0xad, 0xae, 0xd5, 0xd6,
    0xe8, 0xe9, 0xf2, 0xf3, 0xfc, 0xfd, 0x126, 0x127,
    0x12a, 0x12b, 0x1ff, 0x200, 0x201, 0x204, 0x207, 0x219,
    0x221, 0x1cfe, 0x1cff, 0x1d02, 0x1d03, 0x1d06, 0x1d07, 0x1d0a,
    0x1d0b, 0x1d14, 0x1d15, 0x1d16, 0x1d17, 0x1d18, 0x1d19, 0x1d22,
    0x1d23, 0x1d2c, 0x1d2d, 0x1d2e, 0x1d2f, 0x1d30, 0x1d31, 0x1d34,
    0x1d35, 0x1d36, 0x1d37, 0x1d3c, 0x1d3d, 0x1d40, 0x1d41, 0x1d44,
    0x1d45, 0x1d4a, 0x1d4b, 0x1d4c, 0x1d4d, 0x1d50, 0x1d51, 0x1d52,
    0x1d53, 0x1d58, 0x1d59, 0x1d5a, 0x1d5b, 0x1d60, 0x1d61, 0x1d62,
    0x1d63, 0x1d66, 0x1d67, 0x1d6a, 0x1d6b, 0x1d76, 0x1d77, 0x1d7a,
    0x1d7b, 0x1d7c, 0x1d7d, 0x1d80, 0x1d81, 0x1d86, 0x1d87, 0x1d90,
    0x1d91};

static const uint16_t unicode_list_5[] = {
    0x0, 0x1, 0x5, 0x6, 0x9, 0xa, 0xd, 0xe,
    0x13, 0x1d, 0x1f, 0x20};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
    {
        {.range_start = 32, .range_length = 95, .glyph_id_start = 1, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 160, .range_length = 13, .glyph_id_start = 96, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 174, .range_length = 82, .glyph_id_start = 109, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 258, .range_length = 7570, .glyph_id_start = 191, .unicode_list = unicode_list_3, .glyph_id_ofs_list = NULL, .list_length = 113, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY},
        {.range_start = 7840, .range_length = 90, .glyph_id_start = 304, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 8211, .range_length = 33, .glyph_id_start = 394, .unicode_list = unicode_list_5, .glyph_id_ofs_list = NULL, .list_length = 12, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
    {
        0, 0, 1, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 2, 0, 0,
        3, 4, 5, 0, 6, 7, 8, 9,
        10, 0, 11, 0, 0, 0, 0, 0,
        12, 0, 13, 14, 0, 15, 0, 16,
        17, 5, 5, 18, 19, 20, 5, 5,
        17, 21, 17, 22, 0, 23, 18, 24,
        24, 25, 26, 0, 0, 0, 0, 0,
        0, 0, 27, 28, 0, 27, 29, 30,
        0, 31, 32, 33, 34, 27, 31, 31,
        28, 28, 35, 36, 0, 37, 27, 38,
        38, 0, 39, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 27, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 40, 13,
        13, 13, 13, 13, 13, 0, 0, 0,
        0, 0, 0, 5, 5, 41, 0, 15,
        5, 17, 17, 17, 17, 17, 0, 17,
        18, 18, 18, 18, 26, 0, 0, 27,
        27, 27, 27, 27, 27, 29, 0, 29,
        29, 29, 29, 32, 42, 41, 43, 0,
        31, 28, 28, 28, 28, 28, 0, 28,
        27, 27, 27, 27, 39, 0, 39, 13,
        27, 13, 27, 0, 0, 15, 0, 0,
        29, 5, 44, 20, 27, 5, 31, 22,
        36, 0, 0, 18, 27, 18, 27, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 17, 28, 0, 29, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 14, 28, 0, 0, 15, 27,
        0, 0, 0, 0, 0, 0, 5, 31,
        0, 43, 0, 0, 0, 0, 20, 27,
        0, 0, 5, 31, 0, 0, 5, 31,
        17, 28, 0, 0, 17, 28, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 23, 45, 0, 0, 0, 0,
        0, 0, 24, 0, 0, 0, 0, 0,
        13, 27, 13, 0, 0, 0, 0, 0,
        0, 0, 13, 0, 13, 27, 13, 0,
        13, 0, 13, 0, 13, 0, 13, 0,
        0, 29, 0, 0, 0, 29, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 29,
        0, 43, 5, 32, 17, 28, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        17, 28, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 18, 27, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 26, 39, 0, 39, 0, 0,
        26, 39, 0, 0, 46, 2, 0, 0,
        0, 0, 0, 0, 0, 0};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
    {
        0, 0, 1, 2, 0, 0, 3, 0,
        2, 0, 0, 0, 0, 4, 0, 5,
        6, 0, 0, 7, 0, 8, 9, 0,
        10, 0, 11, 0, 0, 0, 0, 0,
        12, 0, 13, 0, 14, 0, 0, 0,
        14, 0, 0, 15, 0, 0, 0, 0,
        14, 0, 14, 0, 0, 16, 0, 17,
        17, 0, 18, 0, 0, 19, 0, 0,
        0, 0, 20, 21, 20, 20, 20, 22,
        20, 23, 24, 25, 23, 21, 26, 26,
        20, 27, 20, 26, 28, 29, 30, 31,
        31, 0, 32, 0, 0, 0, 0, 0,
        0, 1, 33, 0, 0, 0, 0, 0,
        0, 0, 20, 0, 0, 0, 0, 3,
        0, 0, 0, 0, 0, 0, 34, 0,
        0, 0, 0, 0, 0, 0, 0, 13,
        13, 13, 13, 13, 13, 13, 14, 0,
        0, 0, 0, 0, 0, 35, 0, 0,
        0, 14, 14, 14, 14, 14, 0, 14,
        0, 0, 0, 0, 18, 0, 21, 20,
        20, 20, 20, 20, 20, 0, 20, 20,
        20, 20, 20, 36, 24, 37, 38, 0,
        26, 20, 20, 20, 20, 20, 0, 20,
        30, 30, 30, 30, 32, 0, 32, 13,
        20, 13, 20, 14, 20, 0, 0, 0,
        20, 0, 39, 0, 23, 0, 26, 0,
        26, 0, 28, 0, 30, 0, 30, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 14, 20, 0, 20, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 21, 14, 0, 0, 20,
        0, 0, 0, 0, 0, 0, 0, 23,
        0, 40, 0, 0, 0, 0, 0, 23,
        0, 0, 0, 26, 0, 0, 0, 26,
        14, 20, 0, 0, 14, 20, 0, 0,
        0, 0, 0, 0, 0, 28, 0, 0,
        0, 0, 16, 29, 0, 0, 0, 0,
        0, 0, 17, 0, 0, 0, 0, 0,
        13, 20, 13, 0, 0, 0, 0, 0,
        0, 0, 13, 0, 13, 20, 13, 0,
        13, 0, 13, 0, 13, 0, 13, 0,
        0, 20, 0, 0, 0, 20, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 20,
        0, 40, 0, 24, 14, 20, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        14, 20, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 30, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 18, 32, 0, 32, 0, 0,
        18, 32, 0, 0, 0, 41, 0, 42,
        0, 0, 5, 0, 0, 0};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
    {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -10, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -7, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -8, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -7,
        0, 0, -5, 0, -5, -5, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -10, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -4, 0, 0, 0, 1,
        0, -7, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -10, -16, 0,
        0, -7, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -10,
        -12, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -6, 0,
        0, 0, 0, -14, 0, 0, 0, 0,
        0, -8, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -10,
        -9, -13, 0, 0, 0, 0, 0, 0,
        -12, 0, 0, 0, 0, 0, -1, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -14, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -6, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -7, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -14, -2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -6, -8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -12, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -10, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, 0, 0, 0, 0, 0, -3,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -3, -2, -3, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -7,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 1, -7, 0, -10, 0, -14,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -6, 0, 0,
        0, 0, 0, 0, 0, 0, -7, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 2, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -7, 0, -15, 0, 0, 0, 0, -14,
        0, 0, 0, -4, -18, -6, 0, -12,
        0, -7, -4, -4, -14, 0, 0, 5,
        0, 0, 0, 0, 2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -14, 0, 0, 0, 0, 0,
        0, -7, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, -7, 0,
        0, 1, 0, 1, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -6,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -13, 0,
        -15, 0, 0, 0, 0, -15, 0, 0,
        0, -4, 0, 0, -14, -13, 0, -6,
        -6, 0, -15, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, -4, 0, 0,
        1, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1,
        0, -1, 0, 0, -17, 0, 0, 0,
        0, 0, 1, 0, 1, 1, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -14, 0, 0,
        0, 0, 0, -2, 0, 0, -16, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -2, 0, 0,
        -11, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -7, -7, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -7, 0, -5,
        0, -2, -14, 0, 0, 0, 0, 0,
        0, 0, -7, -7, 0, 1, 0, 5,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, -12, 0, 0, 0,
        0, 0, 0, -1, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -2, -2, 0, 3, -18, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -4, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        8, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, -2, 0, 0, 0, 0,
        0, 0, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -5, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -7, -16, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -16,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -5, -8, 0, -1, -2,
        0, -3, -2, 0, -2, -4, 0, -4,
        -5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, -12, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        3, 0, 0, -12, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -7,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -14, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 6, 0, 5, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 6, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 5, 0, 5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 13, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, -8, 0, -1, -2,
        0, -3, -2, 0, -2, -4, 0, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -5, 0, 0, 0, 0, 0,
        0, 0, 0, 0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
    {
        .class_pair_values = kern_class_values,
        .left_class_mapping = kern_left_class_mapping,
        .right_class_mapping = kern_right_class_mapping,
        .left_class_cnt = 46,
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
const lv_font_t elms_sans_regular_10 = {
#else
lv_font_t elms_sans_regular_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 15,                              /*The maximum line height required by the font*/
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

#endif /*#if ELMS_SANS_REGULAR_10*/
