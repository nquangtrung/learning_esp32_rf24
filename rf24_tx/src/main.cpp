#include <Arduino.h>
#include <RF24.h>
#include <SPI.h>

#define CE_PIN 4  // Yellow
#define CSN_PIN 5 // Orange

#define MISO_PIN 6 // Green
#define MOSI_PIN 7 // Violet
#define SCK_PIN 15 // Gray
#define IRQ_PIN 2  // Blue

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

  radio.setAutoAck(true);                // Enable auto acknowledgment
  radio.setPALevel(RF24_PA_LOW);         // Set the power level to low
  radio.openWritingPipe(0xF0F0F0F0E1LL); // Set the address for the writing pipe
  radio.setChannel(channel);
  radio.setPayloadSize(PAYLOAD_SIZE);
  radio.setCRCLength(RF24_CRC_DISABLED); // Disable CRC for simplicity
  radio.stopListening();                 // Set the module as a transmitter
  radio.setRetries(5, 15);               // Set retries to 5 with a delay of 15ms

  radio.printPrettyDetails();
}

void printBuffer(const uint8_t *buf, size_t size)
{
  Serial.print("Buffer: ");
  for (size_t i = 0; i < size; i++)
  {
    Serial.print(buf[i], HEX);
    Serial.print(" ");
  }
  Serial.println();
}

void fillBuffer(uint8_t *buf, size_t size, uint8_t value)
{
  for (size_t i = 0; i < size; i++)
  {
    buf[i] = value;
  }
}

void loop()
{
  fillBuffer(buffer, PAYLOAD_SIZE, random(0, 256)); // Fill buffer with random data
  printBuffer(buffer, PAYLOAD_SIZE);
  if (radio.write(buffer, PAYLOAD_SIZE))
  {
    Serial.println("Data sent successfully");
  }
  else
  {
    Serial.println("Failed to send data");
  }

  delay(5000); // Wait for a second before sending the next value
}
