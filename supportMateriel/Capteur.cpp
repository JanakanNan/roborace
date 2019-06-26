#include "Capteur.h"

Capteur::Capteur(PinName pin, int pulsetime, float scale, int timeout): _pin(pin), _pulsetime(pulsetime), _timeout(timeout), _scale(scale) {

}

bool Capteur::detectionIseeyou() {
    _pin.write_us(1, _pulsetime);
    float t = (float) _pin.read_high_us(_timeout);
    if (t == -1.0)   {
        return -1.0;
    }
    float distance=0;
    distance=t/_scale;
    wait(.1);
    if (distance<0.001 || distance>2.0) { distance=0; }


    bool iSeeYou=false;
    if (distance>0.15 && distance<0.5) {
        iSeeYou=true;
    }
    return iSeeYou;
}



/*void Capteur::detectionWarning(bool warning){
    distance=ranger.read_m();
    wait(.1);
    if (distance<0.001 || distance>2.0) { distance=0; }

    warning=false;


    if (distance>0.01 && distance<=0.15) {
        warning=true;
    }
    return warning;
} */




