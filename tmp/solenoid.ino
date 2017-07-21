#define SOLENOID_PIN 10

void setup() {
  pinMode(SOLENOID_PIN, OUTPUT);
}

void loop() {
  // solenoid off
  digitalWrite(SOLENOID_PIN, LOW);
  delay(1000);

  // solenoid on
  digitalWrite(SOLENOID_PIN, HIGH);
  delay(300);
}
