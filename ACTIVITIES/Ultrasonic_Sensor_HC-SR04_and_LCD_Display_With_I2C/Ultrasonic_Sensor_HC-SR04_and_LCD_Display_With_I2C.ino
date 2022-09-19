#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

#define TrggrPn 8
#define EchoPin 7

long duration, cm, inches;

void setup() {
  pinMode(TrggrPn,OUTPUT);
  pinMode(EchoPin,INPUT);
  // initialize the LCD
  lcd.init(); 
  // Turn on the blacklight and print a message.
  lcd.backlight();

}

void loop() {
  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(TrggrPn, LOW);
  delayMicroseconds(2);
  digitalWrite(TrggrPn, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrggrPn, LOW);
  duration = pulseIn(EchoPin, HIGH);

  // convert the time into a distance
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  //display data
  lcd.print("Distance: ");
  lcd.print(cm);
  lcd.setCursor(14,0);
  lcd.print("cm");
  lcd.setCursor(0,1);
  lcd.print("Distance: ");
  lcd.print(inches);
  lcd.setCursor(14,1);
  lcd.print("in");
  delay(1000);
  lcd.clear();

}
long microsecondsToInches(long microseconds) {
  // According to Parallax's datasheet for the PING))), there are 73.746
  // microseconds per inch (i.e. sound travels at 1130 feet per second).
  // This gives the distance travelled by the ping, outbound and return,
  // so we divide by 2 to get the distance of the obstacle.
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the object we
  // take half of the distance travelled.
  return microseconds / 29 / 2;
}
