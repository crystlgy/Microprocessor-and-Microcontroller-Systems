/*
YouTube Demo
Arduino Tutorial - LED Blink / Code Included 
*/

//Sets Red to digital pin 13
#define Red 13


void setup()
{
//Initializes pin 13 as output
  pinMode(Red,OUTPUT);
}

void loop()
{
//Blinking
  digitalWrite(Red,HIGH); //Red on
  delay(1000); //Wait 1 second
  digitalWrite(Red,LOW); //Red off
  delay(100); //Wait 100ms
}
