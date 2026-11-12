#include "core/powerSave.h"
#include "globals.h"
#include "core/tftLogger/tftLogger.h" // The correct path!

void _setup_gpio() {}
void _post_setup_gpio() {}
void InputHandler() {}
void _setBrightness(uint8_t brightval) {}
int getBattery() { return 0; }
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }

// --- Create the global tft_logger object ---
tft_logger tft_logger;

// --- Stubs for Timer, RF Scan, and RF Spectrum ---
// Since we excluded the real tftLogger.cpp, these empty functions take its place.
void tft_logger::fillScreen(uint16_t color) {}
void tft_logger::drawCentreString(String text, int32_t x, int32_t y, uint8_t font) {}
void tft_logger::println(String text) {}
void tft_logger::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint32_t color) {}
void tft_logger::drawPixel(int32_t x, int32_t y, uint32_t color) {}