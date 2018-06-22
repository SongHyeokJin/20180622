const int aPinLed[4] = {13, 14, 15, 16};
bool flagLed = false;
void setup() {
 for(int i=0;i<4;i++)
 {
  pinMode(aPinLed[i], OUTPUT);
 
 attachInterrupt(0, Blinkup, FALLING);
 attachInterrupt(1, BlinkDown, RISING);
}
}

void loop() {
if(flagLed== false){
  for(int i=0;i<4;i++){
    digitalWrite(aPinLed[i], HIGH);
    delay(100);
    digitalWrite(aPinLed[i], LOW);
  }
}
else {
  for(int i=3; i>=0;i--){
    digitalWrite(aPinLed[i], HIGH);
    delay(100);
    digitalWrite(aPinLed[i], LOW);
  }
}
}

void Blinkup(){
  flagLed = false;
}

void BlinkDown(){
  flagLed = true;
}

