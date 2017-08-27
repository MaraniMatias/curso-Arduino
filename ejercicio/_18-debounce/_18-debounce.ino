#include <Debounce.h>

short int pinBtn = 8;
Debounce myBtn(pinBtn);

void setup() {
  //pinMode(pinBtn, OUTPUT); // include in "Debounce myBtn(pinBtn);"
}

void loop() {
  int btnArdu = digitalRead(pinBtn);
  int btn = myBtn.read();
  Serial.print(btnArdu);
  Serial.print(" ~ ");
  Serial.println(btn);
  delay(100); // Just so you can see. Solo para ver los valores
}
