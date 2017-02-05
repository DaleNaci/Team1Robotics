

#ifndef INCLUDE_VARIABLES_H_
#define INCLUDE_VARIABLES_H_

#include "main.h"

#define MOTOR_BASE_LEFT1_ 1
#define MOTOR_BASE_LEFT2_ 2
#define MOTOR_BASE_RIGHT1_ 3
#define MOTOR_BASE_RIGHT2_ 4

#define MOTOR_ARM_LEFT_ 5
#define MOTOR_ARM_RIGHT_ 6

#define MOTOR_LIFT_LEFT1_ 7
#define MOTOR_LIFT_LEFT2_ 8

#define MOTOR_LIFT_RIGHT1_ 9
#define MOTOR_LIFT_RIGHT2_ 10

int callLeftUpTrigger();
int callRightUpTrigger();

int callLeftDownTrigger();
int callRightDownTrigger();

int callJoystick1(int x);
int callJoystick2(int x);

void moveLeftWheels(int x);
void moveRightWheels(int x);

void moveLeftArm(int x);
void moveRightArm(int x);

void moveLift(int x);

#endif /* INCLUDE_VARIABLES_H*/
