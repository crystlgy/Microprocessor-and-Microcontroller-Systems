int forward = 12;
int reverse = 13;
int clickforward = 4;
int clickreverse = 3;
int clickstop = 2;

int clickstop_state =0;
int clickforward_state =0;
int clickreverse_state =0;

void setup() {
  pinMode (forward, OUTPUT);     // forward
  pinMode (reverse, OUTPUT);     // reverse
  pinMode (clickforward, INPUT_PULLUP); // forward button
  pinMode (clickreverse, INPUT_PULLUP); // reverse button
  pinMode (clickstop, INPUT_PULLUP);    // stop button
  Serial.begin(9600);
}


void loop() {
  // if forward button clicked
clickstop_state = digitalRead(clickstop);
clickforward_state = digitalRead(clickforward);
clickreverse_state = digitalRead(clickreverse);

  if(digitalRead(clickforward) == HIGH)
  {
    digitalWrite(reverse, LOW);
    digitalWrite(forward, HIGH);
    Serial.println("drive forward");
  }

  // if reverse button clicked
  if(digitalRead(clickreverse) == HIGH)
  {
    digitalWrite(forward, LOW);
    digitalWrite(reverse, HIGH);
    Serial.println("drive reverse");
  }

  // if stop button clicked
  if(digitalRead(clickstop) == HIGH)
  {
    digitalWrite(forward, LOW);
    digitalWrite(reverse, LOW);
    Serial.println("stop driving");
  }
}
