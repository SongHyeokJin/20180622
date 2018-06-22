void setup() {
  Serial.begin(115200);
   int pinLed = 2;

}

void loop() {

}

void serialEvent(){
  char ch;
  ch = Serial.read();
  if( ch == 'o')
    digitalWrite(pinLed. HIGH);
    
}
