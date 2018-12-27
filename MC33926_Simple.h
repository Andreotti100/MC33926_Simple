/*
 * MC33926_Simple.h
 *
 * Simple version of the MC33926 dual motor driver
 *  Created on: 04 nov 2018
 *      Author: Andreotti
 */

#ifndef MC33926_SIMPLE_H_
#define MC33926_SIMPLE_H_

// Ports:
#define leftMotorDirPin   7
#define rightMotorDirPin  8
#define leftMotorPWMPin   9
#define rightMotorPWMPin  10
#define MotorOn           4

#include "Arduino.h"

class MC33926
{
  public:
    void Start();
    void Stop();
    void setMotors(int leftMotorSpeed, int rightMotorSpeed);
};

#endif
