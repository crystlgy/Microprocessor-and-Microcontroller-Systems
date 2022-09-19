/*CRYSTAL GAY A. PUNZALAN
  BET - CPET 3D (STEM) */
/*create an up/down counter from 0 to 99 managed 
by 2 push buttons, for count up and the other for count down*/

int d, u, i=0;
// look-up table to encode numbers on display
byte number [10]={B10000000, B11110010, B01001000, B01100000, B00110010, B00100100, B00000100, B11110000, B00000000, B00110000};
//B00111111, B00000110, B01011011, B01001111, B01100110,B01101101, B01111101, B00000111, B01111111, B01101111 

// boolean state variables: 
// 1 = true = HIGH, 0 = false = LOW
int countup=1;
int upbefore=1;
int downnow=1;
int downbefore=1;

void setup() {
    // pinMode OUTPUT to digital pins from 0 to 7
  DDRD = B11111111;
  /* pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  */
  DDRB = B11110011;
}

void loop() {
  // Arduino reads the buttons in polling
    countup=digitalRead (11);
  downnow=digitalRead (10);

    // up button pressed
  if((countup==HIGH) && (upbefore==0))
  {
    if (i<99)
          i++;
  }
  upbefore=countup;
  
  // down button pressed 
    if((downnow==HIGH) && (downbefore==0))
  {
    if (i>0)
      i--;
  }
  downbefore=downnow;
  
  // display management: encoding from decimal 0-99 
    // to 2 digits for 7 segment displays
    d=i/10;
  u=i-(d*10);
  
    // print tens
    digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  PORTD=number[d];
  delay(10);

    // print units
    digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  PORTD= number[u];
  delay(15);
}
