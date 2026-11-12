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
void tft_logger::drawRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t color) {}
void tft_logger::fillRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t color) {} 
void tft_logger::drawRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t r, int32_t color) {}
void tft_logger::fillRoundRect(int32_t x, int32_t y, int32_t w, int32_t h, int32_t r, int32_t color) {}
void tft_logger::drawCircle(int32_t x, int32_t y, int32_t r, int32_t color) {}
void tft_logger::fillCircle(int32_t x, int32_t y, int32_t r, int32_t color) {}
void tft_logger::drawEllipse(int16_t x, int16_t y, int32_t rx, int32_t ry, uint16_t color) {}
void tft_logger::fillEllipse(int16_t x, int16_t y, int32_t rx, int32_t ry, uint16_t color) {}
void tft_logger::drawTriangle(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3, int32_t color) {}
void tft_logger::fillTriangle(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t x3, int32_t y3, int32_t color) {}
void tft_logger::drawLine(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t color) {}
void tft_logger::drawArc(int32_t x, int32_t y, int32_t r, int32_t ir, uint32_t startAngle, uint32_t endAngle, uint32_t fg_color, uint32_t bg_color, bool smoothArc) {}
void tft_logger::drawWideLine(float ax, float ay, float bx, float by, float wd, int32_t fg, int32_t bg) {}
void tft_logger::drawFastVLine(int32_t x, int32_t y, int32_t h, int32_t fg) {}
void tft_logger::drawFastHLine(int32_t x, int32_t y, int32_t w, int32_t fg) {}
void tft_logger::imageToBin(uint8_t fs, String file, int x, int y, bool center, int Ms) {}

int16_t tft_logger::drawString(const String &string, int32_t x, int32_t y, uint8_t font) { return 0; }
int16_t tft_logger::drawCentreString(const String &string, int32_t x, int32_t y, uint8_t font) { return 0; }
int16_t tft_logger::drawRightString(const String &string, int32_t x, int32_t y, uint8_t font) { return 0; }

size_t tft_logger::print(const String &s) { return 0; }
size_t tft_logger::println(const String &s) { return 0; }
size_t tft_logger::println(void) { return 0; }
size_t tft_logger::println(char c) { return 0; }
size_t tft_logger::println(unsigned char b, int base) { return 0; }
size_t tft_logger::println(int n, int base) { return 0; }
size_t tft_logger::println(unsigned int n, int base) { return 0; }
size_t tft_logger::println(long n, int base) { return 0; }
size_t tft_logger::println(unsigned long n, int base) { return 0; }
size_t tft_logger::println(long long n, int base) { return 0; }
size_t tft_logger::println(unsigned long long n, int base) { return 0; }
size_t tft_logger::println(double n, int digits) { return 0; }
size_t tft_logger::print(char c) { return 0; }
size_t tft_logger::print(unsigned char b, int base) { return 0; }
size_t tft_logger::print(int n, int base) { return 0; }
size_t tft_logger::print(unsigned int n, int base) { return 0; }
size_t tft_logger::print(long n, int base) { return 0; }
size_t tft_logger::print(unsigned long n, int base) { return 0; }
size_t tft_logger::print(long long n, int base) { return 0; }
size_t tft_logger::print(unsigned long long n, int base) { return 0; }
size_t tft_logger::print(double n, int digits) { return 0; }
size_t tft_logger::printf(const char *format, ...) { return 0; }

void tft_logger::getBinLog(uint8_t *outBuffer, size_t &outSize) {}
void tft_logger::startAsyncSerial() {}
void tft_logger::stopAsyncSerial() {}
void tft_logger::getTftInfo() {}

// --- The two new missing functions ---
void TFT_eSPI::drawGlyphEt(uint16_t code) {}
void tft_logger::log_drawString(String text, tftFuncs func, long arg1, long arg2) {}