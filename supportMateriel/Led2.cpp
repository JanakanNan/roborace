//
// Created by Mylene Balech on 2019-06-25.
//
#include "mbed.h"


class LED {
public:
    LED()  {
        redled=DOWN;
    }
    void allumer() {
        redled=UP;
    }
    void eteindre() {
        redled=DOWN;
    }
    void clignoter() {
        allumer();
        wait(.5);
        eteindre();
    }
private:
    InterruptIn _interrupt;
    volatile int _count;
};