#include<Servo.h>

#define SERVO1 8
#define SERVO2 10
#define SOLENOID1 2
#define SOLENOID2 4

Servo servo1, servo2;
int counter = 0, time;//カウンタ変数,ディレイ時間
int mag;//倍率
char key, M_m;//キー,major or minor
int D_M = 0, E_M = 0, F_M = 0, G_M = 0, A_M = 0, B_M = 0;
int note, scale, oct;//長さ,高さ,オクターブ
int angle1, angle2;

void setup(){
  Serial.begin(9600);
  servo1.attach(SERVO1);
  servo2.attach(SERVO2);
  pinMode(SOLENOID1, OUTPUT);
}

void loop(){
  time = 250;

  if(Serial.available() > -1){
    if(counter++ == 0){
          key = Serial.read();
          M_m = Serial.read();

          if(key == 'D' && M_m == 'M' || key == 'B' && M_m == 'm'){
            D_M++;
          }
          else if(key == 'E' && M_m == 'M' || key == 'c' && M_m == 'm'){
            E_M++;
          }
          else if(key == 'F' && M_m == 'M' || key == 'D' && M_m == 'm'){
            F_M++;
          }
          else if(key == 'G' && M_m == 'M' || key == 'E' && M_m == 'm'){
            G_M++;
          }
          else if(key == 'A' && M_m == 'M' || key == 'f' && M_m == 'm'){
            A_M++;
          }
          else if(key == 'B' && M_m == 'M' || key == 'g' && M_m == 'm'){
            B_M++;
          }
    }
    else{
      note = Serial.read();
      scale = Serial.read();
      oct = Serial.read();

      if(D_M == 1){
        if(scale == 'F')
          scale = 'f';
        else if (scale == 'C')
          scale = 'c';
      }
      else if(E_M == 1){
        if(scale == 'F')
          scale = 'f';
        else if(scale == 'G')
          scale = 'g';
        else if(scale == 'C')
          scale = 'c';
        else if(scale == 'D')
          scale = 'd';
      }
      else if(F_M == 1){
        if(scale == 'B')
          scale = 'a';
      }
      else if(G_M == 1){
        if(scale == 'F')
          scale = 'f';
      }
      else if(A_M == 1){
        if(scale == 'C')
          scale = 'c';
        else if(scale == 'F')
          scale = 'f';
        else if(scale == 'G')
          scale = 'g';
      }
      else if(B_M == 1){
        if(scale == 'C')
          scale = 'c';
        else if(scale == 'D')
          scale = 'd';
        else if(scale == 'F')
          scale = 'f';
        else if(scale == 'G')
          scale = 'g';
        else if(scale == 'A')
          scale = 'a';
      }

      //角度を決めるための倍率を決める
      switch(scale){
        case 'C':
          mag = 1;
          break;
        case 'c':
          mag = 2;
          break;
        case 'D':
          mag = 3;
          break;
        case 'd':
          mag = 4;
          break;
        case 'E':
          mag = 5;
          break;
        case 'e':
          mag = 6;
          break;
        case 'F':
          mag = 7;
          break;
        case 'f':
          mag = 8;
          break;
        case 'G':
          mag = 9;
          break;
        case 'g':
          mag = 10;
          break;
        case 'A':
          mag = 11;
          break;
        case 'a':
          mag = 12;
          break;
        case 'B':
          mag = 13;
          break;
        case 'b':
          mag = 14;
          break;
      }

      //角度を決める
      angle1 = 180 - 7.5 * mag;
      angle2 = angle1 - 82.5;

      //サーボとソレノイドを動かす
      if(oct == '4'){
        servo1.write(angle1);
        digitalWrite(SOLENOID1, HIGH)
        delay(time);
        digitalWrite(SOLENOID1, LOW)
      }
      else if(oct == '5'){
        servo2.write(angle2);
        digitalWrite(SOLENOID2, HIGH)
        delay(time);
        digitalWrite(SOLENOID2, LOW)
      }


      //ディレイ時間を決める
      switch(note){
        case '4':
          time = 250;
          break;
        case '2':
          time = 500;
          break;
        case '1':
          time = 750;
          break;
      }
      delay(time);//ディレイする
    }
  }
  else{
    servo1.write(90);
    servo2.write(90);
    delay(1000);
  }
}

