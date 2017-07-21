#include <Servo.h>
Servo myservo;
int val;

void setup(){
  myservo.attach(9);
}

void loop(){
  val = 0;
  myservo.write(val);
  delay(1500);
  val = 90;
  myservo.write(val);
  delay(1500);
  val = 180;
  myservo.write(val);
  delay(1500);
}
