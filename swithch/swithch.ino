const int pinSwitch = 2;
const int pinLed = 13;
void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinSwitch, INPUT);

}

void loop() {
  if(digitalRead(pinSwitch) ==0){
    digitalWrite(pinLed, HIGH);
  }
   if(digitalRead(pinSwitch) ==1){
    digitalWrite(pinLed, LOW);
  }
}
