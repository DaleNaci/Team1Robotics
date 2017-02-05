#include "variables.h"
#include "main.h"


int callJoystick1(int x){
  if (abs(joystickGetAnalog(1, x)) > 5){
    return joystickGetAnalog(1, x);
  }
  else {
    return 0;
  }

}

int callJoystick2(int x){
  if (abs(joystickGetAnalog(2, x)) > 5){
    return joystickGetAnalog(2, x);
  }
  else {
    return 0;
  }

}


int callLeftUpTrigger(){
  return 65 ? joystickGetDigital(2, 5, JOY_UP) == true : 0;
}

int callRightUpTrigger(){
  return 65 ? joystickGetDigital(2, 6, JOY_UP) == true : 0;
}

int callLeftDownTrigger(){
  return -65 ? joystickGetDigital(2, 5, JOY_DOWN) == true : 0;
}

int callRightDownTrigger(){
  return -65 ? joystickGetDigital(2, 6, JOY_DOWN) == true : 0;
}







void moveRightWheels(int x) {
motorSet(MOTOR_BASE_RIGHT1_, x);
motorSet(MOTOR_BASE_RIGHT2_, -x);
}

void moveLeftWheels(int x) {
motorSet(MOTOR_BASE_LEFT1_, x);
motorSet(MOTOR_BASE_LEFT2_, -x);
}

void moveLeftArm(int x) {
motorSet(MOTOR_ARM_LEFT_, x);

}

void moveRightArm(int x) {
motorSet(MOTOR_ARM_RIGHT_, x);

}

void moveLift(int x) {
motorSet(MOTOR_LIFT_LEFT1_, x);
motorSet(MOTOR_LIFT_LEFT2_, x);
motorSet(MOTOR_LIFT_RIGHT1_, x);
motorSet(MOTOR_LIFT_RIGHT2_, x);
}
