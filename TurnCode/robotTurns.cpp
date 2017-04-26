
#include "TurnSensor.h"
#include Zumo32U4Motors motors;

//Turn Right
static void turnRight()
{
    turnSensorReset(); 
         
    // Turn to the right 90 degrees.
    
    motors.setSpeeds(calibrationSpeed, -calibrationSpeed);
    
    while((int32_t)turnAngle > -turnAngle45 * 2)
    
    {  
          turnSensorUpdate();   
    }


}

//Turn lEFT
static void turnRight()
{
    turnSensorReset(); 
         
    // Turn to the right 90 degrees.
    
    motors.setSpeeds(-calibrationSpeed, calibrationSpeed);
    
    while((int32_t)turnAngle > -turnAngle45 * 2) 
    {
              turnSensorUpdate();
    }


}

static void backRight()
{
    turnSensorReset(); 
         
    // Turn to the right 90 degrees.
    
    motors.setSpeeds(-calibrationSpeed, calibrationSpeed);
    
    while((int32_t)turnAngle > -turnAngle45 *4) 
    {
              turnSensorUpdate();
    }


}

static void turn45()
{
         turnSensorReset(); 
         
    // Turn to the right 90 degrees.
    
    motors.setSpeeds(calibrationSpeed, -calibrationSpeed);
    
    while((int32_t)turnAngle > -turnAngle45 * 1)
    
    {  
          turnSensorUpdate();   
    }
}

static void stop()
{
       // Stop the motors.
  motors.setSpeeds(0, 0);
}