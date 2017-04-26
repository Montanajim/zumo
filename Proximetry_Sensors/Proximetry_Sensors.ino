#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4LCD lcd;
Zumo32U4Motors motors;
Zumo32U4ProximitySensors proxSensors;
Zumo32U4ButtonA buttonA;

float leftFrontValue = 0;
uint8_t rightFrontValue = 0;
uint8_t rightValue = 0;
uint8_t leftValue = 0;

void setup() {
  proxSensors.initFrontSensor();
  proxSensors.initThreeSensors();


}


void loop() {
  // put your main code here, to run repeatedly:

  proxSensors.read();
  leftFrontValue = proxSensors.countsFrontWithLeftLeds();
  rightFrontValue = proxSensors.countsFrontWithRightLeds();
  rightValue = proxSensors.countsRightWithRightLeds();
  leftValue = proxSensors.countsLeftWithLeftLeds();


  Serial.println("Left Front Led " + (String)leftFrontValue);
  Serial.println("Right Front Led " + (String)rightFrontValue);
  Serial.println("Right Led " + (String)rightValue);
  Serial.println("Left Led " + (String)leftValue);

  delay(1000);
}
