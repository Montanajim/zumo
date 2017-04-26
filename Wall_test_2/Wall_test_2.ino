#include <Wire.h>
#include <Zumo32U4.h>
#include "robotTurns.h"
#include "TurnSensor.h"

Zumo32U4LCD lcd;
Zumo32U4Buzzer buzzer;
Zumo32U4ButtonA buttonA;
Zumo32U4Motors motors;
Zumo32U4LineSensors lineSensors;
Zumo32U4ProximitySensors proxSensors;
L3G gyro;

uint8_t leftFrontValue = 0;
uint8_t rightFrontValue = 0;
uint8_t rightValue = 0;
uint8_t leftValue = 0;
int maxVal = 0;
int temp = 0;

void setup() {
  proxSensors.initThreeSensors();
  turnSensorSetup();
  setBotSpeed(200);

  forward();

}

void loop() {

  proxSensors.read();
  leftFrontValue = proxSensors.countsFrontWithLeftLeds();
  rightFrontValue = proxSensors.countsFrontWithRightLeds();
  rightValue = proxSensors.countsRightWithRightLeds();
  leftValue = proxSensors.countsLeftWithLeftLeds();

  if (leftFrontValue >= 6 || rightFrontValue >= 6 )
  { /*
      if(leftFrontValue > maxVal)
      { lcd.clear();
       maxVal = leftFrontValue;
       lcd.print("Max" + (String)maxVal);
       }
    */
    turnRight();
  forward();
  }

  if (leftValue >= 6)
  {
    turnRight();
    forward();
  }

  if (rightValue >= 6)
  {
    turnLeft();
    forward();
  }

    
}
