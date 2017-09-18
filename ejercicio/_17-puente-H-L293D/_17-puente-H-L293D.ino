//Motor A
const int enableA = 5;
const int MotorA1 = 6;
const int MotorA2 = 7;
//Motor B
const int enableB = 8;
const int MotorB1 = 9;
const int MotorB2 = 10;
 
void setup() {
    Serial.begin (9600);
  pinMode (enableA, OUTPUT);
  pinMode (MotorA1, OUTPUT);
  pinMode (MotorA2, OUTPUT);  
  pinMode (enableB, OUTPUT);
  pinMode (MotorB1, OUTPUT);
  pinMode (MotorB2, OUTPUT);  
}
 
void loop() {
  Serial.println ("Habilitar Motores");
  digitalWrite (enableA, HIGH);
  digitalWrite (enableB, HIGH);
  delay (1000);
  
  Serial.println ("Sentido 1");
  digitalWrite (MotorA1, LOW);
  digitalWrite (MotorA2, HIGH);
  digitalWrite (MotorB1, LOW);
  digitalWrite (MotorB2, HIGH);
  delay (3000);
  
  Serial.println ("Sentido 2");
  digitalWrite (MotorA1,HIGH);
  digitalWrite (MotorA2,LOW);  
  digitalWrite (MotorB1,HIGH);
  digitalWrite (MotorB2,LOW);  
  delay (3000);
 
  Serial.println ("Para motores");
  digitalWrite (enableA, LOW);
  digitalWrite (enableB, LOW);
  delay (3000);
}
