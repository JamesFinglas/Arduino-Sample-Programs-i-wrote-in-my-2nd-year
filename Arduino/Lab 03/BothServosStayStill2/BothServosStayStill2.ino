#include <Servo.h> //include servo library
Servo servoLeft; //decalre left servo
Servo servoRight; //declare right servo
void setup(){ //built in initialization block
servoLeft.attach(13); //attach servoLeft to pin 13
servoRight.attach(12); //attach servoLeft to pin 12
}

void loop(){ //,aim loop auto-repeats
servoLeft.writeMicroseconds(1500); //1.5 ms stay still signal (do not forget to calibrate servo)
servoRight.writeMicroseconds(1500); //1.5 ms stay still signal (do not forget to calibrate servo)
}
