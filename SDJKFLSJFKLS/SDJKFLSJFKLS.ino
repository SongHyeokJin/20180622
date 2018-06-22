 int pinLed = 2;

void setup() {
  Serial.begin(115200);
  pinMode(pinLed, OUTPUT);
}

void loop() {

}


void serialEvent(void) {
char data;  
data = Serial.read();
Serial.print(data); 
}
