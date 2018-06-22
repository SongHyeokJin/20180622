int pin = 2;
int pinInterrupt = 0;
int state = LOW; 
void setup()
{ 
  pinMode(pin, OUTPUT);
  attachInterrupt(pinInterrupt, blink, CHANGE);
  } 
  void loop() {
    
    } 
    void blink() {
      state = !state;
      digitalWrite(pin, state);
    }
}

