const int pinLEDs[] = {8, 9, 10, 11, 12, 13};
//         posicion -> 0, 1,  2,  3,  4,  5,

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite( 8, HIGH);
  digitalWrite(  pinLEDs[3], HIGH);

  int index = 5;
  digitalWrite( pinLEDs[index], HIGH);

}
