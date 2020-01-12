#include <Servo.h> //include servo library
Servo servoLeft; //decalre left servo
Servo servoRight; //declare right servo
void setup(){ //built in initialization block
pinMode(4, OUTPUT); //set digital pin 13-> output(pin changed to temporarily free up pin 12 for servo testing)
pinMode(5, OUTPUT); //set digital pin 13-> output (second LED added for second servo)
servoLeft.attach(13); //attach servoLeft to pin 13
servoRight.attach(12); //attach servoLeft to pin 12
}

void loop(){ //main loop auto-repeats
servoLeft.writeMicroseconds(1500); //1.5 ms stay still signal (do not forget to calibrate servo)
servoRight.writeMicroseconds(1500); //1.5 ms stay still signal (do not forget to calibrate servo)
digitalWrite(4, HIGH); //pin 13 = 5 V, LED emits light (pin changed to temporarily free up pin 12 for servo testing)
delay(10); //for 0.10 secs
digitalWrite(4, LOW); //pin 13 =0 V, LEd no light (pin changed to temporarily free up pin 12 for servo testing)
delay(10); //for .10 secs
digitalWrite(5, HIGH); //pin 13 = 5 V, LED emits light (second LED added for second servo)
delay(10); //for 0.10 secs
digitalWrite(5, LOW); //pin 13 =0 V, LEd no light (second LED added for second servo)
delay(10); //for .10 secs
}
