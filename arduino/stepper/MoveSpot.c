float screenDistance; //distance to the screen

void MoveAngle(float alfa)
{
  int numberOfSteps = alfa/angularResolution; //approximate steps number to achieve desired angle
  MoveNSteps(numberOfSteps);
}

//Move spot on the screen by given distance
//One stepper motor controls displacement in one direction
void MoveSpot(float xDisplacement, float yDisplacement)
{
  float alfa = xDisplacement/screenDistance; // alfa = tg(alfa) for distant screen
  MoveAngle(alfa);
}
