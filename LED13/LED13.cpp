#include "LED13.h"

LED13::LED13(byte pin) {
  this->pin = pin;
  pinMode(this->pin, OUTPUT);
}

void LED13::on() {
  digitalWrite(this->pin, HIGH);
}

void LED13::off() {
  digitalWrite(this->pin, LOW);
}

void LED13::blink(int time) {
  on();
  delay(time/2);
  off();
  delay(time/2);
}
