#include <Arduino.h>
#include <RF24.h>
#include <SPI.h>
#include "drivers/Display_ST7789.h"
#include "drivers/LVGL_Driver.h"
#include "receiver.h"

#define PAYLOAD_SIZE 32

RF24 radio(CE_PIN, CSN_PIN); // CE, CSN pins
uint8_t buffer[PAYLOAD_SIZE];

int channel = 32;
String receivedData = "";

void Radio_init()
{
  SPI.begin(SCK_PIN, MISO_PIN, MOSI_PIN, CSN_PIN); // SCK, MISO, MOSI, SS pins
  if (!radio.begin())
  {
    Serial.println("Radio hardware is not responding!");
    while (1)
      ;
  }

  radio.setAutoAck(true);                   // Enable auto acknowledgment
  radio.setPALevel(RF24_PA_LOW);            // Set the power level to low
  radio.openReadingPipe(1, 0xF0F0F0F0E1LL); // Set the address for the writing pipe
  radio.setChannel(channel);
  radio.setPayloadSize(PAYLOAD_SIZE);
  radio.setCRCLength(RF24_CRC_DISABLED); // Disable CRC for simplicity
  radio.startListening();                // Set the module as a receiver

  radio.printPrettyDetails();
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
  if (radio.available())
  {
    radio.read(buffer, PAYLOAD_SIZE);
    printBuffer(buffer, PAYLOAD_SIZE);
    receivedData = "Testing....";
    Serial.println("Received Data: " + receivedData);
  }
  else
  {
    Serial.println("No data received");
  }
}
