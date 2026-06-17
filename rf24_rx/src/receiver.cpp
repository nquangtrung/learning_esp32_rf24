#include <Arduino.h>
#include <RF24.h>
#include <SPI.h>
#include "drivers/Display_ST7789.h"
#include "drivers/LVGL_Driver.h"
#include "receiver.h"

#define PAYLOAD_SIZE 32

RF24 radio(CE_PIN, CSN_PIN, 4000000); // CE, CSN pins, 4MHz SPI speed
uint8_t buffer[PAYLOAD_SIZE];

int channel = 32;
String receivedData = "";

SPIClass *vspi = NULL;

void Radio_init()
{
  // 3. Initialize the custom SPI bus on the ESP32-S3 FSPI slot
  vspi = new SPIClass(FSPI);
  vspi->begin(SCK_PIN, MISO_PIN, MOSI_PIN, CSN_PIN);

  // 4. Critical: Tell the RF24 library to use your custom SPI bus
  if (!radio.begin(vspi))
  {
    Serial.println("Radio hardware not responding!");
    while (1)
      ; // Halt
  }

  radio.setDataRate(RF24_1MBPS);
  radio.setPALevel(RF24_PA_LOW);
  radio.setChannel(32);
  radio.setPayloadSize(32);
  radio.setCRCLength(RF24_CRC_DISABLED);

  radio.openReadingPipe(1, 0xf0f0f0f0e1LL);
  radio.printPrettyDetails();
  Serial.printf("Radio chip connected: %s\n", radio.isChipConnected() ? "Yes" : "No");
  radio.startListening();
}

void printBuffer(const uint8_t *buf, size_t size)
{
  Serial.print("Received: ");
  for (size_t i = 0; i < size; i++)
  {
    Serial.printf("%02X", buf[i]);
    Serial.print(" ");
  }
  Serial.println();
}

String bufferToString(const uint8_t *buf, size_t size)
{
  String result = "";
  for (size_t i = 0; i < size; i++)
  {
    result += (char)buf[i];
  }
  return result;
}

void Radio_loop()
{
  Serial.printf("Radio chip connected: %s\n", radio.isChipConnected() ? "Yes" : "No");
  if (radio.available())
  {
    radio.read(buffer, PAYLOAD_SIZE);
    printBuffer(buffer, PAYLOAD_SIZE);
    receivedData = bufferToString(buffer, PAYLOAD_SIZE);
    Serial.println("Received Data: " + receivedData);
  }
  else
  {
    Serial.println("No data received");
  }
}
