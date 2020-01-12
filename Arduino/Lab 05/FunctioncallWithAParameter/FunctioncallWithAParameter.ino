void setup(){ //built in initlailization block
Serial.begin(9600);

Serial.println("Playing higher pitch tone..."); //print statement
pitch(3500); //passing paramter to function. 3500hz
delay(1000);  //delay for 1 second

Serial.println("Playing lower tone..."); //print statement
pitch(2000); //passing paramter to function. 2000hz.
delay(1000); //delay for 1 second
} //initialization bloack ends

void loop(){ //auto repeat begins
} //auto repeat ends

void pitch(int Hz){ //new function begins. pitch function with Hz declared as a parameter
Serial.print("Frequency = "); //print statement
Serial.println(Hz); tone(4, Hz, 1000); //print statement
delay(1000); //delay for 1 second
} //new function ends
