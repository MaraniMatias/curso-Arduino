const int btnSumar = 12;
const int btnRestar = 11;
const int a = 0;
const int b = 1;
const int c = 2;
const int d = 3;
const int e = 4;
const int f = 5;
const int g = 6;
const int dp = 7;

int contador = 0;

void setup() {
  pinMode(btnSumar, INPUT);
  pinMode(btnRestar, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  boolean btnSumarValue = digitalRead(btnSumar);
  boolean btnRestarValue = digitalRead(btnRestar);

  if (btnRestarValue) {
    contador++;
  }
  if (btnRestarValue) {
    contador--;
  }

  switch (contador) {
    case 0:
      // Uso ! porque al ser un display tiene el + común a todos,
      // como es un diodo al recibir HIGH
      // por el ánodo se apagara y al recibir LOW prenderá
      digitalWrite( a, !HIGH);
      digitalWrite( b, !HIGH);
      digitalWrite( c, !HIGH);
      digitalWrite( d, !HIGH);
      digitalWrite( e, !HIGH);
      digitalWrite( f, !HIGH);
      digitalWrite( g, !HIGH);
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    default:
      digitalWrite( a, !HIGH);
      digitalWrite( b, !HIGH);
      digitalWrite( c, !HIGH);
      digitalWrite( d, !HIGH);
      digitalWrite( e, !HIGH);
      digitalWrite( f, !HIGH);
      digitalWrite( g, !HIGH);
      break;
  }

}

