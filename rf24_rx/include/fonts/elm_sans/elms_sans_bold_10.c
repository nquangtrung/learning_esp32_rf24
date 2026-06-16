/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --no-compress --stride 1 --align 1 --font ElmsSans-Bold.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o elms_sans_bold_10.c
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

#ifndef ELMS_SANS_BOLD_10
#define ELMS_SANS_BOLD_10 1
#endif

#if ELMS_SANS_BOLD_10

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
    0xb4,

    /* U+0023 "#" */
    0x34, 0xfc, 0x93, 0x4f, 0xc9, 0x34, 0x0,

    /* U+0024 "$" */
    0x77, 0x78, 0x72, 0xd5, 0xc0,

    /* U+0025 "%" */
    0xe4, 0xa8, 0xe8, 0x10, 0x16, 0x2b, 0x26, 0x40,

    /* U+0026 "&" */
    0x79, 0x87, 0xe2, 0x8a, 0x27, 0x0,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x34, 0x88, 0x88, 0x84, 0x30,

    /* U+0029 ")" */
    0x88, 0x92, 0x4a, 0x80,

    /* U+002A "*" */
    0x70,

    /* U+002B "+" */
    0x4f, 0x44,

    /* U+002C "," */
    0xf4,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x12, 0x22, 0x44, 0x4c,

    /* U+0030 "0" */
    0x76, 0xe3, 0x18, 0xed, 0xc0,

    /* U+0031 "1" */
    0xd5, 0x54,

    /* U+0032 "2" */
    0x72, 0x42, 0x66, 0x23, 0xe0,

    /* U+0033 "3" */
    0x78, 0x9c, 0x30, 0xc5, 0xc0,

    /* U+0034 "4" */
    0x18, 0xe2, 0x92, 0xfc, 0x20, 0x80,

    /* U+0035 "5" */
    0x7e, 0x3c, 0x90, 0xe5, 0xc0,

    /* U+0036 "6" */
    0x23, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+0037 "7" */
    0xf1, 0x22, 0x24, 0x40,

    /* U+0038 "8" */
    0x76, 0x5d, 0x18, 0xc5, 0xc0,

    /* U+0039 "9" */
    0x74, 0x63, 0x17, 0x18, 0x80,

    /* U+003A ":" */
    0xf3, 0xc0,

    /* U+003B ";" */
    0xf3, 0xf0,

    /* U+003C "<" */
    0x3c, 0xe3,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0x87, 0x78,

    /* U+003F "?" */
    0x79, 0x20, 0x86, 0x20, 0x2, 0x0,

    /* U+0040 "@" */
    0x1e, 0x30, 0xb7, 0x74, 0x9a, 0x5d, 0xfb, 0x0,
    0x60,

    /* U+0041 "A" */
    0x30, 0xc7, 0x92, 0x4b, 0xf8, 0x40,

    /* U+0042 "B" */
    0xf4, 0x65, 0xe8, 0xc7, 0xc0,

    /* U+0043 "C" */
    0x38, 0x8a, 0x4, 0x8, 0x8, 0x8e, 0x0,

    /* U+0044 "D" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x0,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf8, 0x43, 0xe0,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf8, 0x42, 0x0,

    /* U+0047 "G" */
    0x38, 0x8a, 0x4, 0xf8, 0x28, 0x8e, 0x0,

    /* U+0048 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x40,

    /* U+0049 "I" */
    0xfe,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0xc5, 0xc0,

    /* U+004B "K" */
    0x9a, 0x4a, 0x38, 0xb2, 0x48, 0x80,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x43, 0xe0,

    /* U+004D "M" */
    0xc3, 0xc3, 0xe7, 0xa5, 0xbd, 0x99, 0x99,

    /* U+004E "N" */
    0xc7, 0x1a, 0x6d, 0x96, 0x38, 0xc0,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0,

    /* U+0050 "P" */
    0xf4, 0x63, 0x1f, 0x42, 0x0,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8f, 0x1,

    /* U+0052 "R" */
    0xf4, 0x63, 0xeb, 0x4a, 0x20,

    /* U+0053 "S" */
    0x76, 0x70, 0x70, 0xe5, 0xc0,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x80,

    /* U+0055 "U" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0x80,

    /* U+0056 "V" */
    0xc4, 0x89, 0x33, 0x42, 0x87, 0xc, 0x0,

    /* U+0057 "W" */
    0x8c, 0x73, 0x34, 0xe9, 0x6a, 0x72, 0x8c, 0xc3,
    0x10,

    /* U+0058 "X" */
    0x44, 0x58, 0xe1, 0x82, 0x8d, 0xb1, 0x80,

    /* U+0059 "Y" */
    0x44, 0xd8, 0xa0, 0x81, 0x2, 0x4, 0x0,

    /* U+005A "Z" */
    0xf8, 0xcc, 0x46, 0x63, 0xe0,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0xe0,

    /* U+005C "\\" */
    0x84, 0x44, 0x22, 0x23,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0xe0,

    /* U+005E "^" */
    0x66, 0x90,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x40,

    /* U+0061 "a" */
    0x7c, 0xe3, 0x37, 0x80,

    /* U+0062 "b" */
    0x84, 0x3d, 0x98, 0xe7, 0xc0,

    /* U+0063 "c" */
    0x74, 0xa1, 0x7, 0x0,

    /* U+0064 "d" */
    0x8, 0x5f, 0x38, 0xcd, 0xe0,

    /* U+0065 "e" */
    0x74, 0xff, 0x7, 0x0,

    /* U+0066 "f" */
    0x34, 0xe4, 0x44, 0x40,

    /* U+0067 "g" */
    0x7c, 0xe3, 0x37, 0xc5, 0xc0,

    /* U+0068 "h" */
    0x84, 0x3d, 0x18, 0xc6, 0x20,

    /* U+0069 "i" */
    0xbe,

    /* U+006A "j" */
    0x20, 0x92, 0x49, 0xc0,

    /* U+006B "k" */
    0x84, 0x25, 0x4e, 0x5a, 0x40,

    /* U+006C "l" */
    0xfe,

    /* U+006D "m" */
    0xed, 0x26, 0x4c, 0x99, 0x20,

    /* U+006E "n" */
    0xf4, 0x63, 0x18, 0x80,

    /* U+006F "o" */
    0x74, 0x63, 0x17, 0x0,

    /* U+0070 "p" */
    0xf6, 0x63, 0x9f, 0x42, 0x0,

    /* U+0071 "q" */
    0x7c, 0xe3, 0x37, 0x84, 0x20,

    /* U+0072 "r" */
    0xe9, 0x88, 0x80,

    /* U+0073 "s" */
    0xe9, 0x79, 0xe0,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x30,

    /* U+0075 "u" */
    0x8c, 0x63, 0x17, 0x80,

    /* U+0076 "v" */
    0xc9, 0x25, 0x9c, 0x30,

    /* U+0077 "w" */
    0x99, 0x5b, 0x5a, 0x66, 0x24,

    /* U+0078 "x" */
    0x4b, 0x8c, 0xec, 0x80,

    /* U+0079 "y" */
    0xcd, 0x27, 0x8c, 0x30, 0x82, 0x0,

    /* U+007A "z" */
    0xf3, 0x6c, 0xf0,

    /* U+007B "{" */
    0x34, 0x44, 0xc4, 0x43,

    /* U+007C "|" */
    0xff, 0x80,

    /* U+007D "}" */
    0xe2, 0x23, 0x22, 0x2c,

    /* U+007E "~" */
    0xdb,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xbe,

    /* U+00A2 "¢" */
    0x23, 0xa9, 0x4a, 0xb8, 0x80,

    /* U+00A3 "£" */
    0x32, 0x51, 0xc4, 0x23, 0xe0,

    /* U+00A4 "¤" */
    0x3, 0xd2, 0x97, 0x80,

    /* U+00A5 "¥" */
    0x44, 0x88, 0xa1, 0xc3, 0x87, 0x4, 0x0,

    /* U+00A6 "¦" */
    0xef,

    /* U+00A7 "§" */
    0xe9, 0x7d, 0x79, 0x60,

    /* U+00A8 "¨" */
    0xa0,

    /* U+00A9 "©" */
    0x38, 0x8a, 0xee, 0x1c, 0x2f, 0x8e, 0x0,

    /* U+00AA "ª" */
    0xf7, 0x80,

    /* U+00AB "«" */
    0x55, 0x14,

    /* U+00AC "¬" */
    0xf1,

    /* U+00AE "®" */
    0xed, 0xf6,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0xf7, 0x80,

    /* U+00B1 "±" */
    0x4f, 0x44, 0xf0,

    /* U+00B2 "²" */
    0x65, 0x70,

    /* U+00B3 "³" */
    0x6c, 0xb0,

    /* U+00B4 "´" */
    0x40,

    /* U+00B5 "µ" */
    0x8a, 0x28, 0xa2, 0xfe, 0x8, 0x0,

    /* U+00B6 "¶" */
    0x7a, 0xf5, 0xeb, 0xd0, 0xa1, 0x42, 0x85,

    /* U+00B7 "·" */
    0xf0,

    /* U+00B8 "¸" */
    0x1c,

    /* U+00B9 "¹" */
    0xf0,

    /* U+00BA "º" */
    0xd7, 0x0,

    /* U+00BB "»" */
    0xa5, 0xa0,

    /* U+00BC "¼" */
    0x88, 0x88, 0x90, 0x90, 0x23, 0x23, 0x67, 0x41,
    0x40,

    /* U+00BD "½" */
    0x88, 0x90, 0x90, 0x17, 0x21, 0x26, 0x47, 0x40,

    /* U+00BE "¾" */
    0x62, 0x18, 0x82, 0x41, 0x90, 0x8, 0xc2, 0x31,
    0x1c, 0x41, 0x10, 0x0,

    /* U+00BF "¿" */
    0x20, 0x8, 0x88, 0x4d, 0xc0,

    /* U+00C0 "À" */
    0x20, 0x3, 0xc, 0x79, 0x24, 0xbf, 0x84,

    /* U+00C1 "Á" */
    0x10, 0x3, 0xc, 0x79, 0x24, 0xbf, 0x84,

    /* U+00C2 "Â" */
    0x31, 0x23, 0xc, 0x79, 0x24, 0xbf, 0x84,

    /* U+00C3 "Ã" */
    0x69, 0x43, 0xc, 0x79, 0x24, 0xbf, 0x84,

    /* U+00C4 "Ä" */
    0x28, 0x3, 0xe, 0x29, 0xa4, 0xff, 0x84,

    /* U+00C5 "Å" */
    0x30, 0xc3, 0xc, 0x31, 0xe4, 0x92, 0xfe, 0x10,

    /* U+00C6 "Æ" */
    0x3e, 0x30, 0x38, 0x7e, 0x78, 0xc8, 0x8f,

    /* U+00C7 "Ç" */
    0x3c, 0x8e, 0x4, 0x8, 0x8, 0xcf, 0xc, 0x18,

    /* U+00C8 "È" */
    0x40, 0x3f, 0x8, 0x7e, 0x10, 0xf8,

    /* U+00C9 "É" */
    0x20, 0x3f, 0x8, 0x7e, 0x10, 0xf8,

    /* U+00CA "Ê" */
    0x22, 0xbf, 0x8, 0x7e, 0x10, 0xf8,

    /* U+00CB "Ë" */
    0x50, 0x3f, 0x8, 0x7e, 0x10, 0xf8,

    /* U+00CC "Ì" */
    0x45, 0x55, 0x40,

    /* U+00CD "Í" */
    0x8a, 0xaa, 0x80,

    /* U+00CE "Î" */
    0x55, 0x24, 0x92, 0x40,

    /* U+00CF "Ï" */
    0xa1, 0x24, 0x92, 0x40,

    /* U+00D0 "Ð" */
    0xf9, 0xa, 0xe, 0x18, 0x30, 0xbe, 0x0,

    /* U+00D1 "Ñ" */
    0x69, 0x6c, 0x71, 0xa6, 0xd9, 0x63, 0x8c,

    /* U+00D2 "Ò" */
    0x30, 0x0, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+00D3 "Ó" */
    0x18, 0x0, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+00D4 "Ô" */
    0x10, 0x50, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+00D5 "Õ" */
    0x38, 0x0, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+00D6 "Ö" */
    0x28, 0x0, 0xe2, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+00D7 "×" */
    0x76, 0x90,

    /* U+00D8 "Ø" */
    0x3e, 0x8a, 0x2c, 0x9a, 0x28, 0xae, 0x0,

    /* U+00D9 "Ù" */
    0x20, 0x8, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+00DA "Ú" */
    0x10, 0x8, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+00DB "Û" */
    0x31, 0x28, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+00DC "Ü" */
    0x28, 0x8, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+00DD "Ý" */
    0x10, 0x1, 0x13, 0x62, 0x82, 0x4, 0x8, 0x10,

    /* U+00DE "Þ" */
    0x87, 0xa3, 0x18, 0xfa, 0x0,

    /* U+00DF "ß" */
    0x74, 0xed, 0x18, 0xc6, 0xc0,

    /* U+00E0 "à" */
    0x20, 0x1f, 0x38, 0xcd, 0xe0,

    /* U+00E1 "á" */
    0x10, 0x1f, 0x38, 0xcd, 0xe0,

    /* U+00E2 "â" */
    0x32, 0x1f, 0x38, 0xcd, 0xe0,

    /* U+00E3 "ã" */
    0x73, 0x9f, 0x98, 0xc5, 0xe0,

    /* U+00E4 "ä" */
    0x50, 0x1f, 0x38, 0xcd, 0xe0,

    /* U+00E5 "å" */
    0x31, 0x9f, 0x38, 0xcd, 0xe0,

    /* U+00E6 "æ" */
    0x7e, 0x19, 0x7f, 0x98, 0x7e,

    /* U+00E7 "ç" */
    0x74, 0x61, 0xf7, 0x18, 0xc0,

    /* U+00E8 "è" */
    0x40, 0x1d, 0x3f, 0xc1, 0xc0,

    /* U+00E9 "é" */
    0x20, 0x1d, 0x3f, 0xc1, 0xc0,

    /* U+00EA "ê" */
    0x62, 0x9d, 0x3f, 0xc1, 0xc0,

    /* U+00EB "ë" */
    0x50, 0x1d, 0x3f, 0xc1, 0xc0,

    /* U+00EC "ì" */
    0x45, 0x54,

    /* U+00ED "í" */
    0x8a, 0xa8,

    /* U+00EE "î" */
    0x41, 0x24, 0x90,

    /* U+00EF "ï" */
    0xa1, 0x24, 0x90,

    /* U+00F0 "ð" */
    0x33, 0x9d, 0x18, 0xc5, 0xc0,

    /* U+00F1 "ñ" */
    0x75, 0xbd, 0x18, 0xc6, 0x20,

    /* U+00F2 "ò" */
    0x60, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F3 "ó" */
    0x30, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F4 "ô" */
    0x72, 0x9d, 0x18, 0xc5, 0xc0,

    /* U+00F5 "õ" */
    0x75, 0x9d, 0x18, 0xc5, 0xc0,

    /* U+00F6 "ö" */
    0x50, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+00F7 "÷" */
    0x60, 0xf6,

    /* U+00F8 "ø" */
    0x7c, 0xeb, 0x9f, 0x0,

    /* U+00F9 "ù" */
    0x60, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FA "ú" */
    0x30, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FB "û" */
    0x70, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FC "ü" */
    0x50, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FD "ý" */
    0x10, 0xc, 0xd2, 0x78, 0xc3, 0x8, 0x20,

    /* U+00FE "þ" */
    0x84, 0x3d, 0x18, 0xc7, 0xd0, 0x80,

    /* U+00FF "ÿ" */
    0x50, 0x23, 0xa5, 0x38, 0x84, 0x40,

    /* U+0102 "Ă" */
    0x48, 0xc0, 0xc, 0x31, 0xe4, 0x92, 0xfe, 0x10,

    /* U+0103 "ă" */
    0x53, 0x9f, 0x38, 0xcd, 0xe0,

    /* U+0104 "Ą" */
    0x30, 0x61, 0xe2, 0x47, 0x98, 0xa1, 0x2, 0x6,

    /* U+0105 "ą" */
    0x7c, 0xe3, 0x37, 0x88, 0x20,

    /* U+0106 "Ć" */
    0x10, 0x0, 0xe2, 0x28, 0x10, 0x20, 0x22, 0x38,

    /* U+0107 "ć" */
    0x20, 0x1d, 0x28, 0x41, 0xc0,

    /* U+0110 "Đ" */
    0xf9, 0xa, 0xe, 0x18, 0x30, 0xbe, 0x0,

    /* U+0111 "đ" */
    0x8, 0x77, 0xa6, 0x8a, 0x67, 0x80,

    /* U+0118 "Ę" */
    0xfc, 0x3f, 0x8, 0x43, 0xe2, 0x18,

    /* U+0119 "ę" */
    0x76, 0x7f, 0x87, 0x10, 0xc0,

    /* U+0128 "Ĩ" */
    0xea, 0x44, 0x44, 0x44, 0x40,

    /* U+0129 "ĩ" */
    0xea, 0x44, 0x44, 0x40,

    /* U+0139 "Ĺ" */
    0x80, 0x21, 0x8, 0x42, 0x10, 0xf8,

    /* U+013A "ĺ" */
    0x8a, 0xaa, 0x80,

    /* U+0143 "Ń" */
    0x10, 0xc, 0x71, 0xa6, 0xd9, 0x63, 0x8c,

    /* U+0144 "ń" */
    0x30, 0x3d, 0x18, 0xc6, 0x20,

    /* U+0154 "Ŕ" */
    0x20, 0x3d, 0x18, 0xfa, 0xd2, 0x88,

    /* U+0155 "ŕ" */
    0x60, 0xe9, 0x88, 0x80,

    /* U+015A "Ś" */
    0x10, 0x1d, 0x9c, 0x1c, 0x39, 0x70,

    /* U+015B "ś" */
    0x20, 0xe9, 0x79, 0xe0,

    /* U+0168 "Ũ" */
    0x78, 0x8, 0x61, 0x86, 0x18, 0x73, 0x78,

    /* U+0169 "ũ" */
    0x6d, 0xa3, 0x18, 0xc5, 0xe0,

    /* U+0172 "Ų" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0x84, 0x18,

    /* U+0173 "ų" */
    0x8a, 0x28, 0xa2, 0x78, 0x40, 0x80,

    /* U+0179 "Ź" */
    0x30, 0x3e, 0x33, 0x11, 0x98, 0xf8,

    /* U+017A "ź" */
    0x20, 0xf3, 0x6c, 0xf0,

    /* U+01A0 "Ơ" */
    0x2, 0x7d, 0x14, 0x18, 0x30, 0x51, 0x1c,

    /* U+01A1 "ơ" */
    0x5, 0xf8, 0xa2, 0x89, 0xc0,

    /* U+01AF "Ư" */
    0x1, 0x87, 0x84, 0x84, 0x84, 0x84, 0xcc, 0x78,

    /* U+01B0 "ư" */
    0x6, 0x38, 0xa2, 0x89, 0xe0,

    /* U+01D7 "Ǘ" */
    0x10, 0x2, 0x80, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x80,

    /* U+01D8 "ǘ" */
    0x30, 0x14, 0x8, 0xc6, 0x31, 0x78,

    /* U+01EA "Ǫ" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x8, 0x18,

    /* U+01EB "ǫ" */
    0x74, 0x63, 0xf7, 0x10, 0xc0,

    /* U+01F4 "Ǵ" */
    0x10, 0x0, 0xe2, 0x28, 0x13, 0xe0, 0xa2, 0x38,

    /* U+01F5 "ǵ" */
    0x10, 0x1f, 0x38, 0xcd, 0xf1, 0x70,

    /* U+01FE "Ǿ" */
    0x18, 0x0, 0xfa, 0x28, 0xb2, 0x68, 0xa2, 0xb8,

    /* U+01FF "ǿ" */
    0x10, 0x1f, 0x3a, 0xe7, 0xc0,

    /* U+0228 "Ȩ" */
    0xfc, 0x3f, 0x8, 0x43, 0xe4, 0x60,

    /* U+0229 "ȩ" */
    0x77, 0xe1, 0xf7, 0x11, 0x80,

    /* U+022C "Ȭ" */
    0x38, 0x0, 0xe0, 0x3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+022D "ȭ" */
    0x70, 0x1d, 0x67, 0x46, 0x31, 0x70,

    /* U+0301 "́" */
    0x40,

    /* U+0302 "̂" */
    0x27,

    /* U+0303 "̃" */
    0xdb,

    /* U+0306 "̆" */
    0x57,

    /* U+0309 "̉" */
    0x65, 0x0,

    /* U+031B "̛" */
    0x70,

    /* U+0323 "̣" */
    0x80,

    /* U+1E00 "Ḁ" */
    0x30, 0xc7, 0x92, 0x7b, 0x38, 0x4c, 0x30,

    /* U+1E01 "ḁ" */
    0x7c, 0xe3, 0x37, 0x98, 0xc0,

    /* U+1E04 "Ḅ" */
    0xf4, 0x7d, 0x18, 0xc7, 0xc0, 0x20,

    /* U+1E05 "ḅ" */
    0x84, 0x3d, 0x98, 0xe7, 0xc0, 0x20,

    /* U+1E08 "Ḉ" */
    0x18, 0x0, 0x1, 0xe4, 0x70, 0x20, 0x40, 0x46,
    0x78, 0x60, 0xc0,

    /* U+1E09 "ḉ" */
    0x30, 0x1d, 0x18, 0x7d, 0xc6, 0x30,

    /* U+1E0C "Ḍ" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x0, 0x20,

    /* U+1E0D "ḍ" */
    0x8, 0x5f, 0x38, 0xcd, 0xe0, 0x20,

    /* U+1E16 "Ḗ" */
    0x20, 0x1c, 0xf, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1E17 "ḗ" */
    0x20, 0x1c, 0x7, 0x4f, 0xf0, 0x70,

    /* U+1E18 "Ḙ" */
    0xfc, 0x21, 0xf8, 0x43, 0xe4, 0x50,

    /* U+1E19 "ḙ" */
    0x74, 0xff, 0x7, 0x11, 0x40,

    /* U+1E1A "Ḛ" */
    0xfc, 0x3f, 0x8, 0x43, 0xee, 0xb0,

    /* U+1E1B "ḛ" */
    0x74, 0xff, 0x7, 0x3a, 0xc0,

    /* U+1E24 "Ḥ" */
    0x86, 0x1f, 0xe1, 0x86, 0x18, 0x40, 0x10,

    /* U+1E25 "ḥ" */
    0x84, 0x3d, 0x18, 0xc6, 0x20, 0x20,

    /* U+1E2E "Ḯ" */
    0x42, 0x84, 0x92, 0x49, 0x0,

    /* U+1E2F "ḯ" */
    0x42, 0x84, 0x92, 0x40,

    /* U+1E30 "Ḱ" */
    0x20, 0x9, 0xa4, 0xa3, 0x8b, 0x24, 0x88,

    /* U+1E31 "ḱ" */
    0x80, 0x21, 0x9, 0x53, 0x96, 0x90,

    /* U+1E32 "Ḳ" */
    0x9a, 0xce, 0x2c, 0x92, 0x68, 0x80, 0x20,

    /* U+1E33 "ḳ" */
    0x84, 0x25, 0xcb, 0x4a, 0x60, 0x20,

    /* U+1E36 "Ḷ" */
    0x84, 0x21, 0x8, 0x43, 0xe0, 0x40,

    /* U+1E37 "ḷ" */
    0xfe, 0x80,

    /* U+1E38 "Ḹ" */
    0xe0, 0x4, 0x10, 0x41, 0x4, 0x10, 0x7c, 0x2,
    0x0,

    /* U+1E39 "ḹ" */
    0xe0, 0x24, 0x92, 0x48, 0x20,

    /* U+1E3E "Ḿ" */
    0x8, 0x0, 0xc3, 0xc3, 0xe7, 0xa5, 0xbd, 0x99,
    0x99,

    /* U+1E3F "ḿ" */
    0x10, 0x3, 0xb4, 0x99, 0x32, 0x64, 0x80,

    /* U+1E42 "Ṃ" */
    0xc3, 0xc3, 0xa3, 0xa5, 0x95, 0x95, 0x89, 0x0,
    0x8,

    /* U+1E43 "ṃ" */
    0xee, 0x91, 0x91, 0x91, 0x91, 0x0, 0x10,

    /* U+1E46 "Ṇ" */
    0xc7, 0x1a, 0x6d, 0x96, 0x38, 0xc0, 0x10,

    /* U+1E47 "ṇ" */
    0xf4, 0x63, 0x18, 0x80, 0x80,

    /* U+1E4C "Ṍ" */
    0x18, 0x0, 0xe0, 0x3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1E4D "ṍ" */
    0x30, 0x1d, 0x67, 0x46, 0x31, 0x70,

    /* U+1E4E "Ṏ" */
    0x28, 0x0, 0xe0, 0x3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1E4F "ṏ" */
    0x50, 0x1d, 0x67, 0x46, 0x31, 0x70,

    /* U+1E52 "Ṓ" */
    0x18, 0x0, 0xe0, 0x3, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1E53 "ṓ" */
    0x30, 0x1c, 0x7, 0x46, 0x31, 0x70,

    /* U+1E54 "Ṕ" */
    0x20, 0x3d, 0x18, 0xc7, 0xd0, 0x80,

    /* U+1E55 "ṕ" */
    0x20, 0x3d, 0x98, 0xe7, 0xd0, 0x80,

    /* U+1E5A "Ṛ" */
    0xf4, 0x63, 0xeb, 0x4a, 0x20, 0x20,

    /* U+1E5B "ṛ" */
    0xe9, 0x88, 0x80, 0x40,

    /* U+1E5C "Ṝ" */
    0x70, 0x3d, 0x18, 0xfa, 0xd2, 0x88, 0x8,

    /* U+1E5D "ṝ" */
    0xe0, 0xe9, 0x88, 0x80, 0x40,

    /* U+1E62 "Ṣ" */
    0x74, 0xf0, 0x70, 0xe5, 0xc0, 0x20,

    /* U+1E63 "ṣ" */
    0xeb, 0x69, 0xe0, 0x40,

    /* U+1E64 "Ṥ" */
    0x18, 0x1, 0x0, 0x39, 0xb6, 0xf, 0x5, 0x13,
    0x80,

    /* U+1E65 "ṥ" */
    0x20, 0x20, 0xeb, 0x79, 0xe0,

    /* U+1E68 "Ṩ" */
    0x20, 0x0, 0xe9, 0xe0, 0xe1, 0xcb, 0x80, 0x40,

    /* U+1E69 "ṩ" */
    0x40, 0xeb, 0x69, 0xe0, 0x40,

    /* U+1E6C "Ṭ" */
    0xf9, 0x8, 0x42, 0x10, 0x80, 0x20,

    /* U+1E6D "ṭ" */
    0x44, 0xe4, 0x44, 0x30, 0x20,

    /* U+1E78 "Ṹ" */
    0x10, 0x7, 0x80, 0x86, 0x18, 0x61, 0x87, 0x37,
    0x80,

    /* U+1E79 "ṹ" */
    0x30, 0x1b, 0x68, 0xc6, 0x31, 0x78,

    /* U+1E7C "Ṽ" */
    0x69, 0x68, 0x73, 0x49, 0x27, 0x8c, 0x30,

    /* U+1E7D "ṽ" */
    0x69, 0x6c, 0xd2, 0x58, 0xc3, 0x0,

    /* U+1E7E "Ṿ" */
    0x44, 0x89, 0x91, 0x42, 0x85, 0x4, 0x0, 0x10,

    /* U+1E7F "ṿ" */
    0x8a, 0xd4, 0xa2, 0x0, 0x80,

    /* U+1E82 "Ẃ" */
    0x4, 0x0, 0x8, 0xc7, 0x33, 0x4e, 0x96, 0xa7,
    0x28, 0xcc, 0x31, 0x0,

    /* U+1E83 "ẃ" */
    0x8, 0x0, 0x99, 0x5b, 0x5a, 0x66, 0x24,

    /* U+1E88 "Ẉ" */
    0x88, 0xc4, 0x75, 0x6a, 0xa5, 0x53, 0x98, 0x88,
    0x0, 0x8, 0x0,

    /* U+1E89 "ẉ" */
    0x93, 0xa5, 0xb3, 0x66, 0xc0, 0x4, 0x0,

    /* U+1E92 "Ẓ" */
    0xf8, 0xcc, 0x46, 0x63, 0xe0, 0x20,

    /* U+1E93 "ẓ" */
    0xf3, 0x6c, 0xf0, 0x20,

    /* U+1EA0 "Ạ" */
    0x10, 0xa2, 0x92, 0x7f, 0x18, 0x40, 0x10,

    /* U+1EA1 "ạ" */
    0x7c, 0xe3, 0x37, 0x80, 0x80,

    /* U+1EA2 "Ả" */
    0x30, 0x40, 0xc, 0x31, 0xe4, 0x92, 0xfe, 0x10,

    /* U+1EA3 "ả" */
    0x31, 0x1f, 0x38, 0xcd, 0xe0,

    /* U+1EA4 "Ấ" */
    0x8, 0xc0, 0xc, 0x31, 0xe4, 0x92, 0xfe, 0x10,

    /* U+1EA5 "ấ" */
    0x9, 0x90, 0xf9, 0xc6, 0x6f,

    /* U+1EA6 "Ầ" */
    0x8, 0xc0, 0xc, 0x31, 0xe4, 0x92, 0xfe, 0x10,

    /* U+1EA7 "ầ" */
    0x11, 0x90, 0xf9, 0xc6, 0x6f,

    /* U+1EA8 "Ẩ" */
    0x18, 0x23, 0x0, 0x30, 0xc7, 0x92, 0x4b, 0xf8,
    0x40,

    /* U+1EA9 "ẩ" */
    0x18, 0x4c, 0x87, 0xce, 0x33, 0x78,

    /* U+1EAA "Ẫ" */
    0x69, 0x43, 0x1e, 0x30, 0xc7, 0x92, 0x4b, 0xf8,
    0x40,

    /* U+1EAB "ẫ" */
    0x73, 0x8c, 0x87, 0xe6, 0x31, 0x78,

    /* U+1EAC "Ậ" */
    0x10, 0xc0, 0x4, 0x28, 0xa4, 0x9f, 0xc6, 0x10,
    0x4,

    /* U+1EAD "ậ" */
    0x22, 0x9f, 0x38, 0xcd, 0xe0, 0x20,

    /* U+1EAE "Ắ" */
    0x11, 0x23, 0x0, 0x30, 0xc7, 0x92, 0x4b, 0xf8,
    0x40,

    /* U+1EAF "ắ" */
    0x10, 0x14, 0xe7, 0xce, 0x33, 0x78,

    /* U+1EB0 "Ằ" */
    0x21, 0x23, 0x0, 0x30, 0xc7, 0x92, 0x4b, 0xf8,
    0x40,

    /* U+1EB1 "ằ" */
    0x20, 0x14, 0xe7, 0xce, 0x33, 0x78,

    /* U+1EB2 "Ẳ" */
    0x30, 0x44, 0x8c, 0x0, 0xc3, 0x1e, 0x49, 0x2f,
    0xe1,

    /* U+1EB3 "ẳ" */
    0x30, 0x88, 0xa7, 0x3e, 0x71, 0x9b, 0xc0,

    /* U+1EB4 "Ẵ" */
    0x79, 0x23, 0x0, 0x30, 0xc7, 0x92, 0x4b, 0xf8,
    0x40,

    /* U+1EB5 "ẵ" */
    0x73, 0x94, 0xe7, 0xe6, 0x31, 0x78,

    /* U+1EB6 "Ặ" */
    0x68, 0xc0, 0x4, 0x28, 0xa4, 0x9f, 0xc6, 0x10,
    0x4,

    /* U+1EB7 "ặ" */
    0x70, 0x1f, 0x38, 0xcd, 0xe0, 0x20,

    /* U+1EB8 "Ẹ" */
    0xfc, 0x3f, 0x8, 0x43, 0xe0, 0x20,

    /* U+1EB9 "ẹ" */
    0x77, 0xe1, 0x27, 0x0, 0x80,

    /* U+1EBA "Ẻ" */
    0x61, 0x1, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+1EBB "ẻ" */
    0x61, 0x1d, 0x3f, 0xc1, 0xc0,

    /* U+1EBC "Ẽ" */
    0x55, 0xbf, 0x8, 0x7e, 0x10, 0xf8,

    /* U+1EBD "ẽ" */
    0x55, 0x9d, 0x3f, 0xc1, 0xc0,

    /* U+1EBE "Ế" */
    0xb, 0x5, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+1EBF "ế" */
    0xb, 0x4, 0xe9, 0xfe, 0xe,

    /* U+1EC0 "Ề" */
    0x13, 0x5, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+1EC1 "ề" */
    0x13, 0x4, 0xe9, 0xfe, 0xe,

    /* U+1EC2 "Ể" */
    0x18, 0x58, 0x2f, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1EC3 "ể" */
    0x18, 0x58, 0xa7, 0x4f, 0xf0, 0x70,

    /* U+1EC4 "Ễ" */
    0x55, 0x98, 0xaf, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1EC5 "ễ" */
    0xf0, 0x18, 0xa7, 0x4f, 0xf0, 0x70,

    /* U+1EC6 "Ệ" */
    0x22, 0x81, 0xf8, 0x7e, 0x10, 0x87, 0xc0, 0x40,

    /* U+1EC7 "ệ" */
    0x22, 0x9d, 0xf8, 0x49, 0xc0, 0x20,

    /* U+1EC8 "Ỉ" */
    0xdf, 0xc0,

    /* U+1EC9 "ỉ" */
    0x55, 0x54,

    /* U+1ECA "Ị" */
    0xfe, 0x80,

    /* U+1ECB "ị" */
    0xbe, 0x80,

    /* U+1ECC "Ọ" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0, 0x10,

    /* U+1ECD "ọ" */
    0x74, 0x63, 0x17, 0x0, 0x80,

    /* U+1ECE "Ỏ" */
    0x10, 0x10, 0x41, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1ECF "ỏ" */
    0x71, 0x1d, 0x18, 0xc5, 0xc0,

    /* U+1ED0 "Ố" */
    0x4, 0x20, 0xa1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1ED1 "ố" */
    0xb, 0x80, 0xe8, 0xc6, 0x2e,

    /* U+1ED2 "Ồ" */
    0x8, 0x20, 0xa1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1ED3 "ồ" */
    0x13, 0x80, 0xe8, 0xc6, 0x2e,

    /* U+1ED4 "Ổ" */
    0xc, 0x8, 0x41, 0x43, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1ED5 "ổ" */
    0x18, 0x5c, 0xa7, 0x46, 0x31, 0x70,

    /* U+1ED6 "Ỗ" */
    0x38, 0xb0, 0x41, 0x43, 0x88, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+1ED7 "ỗ" */
    0x70, 0x1c, 0xa7, 0x46, 0x31, 0x70,

    /* U+1ED8 "Ộ" */
    0x10, 0x50, 0x1, 0xc4, 0x50, 0x60, 0xc1, 0x44,
    0x70, 0x0, 0x80,

    /* U+1ED9 "ộ" */
    0x22, 0x9d, 0x18, 0xc5, 0xc0, 0x20,

    /* U+1EDA "Ớ" */
    0x8, 0x4, 0xfa, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+1EDB "ớ" */
    0x30, 0x17, 0xe2, 0x8a, 0x27, 0x0,

    /* U+1EDC "Ờ" */
    0x10, 0x4, 0xfa, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+1EDD "ờ" */
    0x60, 0x17, 0xe2, 0x8a, 0x27, 0x0,

    /* U+1EDE "Ở" */
    0x18, 0x10, 0x49, 0xf4, 0x50, 0x60, 0xc1, 0x44,
    0x70,

    /* U+1EDF "ở" */
    0x70, 0x97, 0xe2, 0x8a, 0x27, 0x0,

    /* U+1EE0 "Ỡ" */
    0x34, 0x5c, 0xfa, 0x28, 0x30, 0x60, 0xa2, 0x38,

    /* U+1EE1 "ỡ" */
    0x6a, 0xf7, 0xe2, 0x8a, 0x27, 0x0,

    /* U+1EE2 "Ợ" */
    0x2, 0x7d, 0x14, 0x18, 0x30, 0x51, 0x1c, 0x0,
    0x20,

    /* U+1EE3 "ợ" */
    0x5, 0xf8, 0xa2, 0x89, 0xc0, 0x8,

    /* U+1EE4 "Ụ" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0x80, 0x10,

    /* U+1EE5 "ụ" */
    0x8c, 0x63, 0x17, 0x80, 0x80,

    /* U+1EE6 "Ủ" */
    0x30, 0x40, 0x21, 0x86, 0x18, 0x61, 0xcd, 0xe0,

    /* U+1EE7 "ủ" */
    0x71, 0x23, 0x18, 0xc5, 0xe0,

    /* U+1EE8 "Ứ" */
    0x10, 0x1, 0x87, 0x84, 0x84, 0x84, 0x84, 0xcc,
    0x78,

    /* U+1EE9 "ứ" */
    0x30, 0x18, 0xe2, 0x8a, 0x27, 0x80,

    /* U+1EEA "Ừ" */
    0x20, 0x1, 0x87, 0x84, 0x84, 0x84, 0x84, 0xcc,
    0x78,

    /* U+1EEB "ừ" */
    0x60, 0x18, 0xe2, 0x8a, 0x27, 0x80,

    /* U+1EEC "Ử" */
    0x30, 0x10, 0x1, 0x87, 0x84, 0x84, 0x84, 0x84,
    0xcc, 0x78,

    /* U+1EED "ử" */
    0x70, 0x98, 0xe2, 0x8a, 0x27, 0x80,

    /* U+1EEE "Ữ" */
    0x68, 0x59, 0x87, 0x84, 0x84, 0x84, 0x84, 0xcc,
    0x78,

    /* U+1EEF "ữ" */
    0x6a, 0xd8, 0xe2, 0x8a, 0x27, 0x80,

    /* U+1EF0 "Ự" */
    0x1, 0x87, 0x84, 0x84, 0x84, 0x84, 0xcc, 0x78,
    0x0, 0x10,

    /* U+1EF1 "ự" */
    0x6, 0x38, 0xa2, 0x89, 0xe0, 0x8,

    /* U+1EF2 "Ỳ" */
    0x10, 0x1, 0x13, 0x62, 0x82, 0x4, 0x8, 0x10,

    /* U+1EF3 "ỳ" */
    0x20, 0xc, 0xd2, 0x78, 0xc3, 0x8, 0x20,

    /* U+1EF4 "Ỵ" */
    0x44, 0xd8, 0xa0, 0x81, 0x2, 0x4, 0x0, 0x10,

    /* U+1EF5 "ỵ" */
    0x4d, 0xa2, 0x8c, 0x10, 0xc2, 0x80,

    /* U+1EF6 "Ỷ" */
    0x10, 0x20, 0x2, 0x26, 0xc5, 0x4, 0x8, 0x10,
    0x20,

    /* U+1EF7 "ỷ" */
    0x30, 0xc, 0xd2, 0x78, 0xc3, 0x8, 0x20,

    /* U+1EF8 "Ỹ" */
    0x38, 0x73, 0x12, 0x62, 0x82, 0x4, 0x8, 0x10,

    /* U+1EF9 "ỹ" */
    0x78, 0xc, 0xd2, 0x78, 0xc3, 0x8, 0x20,

    /* U+2013 "–" */
    0xf8,

    /* U+2014 "—" */
    0xfe,

    /* U+2018 "‘" */
    0xfc,

    /* U+2019 "’" */
    0xf4,

    /* U+201C "“" */
    0xff, 0xf0,

    /* U+201D "”" */
    0xff, 0xf0,

    /* U+2020 "†" */
    0x5d, 0x20,

    /* U+2021 "‡" */
    0xeb, 0xa0,

    /* U+2026 "…" */
    0xff, 0xf0,

    /* U+2030 "‰" */
    0xe4, 0x15, 0x3, 0xa0, 0x8, 0x1, 0x6c, 0x56,
    0xc9, 0xb3, 0x0,

    /* U+2032 "′" */
    0x50,

    /* U+2033 "″" */
    0x56};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 71, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 52, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 73, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 133, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 23, .adv_w = 104, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 47, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 30, .adv_w = 70, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 35, .adv_w = 70, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 39, .adv_w = 61, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 40, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 42, .adv_w = 58, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 43, .adv_w = 79, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 44, .adv_w = 58, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 67, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 49, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 55, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 95, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 76, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 87, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 58, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 59, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 100, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 102, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 104, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 106, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 162, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 121, .adv_w = 111, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 106, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 97, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 124, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 44, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 106, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 87, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 155, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 123, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 130, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 106, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 218, .adv_w = 105, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 128, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 106, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 163, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 111, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 108, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 91, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 75, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 278, .adv_w = 64, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 282, .adv_w = 75, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 286, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 288, .adv_w = 93, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 289, .adv_w = 29, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 290, .adv_w = 100, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 63, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 101, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 321, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 41, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 54, .box_w = 3, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 331, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 39, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 148, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 101, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 94, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 355, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 360, .adv_w = 79, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 78, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 69, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 99, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 92, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 129, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 393, .adv_w = 75, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 73, .box_w = 4, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 400, .adv_w = 43, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 402, .adv_w = 73, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 406, .adv_w = 96, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 407, .adv_w = 71, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 52, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 409, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 414, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 104, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 110, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 44, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 431, .adv_w = 72, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 53, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 436, .adv_w = 117, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 45, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 445, .adv_w = 98, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 447, .adv_w = 96, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 448, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 450, .adv_w = 68, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 451, .adv_w = 60, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 453, .adv_w = 96, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 458, .adv_w = 47, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 460, .adv_w = 29, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 461, .adv_w = 108, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 467, .adv_w = 118, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 474, .adv_w = 85, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 475, .adv_w = 46, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 476, .adv_w = 28, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 477, .adv_w = 42, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 479, .adv_w = 98, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 481, .adv_w = 141, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 490, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 498, .adv_w = 159, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 510, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 515, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 529, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 131, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 565, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 573, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 44, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 44, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 44, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 44, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 641, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 657, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 667, .adv_w = 130, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 681, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 108, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 104, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 133, .box_w = 8, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 760, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 41, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 41, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 41, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 41, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 790, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 101, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 810, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 827, .adv_w = 94, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 831, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 836, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 858, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 864, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 870, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 111, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 891, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 896, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 922, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 928, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 933, .adv_w = 44, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 938, .adv_w = 41, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 948, .adv_w = 39, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 951, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 958, .adv_w = 101, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 79, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 78, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 983, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 990, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1002, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1008, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 75, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1018, .adv_w = 130, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1025, .adv_w = 94, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1030, .adv_w = 128, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 99, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1052, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1058, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1066, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1071, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1079, .adv_w = 101, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1085, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1093, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1104, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1109, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1119, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1125, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1126, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1127, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1128, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1129, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1131, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1132, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1133, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1140, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1145, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1151, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1157, .adv_w = 124, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1168, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1174, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1182, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1188, .adv_w = 97, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1195, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1201, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1207, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1212, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1218, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1223, .adv_w = 124, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1230, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1236, .adv_w = 44, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1241, .adv_w = 41, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1245, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1252, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1258, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1265, .adv_w = 92, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1271, .adv_w = 87, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1277, .adv_w = 39, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1279, .adv_w = 87, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1288, .adv_w = 39, .box_w = 3, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1293, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1302, .adv_w = 148, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1309, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1318, .adv_w = 148, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1325, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1332, .adv_w = 101, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1337, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1347, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1353, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1363, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1369, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1379, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1385, .adv_w = 106, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1391, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1397, .adv_w = 105, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1403, .adv_w = 79, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1407, .adv_w = 105, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1414, .adv_w = 79, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1419, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1425, .adv_w = 78, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1429, .adv_w = 96, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1438, .adv_w = 78, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1443, .adv_w = 96, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1451, .adv_w = 78, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1456, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1462, .adv_w = 69, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1467, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1476, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1482, .adv_w = 106, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1489, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1495, .adv_w = 106, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1503, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1508, .adv_w = 163, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1520, .adv_w = 129, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1527, .adv_w = 163, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1538, .adv_w = 129, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1545, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1551, .adv_w = 75, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1555, .adv_w = 111, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1562, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1567, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1575, .adv_w = 100, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1580, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1588, .adv_w = 100, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1593, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1601, .adv_w = 100, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1606, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1615, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1621, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1630, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1636, .adv_w = 111, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1645, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1651, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1660, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1666, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1675, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1681, .adv_w = 111, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1690, .adv_w = 100, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1697, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1706, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1712, .adv_w = 111, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1721, .adv_w = 100, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1727, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1733, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1738, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1745, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1750, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1756, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1761, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1768, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1773, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1780, .adv_w = 89, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1785, .adv_w = 97, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1792, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 97, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1805, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1811, .adv_w = 97, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1819, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1825, .adv_w = 44, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1827, .adv_w = 41, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1829, .adv_w = 44, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1831, .adv_w = 41, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1833, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1841, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1846, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1855, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1860, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1869, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1874, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1883, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1888, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1898, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1904, .adv_w = 130, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1914, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1920, .adv_w = 130, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1931, .adv_w = 94, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1937, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1945, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1951, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1959, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1965, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1974, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1980, .adv_w = 130, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1988, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1994, .adv_w = 130, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2003, .adv_w = 94, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2009, .adv_w = 128, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2016, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2021, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2029, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2034, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2043, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2049, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2058, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2064, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2074, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2080, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2089, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2095, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2105, .adv_w = 99, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2111, .adv_w = 108, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2119, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2126, .adv_w = 108, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2134, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2140, .adv_w = 108, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2149, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2156, .adv_w = 108, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2164, .adv_w = 94, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2171, .adv_w = 101, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2172, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2173, .adv_w = 48, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2174, .adv_w = 48, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 2175, .adv_w = 88, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 2177, .adv_w = 88, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2179, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2181, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2183, .adv_w = 138, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2185, .adv_w = 186, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 2196, .adv_w = 43, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2197, .adv_w = 72, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 5}};

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
        0, 0, 1, 2, 0, 0, 0, 0,
        2, 0, 0, 0, 0, 3, 0, 0,
        4, 5, 6, 0, 7, 8, 9, 10,
        11, 12, 13, 0, 0, 0, 0, 0,
        14, 0, 15, 16, 0, 17, 0, 18,
        19, 6, 6, 20, 21, 22, 6, 6,
        19, 23, 19, 24, 0, 25, 20, 26,
        26, 27, 28, 0, 0, 0, 0, 0,
        0, 0, 29, 30, 0, 29, 31, 32,
        0, 33, 34, 35, 36, 29, 33, 33,
        30, 30, 37, 38, 39, 40, 29, 41,
        41, 0, 42, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        0, 0, 29, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 43, 15,
        15, 15, 15, 15, 15, 0, 0, 0,
        0, 0, 0, 6, 6, 44, 0, 17,
        6, 19, 19, 19, 19, 19, 0, 19,
        20, 20, 20, 20, 28, 0, 0, 29,
        29, 29, 29, 29, 29, 31, 0, 31,
        31, 31, 31, 34, 45, 44, 46, 0,
        33, 30, 30, 30, 30, 30, 0, 30,
        29, 29, 29, 29, 42, 0, 42, 15,
        29, 15, 29, 0, 0, 17, 0, 0,
        31, 6, 47, 22, 29, 6, 33, 24,
        38, 0, 39, 20, 29, 20, 29, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 19, 30, 0, 31, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 16, 30, 0, 0, 17, 29,
        0, 0, 0, 0, 0, 0, 6, 33,
        0, 46, 0, 0, 0, 0, 22, 29,
        0, 0, 6, 33, 0, 0, 6, 33,
        19, 30, 0, 0, 19, 30, 0, 0,
        0, 0, 0, 0, 0, 39, 0, 0,
        0, 0, 25, 48, 0, 0, 0, 0,
        0, 0, 26, 0, 0, 0, 0, 0,
        15, 29, 15, 0, 0, 0, 0, 0,
        0, 0, 15, 0, 15, 29, 15, 0,
        15, 0, 15, 0, 15, 0, 15, 0,
        0, 31, 0, 0, 0, 31, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 31,
        0, 46, 6, 34, 19, 30, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        19, 30, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 20, 29, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 28, 42, 0, 42, 0, 0,
        28, 42, 0, 0, 49, 3, 0, 0,
        0, 0, 0, 0, 0, 0};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
    {
        0, 0, 1, 2, 0, 0, 3, 0,
        2, 0, 0, 0, 0, 4, 0, 5,
        6, 0, 0, 7, 0, 8, 7, 0,
        9, 0, 10, 0, 0, 0, 0, 0,
        11, 0, 12, 0, 13, 0, 0, 0,
        13, 0, 0, 14, 0, 0, 0, 0,
        13, 0, 13, 0, 0, 15, 0, 16,
        16, 0, 17, 0, 0, 18, 0, 0,
        0, 0, 19, 20, 19, 19, 19, 21,
        19, 22, 23, 24, 22, 20, 25, 25,
        19, 26, 19, 25, 27, 28, 29, 30,
        30, 0, 31, 0, 0, 0, 0, 0,
        0, 1, 32, 0, 0, 0, 0, 0,
        0, 0, 19, 0, 0, 0, 0, 3,
        0, 0, 0, 0, 0, 0, 33, 0,
        0, 0, 0, 0, 0, 0, 0, 12,
        12, 12, 12, 12, 12, 12, 13, 0,
        0, 0, 0, 0, 0, 34, 0, 0,
        0, 13, 13, 13, 13, 13, 0, 13,
        0, 0, 0, 0, 17, 0, 20, 19,
        19, 19, 19, 19, 19, 0, 19, 19,
        19, 19, 19, 35, 23, 36, 37, 0,
        25, 19, 19, 19, 19, 19, 0, 19,
        29, 29, 29, 29, 31, 0, 31, 12,
        19, 12, 19, 13, 19, 0, 0, 0,
        19, 0, 38, 0, 22, 0, 25, 0,
        25, 0, 27, 0, 29, 0, 29, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 13, 19, 0, 19, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 20, 13, 0, 0, 19,
        0, 0, 0, 0, 0, 0, 0, 22,
        0, 39, 0, 0, 0, 0, 0, 22,
        0, 0, 0, 25, 0, 0, 0, 25,
        13, 19, 0, 0, 13, 19, 0, 0,
        0, 0, 0, 0, 0, 27, 0, 0,
        0, 0, 15, 28, 0, 0, 0, 0,
        0, 0, 16, 0, 0, 0, 0, 0,
        12, 19, 12, 0, 0, 0, 0, 0,
        0, 0, 12, 0, 12, 19, 12, 0,
        12, 0, 12, 0, 12, 0, 12, 0,
        0, 19, 0, 0, 0, 19, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 19,
        0, 39, 0, 23, 13, 19, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        13, 19, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 29, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 17, 31, 0, 31, 0, 0,
        17, 31, 0, 0, 0, 40, 0, 41,
        0, 0, 5, 0, 0, 0};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
    {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -11, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -13, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -8, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 3, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 3, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -9, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -6, 0, 0, -4, 0, -4,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -11, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -6, 0, 0, 0,
        0, -5, -2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -14, -16, 0,
        0, -6, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -3, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -14,
        -14, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -11, 0, 0,
        0, 0, -14, 0, 0, 0, 0, -17,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -8, -8, -13, 0,
        0, 0, 0, 0, 0, -7, 0, 0,
        0, 0, 0, -2, -2, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -3, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -10, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -5, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -2,
        -10, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3, 0, 0,
        0, 0, 0, 0, -5, -9, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, 0, 0, 0, 0, -5, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -8, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -8, 0, 0, 0, 0, 0, -5, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, -2, -5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -7, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        2, -5, 0, -8, 0, -13, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -5, 0, 0, 0, 0,
        0, 0, 0, 0, -7, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -5, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, -13, 0, 0,
        0, 0, -12, 0, 0, 0, -2, -10,
        -5, 0, -10, 0, -5, -3, -3, -12,
        0, 0, 6, 5, 6, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -13, 0, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -5, 0, 0,
        -6, 0, 0, 2, 0, 6, 0, 6,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -8, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -12, 0,
        -13, 0, 0, 0, 0, -16, 0, 0,
        0, -5, 0, 0, -13, -14, 0, -8,
        -8, 0, -16, 0, 0, 2, 0, 3,
        0, 0, 0, 0, 0, -6, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -3, 0, 0, -12, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -12, 0, 0, 0, 0,
        0, -4, 0, 0, -10, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -4, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -4, 0, 0, -10, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -10, -10, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -6, 0, -6, 0, -1, -9, 0,
        0, 0, 0, 0, 0, 0, -6, -10,
        0, 2, 0, 8, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -3, 0, 0, -9,
        0, 0, 0, 0, 0, 0, -2, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, -3, 0, 1,
        -12, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 4, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -5, 0, 0,
        0, 0, 0, -5, 0, 0, 0, 0,
        -2, 0, -5, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -6, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -6, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -10, -19, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -2, -19, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -6, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -6, -8, 0, -3, -5, 0, -4,
        -5, 0, -4, -5, 0, -8, -6, 0,
        -5, 0, -5, 0, 0, 0, 0, 0,
        0, 0, 0, -6, -14, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 3, 0, 0,
        -14, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -9, -6, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -6, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -14, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 4, 0, 4, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 6, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 11, 0, 11, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 13, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -6, -8, 0, -3, -5, 0, -4,
        -5, 0, -4, -5, 0, 0, -6, 0,
        -5, 0, -5, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -6,
        0, 0, 0, 0, 0, 0, 0, 0,
        0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
    {
        .class_pair_values = kern_class_values,
        .left_class_mapping = kern_left_class_mapping,
        .right_class_mapping = kern_right_class_mapping,
        .left_class_cnt = 49,
        .right_class_cnt = 41,
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
const lv_font_t elms_sans_bold_10 = {
#else
lv_font_t elms_sans_bold_10 = {
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

#endif /*#if ELMS_SANS_BOLD_10*/
