/*
 * @Author: your name
 * @Date: 2020-12-21 11:28:49
 * @LastEditTime: 2020-12-21 11:42:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \Arduino\0.9OLED\0.9OLED.ino
 */

#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>



U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);   // All Boards without Reset of the Display

void setup(void) {
  u8g2.begin();
}

void loop(void) {
  u8g2.clearBuffer();					// clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);	// choose a suitable font
  u8g2.drawStr(0,10,"Hello World!");	// write something to the internal memory
  u8g2.sendBuffer();					// transfer internal memory to the display
  delay(1000);
  u8g2.sendBuffer();
  ///sadasd
}
