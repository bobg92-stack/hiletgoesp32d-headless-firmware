#include "core/powerSave.h"
#include "globals.h"
#include "tftLogger.h" 

void _setup_gpio() {}
void _post_setup_gpio() {}
void InputHandler() {}
void _setBrightness(uint8_t brightval) {}
int getBattery() { return 0; }
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }

// --- Stubs for RF Spectrum ---
void rf_spectrum() {}

// --- Stubs matching exact C++ signatures ---
tft_logger tft_logger;

void tft_logger::fillScreen(uint16_t color) {}
void tft_logger::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint32_t color) {}
void tft_logger::drawPixel(int32_t x, int32_t y, uint32_t color) {}

// These two were causing the error, now they match the header exactly
size_t tft_logger::print(const String &s) { return 0; }
int16_t tft_logger::drawString(const String &string, int32_t x, int32_t y, uint8_t font) { return 0; }
int16_t tft_logger::drawCentreString(const String &string, int32_t x, int32_t y, uint8_t font) { return 0; }