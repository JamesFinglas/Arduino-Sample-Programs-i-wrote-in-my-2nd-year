void setup(){ //built in initialization block
pinMode(13, OUTPUT); //set digital pin 13-> output
}

void loop(){ //main loop auto-repeats
digitalWrite(13, HIGH); //pin 13 = 5 V, LED emits light
delay(2); //for 0.2 secs
digitalWrite(13, LOW); //pin 13 =0 V, LEd no light
delay(18); //for .18 secs
}
