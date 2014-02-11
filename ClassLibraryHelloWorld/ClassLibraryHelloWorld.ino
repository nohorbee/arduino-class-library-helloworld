#include <LED13.h>

#define LED_PIN 13;

LED13 led = LED13(13);

void setup() {}

void loop() {
  led.blink(3000);
}
