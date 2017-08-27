int const led = 13;
boolean condicion = true;

void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  condicion = true;
  
  if(condicion) {
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);
  }
  
}


// btn!=HIGH <-> !(btn==HIGH) <-> btn==LOW
