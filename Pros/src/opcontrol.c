#include "variables.h"
#include "main.h"
// Function to move the left side wheels of the drive


int ch2;
int ch3;
int ch4;
int ch5;
int ch6;
int ch7;
int ch8;
// Function to move the right side wheels of the drive



void operatorControl() {
  // Constantly checks for controller input
    while(true) {
  		// Checks if joystick is on the left
        ch3 = callJoystick1(3);
        moveLeftWheels(ch3);
  	// Checks if joystick is on the right
        ch2 = callJoystick1(2);
        moveRightWheels(ch2);

        ch4 = callLeftUpTrigger(); //Check for negative
        moveLeftArm(ch4);

        ch5 = callRightUpTrigger(); //Check for negative
        moveRightArm(ch5);

        ch6 = callLeftDownTrigger();
        moveLeftArm(ch6);

        ch7 = callRightDownTrigger();
        moveRightArm(ch7);

        ch8 = callJoystick2(2);
        moveLift(ch8);


    }

}
