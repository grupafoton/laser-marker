#include "Arduino.h"
#include "Motor.h"

Motor::Motor(int directionPin, int stepPin, float angularResolution, float delayPerStep)
{
  pinMode(directionPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  
  _directionPin = directionPin;
  _stepPin = stepPin;
  _angularResolution = angularResolution;
  _delayPerStep = delayPerStep;
}

void Motor::setScreenDistance(float screenDistance)
{
  _screenDistance = screenDistance;
}

void Motor::moveNSteps(int numberOfSteps)
{
  //TO DO
}

void Motor::moveAngle(float alfa)
{
  int numberOfSteps = alfa/_angularResolution; //approximate steps number to achieve desired angle
  MoveNSteps(numberOfSteps);
}

//Move spot on the screen by given distance
//One stepper motor controls displacement in one direction
void Motor::moveSpot(float displacement)
{
  float alfa = displacement/screenDistance; // alfa = tg(alfa) for distant screen
  MoveAngle(alfa);
}
