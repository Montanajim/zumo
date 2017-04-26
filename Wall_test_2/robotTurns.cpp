
#include "TurnSensor.h"
#include "robotTurns.h"


int calibrationSpeed = 200;


//Turn Right
void turnRight()
{

  turnSensorReset();

  // Turn to the right 90 degrees.

  motors.setSpeeds(calibrationSpeed, -calibrationSpeed);

  while ((int32_t)turnAngle > -turnAngle45 * 2)

  {
    turnSensorUpdate();

  }

  motors.setSpeeds(0, 0);

}

//Turn lEFT
void turnLeft()
{

  turnSensorReset();

  // Turn to the left 90 degrees.
  motors.setSpeeds(-calibrationSpeed, calibrationSpeed);
  while ((int32_t)turnAngle < turnAngle45 * 2)
  {

    turnSensorUpdate();
  }

  motors.setSpeeds(0, 0);
}

void back()
{
  turnSensorReset();

  // .

  motors.setSpeeds(-calibrationSpeed, calibrationSpeed);

  while ((int32_t)turnAngle > -turnAngle45 * 3)
  {
    turnSensorUpdate();
  }
  motors.setSpeeds(0, 0);

}

void turn45()
{
  turnSensorReset();

  // Turn to the right 90 degrees.

  motors.setSpeeds(calibrationSpeed, -calibrationSpeed);

  while ((int32_t)turnAngle > -turnAngle45 * 1)

  {
    turnSensorUpdate();
  }
  motors.setSpeeds(0, 0);
}


void stopBot()
{
  // Stop the motors.
  motors.setSpeeds(0, 0);
}

void forward()
{
  motors.setSpeeds(calibrationSpeed, calibrationSpeed);

}

void setBotSpeed(int botSpeed)
{
  calibrationSpeed = botSpeed;
}
