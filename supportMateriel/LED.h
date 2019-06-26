//
// Created by Mylene Balech on 2019-06-26.
//

#include "mbed.h"

class LED {
public:
    LED(PinName redled);
    void clignoter();
private:
    PwmOut _redled;
};
