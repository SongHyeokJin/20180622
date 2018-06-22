const int pinLed = 13;

void setup() {
  Serial.begin(115200);
  Serial.println("O : LED ON / X : LED OFF");
  pinMode(pinLed, OUTPUT);
   
}

void loop() {
 
   
  }

void serialevent(){
  char ch;
  ch = Serial.read();
  Serial.println("입력된 값은 " + ch);

  if(ch == 'o' || ch == 'O'){
    Serial.println("LED ON");
    digitalWrite(pinLed, HIGH);
  }
  else{
    Serial.println("LED OFF");
    digitalWrite(pinLed, LOW);
    
  }
}

