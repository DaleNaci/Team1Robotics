/** @file auto.c
 * @brief File for autonomous code
 *
 * This file should contain the user autonomous() function and any functions related to it.
 *
 * Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/
 *
 * PROS contains FreeRTOS (http://www.freertos.org) whose source code may be
 * obtained from http://sourceforge.net/projects/freertos/files/ or on request.
 */

#include "main.h"

#define THRESH 500 //threshold for line tracker
#define motorLeft 2 //left wheels
#define motorRight 3 //right wheels
#define motorRotator 4 //rotates claw
#define motorClaw 5 //open/closes claw
#define leftLineSensor 1 //left line sensor
#define rightLineSensor 2 //right line sensor

void moveForward(int duration); //moves forward
void turnRight(int duration); //turns right
void turnLeft(int duration); //turns left
void clawUp(int duration); //rotates claw upward
void clawDown(int duration); //rotates claw downward
void openClaw(int duration); //opens claw
void closeClaw(int duration); //closes claw

/*
 * Runs the user autonomous code. This function will be started in its own task with the default
 * priority and stack size whenever the robot is enabled via the Field Management System or the
 * VEX Competition Switch in the autonomous mode. If the robot is disabled or communications is
 * lost,  the autonomous task will be stopped by the kernel. Re-enabling the robot will restart
 * the task, not re-start it from where it left off.
 *
 * Code running in the autonomous task cannot access information from the VEX Joystick. However,
 * the autonomous function can be invoked from another task if a VEX Competition Switch is not
 * available, and it can access joystick information if called in this way.
 *
 * The autonomous task may exit, unlike operatorControl() which should never exit. If it does
 * so, the robot will await a switch to another mode or disable/enable cycle.
 */
void autonomous() {
  moveForward(500);

}

//


void turnClockwise() {

}

void turnCounterClockwise() {

}


void moveForward(int duration) {
  motorSet(motorLeft, 127);
  motorSet(motorRight, -127);
  delay(duration);
  motorStop(motorLeft);
  motorStop(motorRight);
}

void moveRight(int duration) {
  motorSet(motorLeft, 127);
  motorSet(motorRight, 127);
  delay(duration);
  motorStop(motorLeft);
  motorStop(motorRight);
}

void moveLeft(int duration) {
  motorSet(motorLeft, -127);
  motorSet(motorRight, -127);
  delay(duration);
  motorStop(motorLeft);
  motorStop(motorRight);
}

void clawUp(int duration) {
  motorSet(motorRotator, 50);
  delay(duration);
  motorStop(motorRotator);
}

void clawDown(int duration) {
  motorSet(motorRotator, -50);
  delay(duration);
  motorStop(motorRotator);
}

void openClaw(int duration) {
  motorSet(motorClaw, 25);
  delay(duration);
  motorStop(motorClaw);
}

void closeClaw(int duration) {
  motorSet(motorClaw, -25);
  delay(duration);
  motorStop(motorClaw);
}
