void setup()  // Built-in initialization bloack
  {
    pinMode(13, OUTPUT); //Set digital pin -> output

}

void loop() //Main loop auto-repeats 
  {
   digitalWrite(13, HIGH); // Pin 12 = %v emits light
   delay(500); // ..0.5 sec delay

   digitalWrite(13, LOW);  // Pin 13 = 0V, lED NO light   
   delay(500); //0.5 secs delay  
}
