/* CRYSTAL GAY A. PUNZALAN
 * BET - CPET 3D (STEM)
 */
/* create a led flowing lights using tact switch to 
 * switch on and for changing patterns
 * add and connect a potentiometer to control/adjust the speed/time interval of led lights
*/

int t = 0;
int ledDelay = 100; //delay between changes
int potPin = A1; // select the input pin for the 
void setup()
{
  for(int x = 2 ; x<=12 ; x++){
  pinMode(x,OUTPUT);}
  pinMode (2 , OUTPUT);
  pinMode (3 , OUTPUT);
  pinMode (4 , OUTPUT);
  pinMode (5 , OUTPUT);
  pinMode (6 , OUTPUT);
  pinMode (7 , OUTPUT);
  pinMode (8 , OUTPUT);
  pinMode (9 , OUTPUT);
  pinMode (10 , OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12 , OUTPUT);
  pinMode(13, INPUT);
}

void loop()
{
  if (digitalRead(13)==HIGH){
    t++;
    delay(ledDelay);
    }
    
if (t==1){
  pattern1();}
if (t==2){
  pattern2();}
if (t==3){
  pattern3();}
if (t==4){
  pattern4();}
if (t==5){
  pattern5();}
if (t==6){
  pattern6();}
if (t==7){
  pattern7();}
if (t==8){
  pattern8();}
if (t==9){
  pattern9();}
if (t==10){
  pattern10();}
if (t==11){
  pattern11();}
if (t==12){
  pattern12();}
if (t==13){
  pattern13();}
if (t==14){
  pattern14();}
if (t==15){
  pattern15();}
if (t==16){
  pattern16();}
if (t==17){
  pattern17();}}

//////////pattern 1
void pattern1(){
  for(int x = 2; x<=12 ; x++){
    ledDelay = analogRead(potPin); // read the value from the pot
    digitalWrite(x, HIGH);
    delay(ledDelay);
    digitalWrite(x, LOW);
    delay(ledDelay);}}
    
///////////pattern 2
void pattern2(){    
  for(int x = 2; x<=12 ; x++){
    ledDelay = analogRead(potPin);
    digitalWrite(x, HIGH);
    delay(ledDelay);
    digitalWrite(x, LOW);}
  for(int x = 12; x>=2 ; x--){
    digitalWrite(x, HIGH);
    delay(ledDelay);
    digitalWrite(x, LOW);}}
    
///////////pattern 3  
void pattern3(){
  for(int x = 2; x<=13 ; x=x+2){
    ledDelay = analogRead(potPin); // read the value from the pot 
    digitalWrite(x, HIGH);
    delay(ledDelay);
    digitalWrite(x, LOW);
    delay(ledDelay);}
  for(int x = 12; x>=2 ; x=x-2){
    ledDelay = analogRead(potPin); // read the value from the pot 
    digitalWrite(x, HIGH);
    delay(ledDelay);
    digitalWrite(x, LOW);
    delay(ledDelay);}}

////////pattern 4
void pattern4(){
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);
  delay(ledDelay);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  delay(ledDelay);
  digitalWrite(3, HIGH);
  digitalWrite(11, HIGH);
  delay(ledDelay);
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
  delay(ledDelay);
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  delay(ledDelay);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  delay(ledDelay);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  delay(ledDelay);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  delay(ledDelay);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(ledDelay);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(ledDelay);
  digitalWrite(7, HIGH);
  delay(ledDelay);
  digitalWrite(7, LOW);
  delay(ledDelay);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(ledDelay);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(ledDelay);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  delay(ledDelay);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  delay(ledDelay);
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  delay(ledDelay);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  delay(ledDelay);
  digitalWrite(3, HIGH);
  digitalWrite(11, HIGH);
  delay(ledDelay);
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
  delay(ledDelay);
  digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);
  delay(ledDelay);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  delay(ledDelay);}
  
void pattern5(){
  for(int x = 2; x<=12 ; x++){
    ledDelay = analogRead(potPin); // read the value from the pot 
    digitalWrite(x, HIGH);
    delay(ledDelay);}
  for(int x = 2; x<=12 ; x++){
    ledDelay = analogRead(potPin); // read the value from the pot 
    digitalWrite(x, LOW);
    delay(ledDelay);}}

//////pattern 6
void pattern6(){
  for(int x = 2; x<=12 ; x++){
    ledDelay = analogRead(potPin); // read the value from the pot 
    digitalWrite(x, HIGH);
    delay(ledDelay);}
  for(int x =12 ; x>=2 ; x--){
    ledDelay = analogRead(potPin); // read the value from the pot 
    digitalWrite(x, LOW);
    delay(ledDelay);}}

//////pattern 7
void pattern7(){
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, LOW);
  delay (00);
  digitalWrite ( 12, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 11, LOW);
  delay (ledDelay);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, LOW);
  delay (ledDelay);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, LOW);
  delay (ledDelay);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 8, LOW);
  delay (ledDelay);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 7, LOW);
  delay (ledDelay);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 6, LOW);
  delay (ledDelay);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 5, LOW);
  delay (ledDelay);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 4, LOW);
  delay (ledDelay);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 3, LOW);
  delay (ledDelay);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 2, LOW);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  delay (ledDelay);}

//////pattern 8
void pattern8(){
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  delay (ledDelay);}


//////pattern 9
void pattern9(){  
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  delay (ledDelay);}

//////pattern 10
void pattern10(){ 
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  delay(ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  delay(ledDelay);}

//////pattern 11
void pattern11(){
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  delay (ledDelay);}

//////pattern 12
void pattern12(){
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite ( 2, HIGH);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  delay (ledDelay);}


//////pattern 13
void pattern13(){
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (ledDelay);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, LOW);
  delay (ledDelay);}


//////pattern 14
void pattern14(){
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 2, HIGH);
  delay (ledDelay);}

//////pattern 15
void pattern15(){
  ledDelay = analogRead(potPin); // read the value from the pot 
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (ledDelay);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (ledDelay);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (ledDelay);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (ledDelay);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (ledDelay);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (ledDelay);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (ledDelay);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (ledDelay);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (ledDelay);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (ledDelay);
  digitalWrite ( 12, LOW);
  delay (ledDelay);}


//////pattern 16
void pattern16(){
 ledDelay = analogRead(potPin); // read the value from the pot 
 digitalWrite(2, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(12, HIGH);
 delay(ledDelay);
 digitalWrite(2, LOW);
 digitalWrite(4, LOW);
 digitalWrite(6, LOW);
 digitalWrite(8, LOW);
 digitalWrite(10, LOW);
 digitalWrite(12, LOW);
 digitalWrite(3, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(11, HIGH);
 delay(ledDelay);
 digitalWrite(3, LOW);
 digitalWrite(5, LOW);
 digitalWrite(7, LOW);
 digitalWrite(9, LOW);
 digitalWrite(11, LOW);
 delay(ledDelay);}


void pattern17 (){
 digitalWrite(2, LOW);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 digitalWrite(9, LOW);
 digitalWrite(10, LOW);
 digitalWrite(12, LOW);
 t=0;}
