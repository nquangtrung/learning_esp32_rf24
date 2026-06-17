#include <Arduino.h>
#include <RF24.h>

#ifndef RECEIVER_H
#define RECEIVER_H
// #define CE_PIN 4  // Yellow
// #define CSN_PIN 3 // Orange

// #define MISO_PIN 5 // Green
// #define MOSI_PIN 2 // Violet
// #define SCK_PIN 7  // Gray
#define IRQ_PIN 6 // Blue

// Choose a clean GPIO instead of 0 for SCK (e.g., GPIO 7)
#define SCK_PIN 7  // Gray (Changed from 0)
#define MISO_PIN 5 // Green
#define MOSI_PIN 2 // Violet

#define CE_PIN 4  // Yellow
#define CSN_PIN 3 // Orange (Also acts as SPI SS)

extern RF24 radio;
extern String receivedData;

#endif // RECEIVER_H

void Radio_init();
void Radio_loop();
void printBuffer(const uint8_t *buf, size_t size);