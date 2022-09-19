#define led   30
#define led1  20
#define led2  100
#define led3  50

// PIN 2 - LED 1
// PIN 3 - LED 2
// PIN 4 - LED 3
// PIN 5 - LED 4
// PIN 6 - LED 5
// PIN 7 - LED 6
// PIN 8 - LED 7
// PIN 9 - LED 8
// PIN 10 - LED 9
// PIN 11 - LED 10
// PIN 12 - LED 11
// PIN 13 - LED 12
void setup() {
  // set up pins 2 to 13 as outputs
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}
//Effect 1
void loop(){

effect_1();
effect_1();

 effect_2();
 effect_2();

 effect_3();
 effect_3();

 effect_4();
 effect_4();

 effect_5();
 effect_5();

 effect_6();
 effect_6();

 effect_7();
 effect_7();
  }
//left to right and right to left
void effect_1()
{
for(int i=2; i<14; i++){
digitalWrite(i, HIGH);
delay(led1);
digitalWrite(i+1, HIGH);
delay(led1);
digitalWrite(i+2, HIGH);
delay(led1);
digitalWrite(i, LOW);
delay(led1);
digitalWrite(i+1, LOW);
delay(led1);
}
for(int i=13; i>1; i--){
digitalWrite(i, HIGH);
delay(led1);
digitalWrite(i-1, HIGH);
delay(led1);
digitalWrite(i-2, HIGH);
delay(led1);
digitalWrite(i, LOW);
delay(led1);
digitalWrite(i-1, LOW);
delay(led1);
}
}

//Effect 2
void effect_2()
{
int count = 13; // keeps track of second LED movement

  // move first LED from left to right and second from right to left
  for (int i = 2; i < 13; i++) {
    clear();
    digitalWrite(i, HIGH);      // chaser 1
    digitalWrite(count, HIGH); // chaser 2
    count--;
    // stop LEDs from appearing to stand still in the middle
    if (count != 7) {
      delay(led2);
    }
  }

// move first LED from right to left and second LED from left to right
  for (int i = 13; i > 2; i--) {
    clear();
    digitalWrite(i, HIGH);      // chaser 1
    digitalWrite(count, HIGH); // chaser 2
    count++;
    // stop LEDs from appearing to stand still in the middle
    if (count != 8) {
      delay(led2);
    }
  }
}

//Effect 3

void effect_3()
{
for(int i=2; i<14; i++){
  digitalWrite(i, HIGH);
  delay(led3);
}
for(int i=2; i<14; i++){
  digitalWrite(i, LOW);
  delay(led3);
}


for(int i = 14; i>=2; i--){
  digitalWrite(i, HIGH);
  delay(led3);
}
for(int i = 14; i>=2; i--){
  digitalWrite(i, LOW);
  delay(led3);
}
}

//Effect 4
void effect_4()
{
for(int j = 2; j <= 13; j++){
  digitalWrite(j, HIGH);
  delay(led2);
  j=j+1;
  }
for(int j = 2; j <= 13; j++){
  digitalWrite(j, LOW);
  delay(led2);
  }

  for(int k = 15; k > 2; k--){
  digitalWrite(k, HIGH);
  delay(led2);
  k=k-1;
  }
for(int k = 15; k > 2; k--){
  digitalWrite(k, LOW);
  delay(led2);
  }
}

