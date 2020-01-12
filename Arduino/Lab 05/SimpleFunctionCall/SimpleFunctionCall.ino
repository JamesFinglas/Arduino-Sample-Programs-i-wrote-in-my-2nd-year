void setup(){ //built in initlailization block
Serial.begin(9600);

Serial.println("Before example function call."); //print statement
delay(1000); example(); //this is the function call

Serial.println("After example function call."); //print statement
delay(1000); //delay for 1 second
} //initialization bloack ends

void loop(){ //auto repeat begins
} //auto repeat ends

void example() { //new function begins
Serial.println("During example function call."); //print statement
delay(1000); //delay for 1 second
} //new function ends
