#include "pitches.h"

const int pinBuzer = 9;

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    int noteDuration = 1000 / noteDurations[thisNote];
    tone(pinBuzer, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(pinBuzer);
  }
}

void loop() {
  noTone(pinBuzer);
  tone(pinBuzer, 440, 200);
  delay(400);

  noTone(pinBuzer);
  tone(pinBuzer, 494, 500);
  delay(1000);

  noTone(pinBuzer);
  tone(pinBuzer, 523, 300);
  delay(600);
}
