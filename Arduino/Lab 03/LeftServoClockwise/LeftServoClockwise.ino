#include <Servo.h> //include servo library
Servo servoLeft; //declare left servo
void setup(){ //built in initialization block
servoLeft.attach(12); //attach servoLeft to pin 12
}

void loop(){ //main loop auto-repeats
servoLeft.writeMicroseconds(1300); //1.5 ms full speed clockwise signal (do not forget to calibrate servo)
}
