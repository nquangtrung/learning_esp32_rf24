#include "lvgl.h"
#include "Display_ST7789.h"
#include <Arduino.h>

#define TFT_HOR_RES LCD_WIDTH
#define TFT_VER_RES LCD_HEIGHT
#define TFT_ROTATION LV_DISPLAY_ROTATION_270

/*LVGL draw into this buffer, 1/10 screen size usually works well. The size is in bytes*/
#define DRAW_BUF_SIZE (TFT_HOR_RES * TFT_VER_RES / 10)

#ifndef LVGL_DRIVER_H
#define LVGL_DRIVER_H

static uint32_t draw_buf[DRAW_BUF_SIZE / 4];

#endif // LVGL_DRIVER_H

void disp_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map);
static uint32_t tick(void);
void LVGL_loop();
void LVGL_init();