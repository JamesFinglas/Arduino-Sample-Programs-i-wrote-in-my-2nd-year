void setup() {
  
Serial.begin(9600);

for(int i = 5000; i <= 15000; i+1000)
  {
    Serial.println(i);
    delay(500);
  }
  Serial.println("ALL done!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
