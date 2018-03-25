# bomba
Librería para controlar una bomba de agua por puente H (HW-95)

```c++
#include <Bomba.h>
...
Bomba bomba(2, 4, 3); /// PIN_HIGH, PIN_LOW, PIN_PWM
...
bomba.velocity(100); /// 0 - 100% value
```

![HW-35] (https://howtomechatronics.com/wp-content/uploads/2017/08/L298N-Block-Diagram-Current-Flow-How-It-Works.png?x57244)

Links:

https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/
