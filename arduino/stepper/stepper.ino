/*
 Stepper Motor Control
 */

#include <Motor.h>

// parameters for motor
const float angularResolution = 1.8;  // change this to fit the number of steps per revolution
const float delayPerStep = 1; // time it takes to rotate by atomic angle??
const float screenDistance = 1.5; // distance to the wall = 1.5 m

// initialize the stepper library on pins 8 and 9:
Motor myMotor1(8, 9, angularResolution, delayPerStep);
Motor myMotor2(10, 11, angularResolution, delayPerStep);

int stepCount = 0;  // number of steps the motor has taken

bool clockwise = true; // rotate motor clockwise
bool writeEnable = false; // switch off laser light, toggle to switch on

void setup() {
 myMotor1.setScreenDistance(screenDistance);
 myMotor2.setScreenDistance(screenDistance);
}

void loop() {
  // rotate motors to move laser point on the wall
  if (writeEnable == true) {
    myStepper1.moveAngle(5);
    myStepper2.moveAngle(1.8);
  }
  else
  {
   myStepper1.moveNSteps(10); // move motor to show it works
  }
 
}


