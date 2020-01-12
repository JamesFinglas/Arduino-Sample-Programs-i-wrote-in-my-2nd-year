#include <Servo.h> //include servo library

Servo servoLeft;
Servo servoRight; //declare servos

void setup(){ //initialization begins
tone(4, 3000, 1000); //play tone for 1 second
delay(1000); //delay for 1 second

servoLeft.attach(13); //attach left signal to pin 13
servoRight.attach(12); //attach left signal to pin 12

  disableServos(); //stay still
} //initialization ends

void loop() { //auto repeat begins
forward(2000); //forward for 2 seconds
turnLeft(600); //turn left for .6 of a second
turnRight(600); //turn right for .6 of a second
backwards(2000); //reverse for 2 seconds
} //auto repeat ends

void forward(int time) { //new funtion begin. forward.
servoLeft.writeMicroseconds(1300); //left wheel clockwise
servoRight.writeMicroseconds(1300); //right wheel clockwise
delay(time); //maneuver for time ms
} //new function ends

void turnRight(int time){ //new funtion begins. turn right
servoLeft.writeMicroseconds(1700); //left wheel counter clockwise
servoRight.writeMicroseconds(1700); //right wheel counter clockwise
delay(time); //maneuver for time ms
} //new function ends

void turnLeft(int time) { //new function begins. turn left.
servoLeft.writeMicroseconds(1300); //left wheel clockwise
servoRight.writeMicroseconds(1300); //right wheel lockwise
delay(time); //maneuver for time ms
} //new function ends

void backwards(int time) { //new function begins. backward.
servoLeft.writeMicroseconds(1300); //left wheel clockwise
servoRight.writeMicroseconds(1700); //right wheel counter clockwise
delay(time); //maneuver for time ms
} //new function ends

void disableServos() { //new function begins. stay still.
servoLeft.detach();
servoRight.detach(); //stay still
} //new function ends


