/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --no-compress --stride 1 --align 1 --font ElmsSans-Light.ttf --symbols ̉ ̃ ́ ̣ ̈́ - ‐ ‑ – — , ; : ! ? . … ' ‘ ’ " “ ” ( ) [ ] § @ * / & # % ‰ † ‡ ′ ″ ΅ ῎ ῞ + 0 1 2 3 4 5 6 7 8 9 a A à À ả Ả ã Ã á Á ạ Ạ ǻ Ǻ ǽ Ǽ ă Ă ằ Ằ ẳ Ẳ ẵ Ẵ ắ Ắ ặ Ặ ą̆ Ą̆ ḁ̆ Ḁ̆ â Â ầ Ầ ẩ Ẩ ẫ Ẫ ấ Ấ ậ Ậ ą̂ Ą̂ ḁ̂ Ḁ̂ b B ḅ Ḅ c C ć Ć ḉ Ḉ d D ḍ Ḍ đ Đ e E è È ẻ Ẻ ẽ Ẽ é É ẹ Ẹ ḗ Ḗ ê Ê ề Ề ể Ể ễ Ễ ế Ế ệ Ệ ȩ̂ Ȩ̂ ę̂ Ę̂ ḙ̂ Ḙ̂ ḛ̂ Ḛ̂ f F g G ǵ Ǵ h H ḥ Ḥ i I ì Ì ỉ Ỉ ĩ Ĩ í Í ị Ị ḯ Ḯ j J k K ḱ Ḱ ḳ Ḳ l L ĺ Ĺ ḷ Ḷ ḹ Ḹ m M ḿ Ḿ ṃ Ṃ n N ñ Ñ ń Ń ṇ Ṇ o O ò Ò ỏ Ỏ õ Õ ṍ Ṍ ṏ Ṏ ȭ Ȭ ó Ó ọ Ọ ǿ Ǿ ṓ Ṓ ô Ô ồ Ồ ổ Ổ ỗ Ỗ ố Ố ộ Ộ ǫ̂ Ǫ̂ ơ̂ Ơ̂ ợ̂ Ợ̂ ơ Ơ ờ Ờ ở Ở ỡ Ỡ ớ Ớ ợ Ợ ǫ̛ Ǫ̛ p P ṕ Ṕ q Q r R ŕ Ŕ ṛ Ṛ ṝ Ṝ s S ś Ś ṥ Ṥ ṣ Ṣ ṩ Ṩ t T ṭ Ṭ u U ù Ù ủ Ủ ũ Ũ ṹ Ṹ ú Ú ụ Ụ ǘ Ǘ ư Ư ừ Ừ ử Ử ữ Ữ ứ Ứ ự Ự ų̛ Ų̛ v V ṽ Ṽ ṿ Ṿ w W ẃ Ẃ ẉ Ẉ x X y Y ỳ Ỳ ỷ Ỷ ỹ Ỹ ý Ý ỵ Ỵ z Z ź Ź ẓ Ẓ ἄ Ἄ ᾄ ᾌ ἅ Ἅ ᾅ ᾍ ά Ά ᾴ ἔ Ἔ ἕ Ἕ έ Έ ἤ Ἤ ᾔ ᾜ ἥ Ἥ ᾕ ᾝ ή Ή ῄ ἴ Ἴ ἵ Ἵ ί Ί ΐ ὄ Ὄ ὅ Ὅ ό Ό ὔ ὕ Ὕ ύ Ύ ϓ ΰ ὤ Ὤ ᾤ ᾬ ὥ Ὥ ᾥ ᾭ ώ Ώ ῴ ѓ Ѓ ќ Ќ --range 0-255 --format lvgl -o elms_sans_light_10.c
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

#ifndef ELMS_SANS_LIGHT_10
#define ELMS_SANS_LIGHT_10 1
#endif

