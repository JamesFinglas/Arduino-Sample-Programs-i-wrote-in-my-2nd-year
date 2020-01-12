#include <Servo.h> //include servo library
Servo servoRight; //declare Right servo
void setup(){ //built in initialization block
servoRight.attach(12); //attach servoright to pin 12
}

void loop(){ //main loop auto-repeats
servoRight.writeMicroseconds(1700); //1.5 ms full speed clockwise signal (do not forget to calibrate servo)
}
