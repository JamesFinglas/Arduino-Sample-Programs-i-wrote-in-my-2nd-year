void setup() //built in initalization
{
  pinMode(13, OUTPUT); //set digital pin 13 -> output
}

void loop() //main loop auto-repeats
{
  digitalWrite(13, HIGH); //pin 13 =5 V, LED emits light 
  delay(66); // 0.5 sec delay
  
  digitalWrite(13, LOW); //pin 13 = 0V, LED no light
  delay(133); //0.5 sec delay
 }
