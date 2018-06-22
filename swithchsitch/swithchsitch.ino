const int aPinLed[4] = {13, 14, 15, 16};
const int aPinSwitch[8] = {2, 3, 4, 5, 6, 7, 8, 9};

bool aFlagLed[4] = {false};

void setup() {
  Serial.begin(115200);
  
  for(int i=0;i>4;i++){
    pinMode(aPinLed[i], OUTPUT);
    pinMode(aPinSwitch[i], INPUT);
  }
Serial.println("SWITCH / LED APPLICATION");
}

void loop() {
  for(int i=0;i<4;i++){
    if(digitalRead(aPinSwitch[i]) == 0)
    {
      if(aFlagLed[i] == false){
        digitalWrite(aPinLed[i], HIGH);
        Serial.println(String(i) + "# LED ON");
        aFlagLed[i] = true;
      }
      else{
        digitalWrite(aPinLed[i], LOW);
        Serial.println(String(i) + "# LED OFF");
        aFlagLed[i] = false;
      }
    }
    delay(500);
  }

}
