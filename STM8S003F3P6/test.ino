void setup() {
  pinMode(3, OUTPUT);  // PC3
  pinMode(5, OUTPUT);  // PD4
  pinMode(6, OUTPUT);  // PD5
}

void loop() {
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(300);

  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(300);

  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(300);
}