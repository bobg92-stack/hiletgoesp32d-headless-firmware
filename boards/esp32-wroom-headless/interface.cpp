#include "core/powerSave.h"
#include "globals.h"
#include <TFT_eSPI.h>

void _setup_gpio() {}
void _post_setup_gpio() {}
void InputHandler() {}
void _setBrightness(uint8_t brightval) {}
int getBattery() { return 0; }
void powerOff() {}
void checkReboot() {}
bool isCharging() { return false; }

// --- TFT_eSPI Stubs with exact signature matches ---
void TFT_eSPI::drawGlyph(uint16_t code) {}
void TFT_eSPI::drawPixel(int32_t x, int32_t y, uint32_t color) {}
void TFT_eSPI::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, uint32_t color) {}
void TFT_eSPI::fillRect(int32_t x, int32_t y, int32_t w, int32_t h, uint32_t color) {}
void TFT_eSPI::drawChar(int32_t x, int32_t y, uint16_t c, uint32_t color, uint32_t bg, uint8_t size) {}
void TFT_eSPI::setCursor(int16_t x, int16_t y) {}
void TFT_eSPI::setTextColor(uint16_t c) {}
void TFT_eSPI::setRotation(uint8_t r) {}
void TFT_eSPI::init(uint8_t tc) {}
void TFT_eSPI::begin(uint8_t tc) {} 