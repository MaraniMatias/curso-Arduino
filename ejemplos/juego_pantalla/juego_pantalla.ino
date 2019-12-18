#include "libDigito8x8.h"
const int pintClock = 0;  // Maron
const int pinData = 1;    // Amarrillo
const int pinStrober = 2; // Verde
const int pinBtnL = 7, pinBtnR = 8, btnComenzar = 12;
const int pinClockContador = 5;  // Azul
const int pinUpDownContador = 4; // Blanco
const int pinResetContador = 3;  // Amarillo

// juego:
bool prec = true; bool niUP = true;
int posiNave = random(1, 7);
bool nuevoObjetivo = true;
int posiObjetivo = random(1, 7);
int segInicial = millis();
bool disparar = false;
int sbtnL = 0 , sbtnR = 0, sbtnComenzar = 0;
int point = 0;
// juego:

void setup() {
  pinMode(pinBtnL, INPUT);
  pinMode(pinBtnR, INPUT);
  pinMode(btnComenzar, INPUT);
  pinMode(pinClockContador, OUTPUT);
  pinMode(pinUpDownContador, OUTPUT);
  pinMode(pinResetContador, OUTPUT);
  setup4094(pinData, pintClock, pinStrober ); // indicar los pines
}

void loop() {
  if ( btnRead(btnComenzar, &sbtnComenzar) || prec) {
    resetCount();
    precentacion();
    prec = false;
    point = 0;
  }

  bool btnL = btnRead(pinBtnL, &sbtnL);
  bool btnR = btnRead(pinBtnR, &sbtnR);
  if ( btnL && sbtnR == 0) {
    posiNave > 1 ? posiNave-- : 1;
  }
  if ( btnR && sbtnL == 0) {
    posiNave < 6 ? posiNave++ : 6;
  }
  if (digitalRead(pinBtnL) && digitalRead(pinBtnR)) {
    disparar = true;
  }
  else {
    disparar = false;
  }

  if (nuevoObjetivo) {
    nuevoObjetivo = false;
    posiObjetivo = random(1, 7);
  }

  actualizarDisplay();
  
}


int btnRead(int pinBtn, int* sAnterior) {
  int rta = false;
  int sActual = digitalRead(pinBtn);
  if ( sActual == 1 && *sAnterior == 0 ) {
    rta = true;
    *sAnterior = 1;
  } else if (sActual == 1 && *sAnterior == 1) {
    rta = false;
  }
  if (sActual == 0) {
    rta = false;
    *sAnterior = 0;
  }
  return rta;
}
