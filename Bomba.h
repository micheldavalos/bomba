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
    /// Bomba
    ///
    /// @param high - Digital Pin for HIGH signal.
    /// @param low - Digital Pin for LOW signal.
    /// @param pwm - PWM Pin for 0 - 255 signal.
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

    /*!
     *
     * @param v - 0 - 100 value for %
     */
    void velocity(int v)
    {
        _v = v * 255/100;
        analogWrite(_pwm, _v);
    }

};
#endif
