#include "variables.h"
#include "main.h"
// Function to move the left side wheels of the drive


int ch3;
int ch2;
// Function to move the right side wheels of the drive



void operatorControl() {
  // Constantly checks for controller input
    while(true) {
  		// Checks if joystick is on the left
        ch3 = callJoystick(3);
        moveLeftWheels(ch3);
  	// Checks if joystick is on the right
        ch2 = callJoystick(2);
        moveRightWheels(ch2);
    }

}
