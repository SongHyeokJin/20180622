const int pinBuzzer = 13;
int aPitchData[8] = { 523, 587, 659, 698, 783, 880, 987, 1046 };

void setup() {
  pinMode(pinBuzzer, OUTPUT);


}

void loop(){

for(int i=0;i<8;i++){
  tone(pinBuzzer, aPitchData[i]);
  delay(100);
}
noTone(pinBuzzer);
}

