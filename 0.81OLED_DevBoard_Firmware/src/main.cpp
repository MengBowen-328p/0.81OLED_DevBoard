#include <Arduino.h>
#include <Wire.h>
#include <U8g2lib.h>

U8G2_SSD1316_128X32_F_HW_I2C oled(U8G2_R0, U8X8_PIN_NONE, PB6, PB7);
void setup()
{
  oled.begin();

  // put your setup code here, to run once:
}

void loop()
{
  oled.setFont(u8g2_font_6x10_tr);
  oled.setCursor(20,20);
  oled.println("Hello World!");
  oled.sendBuffer();
  // put your main code here, to run repeatedly:
}
