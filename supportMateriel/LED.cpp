//
// Created by Mylene Balech on 2019-06-26.
//

#include "LED.h"


LED::LED (PinName redled) : _redled(redled)
{
    //50Hz PWM clock default a bit too low, go to 2000Hz (less flicker)
    _redled=1;
}

void LED::clignoter()
{
    _redled=0;
    wait(0.01);
    _redled=1;
}