#include <Servo.h> //include servo library
Servo servoRight; //declare right servo
void setup(){ //built in initialization block
servoRight.attach(12); //attach servoLeft to pin 12
}

void loop(){ //main loop auto-repeats
servoRight.writeMicroseconds(1500); //1.5 ms stay still signal (do not forget to calibrate servo)
}
