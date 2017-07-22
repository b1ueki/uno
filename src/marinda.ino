#include<Servo.h>

#define SERVO1 9
#define SERVO2 10
#define SOLENOID 2

Servo servo1, servo2;
int time = 0;
char key, M_m, *buf, temp = 0;
int D_M = 0, E_M = 0, F_M = 0, G_M = 0, A_M = 0, B_M = 0;
int a, b;
int note, scale, oct;

void setup(){
  Serial.begin(9600);
  servo1.attach(SERVO1);
  servo2.attach(SERVO2);
  pinMode(SOLENOID, OUTPUT);
}

void loop(){
  time++;

  //if(Serial.available() > 0){
  //    if(time == 1){
  //      a = Serial.read();
  //      b = Serial.read();
  //    }
  //    else if(time == 2){
  //      key = Serial.read();
  //      M_m = Serial.read();
  //
  //      if(key == 'D' && M_m == 'M' || key == 'B' && M_m == 'm'){
  //        D_M++;
  //      }
  //      else if(key == 'E' && M_m == 'M' || key == 'c' && M_m == 'm'){
  //        E_M++;
  //      }
  //      else if(key == 'F' && M_m == 'M' || key == 'D' && M_m == 'm'){
  //        F_M++;
  //      }
  //      else if(key == 'G' && M_m == 'M' || key == 'E' && M_m == 'm'){
  //        G_M++;
  //      }
  //      else if(key == 'A' && M_m == 'M' || key == 'f' && M_m == 'm'){
  //        A_M++;
  //      }
  //      else if(key == 'B' && M_m == 'M' || key == 'g' && M_m == 'm'){
  //        B_M++;
  //      }
  //    }
  //    else{
  if(Serial.available() > 50)
    Serial.write(0);
  note = Serial.read();
  scale = Serial.read();
  oct = Serial.read();
  Serial.println (note);
  Serial.println (scale);
  Serial.println (oct);
  //      note = '4';
  //      scale = 'G';
  //      oct = '4';

  //  if(D_M == 1){
  //    if(scale == 'F')
  //      scale = 'f';
  //    else if (scale == 'C')
  //      scale = 'c';
  //  }
  //  else if(E_M == 1){
  //    if(scale == 'F')
  //      scale = 'f';
  //    else if(scale == 'G')
  //      scale = 'g';
  //    else if(scale == 'C')
  //      scale = 'c';
  //    else if(scale == 'D')
  //      scale = 'd';
  //  }
  //  else if(F_M == 1){
  //    if(scale == 'B')
  //      scale = 'a';
  //  }
  //  else if(G_M == 1){
  //    if(scale == 'F')
  //      scale = 'f';
  //  }
  //  else if(A_M == 1){
  //    if(scale == 'C')
  //      scale = 'c';
  //    else if(scale == 'F')
  //      scale = 'f';
  //    else if(scale == 'G')
  //      scale = 'g';
  //  }
  //  else if(B_M == 1){
  //    if(scale == 'C')
  //      scale = 'c';
  //    else if(scale == 'D')
  //      scale = 'd';
  //    else if(scale == 'F')
  //      scale = 'f';
  //    else if(scale == 'G')
  //      scale = 'g';
  //    else if(scale == 'A')
  //      scale = 'a';
  //  }

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
  else if(scale == 'c'){ //C#
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
  else if(scale == 'D'){ //D
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
  else if(scale == 'd'){ //D#
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
  else if(scale == 'E'){ //E
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
  else if(scale == 'F'){ //F
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
  else if(scale == 'f'){ //F#
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
  else if(scale == 'G'){ //G
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
  else if(scale == 'g'){ //G#
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
  else if(scale == 'A'){ //A
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
  else if(scale == 'a'){ //A#
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
  else if(scale == 'B'){ //B
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

  if(note == '4'){
    delay(250);
  }
  else if(note == '2'){
    delay(500);
  }
  else if(note == '1'){
    delay(750);
  }
  //    }
  //  }
}

