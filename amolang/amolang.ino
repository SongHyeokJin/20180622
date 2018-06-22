int aPinFndData[8] = {13, 12, 11, 10, 9, 8, 7, 6};
int aPinFndSel[6]  = {5, 4, 3, 2, 1, 0};
uint8_t aFndData[16] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x27, 0x7F,0x6F,0x77,0x7C,0x39,0x5E,0x79,0x71};
uint8_t aFndSelData[6] = {0x3E, 0x3D, 0x3B, 0x37, 0x2F, 0x1F}; 


  void setup() { 
     int i; 
      for(i=0; i<8; i++) { 
        pinMode(aPinFndData[i], OUTPUT);
      }
      for(i=0; i<6; i++) { 
        pinMode(aPinFndSel[i], OUTPUT); 
      }
  }

void loop(){
  fndSelOut(aFndSelData[0]);
  for(int i=0;i<16;i++){
    fndDataOut(aFndData[i]);
    delay(1000);
  }
}

void fndDataOut(uint8_t data){
  for(int i=0;i<8;i++){
    digitalWrite(aPinFndData[i], (data>>i) & 0x1);
  }
}

void fndSelOut(uint8_t data){
  for(int i=0;i<6;i++){
    digitalWrite(aPinFndData[i], (data>>i) & 0x1);
  }
}


