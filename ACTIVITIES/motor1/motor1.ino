int forward = 12; // relay 1 - forward
int reverse = 13; // relay 2 - reverse
int clickforward = 4; // forward button
int clickreverse = 3; // reverse button
int clickstop = 2;    // stop button

int clickstop_state = 0;      // variable to store the read value
int clickforward_state = 0;   // variable to store the read value
int clickreverse_state = 0;   // variable to store the read value
// int button_state = 0;

void setup() {
  pinMode (forward, OUTPUT);            // forward
  pinMode (reverse, OUTPUT);            // reverse
  pinMode (clickforward, INPUT_PULLUP); // forward button -- set the digital pin as input with pull-up resistor
  pinMode (clickreverse, INPUT_PULLUP); // reverse button
  pinMode (clickstop, INPUT_PULLUP);    // stop button
  Serial.begin(9600);                   // use the serial port to print the number
}


void loop() {

  clickforward_state = digitalRead (clickforward);
  // if forward button clicked
  if(clickforward_state == HIGH)
  {
    digitalWrite(reverse, LOW);
    digitalWrite(forward, HIGH);
    Serial.println("Forward Driving");
  }

  // if reverse button clicked
  clickreverse_state = digitalRead (clickreverse);
  if(clickreverse_state == HIGH)
  {
    digitalWrite(forward, LOW);
    digitalWrite(reverse, HIGH);
    Serial.println("Reverse Driving");
  }

  // if stop button clicked
  clickstop_state = digitalRead (clickstop);
  if(clickstop_state == HIGH)
  {
    digitalWrite(forward, LOW);
    digitalWrite(reverse, LOW);
      Serial.println("Stop Driving");
  }
}
