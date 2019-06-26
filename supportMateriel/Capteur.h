#include "mbed.h"
#include "Pulse.h"
class Capteur{
public:
    Capteur(PinName pin, int pulsetime, float scale, int timeout);
    bool detectionIseeyou();
private:
    PulseInOut _pin;
    float _scale;
    int _pulsetime, _timeout;
    bool _iSeeYou;

};