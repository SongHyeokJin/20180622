int pinLed[8] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  for(int i=0; i<8; i++)
  {
    pinMode(pinLed[i], OUTPUT);
  }

}

void loop() {
 int i;
 for(i=0;i<8;i++)
 {
  digitalWrite(pinLed[i], HIGH);
  delay(100);
  digitalWrite(pinLed[i], LOW);
  
 }
 
 for(i=7;i>=1;i--)
 {
  digitalWrite(pinLed[i], HIGH);
  delay(100);
  digitalWrite(pinLed[i], LOW);
 
 }
}
 
