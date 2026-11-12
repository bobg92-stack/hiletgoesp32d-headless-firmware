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

void rf_spectrum() {}

tft_logger tft_logger;

tft_logger::tft_logger(int16_t w, int16_t h) {}
tft_logger::~tft_logger() {}

void tft_logger::fillScreen(int32_t color) {}
void tft_logger::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t color) {}
void tft_logger::fillRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t color) {} 

size_t tft_logger::println(const String &s) { return 0; }
size_t tft_logger::print(const String &s) { return 0; }
int16_t tft_logger::drawString(const String &string, int32_t x, int32_t y, uint8_t font) { return 0; }
int16_t tft_logger::drawCentreString(const String &string, int32_t x, int32_t y, uint8_t font) { return 0; }

void tft_logger::drawRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t r) {}
void tft_logger::getBinLog(uint8_t* buf, uint32_t& len) {}

// I also removed drawCircle, fillCircle, and setTextColor just in case they 
// cause the same "no declaration" error. If the linker asks for them later, we will add them back correctly.