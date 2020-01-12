#include <Servo.h> //include servo library

Servo servoLeft;
Servo servoRight; //declare servos

void setup(){ //built in initlailization block
tone(4, 3000, 1000); //play tone for one second
delay(1000); //delay to finish tone

servoLeft.attach(13); //attach left signal to pin 13
servoRight.attach(12); //attach right servo to pin 12

//full speed forward
servoLeft.writeMicroseconds(1700); //left wheel counter clockwise
servoRight.writeMicroseconds(1300); //right wheel clockwise
delay(1500); //delay for 1.5 seconds

servoLeft.detach(); 
servoRight.detach(); //stop sending signals
} //main block ends

void loop(){ //main loop auto-repeats
} //main loop ends
