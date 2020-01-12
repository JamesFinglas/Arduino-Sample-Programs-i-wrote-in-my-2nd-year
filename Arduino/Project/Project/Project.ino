 #include <Servo.h> 
Servo servoLeft; 
Servo servoRight;

void setup() {
  pinMode(7, INPUT); // Set right whisker pin to input
  pinMode(5, INPUT); // Set left whisker pin to input
  
  servoLeft.attach(13);    // servos declared
  servoRight.attach(12);
  
  tone(4,3000,1000);
  delay(2000);
  
}

void loop() {
  byte wLeft = digitalRead(5);
  byte wRight = digitalRead(7);
  forward();
  
  if((wLeft == 0) && (wRight == 0))
  {
    backward(500);
    turnRight();
    
    
    
    forward();
    byte wLeft2 = digitalRead(5);
    byte wRight2 = digitalRead(7);
    delay(1000);
    if((wLeft2 == 0) && (wRight2 == 0))
    {
      backward(600);
      turnaround();
    }
  }
    
  
  
}

void forward(){
  servoLeft.writeMicroseconds(1600);
  servoRight.writeMicroseconds(1400);
}

void forwardForOne(){
  servoLeft.writeMicroseconds(1600);
  servoRight.writeMicroseconds(1400);
  delay(1500);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}
void backward(int time){
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
  



