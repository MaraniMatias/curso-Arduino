int const led = 13;
int const btn_1 = 9;
int const btn_2 = 8;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(btn_1,INPUT);
  pinMode(btn_2,INPUT);
}

void loop() {
  int short btn1 = digitalRead(btn_1);
  int short btn2 = digitalRead(btn_2);

  // Serrie
  if(btn1 == HIGH && btn2 == HIGH) {
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);
  }
}
