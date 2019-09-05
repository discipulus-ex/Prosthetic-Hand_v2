/**
 * @file        Hand.cpp    
 * @date        2019-09-04
 * @author      Dylan Duunk
 * 
 * @brief       Hand handler
 */
#pragma once

#include "Arduino.h"
#include "Finger.h"

class Hand {
    // Configuration
    const int servoPin = 2; // TODO: Change pin

    Finger fingers[FingerName::Count] = {
//      Finger name         enablePin   controlPin1 controlPin  ServoPin       
        Finger("Thumb",     NULL,       NULL,       NULL,       NULL),
        Finger("Index",     NULL,       NULL,       NULL,       NULL),
        Finger("Middle",    NULL,       NULL,       NULL,       NULL),
        Finger("Ring",      NULL,       NULL,       NULL,       NULL),
        Finger("Pinky",     NULL,       NULL,       NULL,       NULL),        
        { 0 }
    };

public:
    /**
     * @brief       Hand initializer
     */ 
    Hand();

    /**
     * @brief       Service handler
     *              Call periodically in loop
     */ 
    void service(void);
}