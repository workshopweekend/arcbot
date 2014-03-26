#include <Servo.h> 
 
int potPin1 = 0;  
int potPin2 = 1;
int servoPin1 = 9;
int servoPin2 = 10;
Servo servo1, servo2; 
 
void setup() 
{ 
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  Serial.begin(9600);
} 
 
void loop() 
{ 
  int reading1 = analogRead(potPin1);     // 0 to 1023
  int reading2 = analogRead(potPin2);
  int angle1 = reading1 / 6;             // 0 to 180-ish
  int angle2 = reading2 / 6;
  servo1.write(angle1);
  servo2.write(angle2);
  
  Serial.print(angle1);
  Serial.print(", ");
  Serial.println(angle2);
} 
