void setup() { //built in initialization block
  Serial.begin(9600);
  Serial.println("Beep!");
  
  tone(4, 3000, 1000); //play tone for 1 second
  delay(1000); //delay to finish tone

}

void loop() { //main loop auto repeats
  Serial.println("Waiting for reset...");
  delay(1000);

}
