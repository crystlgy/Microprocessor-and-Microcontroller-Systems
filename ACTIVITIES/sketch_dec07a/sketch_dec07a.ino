
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 16);
const int inPin = 0;

void setup()
  {
    lcd.begin(16, 2);
  }
void loop()
  {
    int value = analogRead(inPin);
    lcd.setCursor(0, 1);
    float millivolts = (value / 1024.0) * 5000;
    float celsius = millivolts / 10;
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(celsius);
    lcd.print(" Celsius");
    lcd.setCursor(0,1);
    lcd.print((celsius * 9)/ 5 + 32);
    lcd.print(" Fahrenheit");
    delay(10000);
  }
