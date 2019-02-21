#ifndef __TACHOMETER_H
#define __TACHOMETER_H
#include <inttypes.h>

class Tachometer {
    public:
        Tachometer(uint8_t pin);

        unsigned long measure();
        bool calibrate();
    private:
        uint8_t _pin;
        float _pulseCoefficient;
};
#endif
