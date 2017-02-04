#include "variables.h"
#include "main.h"


int callJoystick(int x){
  if (abs(joystickGetAnalog(1,x))>5){
    return joystickGetAnalog(1,x);
  }
  else {
    return 0;
  }

}

void moveRightWheels(int x) {
motorSet(MOTOR_BASE_RIGHT1_, x);
motorSet(MOTOR_BASE_RIGHT2_, -x);
}

void moveLeftWheels(int x) {
motorSet(MOTOR_BASE_LEFT1_, x);
motorSet(MOTOR_BASE_LEFT2_, -x);
}
