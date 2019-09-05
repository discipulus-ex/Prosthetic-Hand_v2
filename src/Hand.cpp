#include "Hand.h"

Hand::Hand() {
    this->attachServos();
}

void Hand::service(void) {
    
}

void Hand::attachServos(void) {
    // Only the thumb makes use of a servo
    this->fingers[0].servo.attach(this->servoPin);
}


// // Read the value from the potmeter (0-1024)
// potVal = analogRead(potPin);  
// Serial.println(potVal);
// // Rotating both motors in clockwise direction  
// if (potVal < 512) { 
//     motor_speed = map(potVal, 512, 0, 0, 255);
//     digitalWrite(IN1, LOW);
//     digitalWrite(IN2, HIGH);
//     digitalWrite(IN3, LOW);
//     digitalWrite(IN4, HIGH);
//     analogWrite(EN_A, motor_speed);
//     analogWrite(EN_B, motor_speed);
// //Rotating both motors in anticlockwise direction
// } else if (potVal > 512) {
//     motor_speed = map(potVal, 512, 1024, 0, 255);
//     digitalWrite(IN1, HIGH);
//     digitalWrite(IN2, LOW);
//     digitalWrite(IN3, HIGH);
//     digitalWrite(IN4, LOW);
//     analogWrite(EN_A, motor_speed);
//     analogWrite(EN_B, motor_speed);
// }