#if ELMS_SANS_LIGHT_10

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
    0x75, 0x28, 0xe2, 0xd5, 0xc0,

    /* U+0025 "%" */
    0x61, 0x31, 0xc0, 0x81, 0x45, 0x4b, 0x0,

    /* U+0026 "&" */
    0x7a, 0xf, 0x98, 0xc5, 0xc0,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x2a, 0x49, 0x22, 0x20,

    /* U+0029 ")" */
    0x88, 0x92, 0x52, 0x80,

    /* U+002A "*" */
    0x49, 0x0,

    /* U+002B "+" */
    0x4b, 0xa0,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x24, 0xa4, 0xa4,

    /* U+0030 "0" */
    0x7a, 0x28, 0x61, 0x86, 0x27, 0x80,

    /* U+0031 "1" */
    0xd5, 0x54,

    /* U+0032 "2" */
    0xe1, 0x12, 0xc8, 0xf0,

    /* U+0033 "3" */
    0xf1, 0xc, 0x10, 0xc5, 0xc0,

    /* U+0034 "4" */
    0x11, 0x95, 0x2f, 0x88, 0x40,

    /* U+0035 "5" */
    0xf4, 0x3d, 0x10, 0xc5, 0xc0,

    /* U+0036 "6" */
    0x21, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+0037 "7" */
    0xf1, 0x12, 0x24, 0x40,

    /* U+0038 "8" */
    0x74, 0x5d, 0x18, 0xc5, 0xc0,

    /* U+0039 "9" */
    0x7a, 0x18, 0x61, 0x78, 0x41, 0x0,

    /* U+003A ":" */
    0x88,

    /* U+003B ";" */
    0x8c,

    /* U+003C "<" */
    0x16, 0x87,

    /* U+003D "=" */
    0xf0, 0xf0,

    /* U+003E ">" */
    0xe, 0x3c,

    /* U+003F "?" */
    0xe1, 0x24, 0x40, 0x40,

    /* U+0040 "@" */
    0x3e, 0x41, 0xbd, 0xc5, 0xc5, 0xba, 0x80, 0x70,

    /* U+0041 "A" */
    0x10, 0xc5, 0x12, 0x49, 0xf8, 0x40,

    /* U+0042 "B" */
    0xf2, 0x28, 0xbe, 0x86, 0x1f, 0x80,

    /* U+0043 "C" */
    0x3c, 0x86, 0x4, 0x8, 0x8, 0x4f, 0x0,

    /* U+0044 "D" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x0,

    /* U+0045 "E" */
    0xfc, 0x21, 0xf8, 0x43, 0xe0,

    /* U+0046 "F" */
    0xfc, 0x21, 0xf8, 0x42, 0x0,

    /* U+0047 "G" */
    0x38, 0x8a, 0x4, 0x78, 0x38, 0x8e, 0x0,

    /* U+0048 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x40,

    /* U+0049 "I" */
    0xfe,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0xc5, 0xc0,

    /* U+004B "K" */
    0x95, 0x31, 0x8a, 0x4a, 0x20,

    /* U+004C "L" */
    0x84, 0x21, 0x8, 0x43, 0xe0,

    /* U+004D "M" */
    0x81, 0xc3, 0xc5, 0xa5, 0xa5, 0x99, 0x99,

    /* U+004E "N" */
    0x87, 0x1a, 0x69, 0x96, 0x38, 0x40,

    /* U+004F "O" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x42, 0x3c,

    /* U+0050 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x0,

    /* U+0051 "Q" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x42, 0x3e, 0x1,

    /* U+0052 "R" */
    0xfa, 0x18, 0x7e, 0x92, 0x28, 0x40,

    /* U+0053 "S" */
    0x74, 0x20, 0xe0, 0xc5, 0xc0,

    /* U+0054 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x80,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x9e, 0x0,

    /* U+0056 "V" */
    0x86, 0x14, 0x92, 0x50, 0xc1, 0x0,

    /* U+0057 "W" */
    0x88, 0x63, 0x29, 0x49, 0x52, 0x53, 0x18, 0xc2,
    0x10,

    /* U+0058 "X" */
    0x45, 0x23, 0x4, 0x31, 0x28, 0x40,

    /* U+0059 "Y" */
    0x84, 0x88, 0xa1, 0x81, 0x2, 0x4, 0x0,

    /* U+005A "Z" */
    0x78, 0x84, 0x44, 0x23, 0xe0,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0xe0,

    /* U+005C "\\" */
    0x92, 0x24, 0x89,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0xe0,

    /* U+005E "^" */
    0x6, 0xa0,

    /* U+005F "_" */
    0xf0,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x7e, 0x18, 0x61, 0x7c,

    /* U+0062 "b" */
    0x82, 0xf, 0xa1, 0x86, 0x1f, 0x80,

    /* U+0063 "c" */
    0x74, 0x61, 0x7, 0x80,

    /* U+0064 "d" */
    0x4, 0x17, 0xe1, 0x86, 0x17, 0xc0,

    /* U+0065 "e" */
    0x74, 0x7f, 0x7, 0x0,

    /* U+0066 "f" */
    0x6e, 0xa8,

    /* U+0067 "g" */
    0x7e, 0x18, 0x61, 0x7c, 0x17, 0x80,

    /* U+0068 "h" */
    0x84, 0x3d, 0x18, 0xc6, 0x20,

    /* U+0069 "i" */
    0xbe,

    /* U+006A "j" */
    0x0, 0x92, 0x49, 0xc0,

    /* U+006B "k" */
    0x88, 0xac, 0xca, 0x90,

    /* U+006C "l" */
    0xfe,

    /* U+006D "m" */
    0xed, 0x26, 0x4c, 0x99, 0x20,

    /* U+006E "n" */
    0xf4, 0x63, 0x18, 0x80,

    /* U+006F "o" */
    0x7a, 0x18, 0x61, 0x78,

    /* U+0070 "p" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x0,

    /* U+0071 "q" */
    0x7e, 0x18, 0x61, 0x7c, 0x10, 0x40,

    /* U+0072 "r" */
    0xe9, 0x88, 0x80,

    /* U+0073 "s" */
    0xe8, 0x61, 0xe0,

    /* U+0074 "t" */
    0x92, 0x49, 0x18,

    /* U+0075 "u" */
    0x8c, 0x63, 0x17, 0x80,

    /* U+0076 "v" */
    0x8c, 0x94, 0xa2, 0x0,

    /* U+0077 "w" */
    0x93, 0x66, 0xb3, 0x64, 0x40,

    /* U+0078 "x" */
    0x93, 0x8, 0xc9, 0x0,

    /* U+0079 "y" */
    0x8c, 0x94, 0xa2, 0x11, 0x0,

    /* U+007A "z" */
    0xf1, 0x24, 0xf0,

    /* U+007B "{" */
    0x34, 0x44, 0x84, 0x44, 0x30,

    /* U+007C "|" */
    0xff, 0x80,

    /* U+007D "}" */
    0xc2, 0x22, 0x12, 0x22, 0xc0,

    /* U+007E "~" */
    0xd3,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0xbe,

    /* U+00A2 "¢" */
    0x23, 0xab, 0x4a, 0xb8, 0x80,

    /* U+00A3 "£" */
    0x3a, 0x10, 0xc4, 0x23, 0xe0,

    /* U+00A4 "¤" */
    0xec, 0x63, 0x1f, 0x80,

    /* U+00A5 "¥" */
    0x84, 0x88, 0xa1, 0x83, 0x87, 0x4, 0x0,

    /* U+00A6 "¦" */
    0xe7, 0x80,

    /* U+00A7 "§" */
    0x68, 0x69, 0x61, 0x60,

    /* U+00A8 "¨" */
    0xa0,

    /* U+00A9 "©" */
    0x38, 0xab, 0xae, 0x1c, 0x2b, 0x84, 0x0,

    /* U+00AA "ª" */
    0xec,

    /* U+00AB "«" */
    0x5a, 0x60,

    /* U+00AC "¬" */
    0xf1,

    /* U+00AE "®" */
    0x6e, 0xa2,

    /* U+00AF "¯" */
    0xf0,

    /* U+00B0 "°" */
    0x69, 0x96,

    /* U+00B1 "±" */
    0x5d, 0x2e,

    /* U+00B2 "²" */
    0xda,

    /* U+00B3 "³" */
    0x68, 0xb0,

    /* U+00B4 "´" */
    0x60,

    /* U+00B5 "µ" */
    0x8c, 0x63, 0x1f, 0xc2, 0x0,

    /* U+00B6 "¶" */
    0x7f, 0xfe, 0xf3, 0x8c, 0x63,

    /* U+00B7 "·" */
    0xc0,

    /* U+00B8 "¸" */
    0x5c,

    /* U+00B9 "¹" */
    0xf0,

    /* U+00BA "º" */
    0xd5, 0x0,

    /* U+00BB "»" */
    0xa5, 0x60,

    /* U+00BC "¼" */
    0x92, 0x4a, 0x28, 0x45, 0x38, 0xe1,

    /* U+00BD "½" */
    0x82, 0x4a, 0x28, 0x2d, 0x14, 0xa3, 0x80,

    /* U+00BE "¾" */
    0x64, 0x44, 0x28, 0x48, 0x11, 0x13, 0x23, 0x21,

    /* U+00BF "¿" */
    0x20, 0x24, 0x88, 0x70,

    /* U+00C0 "À" */
    0x20, 0x80, 0x4, 0x31, 0x44, 0x92, 0x7e, 0x10,

    /* U+00C1 "Á" */
    0x0, 0x40, 0x4, 0x31, 0x44, 0x92, 0x7e, 0x10,

    /* U+00C2 "Â" */
    0x0, 0xe1, 0xc, 0x51, 0x24, 0x9f, 0x84,

    /* U+00C3 "Ã" */
    0x21, 0x42, 0xc, 0x51, 0x28, 0xbe, 0x84,

    /* U+00C4 "Ä" */
    0x30, 0x1, 0xc, 0x51, 0x24, 0x9f, 0x84,

    /* U+00C5 "Å" */
    0x10, 0xc3, 0xc, 0x31, 0x44, 0xa2, 0xfe, 0x10,

    /* U+00C6 "Æ" */
    0x1e, 0x61, 0x42, 0xf5, 0xe, 0x23, 0x80,

    /* U+00C7 "Ç" */
    0x3c, 0x86, 0x4, 0x8, 0x8, 0x4f, 0x8, 0x18,

    /* U+00C8 "È" */
    0x42, 0x9, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

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
    0xf9, 0xa, 0xe, 0x18, 0x30, 0xbe, 0x0,

    /* U+00D1 "Ñ" */
    0x29, 0x48, 0x71, 0xa6, 0x99, 0x63, 0x84,

    /* U+00D2 "Ò" */
    0x10, 0x10, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+00D3 "Ó" */
    0x8, 0x8, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+00D4 "Ô" */
    0x0, 0x1c, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+00D5 "Õ" */
    0x14, 0x28, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+00D6 "Ö" */
    0x18, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+00D7 "×" */
    0xa6, 0x69,

    /* U+00D8 "Ø" */
    0x3e, 0x46, 0x89, 0x91, 0xa1, 0x42, 0x7c,

    /* U+00D9 "Ù" */
    0x20, 0x40, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x84,
    0xf0,

    /* U+00DA "Ú" */
    0x8, 0x20, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x84,
    0xf0,

    /* U+00DB "Û" */
    0x10, 0x52, 0xc, 0x18, 0x30, 0x60, 0xc2, 0x78,

    /* U+00DC "Ü" */
    0x30, 0x2, 0xc, 0x18, 0x30, 0x60, 0xc2, 0x78,

    /* U+00DD "Ý" */
    0x8, 0x20, 0x44, 0x24, 0x45, 0xc, 0x8, 0x10,
    0x20,

    /* U+00DE "Þ" */
    0x87, 0xa3, 0x18, 0xfa, 0x0,

    /* U+00DF "ß" */
    0x74, 0x6d, 0x18, 0xc6, 0xc0,

    /* U+00E0 "à" */
    0x20, 0x7, 0xe1, 0x86, 0x17, 0xc0,

    /* U+00E1 "á" */
    0x10, 0x7, 0xe1, 0x86, 0x17, 0xc0,

    /* U+00E2 "â" */
    0x30, 0x27, 0xe1, 0x86, 0x17, 0xc0,

    /* U+00E3 "ã" */
    0x29, 0x47, 0xe1, 0x86, 0x17, 0xc0,

    /* U+00E4 "ä" */
    0x30, 0x7, 0xe1, 0x86, 0x17, 0xc0,

    /* U+00E5 "å" */
    0x30, 0x47, 0xe1, 0x86, 0x17, 0xc0,

    /* U+00E6 "æ" */
    0xee, 0x12, 0xfe, 0x90, 0xee,

    /* U+00E7 "ç" */
    0x74, 0x61, 0x7, 0x90, 0xc0,

    /* U+00E8 "è" */
    0x41, 0x1d, 0x1f, 0xc1, 0xc0,

    /* U+00E9 "é" */
    0x21, 0x1d, 0x1f, 0xc1, 0xc0,

    /* U+00EA "ê" */
    0x62, 0x9d, 0x1f, 0xc1, 0xc0,

    /* U+00EB "ë" */
    0x50, 0x1d, 0x1f, 0xc1, 0xc0,

    /* U+00EC "ì" */
    0x85, 0x54,

    /* U+00ED "í" */
    0x8a, 0xa8,

    /* U+00EE "î" */
    0xc1, 0x24, 0x90,

    /* U+00EF "ï" */
    0xca, 0xa8,

    /* U+00F0 "ð" */
    0x18, 0x47, 0xa1, 0x86, 0x17, 0x80,

    /* U+00F1 "ñ" */
    0x3, 0xad, 0x98, 0xc6, 0x20,

    /* U+00F2 "ò" */
    0x20, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+00F3 "ó" */
    0x10, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+00F4 "ô" */
    0x31, 0x27, 0xa1, 0x86, 0x17, 0x80,

    /* U+00F5 "õ" */
    0x29, 0x47, 0xa1, 0x86, 0x17, 0x80,

    /* U+00F6 "ö" */
    0x30, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+00F7 "÷" */
    0x0, 0xf0,

    /* U+00F8 "ø" */
    0x1, 0xe9, 0x69, 0xc5, 0xe0,

    /* U+00F9 "ù" */
    0x40, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FA "ú" */
    0x20, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FB "û" */
    0x60, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FC "ü" */
    0x30, 0x23, 0x18, 0xc5, 0xe0,

    /* U+00FD "ý" */
    0x20, 0x23, 0x25, 0x28, 0x84, 0x40,

    /* U+00FE "þ" */
    0x82, 0xf, 0xa1, 0x86, 0x1f, 0xa0, 0x80,

    /* U+00FF "ÿ" */
    0x50, 0x23, 0x25, 0x28, 0x84, 0x40,

    /* U+0102 "Ă" */
    0x48, 0xc1, 0xc, 0x51, 0x24, 0x9f, 0x84,

    /* U+0103 "ă" */
    0x48, 0xc7, 0xe1, 0x86, 0x17, 0xc0,

    /* U+0104 "Ą" */
    0x10, 0x61, 0x42, 0x44, 0x8f, 0xa1, 0x2, 0x8,
    0x8,

    /* U+0105 "ą" */
    0x7e, 0x18, 0x61, 0x7c, 0x0, 0x80,

    /* U+0106 "Ć" */
    0x8, 0x20, 0x1, 0xe4, 0x30, 0x20, 0x40, 0x42,
    0x78,

    /* U+0107 "ć" */
    0x10, 0x1d, 0x18, 0x41, 0xe0,

    /* U+0110 "Đ" */
    0xf9, 0xa, 0xe, 0x18, 0x30, 0xbe, 0x0,

    /* U+0111 "đ" */
    0x4, 0x37, 0xe1, 0x86, 0x17, 0xc0,

    /* U+0118 "Ę" */
    0xfc, 0x21, 0xf8, 0x43, 0xe0, 0x10, 0x40,

    /* U+0119 "ę" */
    0x74, 0x7f, 0x7, 0x10, 0x80,

    /* U+0128 "Ĩ" */
    0x39, 0x24, 0x92, 0x40,

    /* U+0129 "ĩ" */
    0x39, 0x24, 0x90,

    /* U+0139 "Ĺ" */
    0x44, 0x21, 0x8, 0x42, 0x10, 0x87, 0xc0,

    /* U+013A "ĺ" */
    0x62, 0xaa, 0xa0,

    /* U+0143 "Ń" */
    0x0, 0x40, 0x21, 0xc6, 0x9a, 0x65, 0x8e, 0x10,

    /* U+0144 "ń" */
    0x21, 0x3d, 0x18, 0xc6, 0x20,

    /* U+0154 "Ŕ" */
    0x10, 0x82, 0x3e, 0x86, 0x1f, 0xa4, 0x8a, 0x10,

    /* U+0155 "ŕ" */
    0x20, 0xe9, 0x88, 0x80,

    /* U+015A "Ś" */
    0x1, 0x0, 0xe8, 0x41, 0xc1, 0x8b, 0x80,

    /* U+015B "ś" */
    0x44, 0xe8, 0x61, 0xe0,

    /* U+0168 "Ũ" */
    0x20, 0x32, 0xc, 0x18, 0x30, 0x60, 0xc2, 0x78,

    /* U+0169 "ũ" */
    0x41, 0xa3, 0x18, 0xc5, 0xe0,

    /* U+0172 "Ų" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x9e, 0x0, 0x10,

    /* U+0173 "ų" */
    0x8c, 0x63, 0x17, 0x88, 0x40,

    /* U+0179 "Ź" */
    0x11, 0x0, 0xf1, 0x8, 0x88, 0x47, 0xc0,

    /* U+017A "ź" */
    0x20, 0xf1, 0x24, 0xf0,

    /* U+01A0 "Ơ" */
    0x4, 0x4, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+01A1 "ơ" */
    0x5, 0xe8, 0x61, 0x85, 0xe0,

    /* U+01AF "Ư" */
    0x2, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc2, 0x78,

    /* U+01B0 "ư" */
    0x6, 0x28, 0xa2, 0x89, 0xe0,

    /* U+01D7 "Ǘ" */
    0x8, 0x20, 0x41, 0x80, 0x10, 0x60, 0xc1, 0x83,
    0x6, 0x13, 0xc0,

    /* U+01D8 "ǘ" */
    0x21, 0xc, 0x8, 0xc6, 0x31, 0x78,

    /* U+01EA "Ǫ" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x42, 0x3c, 0x8,
    0x8,

    /* U+01EB "ǫ" */
    0x7a, 0x18, 0x61, 0x78, 0x83, 0x0,

    /* U+01F4 "Ǵ" */
    0x8, 0x0, 0x1, 0xc4, 0x50, 0x23, 0xc1, 0xc4,
    0x70,

    /* U+01F5 "ǵ" */
    0x10, 0x47, 0xe1, 0x86, 0x17, 0xc1, 0x78,

    /* U+01FE "Ǿ" */
    0x8, 0x8, 0x0, 0x3e, 0x46, 0x89, 0x91, 0xa1,
    0x42, 0x7c,

    /* U+01FF "ǿ" */
    0x10, 0x7, 0xa5, 0xa7, 0x17, 0x80,

    /* U+0228 "Ȩ" */
    0xfc, 0x3f, 0x8, 0x43, 0xe4, 0x30,

    /* U+0229 "ȩ" */
    0x74, 0x7f, 0x7, 0x10, 0x80,

    /* U+022C "Ȭ" */
    0x3c, 0x0, 0x14, 0x28, 0x3c, 0x42, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+022D "ȭ" */
    0x78, 0x2, 0x94, 0x7a, 0x18, 0x61, 0x78,

    /* U+0301 "́" */
    0x60,

    /* U+0302 "̂" */
    0x1c,

    /* U+0303 "̃" */
    0x54,

    /* U+0306 "̆" */
    0x16,

    /* U+0309 "̉" */
    0x50,

    /* U+031B "̛" */
    0xc0,

    /* U+0323 "̣" */
    0x80,

    /* U+1E00 "Ḁ" */
    0x30, 0xc5, 0x12, 0x7a, 0x18, 0x44, 0x30,

    /* U+1E01 "ḁ" */
    0x7e, 0x18, 0x61, 0x7c, 0x43, 0x0,

    /* U+1E04 "Ḅ" */
    0xf2, 0x2f, 0x21, 0x86, 0x1f, 0x80, 0x40,

    /* U+1E05 "ḅ" */
    0x82, 0xf, 0xa1, 0x86, 0x1f, 0x80, 0x10,

    /* U+1E08 "Ḉ" */
    0x10, 0x0, 0x1, 0xe4, 0x30, 0x20, 0x40, 0x42,
    0x78, 0x40, 0xc0,

    /* U+1E09 "ḉ" */
    0x21, 0x1d, 0x18, 0x41, 0xe4, 0x30,

    /* U+1E0C "Ḍ" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x0, 0x20,

    /* U+1E0D "ḍ" */
    0x4, 0x17, 0xe1, 0x86, 0x17, 0xc0, 0x10,

    /* U+1E16 "Ḗ" */
    0x11, 0x1c, 0xf, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1E17 "ḗ" */
    0x10, 0x1c, 0x7, 0x47, 0xf0, 0x70,

    /* U+1E18 "Ḙ" */
    0xfc, 0x21, 0xf8, 0x43, 0xe4, 0x50,

    /* U+1E19 "ḙ" */
    0x74, 0x7f, 0x7, 0x11, 0x80,

    /* U+1E1A "Ḛ" */
    0xfc, 0x3f, 0x8, 0x43, 0xe8, 0x30,

    /* U+1E1B "ḛ" */
    0x74, 0x7f, 0x7, 0x20, 0xc0,

    /* U+1E24 "Ḥ" */
    0x86, 0x1f, 0xe1, 0x86, 0x18, 0x40, 0x20,

    /* U+1E25 "ḥ" */
    0x84, 0x3d, 0x18, 0xc6, 0x20, 0x20,

    /* U+1E2E "Ḯ" */
    0x4b, 0x4, 0x92, 0x49, 0x0,

    /* U+1E2F "ḯ" */
    0xac, 0xaa, 0x80,

    /* U+1E30 "Ḱ" */
    0x1, 0x1, 0x2a, 0x63, 0x14, 0x94, 0x40,

    /* U+1E31 "ḱ" */
    0x48, 0x8, 0x8a, 0xcc, 0xa9,

    /* U+1E32 "Ḳ" */
    0x95, 0x31, 0x8a, 0x4a, 0x20, 0x40,

    /* U+1E33 "ḳ" */
    0x88, 0xac, 0xca, 0x90, 0x40,

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
    0x8, 0x8, 0x0, 0x81, 0xc3, 0xc5, 0xa5, 0xa5,
    0x99, 0x99,

    /* U+1E3F "ḿ" */
    0x10, 0x23, 0xb4, 0x99, 0x32, 0x64, 0x80,

    /* U+1E42 "Ṃ" */
    0x81, 0xc3, 0xc5, 0xa5, 0xa5, 0x99, 0x99, 0x0,
    0x8,

    /* U+1E43 "ṃ" */
    0xed, 0x26, 0x4c, 0x99, 0x20, 0x2, 0x0,

    /* U+1E46 "Ṇ" */
    0x87, 0x1a, 0x69, 0x96, 0x38, 0x40, 0x10,

    /* U+1E47 "ṇ" */
    0xf4, 0x63, 0x18, 0x80, 0x80,

    /* U+1E4C "Ṍ" */
    0x8, 0x8, 0x0, 0x14, 0x28, 0x3c, 0x42, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+1E4D "ṍ" */
    0x10, 0x40, 0xa, 0x51, 0xe8, 0x61, 0x85, 0xe0,

    /* U+1E4E "Ṏ" */
    0x18, 0x0, 0x14, 0x28, 0x3c, 0x42, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+1E4F "ṏ" */
    0x30, 0x2, 0x94, 0x7a, 0x18, 0x61, 0x78,

    /* U+1E52 "Ṓ" */
    0x8, 0x8, 0x3c, 0x0, 0x3c, 0x42, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+1E53 "ṓ" */
    0x10, 0x47, 0x80, 0x7a, 0x18, 0x61, 0x78,

    /* U+1E54 "Ṕ" */
    0x10, 0x82, 0x3e, 0x86, 0x18, 0x7e, 0x82, 0x0,

    /* U+1E55 "ṕ" */
    0x10, 0xf, 0xa1, 0x86, 0x1f, 0xa0, 0x80,

    /* U+1E5A "Ṛ" */
    0xfa, 0x18, 0x7e, 0x92, 0x28, 0x40, 0x0,

    /* U+1E5B "ṛ" */
    0xe9, 0x88, 0x80, 0x20,

    /* U+1E5C "Ṝ" */
    0x70, 0xf, 0xa1, 0x87, 0xe9, 0x22, 0x84, 0x0,
    0x0,

    /* U+1E5D "ṝ" */
    0xe0, 0xe9, 0x88, 0x80, 0x20,

    /* U+1E62 "Ṣ" */
    0x74, 0x20, 0xe0, 0xc5, 0xc0, 0x20,

    /* U+1E63 "ṣ" */
    0xe8, 0x61, 0xe0, 0x20,

    /* U+1E64 "Ṥ" */
    0x10, 0x8, 0x47, 0x42, 0xe, 0xc, 0x5c,

    /* U+1E65 "ṥ" */
    0x20, 0x44, 0xe8, 0x61, 0xe0,

    /* U+1E68 "Ṩ" */
    0x20, 0x1d, 0x8, 0x38, 0x31, 0x70, 0x8,

    /* U+1E69 "ṩ" */
    0x20, 0xe8, 0x61, 0xe0, 0x20,

    /* U+1E6C "Ṭ" */
    0xf9, 0x8, 0x42, 0x10, 0x80, 0x0,

    /* U+1E6D "ṭ" */
    0x92, 0x49, 0x18, 0x40,

    /* U+1E78 "Ṹ" */
    0x8, 0x20, 0x1, 0x1, 0x90, 0x60, 0xc1, 0x83,
    0x6, 0x13, 0xc0,

    /* U+1E79 "ṹ" */
    0x11, 0x8, 0x83, 0x46, 0x31, 0x8b, 0xc0,

    /* U+1E7C "Ṽ" */
    0x21, 0x48, 0x62, 0x89, 0x45, 0xc, 0x20,

    /* U+1E7D "ṽ" */
    0x22, 0xa2, 0x95, 0x28, 0x80,

    /* U+1E7E "Ṿ" */
    0x86, 0x14, 0x92, 0x50, 0xc1, 0x0, 0x10,

    /* U+1E7F "ṿ" */
    0x8c, 0x94, 0xa2, 0x0, 0x80,

    /* U+1E82 "Ẃ" */
    0x4, 0x1, 0x0, 0x2, 0x21, 0x8c, 0xa5, 0x25,
    0x49, 0x4c, 0x63, 0x8, 0x40,

    /* U+1E83 "ẃ" */
    0x10, 0x2, 0x4d, 0x9a, 0xcd, 0x91, 0x0,

    /* U+1E88 "Ẉ" */
    0x88, 0x63, 0x29, 0x49, 0x52, 0x53, 0x18, 0xc2,
    0x10, 0x0, 0x8, 0x0,

    /* U+1E89 "ẉ" */
    0x93, 0x66, 0xb3, 0x64, 0x40, 0x4, 0x0,

    /* U+1E92 "Ẓ" */
    0x78, 0x84, 0x44, 0x23, 0xe0, 0x20,

    /* U+1E93 "ẓ" */
    0xf1, 0x24, 0xf0, 0x20,

    /* U+1EA0 "Ạ" */
    0x10, 0xc5, 0x12, 0x7a, 0x18, 0x40, 0x10,

    /* U+1EA1 "ạ" */
    0x7e, 0x18, 0x61, 0x7c, 0x1, 0x0,

    /* U+1EA2 "Ả" */
    0x10, 0x40, 0x4, 0x31, 0x44, 0x92, 0x7e, 0x10,

    /* U+1EA3 "ả" */
    0x30, 0x7, 0xe1, 0x86, 0x17, 0xc0,

    /* U+1EA4 "Ấ" */
    0x8, 0x3, 0x0, 0x10, 0xc5, 0x12, 0x49, 0xf8,
    0x40,

    /* U+1EA5 "ấ" */
    0x8, 0x23, 0x0, 0x7e, 0x18, 0x61, 0x7c,

    /* U+1EA6 "Ầ" */
    0x10, 0x41, 0xa, 0x10, 0xc5, 0x12, 0x49, 0xf8,
    0x40,

    /* U+1EA7 "ầ" */
    0x10, 0x43, 0x2, 0x7e, 0x18, 0x61, 0x7c,

    /* U+1EA8 "Ẩ" */
    0x8, 0x21, 0x8, 0x10, 0xc5, 0x12, 0x49, 0xf8,
    0x40,

    /* U+1EA9 "ẩ" */
    0x8, 0x23, 0x2, 0x7e, 0x18, 0x61, 0x7c,

    /* U+1EAA "Ẫ" */
    0x70, 0x81, 0x8, 0x31, 0x44, 0xa2, 0xfa, 0x10,

    /* U+1EAB "ẫ" */
    0x69, 0x43, 0x0, 0x7e, 0x18, 0x61, 0x7c,

    /* U+1EAC "Ậ" */
    0x30, 0x1, 0xc, 0x51, 0x27, 0xa1, 0x84, 0x1,
    0x0,

    /* U+1EAD "ậ" */
    0x30, 0x27, 0xe1, 0x86, 0x17, 0xc0, 0x10,

    /* U+1EAE "Ắ" */
    0x0, 0x40, 0x12, 0x30, 0x43, 0x14, 0x49, 0x27,
    0xe1,

    /* U+1EAF "ắ" */
    0x10, 0x4, 0x8c, 0x7e, 0x18, 0x61, 0x7c,

    /* U+1EB0 "Ằ" */
    0x20, 0x80, 0x12, 0x30, 0x43, 0x14, 0x49, 0x27,
    0xe1,

    /* U+1EB1 "ằ" */
    0x20, 0x4, 0x8c, 0x7e, 0x18, 0x61, 0x7c,

    /* U+1EB2 "Ẳ" */
    0x10, 0x40, 0x2, 0x30, 0x43, 0x14, 0x49, 0x27,
    0xe1,

    /* U+1EB3 "ẳ" */
    0x10, 0x40, 0x12, 0x31, 0xf8, 0x61, 0x85, 0xf0,

    /* U+1EB4 "Ẵ" */
    0x20, 0x44, 0xc, 0x20, 0xc5, 0x12, 0x8b, 0xe8,
    0x40,

    /* U+1EB5 "ẵ" */
    0x29, 0x44, 0x8c, 0x7e, 0x18, 0x61, 0x7c,

    /* U+1EB6 "Ặ" */
    0x8, 0xc0, 0x4, 0x31, 0x44, 0x9e, 0x86, 0x10,
    0x4,

    /* U+1EB7 "ặ" */
    0x30, 0x7, 0xe1, 0x86, 0x17, 0xc0, 0x10,

    /* U+1EB8 "Ẹ" */
    0xfc, 0x3f, 0x8, 0x43, 0xe0, 0x0,

    /* U+1EB9 "ẹ" */
    0x74, 0x7f, 0x7, 0x0, 0x80,

    /* U+1EBA "Ẻ" */
    0x21, 0x1, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+1EBB "ẻ" */
    0x21, 0x1d, 0x1f, 0xc1, 0xc0,

    /* U+1EBC "Ẽ" */
    0x41, 0xbf, 0x8, 0x7e, 0x10, 0xf8,

    /* U+1EBD "ẽ" */
    0x41, 0x9d, 0x1f, 0xc1, 0xc0,

    /* U+1EBE "Ế" */
    0x0, 0x98, 0xf, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1EBF "ế" */
    0x0, 0x98, 0x7, 0x47, 0xf0, 0x70,

    /* U+1EC0 "Ề" */
    0x20, 0x88, 0xaf, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1EC1 "ề" */
    0x20, 0x18, 0xa7, 0x47, 0xf0, 0x70,

    /* U+1EC2 "Ể" */
    0x10, 0x88, 0xf, 0xc2, 0x1f, 0x84, 0x3e,

    /* U+1EC3 "ể" */
    0x10, 0x98, 0xa7, 0x47, 0xf0, 0x70,

    /* U+1EC4 "Ễ" */
    0x71, 0x15, 0xf8, 0x43, 0xf0, 0x87, 0xc0,

    /* U+1EC5 "ễ" */
    0x51, 0x98, 0x7, 0x47, 0xf0, 0x70,

    /* U+1EC6 "Ệ" */
    0x60, 0x3f, 0xf, 0xc2, 0x10, 0xf8, 0x0,

    /* U+1EC7 "ệ" */
    0x62, 0x9d, 0x1f, 0xc1, 0xc0, 0x20,

    /* U+1EC8 "Ỉ" */
    0xdf, 0xc0,

    /* U+1EC9 "ỉ" */
    0xfe,

    /* U+1ECA "Ị" */
    0xfe, 0x0,

    /* U+1ECB "ị" */
    0xbe, 0x80,

    /* U+1ECC "Ọ" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x42, 0x3c, 0x0,
    0x0,

    /* U+1ECD "ọ" */
    0x7a, 0x18, 0x61, 0x78, 0x2, 0x0,

    /* U+1ECE "Ỏ" */
    0x18, 0x8, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+1ECF "ỏ" */
    0x30, 0x7, 0xa1, 0x86, 0x17, 0x80,

    /* U+1ED0 "Ố" */
    0x4, 0x0, 0x18, 0x0, 0x3c, 0x42, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+1ED1 "ố" */
    0x8, 0x23, 0x0, 0x7a, 0x18, 0x61, 0x78,

    /* U+1ED2 "Ồ" */
    0x8, 0x8, 0x18, 0x0, 0x3c, 0x42, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+1ED3 "ồ" */
    0x10, 0x43, 0x12, 0x7a, 0x18, 0x61, 0x78,

    /* U+1ED4 "Ổ" */
    0xc, 0x4, 0x18, 0x4, 0x3c, 0x42, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+1ED5 "ổ" */
    0x18, 0x23, 0x12, 0x7a, 0x18, 0x61, 0x78,

    /* U+1ED6 "Ỗ" */
    0x38, 0x18, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+1ED7 "ỗ" */
    0x69, 0x43, 0x0, 0x7a, 0x18, 0x61, 0x78,

    /* U+1ED8 "Ộ" */
    0x18, 0x0, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x42,
    0x3c, 0x0, 0x0,

    /* U+1ED9 "ộ" */
    0x31, 0x27, 0xa1, 0x86, 0x17, 0x80, 0x20,

    /* U+1EDA "Ớ" */
    0x8, 0x4, 0x4, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+1EDB "ớ" */
    0x10, 0x17, 0xa1, 0x86, 0x17, 0x80,

    /* U+1EDC "Ờ" */
    0x0, 0x14, 0x4, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+1EDD "ờ" */
    0x20, 0x17, 0xa1, 0x86, 0x17, 0x80,

    /* U+1EDE "Ở" */
    0x10, 0x10, 0x14, 0x3c, 0x42, 0x81, 0x81, 0x81,
    0x42, 0x3c,

    /* U+1EDF "ở" */
    0x30, 0x17, 0xa1, 0x86, 0x17, 0x80,

    /* U+1EE0 "Ỡ" */
    0x20, 0x1c, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+1EE1 "ỡ" */
    0x29, 0x57, 0xa1, 0x86, 0x17, 0x80,

    /* U+1EE2 "Ợ" */
    0x4, 0x4, 0x3c, 0x42, 0x81, 0x81, 0x81, 0x42,
    0x3c, 0x0, 0x0,

    /* U+1EE3 "ợ" */
    0x4, 0x17, 0xa1, 0x86, 0x17, 0x80, 0x20,

    /* U+1EE4 "Ụ" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x9e, 0x0, 0x20,

    /* U+1EE5 "ụ" */
    0x8c, 0x63, 0x17, 0x80, 0x80,

    /* U+1EE6 "Ủ" */
    0x10, 0x20, 0x4, 0x18, 0x30, 0x60, 0xc1, 0x84,
    0xf0,

    /* U+1EE7 "ủ" */
    0x21, 0x23, 0x18, 0xc5, 0xe0,

    /* U+1EE8 "Ứ" */
    0x8, 0x24, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x84,
    0xf0,

    /* U+1EE9 "ứ" */
    0x20, 0x18, 0xa2, 0x8a, 0x27, 0x80,

    /* U+1EEA "Ừ" */
    0x20, 0x24, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x84,
    0xf0,

    /* U+1EEB "ừ" */
    0x40, 0x18, 0xa2, 0x8a, 0x27, 0x80,

    /* U+1EEC "Ử" */
    0x10, 0x10, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x84,
    0xf0,

    /* U+1EED "ử" */
    0x20, 0x98, 0xa2, 0x8a, 0x27, 0x80,

    /* U+1EEE "Ữ" */
    0x20, 0x36, 0xc, 0x18, 0x30, 0x60, 0xc2, 0x78,

    /* U+1EEF "ữ" */
    0x21, 0x58, 0xa2, 0x8a, 0x27, 0x80,

    /* U+1EF0 "Ự" */
    0x2, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc2, 0x78,
    0x0, 0x80,

    /* U+1EF1 "ự" */
    0x4, 0x18, 0xa2, 0x8a, 0x27, 0x80, 0x0,

    /* U+1EF2 "Ỳ" */
    0x20, 0x40, 0x44, 0x24, 0x45, 0xc, 0x8, 0x10,
    0x20,

    /* U+1EF3 "ỳ" */
    0x40, 0x23, 0x25, 0x28, 0x84, 0x40,

    /* U+1EF4 "Ỵ" */
    0x84, 0x88, 0xa1, 0x81, 0x2, 0x4, 0x0, 0x10,

    /* U+1EF5 "ỵ" */
    0x8c, 0x94, 0xa2, 0x11, 0x40,

    /* U+1EF6 "Ỷ" */
    0x10, 0x20, 0x4, 0x24, 0x45, 0xc, 0x8, 0x10,
    0x20,

    /* U+1EF7 "ỷ" */
    0x21, 0x23, 0x25, 0x28, 0x84, 0x40,

    /* U+1EF8 "Ỹ" */
    0x20, 0x32, 0x12, 0x22, 0x86, 0x4, 0x8, 0x10,

    /* U+1EF9 "ỹ" */
    0x22, 0xa2, 0x95, 0x18, 0x84, 0x40,

    /* U+2013 "–" */
    0xf8,

    /* U+2014 "—" */
    0xfc,

    /* U+2018 "‘" */
    0xc0,

    /* U+2019 "’" */
    0xc0,

    /* U+201C "“" */
    0xb4,

    /* U+201D "”" */
    0xb4, 0x0,

    /* U+2020 "†" */
    0x5d, 0x20,

    /* U+2021 "‡" */
    0x5f, 0xa0,

    /* U+2026 "…" */
    0xb8,

    /* U+2030 "‰" */
    0x60, 0x13, 0x1, 0xc0, 0x8, 0x1, 0x4c, 0x56,
    0x4b, 0x31, 0x0,

    /* U+2032 "′" */
    0xa8,

    /* U+2033 "″" */
    0xb6, 0x0};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 68, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 42, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 46, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 3, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 85, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 22, .adv_w = 102, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 32, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 28, .adv_w = 64, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 32, .adv_w = 64, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 36, .adv_w = 58, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 38, .adv_w = 96, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 40, .adv_w = 44, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 41, .adv_w = 74, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 42, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 57, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 46, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 42, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 84, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 86, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 98, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 79, .adv_w = 73, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 84, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 94, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 43, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 44, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 98, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 100, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 102, .adv_w = 90, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 157, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 114, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 91, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 123, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 118, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 33, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 90, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 84, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 140, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 113, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 100, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 129, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 213, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 96, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 121, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 158, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 101, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 99, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 66, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 273, .adv_w = 54, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 276, .adv_w = 66, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 280, .adv_w = 96, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 282, .adv_w = 93, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 283, .adv_w = 20, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 284, .adv_w = 99, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 89, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 56, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 316, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 30, .box_w = 1, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 48, .box_w = 3, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 326, .adv_w = 75, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 28, .box_w = 1, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 137, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 95, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 92, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 350, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 356, .adv_w = 69, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 70, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 60, .box_w = 3, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 93, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 118, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 74, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 83, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 387, .adv_w = 75, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 73, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 395, .adv_w = 33, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 397, .adv_w = 73, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 402, .adv_w = 96, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 403, .adv_w = 68, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 42, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 405, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 410, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 419, .adv_w = 100, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 32, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 428, .adv_w = 63, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 35, .box_w = 3, .box_h = 1, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 433, .adv_w = 116, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 44, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 441, .adv_w = 70, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 443, .adv_w = 96, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 444, .adv_w = 64, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 446, .adv_w = 65, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 447, .adv_w = 60, .box_w = 4, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 449, .adv_w = 96, .box_w = 3, .box_h = 5, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 44, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 452, .adv_w = 46, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 454, .adv_w = 20, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 455, .adv_w = 103, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 460, .adv_w = 94, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 465, .adv_w = 65, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 466, .adv_w = 50, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 467, .adv_w = 24, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 468, .adv_w = 41, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 470, .adv_w = 71, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 472, .adv_w = 110, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 108, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 485, .adv_w = 131, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 90, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 497, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 527, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 124, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 124, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 557, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 33, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 33, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 33, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 33, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 657, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 659, .adv_w = 128, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 666, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 99, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 719, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 743, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 135, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 765, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 30, .box_w = 2, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 30, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 30, .box_w = 3, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 792, .adv_w = 30, .box_w = 2, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 794, .adv_w = 95, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 823, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 96, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 837, .adv_w = 92, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 847, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 862, .adv_w = 83, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 868, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 875, .adv_w = 83, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 881, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 894, .adv_w = 101, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 903, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 909, .adv_w = 124, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 918, .adv_w = 89, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 98, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 943, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 948, .adv_w = 33, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 30, .box_w = 3, .box_h = 7, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 955, .adv_w = 84, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 962, .adv_w = 28, .box_w = 2, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 965, .adv_w = 113, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 98, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 69, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 990, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 997, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1009, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1022, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1027, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1034, .adv_w = 75, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 92, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1052, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1060, .adv_w = 93, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 121, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1076, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1091, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1097, .adv_w = 123, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1106, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1113, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1123, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1129, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1135, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1140, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1151, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1158, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1159, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1160, .adv_w = 0, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 1161, .adv_w = 0, .box_w = 4, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 1162, .adv_w = 0, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 1163, .adv_w = 0, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1164, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1165, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1172, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1178, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1185, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1192, .adv_w = 124, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1203, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1209, .adv_w = 118, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1217, .adv_w = 98, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1224, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1231, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1237, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1243, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1248, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1254, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1259, .adv_w = 118, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1266, .adv_w = 95, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1272, .adv_w = 33, .box_w = 3, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1277, .adv_w = 30, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1280, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1287, .adv_w = 75, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1292, .adv_w = 90, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1298, .adv_w = 75, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1303, .adv_w = 84, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1309, .adv_w = 28, .box_w = 1, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1311, .adv_w = 84, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1320, .adv_w = 28, .box_w = 3, .box_h = 11, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1325, .adv_w = 140, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1335, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1342, .adv_w = 140, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1351, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1358, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1365, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1370, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1382, .adv_w = 92, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1390, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1401, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1408, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1419, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1426, .adv_w = 100, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1434, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1441, .adv_w = 98, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1448, .adv_w = 69, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1452, .adv_w = 98, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1461, .adv_w = 69, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1466, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1472, .adv_w = 70, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1476, .adv_w = 89, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1483, .adv_w = 70, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1488, .adv_w = 89, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1495, .adv_w = 70, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1500, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1506, .adv_w = 60, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1510, .adv_w = 121, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1521, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1528, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1535, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1540, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1547, .adv_w = 80, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1552, .adv_w = 158, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1565, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1572, .adv_w = 158, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1584, .adv_w = 118, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1591, .adv_w = 89, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1597, .adv_w = 75, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1601, .adv_w = 101, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1608, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1614, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1622, .adv_w = 99, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1628, .adv_w = 101, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1637, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1644, .adv_w = 101, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1653, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1660, .adv_w = 101, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1669, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1676, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1684, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1691, .adv_w = 101, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1700, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1707, .adv_w = 101, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1716, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1723, .adv_w = 101, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1732, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1739, .adv_w = 101, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1748, .adv_w = 99, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1756, .adv_w = 101, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1772, .adv_w = 101, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1781, .adv_w = 99, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1788, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1794, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1799, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1806, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1811, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1817, .adv_w = 88, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1822, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1829, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1835, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1842, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1848, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1855, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1861, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1868, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1874, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1881, .adv_w = 88, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1887, .adv_w = 33, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1889, .adv_w = 30, .box_w = 1, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1890, .adv_w = 33, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1892, .adv_w = 30, .box_w = 1, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1894, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1903, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1909, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1919, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1925, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1936, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1943, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1954, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1961, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1972, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1979, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1989, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1996, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2007, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2014, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2024, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2030, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2040, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2046, .adv_w = 128, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2056, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2062, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2071, .adv_w = 92, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2077, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2088, .adv_w = 92, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2095, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2103, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2108, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2117, .adv_w = 93, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2122, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2131, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2137, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2146, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2152, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2161, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2167, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2175, .adv_w = 93, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2181, .adv_w = 121, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 2191, .adv_w = 93, .box_w = 6, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2198, .adv_w = 99, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2207, .adv_w = 83, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2213, .adv_w = 99, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2221, .adv_w = 83, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2226, .adv_w = 99, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2235, .adv_w = 83, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2241, .adv_w = 99, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2249, .adv_w = 83, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 2255, .adv_w = 101, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2256, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 2257, .adv_w = 39, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2258, .adv_w = 39, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2259, .adv_w = 68, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 2260, .adv_w = 68, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 2262, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2264, .adv_w = 64, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 2266, .adv_w = 100, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2267, .adv_w = 181, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 2278, .adv_w = 34, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 2279, .adv_w = 55, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 4}};

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
        0, 0, 0, -5, 0, 0, 0, 0,
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
        0, 0, 0, 0, -8, 0, 0, 0,
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
        0, 0, 0, 0, 0, -6, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -5,
        0, 0, -6, 0, -5, -6, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -10, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, 0, 0, 0, 2,
        0, -8, -2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -6, -15, 0,
        0, -7, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -6,
        -12, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -5, 0,
        0, 0, 0, -14, 0, 0, 0, 0,
        0, -6, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -10,
        -9, -14, 0, 0, 0, 0, 0, 0,
        -11, 0, 0, 0, 0, 0, -1, -1,
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
        0, 0, -8, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -14, -2,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -5, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -14, 0, 0, 0, 0, -2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -11, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -6, 0, 0, 0, 0, 0, -3,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -4, -2, -3, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -7,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 2, -8, 0, -10, 0, -14,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -5, 0, 0,
        0, 0, 0, 0, 0, 0, -7, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 3, 0,
        0, 2, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -8, 0, -16, 0, 0, 0, 0, -14,
        0, 0, 0, -5, -19, -5, 0, -11,
        0, -8, -5, -5, -14, 0, 0, 5,
        0, 0, 0, 0, 5, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -14, 0, 0, 0, 0, 0,
        0, -8, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -3, 0, 0, -8, 0,
        0, 2, 0, 2, 0, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -5,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -13, 0,
        -16, 0, 0, 0, 0, -14, 0, 0,
        0, -4, 0, 0, -13, -13, 0, -6,
        -5, 0, -14, 0, 0, 2, 0, 0,
        0, 0, 0, 0, 0, -2, 0, 0,
        2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 2,
        0, -2, 0, 0, -18, 0, 0, 0,
        0, 0, 2, 0, 2, 2, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -14, 0, 0,
        0, 0, 0, -2, 0, 0, -18, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -4, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -2, 0, 0,
        -7, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -8, -8, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -8, 0, -6,
        0, -2, -16, 0, 0, 0, 0, 0,
        0, 0, -8, -8, 0, 1, 0, 3,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -5, 0, 0, -14, 0, 0, 0,
        0, 0, 0, -1, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -2, -3, 0, 4, -19, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -5, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        8, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -2, 0, 0,
        0, 0, 0, -2, 0, 0, 0, 0,
        0, 0, -2, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -8, -14, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -14,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, -10, 0, -2, -5,
        0, -4, -3, 0, -3, -5, 0, -5,
        -6, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -2, -10, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        3, 0, 0, -10, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -6,
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
        0, 6, 0, 6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 14, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -2, -10, 0, -2, -5,
        0, -4, -3, 0, -3, -5, 0, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -6, 0, 0, 0, 0, 0,
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
const lv_font_t elms_sans_light_10 = {
#else
lv_font_t elms_sans_light_10 = {
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

#endif /*#if ELMS_SANS_LIGHT_10*/
