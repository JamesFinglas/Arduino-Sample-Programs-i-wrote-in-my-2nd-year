#include <Servo.h> //include servo library
Servo servoLeft; //declare left servo signaL
Servo servoRight; //declare right servo signal
void setup() { //built in initialization block
  tone(4, 3000, 1000); //play tone for 1 second
  delay(1000); //delay to finish tone
 
  Serial.begin(9600); //set data rate to 9600 bps 
  servoLeft.attach(13); //attach left servo to pin 13
}

void loop() { //main loop auto repeats
  //loop counts with pulseWidth from 1375 to 1625 in increments of 25.
  
  for(int pulseWidth = 1700; pulseWidth <= 1700; pulseWidth += 20){ //for loop begins
    Serial.print("pulseWidth = "); //display pulseWidth value
    Serial.println(pulseWidth); 
    Serial.println("press a key and click"); //User prompt
    Serial.println("Send to start servo...");
    
    while (Serial.available() == 0); //wait for character
      Serial.read(); //clear character
    
    Serial.print("running...");
    servoLeft.writeMicroseconds(pulseWidth); //pin 13 servo speed=pulse
    delay(6000); // delay for six seconds
    
    servoLeft.writeMicroseconds(1500); //pin servo speed = stop
  } //for loop ends

}
