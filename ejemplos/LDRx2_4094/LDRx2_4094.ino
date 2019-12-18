#include "lib4094.h"
const int pinData = 0;    // Amarrillo
const int pintClock = 1;  // Maron
const int pinStrober = 2; // Verde

const int pinLDR1 = A0;
const int pinLDR2 = A1;

void setup() {
  pinMode(pinLDR1, INPUT);
  pinMode(pinLDR2, INPUT);
  setup4094(pinData, pintClock, pinStrober ); // indicar los pines
  off4094();
}

float leerLDR(int pinDLR ) {
  float value = analogRead(pinDLR);
  return value * 100 / 1000;
}

String armarEscala(float pldr,boolean lado) {
  Serial.println( pldr );
  String str = "0000";
  if (pldr < 25  && pldr > 5) {
    str = lado ?  "1000":"0001";
  }
  if (pldr > 25 && pldr < 50) {
    str = lado ?  "1100":"0011";
  }
  if (pldr > 50 && pldr < 75) {
        str = lado ?  "1100":"0011";
  }
  if (pldr > 75 && pldr < 90) {
        str = lado ?  "1110":"0111";
  }
    if (pldr > 90 ) {
        str = lado ?  "1111":"1111";
  }
  return str;
}

void loop() {

  float proLDR1 = leerLDR(pinLDR1);
  float proLDR2 = leerLDR(pinLDR2);
  String data =   armarEscala(proLDR1,false) + armarEscala(proLDR2,true);
  Serial.println( data);
  write4094(data);
  delay(200);
}



