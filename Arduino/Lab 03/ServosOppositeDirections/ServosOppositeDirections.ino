#include <Servo.h> //include servo library
Servo servoLeft; //declare left servo
Servo servoRight; //decalre right servo
void setup(){ //built in initialization block
servoLeft.attach(13); //attach servoLeft to pin 13
servoRight.attach(12); //attach servoLeft to pin 12
}

void loop(){ //main loop auto-repeats
servoLeft.writeMicroseconds(1700); //1.5 ms full speed clockwise signal (do not forget to calibrate servo)
servoRight.writeMicroseconds(1300); //1.5 ms full speed clockwise signal (do not forget to calibrate servo)
}
