void setup() {
  pinMode(3, OUTPUT);  // PC3
}

void loop() {
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(3, LOW);
  delay(100);
}