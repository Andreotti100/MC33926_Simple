#include <MC33926_Simple.h>

MC33926 motor;

#define MAX_VALUE 255

void setup()
{
  motor.Start();
}


void loop()
{
  for (int i = 0; i <= MAX_VALUE; i++)
  {
    motor.setMotors(i, 0);
    delay(2);
  }
  
  for (int i = MAX_VALUE; i >= -MAX_VALUE; i--)
  {
    motor.setMotors(i, 0);
    delay(2);
  }
  
  for (int i = -MAX_VALUE; i <= 0; i++)
  {
    motor.setMotors(i, 0);
    delay(2);
  }

  for (int i = 0; i <= MAX_VALUE; i++)
  {
    motor.setMotors(0, i);
    delay(2);
  }
  
  for (int i = MAX_VALUE; i >= -MAX_VALUE; i--)
  {
    motor.setMotors(0, i);
    delay(2);
  }
  
  for (int i = -MAX_VALUE; i <= 0; i++)
  {
    motor.setMotors(0, i);
    delay(2);
  }
}
