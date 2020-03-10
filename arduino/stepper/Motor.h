/*
  Motor.h - Library for controlling stepper motor.
  Created by photongroup, March 10, 2020.
  Released into the public domain.
*/

#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
    Motor(int directionPin, int stepPin, float angularResolution, float delayPerStep);
    void setScreenDistance(float screenDistance);
    void setDirection(bool clockwise);
    void moveNSteps (int numberOfSteps);
    void moveAngle(float angle);
    void movePermanently();
    void moveSpot(float displacement);
  private:
    int _directionPin;
    int _stepPin;
    float _angularResolution;
    float _delayPerStep;
    float _screenDistance;
};

#endif

