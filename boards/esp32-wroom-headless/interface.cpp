#include "core/powerSave.h"
#include "globals.h"
#include <TFT_eSPI.h>

// --- Board Interface Stubs ---
void _setup_gpio() {}
void _post_setup_gpio() {}
void InputHandler() {}
void _setBrightness(uint8_t brightval) {}
int getBattery() { return 0; }
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }

// --- Specific TFT_eSPI Stub ---
// We only stub the exact function that was missing earlier.
void TFT_eSPI::drawGlyphEt(uint16_t code) {}