////Effect 5
  void effect_5()
{
 for(int pin = 13; pin >= 2; pin--)
  {
  digitalWrite(pin, HIGH);
  delay(led1);
  digitalWrite(pin+1, LOW);
  delay(led1);
  }
  for(int pin = 13; pin >= 2; pin--)
  {
  digitalWrite(pin+1, HIGH);
  delay(led1);
  digitalWrite(pin+2, LOW);
  delay(led1);
  }
  for(int pin = 13; pin >= 2; pin--)
  {
  digitalWrite(pin+2, HIGH);
  delay(led1);
  digitalWrite(pin+3, LOW);
  delay(led1);
  }
  for(int pin = 13; pin >= 2; pin--)
  {
  digitalWrite(pin+3, HIGH);
  delay(led1);
  digitalWrite(pin+4, LOW);
  delay(led1);
  }
    for(int pin = 13; pin >= 2; pin--)
  {
  digitalWrite(pin+4, HIGH);
  delay(led1);
  digitalWrite(pin+5, LOW);
  delay(led1);
  }
  for(int pin = 13; pin >= 2; pin--)
  {
  digitalWrite(pin+5, HIGH);
  delay(led1);
  digitalWrite(pin+6, LOW);
  delay(led1);
  }
  for(int pin = 13; pin >= 2; pin--)
  {
  digitalWrite(pin+6, HIGH);
  delay(led1);
  digitalWrite(pin+7, LOW);
  delay(led1);
  }
   for(int pin = 13; pin >= 2; pin--)
  {
  digitalWrite(pin+7, HIGH);
  delay(led1);
  digitalWrite(pin+8, LOW);
  delay(led1);
  }
  for(int pin = 9; pin >= 2; pin--)
  {
  digitalWrite(pin+8, HIGH);
  delay(led1);
  digitalWrite(pin+9, LOW);
  delay(led1);
  }
    for(int pin = 9; pin >= 2; pin--)
  {
  digitalWrite(pin+9, HIGH);
  delay(led1);
  digitalWrite(pin+10, LOW);
  delay(led1);
  }
  for(int pin = 9; pin >= 2; pin--)
  {
  digitalWrite(pin+10, HIGH);
  delay(led1);
  digitalWrite(pin+11, LOW);
  delay(led1);
  }
  for(int pin = 14; pin >= 2; pin--)
  {
  digitalWrite(pin+11, HIGH);
  delay(led1);
  }
  for(int pin = 13; pin >= 2; pin--)
  {
    digitalWrite(pin, LOW);
  delay(led1);
    }
  }


//Effect 6
void effect_6()
{
for(int j=2; j<14; j++){
  digitalWrite(j, LOW);
  delay(led);
  digitalWrite(j, HIGH);
  delay(led);
  digitalWrite(j-2, LOW);
  delay(led);
  digitalWrite(j, HIGH);
}
for(int k = 15; k>2; k--){
  digitalWrite(k, LOW);
  delay(led);
  digitalWrite(k, HIGH);
  delay(led);
  digitalWrite(k+2, LOW);
  delay(led);
  digitalWrite(k, HIGH);
}
for(int k = 2; k<14; k++){
  digitalWrite(k, LOW);
  delay(led);
  digitalWrite(k, HIGH);
  delay(led);
  digitalWrite(k-2, LOW);
  delay(led);
  digitalWrite(k, HIGH);
}
for(int k = 15; k>2; k--){
  digitalWrite(k, LOW);
  delay(led);
  digitalWrite(k, HIGH);
  delay(led);
  digitalWrite(k+4, LOW);
  delay(led);
  digitalWrite(k, HIGH);
}
for(int k = 2; k<14; k++){
  digitalWrite(k, LOW);
  delay(led);
  digitalWrite(k, HIGH);
  delay(led);
  digitalWrite(k-4, LOW);
  delay(led);
  digitalWrite(k, HIGH);
} 
}

////Effect 7
void effect_7()
{
for(int j=2; j<14; j++){
  digitalWrite(j, HIGH);
  delay(led);
  digitalWrite(j+2, LOW);
  delay(led);
}
for(int k = 15; k>2; k--){
  digitalWrite(k, HIGH);
  delay(led);
  digitalWrite(k+2, LOW);
  delay(led);
}
}

// function to switch all LEDs off
void clear(void)
{
  for (int i = 2; i <= 13; i++) {
    digitalWrite(i, LOW);
  }
}
