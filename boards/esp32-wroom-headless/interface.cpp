#include "core/powerSave.h"
#include "globals.h"

void _setup_gpio() {}
void _post_setup_gpio() {}
void InputHandler() {}
void _setBrightness(uint8_t brightval) {}
int getBattery() { return 0; }
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }

// --- Stub for the RF Spectrum Tool ---
// The actual tool requires a screen to draw graphs. 
// By stubbing it, the menu item exists but does nothing when clicked.
void rf_spectrum() {}