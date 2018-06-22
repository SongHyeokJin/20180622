void setup() {
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(500);  ///1000ms = 1초
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(4, HIGH);
  delay(500);  ///1000ms = 1초
  digitalWrite(4, LOW);
  delay(500);


}
