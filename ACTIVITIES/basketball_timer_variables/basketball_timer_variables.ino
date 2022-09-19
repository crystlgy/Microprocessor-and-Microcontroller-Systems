//basketball timer - maximum of 12minutes
int digit_pin[] = {6, 9, 10, 11}; // PWM Display digit pins from left to right
int speakerPin = 15;

#define DIGIT_ON LOW
#define DIGIT_OFF HIGH

int segmentA = 2;
int segmentB = 3;
int segmentC = 4;
int segmentD = 5;
int segmentE = A0; //pin 6 is used bij display 1 for its pwm function
int segmentF = 7;
int segmentG = 8;
//int segPD = ;

const int buzzzerPin = 24;

int timeLimit = 1200;
int switch1 = 13;
int switch2 = 12;
int switch3 = 16;
int switch4 = 17;

int countdown_time = 1200;
struct struct_digits {
  int digit[4];
};

void playTone(int tone, int duration) {
for (long k = 0; k < duration * 1000L; k += tone * 2) {
  digitalWrite(buzzzerPin, HIGH);
  delayMicroseconds(tone);
  digitalWrite(buzzzerPin, LOW);
  delayMicroseconds(tone);
  }
}

void lightNumber(int numberToDisplay) {

#define SEGMENT_ON HIGH
#define SEGMENT_OFF LOW

switch (numberToDisplay) {

    case 0:
    digitalWrite(segmentA, SEGMENT_ON);
    digitalWrite(segmentB, SEGMENT_ON);
    digitalWrite(segmentC, SEGMENT_ON);
    digitalWrite(segmentD, SEGMENT_ON);
    digitalWrite(segmentE, SEGMENT_ON);
    digitalWrite(segmentF, SEGMENT_ON);
    digitalWrite(segmentG, SEGMENT_OFF);
    break;
    
    case 1:
    digitalWrite(segmentA, SEGMENT_OFF);
    digitalWrite(segmentB, SEGMENT_ON);
    digitalWrite(segmentC, SEGMENT_ON);
    digitalWrite(segmentD, SEGMENT_OFF);
    digitalWrite(segmentE, SEGMENT_OFF);
    digitalWrite(segmentF, SEGMENT_OFF);
    digitalWrite(segmentG, SEGMENT_OFF);
    break;
   
    case 2:
    digitalWrite(segmentA, SEGMENT_ON);
    digitalWrite(segmentB, SEGMENT_ON);
    digitalWrite(segmentC, SEGMENT_OFF);
    digitalWrite(segmentD, SEGMENT_ON);
    digitalWrite(segmentE, SEGMENT_ON);
    digitalWrite(segmentF, SEGMENT_OFF);
    digitalWrite(segmentG, SEGMENT_ON);
    break;
   
    case 3:
    digitalWrite(segmentA, SEGMENT_ON);
    digitalWrite(segmentB, SEGMENT_ON);
    digitalWrite(segmentC, SEGMENT_ON);
    digitalWrite(segmentD, SEGMENT_ON);
    digitalWrite(segmentE, SEGMENT_OFF);
    digitalWrite(segmentF, SEGMENT_OFF);
    digitalWrite(segmentG, SEGMENT_ON);
    break;
   
    case 4:
    digitalWrite(segmentA, SEGMENT_OFF);
    digitalWrite(segmentB, SEGMENT_ON);
    digitalWrite(segmentC, SEGMENT_ON);
    digitalWrite(segmentD, SEGMENT_OFF);
    digitalWrite(segmentE, SEGMENT_OFF);
    digitalWrite(segmentF, SEGMENT_ON);
    digitalWrite(segmentG, SEGMENT_ON);
    break;
   
    case 5:
    digitalWrite(segmentA, SEGMENT_ON);
    digitalWrite(segmentB, SEGMENT_OFF);
    digitalWrite(segmentC, SEGMENT_ON);
    digitalWrite(segmentD, SEGMENT_ON);
    digitalWrite(segmentE, SEGMENT_OFF);
    digitalWrite(segmentF, SEGMENT_ON);
    digitalWrite(segmentG, SEGMENT_ON);
    break;
    
    case 6:
    digitalWrite(segmentA, SEGMENT_ON);
    digitalWrite(segmentB, SEGMENT_OFF);
    digitalWrite(segmentC, SEGMENT_ON);
    digitalWrite(segmentD, SEGMENT_ON);
    digitalWrite(segmentE, SEGMENT_ON);
    digitalWrite(segmentF, SEGMENT_ON);
    digitalWrite(segmentG, SEGMENT_ON);
    break;
   
    case 7:
    digitalWrite(segmentA, SEGMENT_ON);
    digitalWrite(segmentB, SEGMENT_ON);
    digitalWrite(segmentC, SEGMENT_ON);
    digitalWrite(segmentD, SEGMENT_OFF);
    digitalWrite(segmentE, SEGMENT_OFF);
    digitalWrite(segmentF, SEGMENT_OFF);
    digitalWrite(segmentG, SEGMENT_OFF);
    break;
  
    case 8:
    digitalWrite(segmentA, SEGMENT_ON);
    digitalWrite(segmentB, SEGMENT_ON);
    digitalWrite(segmentC, SEGMENT_ON);
    digitalWrite(segmentD, SEGMENT_ON);
    digitalWrite(segmentE, SEGMENT_ON);
    digitalWrite(segmentF, SEGMENT_ON);
    digitalWrite(segmentG, SEGMENT_ON);
    break;
   
    case 9:
    digitalWrite(segmentA, SEGMENT_ON);
    digitalWrite(segmentB, SEGMENT_ON);
    digitalWrite(segmentC, SEGMENT_ON);
    digitalWrite(segmentD, SEGMENT_ON);
    digitalWrite(segmentE, SEGMENT_OFF);
    digitalWrite(segmentF, SEGMENT_ON);
    digitalWrite(segmentG, SEGMENT_ON);
    break;
  
    case 10:
    digitalWrite(segmentA, SEGMENT_OFF);
    digitalWrite(segmentB, SEGMENT_OFF);
    digitalWrite(segmentC, SEGMENT_OFF);
    digitalWrite(segmentD, SEGMENT_OFF);
    digitalWrite(segmentE, SEGMENT_OFF);
    digitalWrite(segmentF, SEGMENT_OFF);
    digitalWrite(segmentG, SEGMENT_OFF);
    break;
    }
}

