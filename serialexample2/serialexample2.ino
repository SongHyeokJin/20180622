void setup() {
  Serial.begin(9600);


}

void loop() {
  String str;
  if(Serial.available()) {
    str = Serial.readString();
    Serial.println("str : " + str);
  }

}
