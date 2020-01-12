void setup() {                                                //built in initialization block
  Serial.begin(9600);                                         //set data rate to default comm port rate
  
  const int one = 89;                                         //declared variable int one as constant
  const int two = 42;                                         //declared variable int two as constant
  
    if(one > two)                                                 //if statement with boolean comparison
      {                                                      
        Serial.print("one is greater than two");                  //Display print out out if boolean reads true
      }
    else if(one < two)                                            //else if to accompany if statement
      {
        Serial.print("one is not greater than two");              //Display print out out if boolean reads true
      }
    else                                                      //else to close out if statement
      {
        Serial.print("one is equal to two");                      //Display print out out if boolean reads true
      }
      
    if ((one > 50) && (two < 0))                                  //if statement with boolean comparison
      {
        Serial.print("values in normal range");               //Display print out out if boolean reads true
      }
      
    if((one > 100) || (two < 0))                                  //if statement with boolean comparison
      {
        Serial.print("Danger Will Robinson!");                //Display print out out if boolean reads true
      }
    
    if (one == two)                                               //if statement with boolean comparison
      {
        Serial.print("one and two are equal");                    //Display print out out if boolean reads true
      }  

}

void loop() {                                                 //main loop auto-repeats              
  //empty, no repeating code

}
