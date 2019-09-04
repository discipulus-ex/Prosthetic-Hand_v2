/**
 * @file        NA
 * @date        2019-06-19
 * @author      Dylan Duunk
 * 
 * @brief       Finger handler
 *              attaches sensors & servo (thumb only)
 *              with a DC motor
 */
#pragma once

#include "Arduino.h"

/**
 * @brief       Names of the fingers
 */
enum FingerName {
    Thumb, Index, Middle, Ring, Pink, Countt
};

/**
 * @brief       Finger object
 *              Define in a zero-terminated array
 */
struct Finger {
    /**
     * Motor pins, used in combination 
     * with L298N Motor driver* 
     * 
     * *Note: maybe look into DRV880x DMOS Full-Bridge Motor Driver
     */ 
    const int enablePin;        // Pin for enabling the bridge
    const int controlPin1;      // Input pin 1 of the bridge
    const int controlPin2;      // Input pin 2 of the bridge

    // PositionSensor sensors[6] = {
    // //    Sensor name   Pin     
    //     { "Thumb",      A0 },
    //     { "Index",      A1 },
    //     { "Middle",     A2 },
    //     { "Ring",       A3 },
    //     { "Pinky",      A4 },
    //     { 0 },
    // };
    Servo servo;
}