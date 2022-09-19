#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  //0x27 is the i2c address, while 16 = columns, and 2 = rows. 

int forward = 12;
int reverse = 13;
int clickforward = 4;
int clickreverse = 3;
int clickstop = 2;

int clickstop_state = 0;
int clickforward_state = 0;
int clickreverse_state = 0;

void setup() {
  pinMode (forward, OUTPUT);     // forward
  pinMode (reverse, OUTPUT);     // reverse
  pinMode (clickforward, INPUT_PULLUP); // forward button
  pinMode (clickreverse, INPUT_PULLUP); // reverse button
  pinMode (clickstop, INPUT_PULLUP);    // stop button

  lcd.init();        //Initialize the LCD
  Serial.begin(9600);
}


void loop() {
  lcd.backlight();    //Activate backlight 
  lcd.setCursor(1,0); //Defining positon to write from first row,first column .
  lcd.print("-- DC Motor --");
  clickforward_state = digitalRead (clickforward);
  // if forward button clicked
  if(clickforward_state == HIGH)
  {
   digitalWrite(reverse, LOW);
   digitalWrite(forward, HIGH);
   lcd.clear();
   lcd.setCursor(1,1); 
   lcd.print("Forward Driving");
   Serial.println("Forward Driving");
  }

   // if reverse button clicked
   clickreverse_state = digitalRead (clickreverse);
   if(clickreverse_state == HIGH)
  {
    digitalWrite(forward, LOW);
    digitalWrite(reverse, HIGH);
    lcd.clear();
    lcd.setCursor(1,1);
    lcd.print("Reverse Driving");
    Serial.println("Reverse Driving");
  }

   // if stop button clicked
   clickstop_state = digitalRead (clickstop);
   if(clickstop_state == HIGH)
  {
    digitalWrite(forward, LOW);
    digitalWrite(reverse, LOW);
    lcd.clear();
    lcd.setCursor(2,1);
    lcd.print("Stop Driving");
    Serial.println("Stop Driving");
  }
}
