#pragma once

 void turnRight();
 void turnLeft();
 void back();
 void turn45();
 void stopBot();
 void forward();
void setBotSpeed(int botSpeed);

// These must be defined by the sketch:
extern L3G gyro;
extern Zumo32U4ButtonA buttonA;
extern Zumo32U4Motors motors;
extern Zumo32U4LCD lcd;
extern Zumo32U4LineSensors lineSensors;
