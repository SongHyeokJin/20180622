void setup() {
  Serial.begin(115200);
  int integer = 255;
  Serial.println("상수 255");
  Serial.print("16진수 0x");
  Serial.println(integer, HEX);
  Serial.print("2진수 B");
  Serial.println(integer, BIN);
  Serial.print("8진수 0");
  Serial.println(integer, OCT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
