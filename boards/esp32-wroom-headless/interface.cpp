#include "core/powerSave.h"
#include "globals.h"
#include "core/tftLogger/tftLogger.h" // Correct path to the header

void _setup_gpio() {}
void _post_setup_gpio() {}
void InputHandler() {}
void _setBrightness(uint8_t brightval) {}
int getBattery() { return 0; }
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }

// --- Stubs for RF Spectrum (which we excluded) ---
void rf_spectrum() {}

// --- Stubs for Timer and RF Scan ---
// We provide the global object and the empty functions it needs.
tft_logger tft_logger;

void tft_logger::fillScreen(uint16_t color) {}
void tft_logger::drawCentreString(String text, int32_t x, int32_t y, uint8_t font) {}
void tft_logger::println(String text) {}
void tft_logger::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint32_t color) {}
void tft_logger::drawPixel(int32_t x, int32_t y, uint32_t color) {}
void tft_logger::print(String text) {}
void tft_logger::drawString(String text, int32_t x, int32_t y, uint8_t font) {}