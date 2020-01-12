void setup() { //initialization block
tone (4, 3000, 1000); //play tone for 1 second
delay(1000); //delay to finish tone

pinMode(7, INPUT); //set whisker pin to input
pinMode(5, INPUT); //set whisker left pin to input

 Serial.begin(9600); //set data rate to 9600 bps
} //initialization block ends

void loop() { //auto repeat loop
 byte wLeft = digitalRead(5); //copy left result to wLeft
 byte wRight = digitalRead(7); //copy right result to wRight
 
  Serial.print(wLeft); //display left whisker state
  Serial.println(wRight); //display left whisker state
  
 delay(50); //pause for 50 ms
} //auto repeat lopp ends
