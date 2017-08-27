// https://github.com/z3t0/Arduino-IRremote
#include <IRremote.h>
#include <IRremoteInt.h>

int RECV_PIN = 11;
int STATUS_PIN = 13;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  pinMode(STATUS_PIN,OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results))    {
    Serial.println(results.value);
    if (results.value == 1477816464) {
      digitalWrite(STATUS_PIN,HIGH);
    }
    if (results.value ==  374608567) {
      digitalWrite(STATUS_PIN,LOW);
    }
    irrecv.resume();
  }


}
