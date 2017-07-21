#include<Servo.h>

#define SERVO1 9
#define SERVO2 10
#define SOLENOID 2

Servo servo1, servo2;
int time = 0;
char *buf, note, scale, oct, temp = 0;

void setup(){
  Serial.begin(9600);
  servo1.attach(SERVO1);
  servo2.attach(SERVO2);
  pinMode(SOLENOID, OUTPUT);
}

void loop(){
  buf = Serial.read();
  time++;

//  if(time >= 3){
//    note = buf[0];
//    scale = buf[2];
//    oct = buf[4];
      note = '4';
      scale = 'G';
      oct = '4';


    if(scale == 'C'){ //C
      if(oct == '4'){
        servo1.write(172.5);
      }
      else if(oct == '5'){
        servo2.write(90);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'c'){ //C#
      if(oct == '4'){
        servo1.write(165);
      }
      else if(oct == '5'){
        servo2.write(82.5);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'D'){ //D
      if(oct == '4'){
        servo1.write(157.5);
      }
      else if(oct == '5'){
        servo2.write(75);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'd'){ //D#
      if(oct == '4'){
        servo1.write(150);
      }
      else if(oct == '5'){
        servo2.write(67.5);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'E'){ //E
      if(oct == '4'){
        servo1.write(142.5);
      }
      else if(oct == '5'){
        servo2.write(60);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'F'){ //F
      if(oct == '4'){
        servo1.write(135);
      }
      else if(oct == '5'){
        servo2.write(52.5);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'f'){ //F#
      if(oct == '4'){
        servo1.write(127.5);
      }
      else if(oct == '5'){
        servo2.write(45);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'G'){ //G
      if(oct == '4'){
        servo1.write(120);
      }
      else if(oct == '5'){
        servo2.write(37.5);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'g'){ //G#
      if(oct == '4'){
        servo1.write(112.5);
      }
      else if(oct == '5'){
        servo2.write(30);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'A'){ //A
      if(oct == '4'){
        servo1.write(105);
      }
      else if(oct == '5'){
        servo2.write(22.5);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'a'){ //A#
      if(oct == '4'){
        servo1.write(97.5);
      }
      else if(oct == '5'){
        servo2.write(15);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }
    if(scale == 'B'){ //B
      if(oct == '4'){
        servo1.write(90);
      }
      else if(oct == '5'){
        servo2.write(7.5);
      }
      digitalWrite(SOLENOID, HIGH);
      delay(250);
      digitalWrite(SOLENOID, LOW);
    }

    if(note == 4){
      delay(250);
    }
    else if(note == 2){
      delay(500);
    }
    else if(note == 1){
      delay(750);
    }
  }

}

