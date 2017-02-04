

#ifndef INCLUDE_VARIABLES_H_
#define INCLUDE_VARIABLES_H_

#include "main.h"

#define MOTOR_BASE_LEFT1_ 1
#define MOTOR_BASE_LEFT2_ 2
#define MOTOR_BASE_RIGHT1_ 3
#define MOTOR_BASE_RIGHT2_ 4

int callJoystick(int x);

void moveLeftWheels(int x);
void moveRightWheels(int x);
#endif /* INCLUDE_VARIABLES_H*/
