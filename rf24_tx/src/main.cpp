#include <Arduino.h>
#include <RF24.h>
#include <SPI.h>

#define CE_PIN 4  // Yellow
#define CSN_PIN 5 // Orange

#define MISO_PIN 6 // Green
#define MOSI_PIN 7 // Violet
#define SCK_PIN 15 // Gray
#define IRQ_PIN 2  // Blue

RF24 radio(CE_PIN, CSN_PIN, 4000000); // CE, CSN pins, 4MHz SPI speed
int channel = 32;

#define PAYLOAD_SIZE 32
uint8_t buffer[PAYLOAD_SIZE];

void setup()
{
  Serial.begin(115200);
  delay(1000); // Wait for Serial to initialize
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
  Serial.printf("Radio chip connected: %s\n", radio.isChipConnected() ? "Yes" : "No");
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

#define DATA_LENGTH 20
String data[DATA_LENGTH] = {
    "Hello, World!",
    "ESP32-S3 is awesome!",
    "RF24 library is working!",
    "Sending data over SPI!",
    "This is a test message.",
    "Arduino on ESP32-S3",
    "C++ programming",
    "Wireless communication",
    "IoT projects",
    "Have a great day!",
    "Đây là một dòng dữ liệu rất dài, cần phải tách ra làm vài lần để có thể chuyển tiếp toàn bộ, chỉ để test xem có hoạt động đúng không.",
    "Xin chào, thế giới!",
    "ESP32-S3 thật tuyệt vời!",
    "Thư viện RF24 đang hoạt động!",
    "Gửi dữ liệu qua SPI!",
    "Đây là một tin nhắn thử nghiệm.",
    "Arduino trên ESP32-S3",
    "Lập trình C++",
    "Giao tiếp không dây",
    "Dự án IoT"};

char *currentData;
int currentDataIdx = 0;
void loop()
{
  Serial.printf("Radio chip connected: %s\n", radio.isChipConnected() ? "Yes" : "No");
  // if (currentData == "")
  // {
  //   currentData = data[currentDataIdx];
  // }
  // currentData = data[currentDataIdx];

  if (currentData == nullptr || currentData[0] == '\0')
  {
    currentData = (char *)data[currentDataIdx].c_str();
  }

  int len = strlen(currentData);
  Serial.printf("Sending: %s\n", currentData);
  Serial.printf("Data length: %d\n", len);
  memset(buffer, 0, PAYLOAD_SIZE); // Clear the buffer before filling
  if (len > PAYLOAD_SIZE)
  {
    memcpy(buffer, currentData, PAYLOAD_SIZE);
    currentData += PAYLOAD_SIZE;
  }
  else
  {
    memcpy(buffer, currentData, len);
    currentData = nullptr;                               // Mark as sent
    currentDataIdx = (currentDataIdx + 1) % DATA_LENGTH; // Move to next data
  }

  printBuffer(buffer, PAYLOAD_SIZE);
  if (radio.write(buffer, PAYLOAD_SIZE))
  {
    Serial.println("Data sent successfully.");
  }
  else
  {
    Serial.println("Data send failed.");
  }

  delay(1000); // Wait for a second before sending the next value
}
