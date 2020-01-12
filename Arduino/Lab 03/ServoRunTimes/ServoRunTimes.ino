#include <Servo.h> //include servo library
Servo servoLeft; //declare left servo
Servo servoRight; //decalre right servo
void setup(){ //built in initialization block
servoLeft.attach(13); //attach servoLeft to pin 13
servoRight.attach(12); //attach servoLeft to pin 12
}

void loop(){ //main loop auto-repeats
servoLeft.writeMicroseconds(1300); //pin 13 clockwise
delay(3000); //for 3 seconds
servoRight.writeMicroseconds(1300); //pin 12 clockwise
delay(3000); //for 3 seconds
servoLeft.writeMicroseconds(1500); //pin 13 clockwise
servoRight.writeMicroseconds(1500); //pin 12 clockwise
}
