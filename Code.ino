const int Trig = 2;  
const int Echo = 4;   

void setup()  {  
   Serial.begin(9600);  
   pinMode(5,OUTPUT);   
 }  

void loop()  {  
   long duration, cm;  
   digitalWrite(5,LOW);  
   pinMode(Trig, OUTPUT);  
   digitalWrite(Trig, LOW);  
   delayMicroseconds(10);  
   digitalWrite(Trig, HIGH);  
   delayMicroseconds(10);  
   digitalWrite(Trig, LOW);  
   pinMode(Echo, INPUT);  
   duration = pulseIn(Echo, HIGH);  
   cm = microsecondsToCentimeters(duration);  
   Serial.print(cm);  
   Serial.print("cm");  
   Serial.println();  
   if (cm> 20)  
     {digitalWrite(5,HIGH);  
    delay(2000); }  
   if (cm<5)  
     {digitalWrite(5,LOW);  
    delay(2000); }  

 }  
long microsecondsToCentimeters(long microseconds)  {  
   return microseconds / 29 / 2;  
 }

     item Code for LED Display with complete setup  
  
 #include <LiquidCrystal.h>  
LiquidCrystal lcd(7, 9, 10, 11, 12, 13);  
const int Trig = 2;  
const int Echo = 4;  

void setup()  {  
   Serial.begin(9600);  
   pinMode(5,OUTPUT);  
//   lcd.begin(16, 2);  
  
 }  

void loop()  {  
   long duration, cm;  
   digitalWrite(5,LOW);  
   pinMode(Trig, OUTPUT);  
   digitalWrite(Trig, LOW);  
   delayMicroseconds(10);  
   digitalWrite(Trig, HIGH);  
   delayMicroseconds(10);  
   digitalWrite(Trig, LOW);
   pinMode(Echo, INPUT);  
   duration = pulseIn(Echo, HIGH);  
   cm = microsecondsToCentimeters(duration);  
   Serial.print(cm);  
   Serial.print("cm");  
   Serial.println();  
   if (cm> 20)  
     {digitalWrite(5,HIGH);  
    delay(2000); }  
   if (cm<5)  
     {digitalWrite(A3,LOW);  
    delay(2000); }  
   int z=20-cm;  
   lcd.setCursor(0, 0);  
   lcd.print("Water Level   ");  
   lcd.setCursor(14, 0);  
   lcd.print(z);  

 }  
long microsecondsToCentimeters(long microseconds) {  
   return microseconds / 29 / 2;  
 }  
