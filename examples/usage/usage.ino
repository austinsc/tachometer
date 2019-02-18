#include "Tachometer.h"
#define HALL_EFFECT D5

// Initialize objects from the lib
Tachometer tach(HALL_EFFECT);

void setup() {

}

void loop() {
    // Begin calibration - call at least once when the motor has started spinning
    // The motor speed should be as steady as possible during callibration
    tach.calibrate();

    // Read the current RPM
    unsigned long rpm = tach.measure();
}
