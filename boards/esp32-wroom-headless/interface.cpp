#include "core/powerSave.h"
#include "globals.h"
#include "core/tftLogger.h" // Include the tft_logger header

void _setup_gpio() {}
void _post_setup_gpio() {}
void InputHandler() {}
void _setBrightness(uint8_t brightval) {}
int getBattery() { return 0; }
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }

// --- Stubs to satisfy the linker for the RF Spectrum module ---
void tft_logger::fillScreen(uint16_t color) { /* No screen, do nothing */ }
void tft_logger::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint32_t color) { /* No screen, do nothing */ }