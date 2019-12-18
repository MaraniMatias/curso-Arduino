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
}

String armarEscala2(int pinDLR) {
  float value =  analogRead(pinDLR);
  float pldr = value * 100 / 1025;
  String str = "0000";
  if (pldr < 25  && pldr > 5) {
    str = "1000";
  }
  if (pldr > 25 && pldr < 50) {
    str = "1100";
  }
  if (pldr > 50 && pldr < 75) {
    str = "1110";
  }
  if (pldr > 75) {
    str = "1111";
  }
  return str;
}

String armarEscala1(int pinDLR) {
  float value =  analogRead(pinDLR);
  float pldr = value * 100 / 1025;
  String str = "0000";
  if (pldr < 25  && pldr > 5) {
    str = "0001";
  }
  if (pldr > 25 && pldr < 50) {
    str = "0011";
  }
  if (pldr > 50 && pldr < 75) {
    str = "0111";
  }
  if (pldr > 75) {
    str = "1111";
  }
  return str;
}

void loop() {
  off4094();
  String data =   armarEscala1(pinLDR1) + armarEscala2(pinLDR2);
  Serial.println( data);
  write4094(data);
  delay(200);
}
