int t = 0;
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
    delay(10);}
    
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
    digitalWrite(x, HIGH);
    delay(100);
    digitalWrite(x, LOW);
    delay(100);}}
    
///////////pattern 2
void pattern2(){    
  for(int x = 2; x<=12 ; x++){
    digitalWrite(x, HIGH);
    delay(100);
    digitalWrite(x, LOW);}
  for(int x = 12; x>=2 ; x--){
    digitalWrite(x, HIGH);
    delay(100);
    digitalWrite(x, LOW);}}
    
///////////pattern 3  
void pattern3(){
  for(int x = 2; x<=13 ; x=x+2){
    digitalWrite(x, HIGH);
    delay(100);
    digitalWrite(x, LOW);
    delay(100);}
  for(int x = 12; x>=2 ; x=x-2){
    digitalWrite(x, HIGH);
    delay(100);
    digitalWrite(x, LOW);
    delay(100);}}

////////pattern 4
void pattern4(){
    digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  delay(100);
  digitalWrite(3, HIGH);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(7, LOW);
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(3, HIGH);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(2, HIGH);
  digitalWrite(12, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  delay(100);}
  
void pattern5(){
  for(int x = 2; x<=12 ; x++){
    digitalWrite(x, HIGH);
    delay(100);}
  for(int x = 2; x<=12 ; x++){
    digitalWrite(x, LOW);
    delay(100);}}

//////pattern 6
void pattern6(){
  for(int x = 2; x<=12 ; x++){
    digitalWrite(x, HIGH);
    delay(100);}
  for(int x =12 ; x>=2 ; x--){
    digitalWrite(x, LOW);
    delay(100);}}

//////pattern 7
void pattern7(){
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, LOW);
  delay (00);
  digitalWrite ( 12, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 11, LOW);
  delay (100);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, LOW);
  delay (100);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, LOW);
  delay (100);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 8, LOW);
  delay (100);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 7, LOW);
  delay (100);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 6, LOW);
  delay (100);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 5, LOW);
  delay (100);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 4, LOW);
  delay (100);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 3, LOW);
  delay (100);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 2, LOW);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 11, LOW);
  delay (100);
  digitalWrite ( 10, LOW);
  delay (100);
  digitalWrite ( 9, LOW);
  delay (100);
  digitalWrite ( 8, LOW);
  delay (100);
  digitalWrite ( 7, LOW);
  delay (100);
  digitalWrite ( 6, LOW);
  delay (100);
  digitalWrite ( 5, LOW);
  delay (100);
  digitalWrite ( 4, LOW);
  delay (100);
  digitalWrite ( 3, LOW);
  delay (100);
  digitalWrite ( 2, LOW);
  delay (100);}

//////pattern 8
void pattern8(){
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  delay (100);
  digitalWrite ( 3, LOW);
  delay (100);
  digitalWrite ( 2, LOW);
  delay (100);}


//////pattern 9
void pattern9(){  
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  delay (100);}

//////pattern 10
void pattern10(){ 
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  delay(100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  delay(100);}

//////pattern 11
void pattern11(){
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 8, HIGH);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (100);
  digitalWrite ( 7, LOW);
  delay (100);}

//////pattern 12
void pattern12(){
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
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (100);
  digitalWrite ( 7, LOW);
  delay (100);
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
  delay (100);
  digitalWrite ( 7, LOW);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  delay (100);}


//////pattern 13
void pattern13(){
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 8, LOW);
  delay (100);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 9, LOW);
  digitalWrite ( 6, HIGH);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 10, LOW);
  digitalWrite ( 5, HIGH);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 11, LOW);
  digitalWrite ( 4, HIGH);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 12, LOW);
  digitalWrite ( 3, HIGH);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  digitalWrite ( 12, HIGH);
  delay (100);
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
  delay (100);}


//////pattern 14
void pattern14(){
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 2, HIGH);
  delay (100);}

//////pattern 15
void pattern15(){
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
 delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);
  digitalWrite ( 2, LOW);
  digitalWrite ( 3, HIGH);
  delay (100);
  digitalWrite ( 3, LOW);
  digitalWrite ( 4, HIGH);
  delay (100);
  digitalWrite ( 4, LOW);
  digitalWrite ( 5, HIGH);
  delay (100);
  digitalWrite ( 5, LOW);
  digitalWrite ( 6, HIGH);
  delay (100);
  digitalWrite ( 6, LOW);
  digitalWrite ( 7, HIGH);
  delay (100);
  digitalWrite ( 7, LOW);
  digitalWrite ( 8, HIGH);
  delay (100);
  digitalWrite ( 8, LOW);
  digitalWrite ( 9, HIGH);
  delay (100);
  digitalWrite ( 9, LOW);
  digitalWrite ( 10, HIGH);
  delay (100);
  digitalWrite ( 10, LOW);
  digitalWrite ( 11, HIGH);
  delay (100);
  digitalWrite ( 11, LOW);
  digitalWrite ( 12, HIGH);
  delay (100);
  digitalWrite ( 12, LOW);
  delay (100);}


//////pattern 16
void pattern16(){
 digitalWrite(2, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(12, HIGH);
 delay(100);
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
 delay(100);
 digitalWrite(3, LOW);
 digitalWrite(5, LOW);
 digitalWrite(7, LOW);
 digitalWrite(9, LOW);
 digitalWrite(11, LOW);
 delay(100);}


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
