#include <Servo.h> //include servo library
Servo servoRight;
void setup() { //built in initialization block
  servoRight.attach(12); //attach right signal to pin 12
  
  servoRight.writeMicroseconds(1300); //Right wheel clockwise
  delay(3000);  //...for 3 seconds
  
  servoRight.writeMicroseconds(1500); //stay still
  delay(1000); //for 1 second
  
  servoRight.writeMicroseconds(1700); //right wheel counter clockwise
  delay(3000); //for 3 seconds
  
  servoRight.writeMicroseconds(1500); //right wheel counterclokwise
  
  Serial.begin(9600);
  Serial.println("Beep!");
  
  tone(4, 3000, 1000); //play tone for 1 second
  delay(1000); //delay to finish tone
  }

void loop() { //Main loop auto-repeats
  Serial.println("Waiting for reset...");
  delay(1000);
}
