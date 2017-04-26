#include <Wire.h>
#include <Zumo32U4.h>
#include "robotTurns.h"
#include "TurnSensor.h"

Zumo32U4LCD lcd;
Zumo32U4Buzzer buzzer;
Zumo32U4ButtonA buttonA;
Zumo32U4Motors motors;
Zumo32U4LineSensors lineSensors;
L3G gyro;


void setup() {

  turnSensorSetup();
  setBotSpeed(200);

  lcd.clear();

forward();
delay(1000);
//forward();
turnRight();
forward();
delay(1000);


turnRight();
forward();
delay(1000);


turnRight();
forward();
delay(1000);
turnRight();

stopBot();

}

void loop() {
  // put your main code here, to run repeatedly:

}
