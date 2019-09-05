#include "Finger.h"

Finger::Finger() {
    // Initializing the motor pins as output
    pinMode(this->enablePin, OUTPUT);
    pinMode(this->controlPin1, OUTPUT);
    pinMode(this->controlPin2, OUTPUT);
}