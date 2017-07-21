void setup(){
  Serial.begin(9600);
}

void loop(){
  int input;

  input = Serial.read();

  if(input != -1){
    Serial.print(input);
    Serial.print("\n");
  }
}
