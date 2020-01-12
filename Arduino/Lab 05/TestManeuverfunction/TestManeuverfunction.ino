#include <Servo.h> // include servo library

Servo servoLeft; // Declare left and right servos
Servo servoRight;

void setup(){ //initialization begins
tone(4, 3000, 1000); // Play tone for 1 second
delay(1000); // Delay to finish tone

servoLeft.attach(13); // Attach left signal to pin 13
servoRight.attach(12); // Attach right signal to pin 12

maneuver(200, 200, 2000); // forward 2 seconds
maneuver(-200, 200, 600); // left 0.6 of a second
maneuver(200, -200, 600); // right 0.6 of a second
maneuver(-200, -200, 2000); // backwards 2 seconds
maneuver(0, 0, -1); // Disable servos
} 

void loop(){ // auto repeat begins
}

void maneuver(int speedLeft, int speedRight, int msTime) { //new function begins
servoLeft.writeMicroseconds(1500 + speedLeft);
servoRight.writeMicroseconds(1500 - speedRight);

if(msTime==-1)
 {
servoLeft.detach(); 
servoRight.detach(); //stay still
 }
 delay(msTime); // Delay for msTime
} //new function ends

