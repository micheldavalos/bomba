#ifndef Bomba_H
#define Bomba_H

#include <Arduino.h>
class Bomba
{
  int _pwm;
  int _low;
  int _high;
  int _v;
public:
  Bomba(int high, int low, int pwm)
  {
    _low = low;
    _high = high;
    _pwm = pwm;

    pinMode(_pwm, OUTPUT);
    pinMode(_high, OUTPUT);
    pinMode(_low, OUTPUT);

    digitalWrite(_high, HIGH);
    digitalWrite(_low, LOW);
    analogWrite(_pwm, 0);
  }

  void encender()
  {
    analogWrite(_pwm, 1);
  }

  void apagar()
  {
    analogWrite(_pwm, 0);
  }

  void velocidad(int v)
  {
    _v = v;
    analogWrite(_pwm, _v);
  }

};
#endif
