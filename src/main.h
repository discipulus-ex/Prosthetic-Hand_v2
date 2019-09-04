/**
 * @file        main.cpp
 * @date        2019-09-02
 * @author      Dylan Duunk
 * 
 * @brief       Pin defines and callbacks
 */
#pragma once

#include "Arduino.h"

// Motor Pins
int EN_A = 11;  // Enable pin for first motor
int EN_B = 10;  // Enable pin for second motor

int IN1 = 9;    // Control pin for first motor
int IN2 = 8;    // Control pin for first motor
int IN3 = 7;    // Control pin for second motor
int IN4 = 6;    // Control pin for second motor

// Potmeter pins
int potPin = 2; // Input pin for potentiometer

// Initializing variables to store data
int motor_speed;
int potVal = 0; 
