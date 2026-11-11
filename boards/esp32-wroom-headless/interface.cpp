#include "core/interface.h"
#include "core/mykeyboard.h" // May be needed for some flags

// --- Mandatory Board Interface Stubs ---
// These satisfy the linker for a headless setup without physical buttons.

void _setup_gpio() {
    // No physical GPIO setup needed for headless mode
}

void _post_setup_gpio() {
    // No post-setup needed
}

void InputHandler() {
    // No physical inputs to poll. The serial task handles commands.
}

void _setBrightness(uint8_t brightval) {
    // No screen to brighten
}

int getBattery() {
    return 0; // No battery monitoring
}

// --- Optional Functions (Stubs for safety) ---
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }