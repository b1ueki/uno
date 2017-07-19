int tr = 2;

void setup(){
  pinMode(tr, OUTPUT);
}

void loop(){
  digitalWrite(tr, HIGH);
  delay(1000);
  digitalWrite(tr, LOW);
  delay(60000);
}
