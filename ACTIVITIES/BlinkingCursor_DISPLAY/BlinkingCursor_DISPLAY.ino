#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.init();
}

void loop()
{
	bool blinking = true;
	lcd.cursor();
  lcd.backlight();
	while (1) {
		if (blinking) {
	    lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("  HI, I'M");

      lcd.setCursor(2,1);
      lcd.print("CRYSTAL GAY.");
      lcd.noBlink();
      blinking = false;
		} else {
	    lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("  ROOTING");
      lcd.setCursor(2,1);
      lcd.print("FOR U ALWAYS!!");
      delay (2000);
      lcd.clear();
      lcd.setCursor(2,1);
      lcd.print("FIGHTING! :>");
      delay (3000);
      lcd.clear();
      lcd.setCursor(2,1);
      lcd.print("STAY SAFE! :>");
      lcd.blink();
      blinking = true;
		}
		delay(4000);
	}
}
