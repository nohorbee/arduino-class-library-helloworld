#ifndef LED13_H;
#define LED13_H;

#include <Arduino.h>

class LED13 {
  private: 
  	byte pin;
  public:
    LED13(byte pin);
    void on();
    void off();
    void blink(int time);
};

#endif
