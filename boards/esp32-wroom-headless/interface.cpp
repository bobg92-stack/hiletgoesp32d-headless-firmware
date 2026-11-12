#include "core/powerSave.h"
#include "globals.h"
#include "core/tftLogger.h" // Required to satisfy the RF spectrum tool

// --- Standard Board Stubs ---
void _setup_gpio() {}
void _post_setup_gpio() {}
void InputHandler() {}
void _setBrightness(uint8_t brightval) {}
int getBattery() { return 0; }
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }

// --- tft_logger Stubs ---
// These satisfy the linker for the RF Spectrum tool without needing the screen
void tft_logger::fillScreen(uint16_t color) {}
void tft_logger::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint32_t color) {}