#include <Servo.h> 
Servo servoLeft; 
Servo servoRight;

void setup() {
  pinMode(7, INPUT); // Set right whisker pin to input
  pinMode(5, INPUT); // Set left whisker pin to input
  pinMode(8, OUTPUT); // Left LED indicator -> output
  pinMode(2, OUTPUT); // Right LED indicator -> output
  
  digitalWrite(8, HIGH); // Left LED on 2
  tone(4,3000,1000);
  delay(1000);
  digitalWrite(8, LOW); // Left LED off
  
  digitalWrite(2, HIGH); // right LED on 2
  tone(4,3000,1000);
  delay(1000);
  digitalWrite(2, LOW); // right LED off
  
  servoLeft.attach(13);    // servos declared
  servoRight.attach(12);
  

  
}

void loop() {
  byte wLeft = digitalRead(5);
  byte wRight = digitalRead(7);
  forward();
  
  if((wLeft == 0) && (wRight == 0))
  {
    backward(500);
    turnRight();
    
    
    
    forwardForOne();
    byte wLeft2 = digitalRead(5);
    byte wRight2 = digitalRead(7);
    delay(1000);
    if((wLeft2 == 0) && (wRight2 == 0))
    {
      backward(500);
      turnaround();
    }
  }
    
  
  
}

void forward(){
  servoLeft.writeMicroseconds(1600);
  servoRight.writeMicroseconds(1400);
}

void forwardForOne(){
  servoLeft.writeMicroseconds(1550);
  servoRight.writeMicroseconds(1450);
  delay(1500);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}
void backward(int time){
  /*digitalWrite(8, HIGH);
  delay(200);
  digitalWrite(2, HIGH);
  delay(200);*/
  led();
  servoLeft.writeMicroseconds(1400); 
  servoRight.writeMicroseconds(1600);
  delay(time);
}
  
void turnRight(){
  servoLeft.writeMicroseconds(1600); // Left wheel counterclockwise
  servoRight.writeMicroseconds(1600); // Right wheel counterclockwise
  delay(560);
}

void turnaround(){
  servoLeft.writeMicroseconds(1600); // Left wheel counterclockwise
  servoRight.writeMicroseconds(1600); // Right wheel counterclockwise
  delay(1125);
  
}

void led() {
  for (int b = 0; b <= 4; b++) {
    digitalWrite(8, HIGH); // Left LED on 2
    tone(4,1000,1000);
    delay(100);
    digitalWrite(8, LOW); // Left LED off
    }
  }



