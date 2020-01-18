#include <Wire.h> // Wire library is used for I2C Communication on OLED
#include <Adafruit_GFX.h> // AdafruitGFX library for Arduino provides a common syntax and set of graphics functions for all of OLED displays
#include <Adafruit_SSD1306.h> 
/*SSD1306 is a single-chip CMOS OLED/PLED driver with controller for organic / polymer light emitting
diode dot-matrix graphic display system. It consists of 128 segments and 64commons. This IC is
designed for Common Cathode type OLED panel. */

#define OLED_RESET LED_BUILTIN // D4
Adafruit_SSD1306 display(128, 64, &Wire, OLED_RESET);

static const unsigned char PROGMEM myBitmap[] =
{ 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xfe, 0x3c, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xfc, 0x3c, 0x7f, 0xff, 0xf1, 0xf0, 0xff, 0x0f, 0xf7, 0xbf, 0xf6, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xf8, 0x18, 0x3f, 0xff, 0xc0, 0xf0, 0x3e, 0x07, 0xf7, 0x9f, 0xf6, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xf8, 0x18, 0x1f, 0xff, 0xc0, 0x70, 0x3e, 0x07, 0xf7, 0x3f, 0xf2, 0xff, 0xfd, 0xff, 0xff, 
0xff, 0xf0, 0x18, 0x0f, 0xff, 0xce, 0x76, 0x1c, 0x67, 0xf7, 0x3f, 0xf2, 0xff, 0xfd, 0xff, 0xff, 
0xff, 0xe0, 0x18, 0x07, 0xff, 0x9f, 0xf7, 0x9c, 0xf7, 0xf6, 0x7f, 0xf2, 0xff, 0xf9, 0xff, 0xff, 
0xff, 0xc0, 0x38, 0x03, 0xff, 0x9f, 0xf7, 0xd9, 0xff, 0xf6, 0x7c, 0xf2, 0xff, 0x78, 0xf3, 0xff, 
0xff, 0x80, 0x3c, 0x01, 0xff, 0x3f, 0xf7, 0xc9, 0xff, 0xf4, 0x78, 0x72, 0xe6, 0x18, 0x61, 0xff, 
0xff, 0x00, 0x7e, 0x00, 0xff, 0x3f, 0xf7, 0xc9, 0xff, 0xf4, 0xf0, 0x32, 0xc4, 0x18, 0x41, 0xff, 
0xfe, 0x00, 0xff, 0x00, 0xff, 0x3f, 0xf7, 0xc9, 0xff, 0xf4, 0xf3, 0x32, 0xcc, 0x98, 0xc8, 0xff, 
0xfe, 0x01, 0xff, 0x80, 0x7f, 0x38, 0x37, 0xcb, 0xc1, 0xf0, 0xf3, 0xb2, 0x8d, 0xc9, 0xfc, 0xff, 
0xfe, 0x01, 0xff, 0x80, 0x7f, 0x38, 0x37, 0xcb, 0xc1, 0xf0, 0xf7, 0xb2, 0x9f, 0x4d, 0xf4, 0xff, 
0xfe, 0x03, 0xff, 0xc0, 0x7f, 0x38, 0x37, 0xc9, 0xc1, 0xf0, 0xe7, 0x92, 0x1e, 0x0d, 0xe0, 0xff, 
0xfe, 0x03, 0xff, 0xc0, 0x7f, 0x3f, 0x37, 0xc9, 0xf9, 0xf2, 0x67, 0x92, 0x1c, 0x0d, 0xc0, 0xff, 
0xfe, 0x01, 0xff, 0x80, 0x7f, 0x3f, 0x37, 0xc9, 0xf9, 0xf2, 0x67, 0x92, 0x1c, 0xcd, 0xcc, 0xff, 
0xfe, 0x00, 0xff, 0x00, 0x7f, 0x9f, 0x37, 0xd9, 0xfb, 0xf7, 0x27, 0xb2, 0x09, 0xcd, 0xcc, 0xff, 
0xff, 0x00, 0x7e, 0x00, 0xff, 0x9f, 0x37, 0x9c, 0xf3, 0xf7, 0x37, 0xb2, 0x49, 0xcd, 0x9c, 0xff, 
0xff, 0x80, 0x7e, 0x01, 0xff, 0x8e, 0x77, 0x1c, 0xf3, 0xf7, 0x33, 0x32, 0xc9, 0x8c, 0xdc, 0xff, 
0xff, 0xc0, 0x3c, 0x03, 0xff, 0xc0, 0x70, 0x3c, 0x07, 0xf7, 0xb0, 0x32, 0xe4, 0x0c, 0x40, 0xff, 
0xff, 0xe0, 0x38, 0x07, 0xff, 0xc0, 0xf0, 0x3e, 0x07, 0xf7, 0x98, 0x72, 0xe4, 0x0c, 0x40, 0xff, 
0xff, 0xf0, 0x18, 0x0f, 0xff, 0xe0, 0xf0, 0x7f, 0x0f, 0xf7, 0x98, 0x76, 0xe4, 0x0c, 0x60, 0xff, 
0xff, 0xf8, 0x18, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xfc, 0x38, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xfc, 0x3c, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xfe, 0x3c, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };
void setup(){
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //or 0x3D [I2C ADDRESS] 
  display.clearDisplay(); //for Clearing the display
  display.drawBitmap(0, 0, myBitmap, 128, 64, WHITE); // display.drawBitmap(x position, y position, bitmap data, bitmap width, bitmap height, color)
  display.display();
}

void loop() {
  
  
  }