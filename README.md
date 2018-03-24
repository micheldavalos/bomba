# bomba
Librería para controlar una bomba de agua por puente H (HW-95)

```c++
#include <Bomba.h>
...
Bomba bomba(2, 4, 3); /// PIN_HIGH, PIN_LOW, PIN_PWM
...
bomba.velocity(100); /// 0 - 100% value
