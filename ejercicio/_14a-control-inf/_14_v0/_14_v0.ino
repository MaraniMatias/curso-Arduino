// https://github.com/z3t0/Arduino-IRremote
#include <IRremote.h>
#include <IRremoteInt.h>

int RECV_PIN = 11;
int BUTTON_PIN = 12;
int STATUS_PIN = 13;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop(){
  if (irrecv.decode(&results))    {
     Serial.println(results.value, HEX);
     irrecv.resume();
    }
}
