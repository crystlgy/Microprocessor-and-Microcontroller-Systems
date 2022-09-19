const int PIR_SENSOR_PIN = 8;// the Arduino pin connected to output (middle) wire of sensor
const int CHANNEL_RELAY_PIN = 7;// the Arduino pin which is connected to control relay

void setup() {
  Serial.begin(9600);// setup Serial Monitor to display information
   Serial.println("HC-SR501 Motion Sensor with relay and Arduino code to turn ON AC bulb");
  pinMode(PIR_SENSOR_PIN, INPUT);// Define PIR_SENSOR_PIN as Input from sensor
  pinMode(CHANNEL_RELAY_PIN, OUTPUT);// Define CHANNEL_RELAY_PIN as OUTPUT for relay
}

void loop() {
  int motion =digitalRead(PIR_SENSOR_PIN);// read the sensor pin and stores it in "motion" variable
 
  // if motion is detected
  if(motion){
    Serial.println("Motion detected");
    digitalWrite(CHANNEL_RELAY_PIN, LOW);// Turn the relay ON
  }else{
     Serial.println("===nothing moves");
     digitalWrite(CHANNEL_RELAY_PIN,HIGH);// Turn the relay OFF
  }
  delay(500);
}
