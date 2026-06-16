#include <Arduino.h>
#include <RF24.h>
#include <SPI.h>

#define CE_PIN 4  // Yellow
#define CSN_PIN 3 // Orange

#define MISO_PIN 5 // Green
#define MOSI_PIN 2 // Violet
#define SCK_PIN 0  // Gray
#define IRQ_PIN 6  // Blue

RF24 radio(CE_PIN, CSN_PIN); // CE, CSN pins
int channel = 32;

#define PAYLOAD_SIZE 32
uint8_t buffer[PAYLOAD_SIZE];

void setup()
{
  Serial.begin(115200);
  while (!Serial)
    ;

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

void loop()
{
  if (radio.available())
  {
    radio.read(buffer, PAYLOAD_SIZE);
    printBuffer(buffer, PAYLOAD_SIZE);
  }
  else
  {
    Serial.println("No data received");
  }

  delay(5000); // Add a small delay to avoid flooding the serial output
}
