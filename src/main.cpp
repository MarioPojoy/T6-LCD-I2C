#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  

void setup(){
  lcd.init();                    
  lcd.backlight();
}

void loop(){
  lcd.setCursor(3, 0);
  lcd.print("Hola Mundo");
  delay(1000);
  lcd.clear();
  lcd.setCursor(2,1);
  lcd.print("LCD I2C 16x2");
  delay(1000);
  lcd.clear(); 
}