void SwitchDigit(int digit) {
  for (int i = 0; i < 4; i++) {
    if (i == digit) {
      digitalWrite(digit_pin[i], DIGIT_ON);
      } else {
      digitalWrite(digit_pin[i], DIGIT_OFF);
    }
  }
}

struct struct_digits IntToDigits(int n) {
struct struct_digits dig;
int zeros = 0;
int d;
for (int i = 0; i < 4; i++) {
  d = n / pow(10, 3 - i);
  zeros += d;
  n = n - d * pow(10, 3 - i);
  if (zeros != 0 || i == 3) {
    dig.digit[i] = d;
    } else {
    dig.digit[i] = 10;
    }
  }
  
  return dig;
}

void PrintNumber(int n, int time) {
struct struct_digits dig;
dig = IntToDigits(n);
for (int i = 0; i <= time / 20; i++) {
  if (digitalRead(switch2) == LOW) {
    return;
  }
  for (int j = 0; j < 4; j++) {
    SwitchDigit(j);
    lightNumber(dig.digit[j]);
    delay(5);
    }
  }
}

bool Countdown(int n, int del) {
for (int q = n; q > 0; q--) {
  PrintNumber(q, del);
  for (int matchq = 100; matchq <= 6000; matchq += 100) {
    if (matchq == q) {
      q -= 41;
      PrintNumber(q, del);
    }
  }
  if (digitalRead(switch2) == LOW) {
  return false;
  }
}

  PrintNumber(0,0);
  playTone(1519, 2000);
  return true;
}

void reset() {
  int m, zeros, d, clicked3 = 0, clicked4 = 0;
    m = countdown_time;
    struct struct_digits dig;
    dig = IntToDigits(countdown_time);
  while (digitalRead(switch1) == HIGH) {
  for (int j = 0; j < 4; j++) {
    SwitchDigit(j);
    lightNumber(dig.digit[j]);
    delay(5);
}
if (digitalRead(switch3) == LOW) {
  if (clicked3 == 0 || clicked3 > 30) {
    if (countdown_time > 0) {
      countdown_time -= 1 ;
}

        dig = IntToDigits(countdown_time);
}
        clicked3 += 1;
}

else if (digitalRead(switch4) == LOW) {
  if (clicked4 == 0 || clicked4 > 30) {
    if (countdown_time < 1198) {
  countdown_time += 1 ;
}
  dig = IntToDigits(countdown_time);
}
  clicked4 += 1;
}

if (digitalRead(switch3) == HIGH) {
for (int playcountdown = 60; playcountdown <= 1160; playcountdown += 100) {
  if (playcountdown == countdown_time) {
    countdown_time += 40;
      dig = IntToDigits(countdown_time);
    }
  }
}
if (digitalRead(switch4) == HIGH) {
for (int playcountdown2 = 99; playcountdown2 <= 1199; playcountdown2 += 100) {
  if (playcountdown2 == countdown_time) {
    countdown_time -= 40;
      dig = IntToDigits(countdown_time);
         }
      }
    }
  }
}
void setup() {
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
  
for (int i = 0; i < 4; i++) {
  pinMode(digit_pin[i], OUTPUT);
  }
  pinMode(buzzzerPin, OUTPUT);
  pinMode(switch1, INPUT_PULLUP);
  pinMode(switch2, INPUT_PULLUP);
  pinMode(switch3, INPUT_PULLUP);
  pinMode(switch4, INPUT_PULLUP);
}

void loop() {
reset();
  while (!Countdown(countdown_time, 962)) {
    reset();
  }
}
