#include <Servo.h> //include servo library
Servo servoLeft; //decalre left servo
void setup(){ //built in initialization block
pinMode(4, OUTPUT); //set digital pin 4-> output (pin changed to temporarily free up pin 12 for servo testing)
servoLeft.attach(13); //attach servoLeft to pin 13
}

void loop(){ //main loop auto-repeats
servoLeft.writeMicroseconds(1500); //1.5 ms stay still signal (do not forget to calibrate servo)
digitalWrite(4, HIGH); //pin 13 = 5 V, LED emits light 
delay(10); //for 0.10 secs
digitalWrite(4, LOW); //pin 13 =0 V, LEd no light
delay(10); //for .10 secs
}
