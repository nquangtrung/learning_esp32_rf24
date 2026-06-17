#include <SPI.h>
#include <RF24.h>

#include "drivers/Display_ST7789.h"
#include "drivers/LVGL_Driver.h"
#include "UI.h"
#include "receiver.h"

TaskHandle_t UITaskHandle = NULL;
TaskHandle_t ReceiverTaskHandle = NULL;

void UITask(void *pvParameters)
{
  while (1)
  {
    UI_loop();
    LVGL_loop();
    vTaskDelay(5 / portTICK_PERIOD_MS); // Adjust the delay as needed
  }
}

void ReceiverTask(void *pvParameters)
{
  while (1)
  {
    Radio_loop();
    vTaskDelay(500 / portTICK_PERIOD_MS); // Adjust the delay as needed
  }
}

void setup()
{
  Serial.begin(115200);

  LCD_Init();
  LVGL_init();
  UI_init();
  Radio_init();

  xTaskCreatePinnedToCore(UITask, "UITask", 1024 * 16, NULL, 1, &UITaskHandle, 0);
  xTaskCreatePinnedToCore(ReceiverTask, "ReceiverTask", 1024 * 4, NULL, 1, &ReceiverTaskHandle, 1);
}

void loop()
{
}
