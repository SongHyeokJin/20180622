void setup() {
 Serial.begin(115200);
 
 randomSeed(analogRead(A0));
 Serial.println(analogRead(A0));
 int tmp = random(0, 100);
 Serial.println(tmp);

 for(int i=0;i<5;i++){
  Serial.println(random(0, 100));
 }

}

void loop() {
  // put your main code here, to run repeatedly:

}
