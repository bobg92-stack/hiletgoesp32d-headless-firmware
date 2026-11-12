#include "core/powerSave.h"
#include "globals.h"
#include "core/tftLogger.h" // Required to define the stubs below

void _setup_gpio() {}
void _post_setup_gpio() {}
void InputHandler() {}
void _setBrightness(uint8_t brightval) {}
int getBattery() { return 0; }
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }

// --- Stubs for the RF Spectrum tool ---
// Because we excluded tftLogger.cpp, we must provide empty versions of the functions it calls.
void tft_logger::fillScreen(uint16_t color) {}
void tft_logger::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint32_t color) {}
void tft_logger::drawPixel(int32_t x, int32_t y, uint32_t color) {} 