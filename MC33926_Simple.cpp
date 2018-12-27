/*
 * MC33926_Simple.cpp
 *
 * Simple version of the MC33926 dual motor driver
 *  Created on: 04 nov 2018
 *      Author: Andreotti
 */

#include "MC33926_Simple.h"

void MC33926::Start()
{
  pinMode(leftMotorPWMPin, OUTPUT);
  pinMode(leftMotorDirPin, OUTPUT);
  pinMode(rightMotorPWMPin, OUTPUT);
  pinMode(rightMotorDirPin, OUTPUT);
  pinMode(MotorOn, OUTPUT);
  digitalWrite(MotorOn, HIGH); // default to on
}

void MC33926::Stop()
{
  digitalWrite(MotorOn, LOW);
}

void MC33926::setMotors(int leftMotorSpeed, int rightMotorSpeed)
{
  bool Rev_left = false;
  bool Rev_right = false;
  
  if (leftMotorSpeed < 0)
  {
    leftMotorSpeed = -leftMotorSpeed;
    Rev_left = true;
  }

  if (rightMotorSpeed < 0)
  {
    rightMotorSpeed = -rightMotorSpeed;
    Rev_right = true;
  }
  
  analogWrite(leftMotorPWMPin, leftMotorSpeed);
  digitalWrite(leftMotorDirPin, Rev_left ? HIGH : LOW);

  analogWrite(rightMotorPWMPin, rightMotorSpeed);
  digitalWrite(rightMotorDirPin, Rev_right ? HIGH : LOW);
}
