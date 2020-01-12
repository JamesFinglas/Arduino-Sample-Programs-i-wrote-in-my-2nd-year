#include <Servo.h> //include servo library
Servo servoLeft;
void setup() { //built in initialization block
  servoLeft.attach(12); //attach right signal to pin 12
  
  servoLeft.writeMicroseconds(1300); //Right wheel clockwise
  delay(3000);  //...for 3 seconds
  
  servoLeft.writeMicroseconds(1500); //stay still
  delay(1000); //for 1 second
  
  servoLeft.writeMicroseconds(1700); //right wheel counter clockwise
  delay(3000); //for 3 seconds
  
  servoLeft.writeMicroseconds(1500); //right wheel counterclokwise
  }

void loop() { //Main loop auto-repeats
  //empt , nothing needs repeating
}
