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

tft_logger::tft_logger(int16_t w, int16_t h) {}
tft_logger::~tft_logger() {}

void tft_logger::fillScreen(int32_t color) {}
void tft_logger::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t color) {}

// The two new ones the compiler is begging for:
void tft_logger::fillRect(int32_t x, int32_t y, int32_t w, int32_t h) {} 
size_t tft_logger::println(const String &s) { return 0; }

size_t tft_logger::print(const String &s) { return 0; }
int16_t tft_logger::drawString(const String &string, int32_t x, int32_t y, uint8_t font) { return 0; }
int16_t tft_logger::drawCentreString(const String &string, int32_t x, int32_t y, uint8_t font) { return 0; }