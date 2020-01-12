/* Robotics with the BOE shield - CountToTenDocumneted
   This sketch displays an up-count from 1 to 10 in the
   Serial monitor */


const int startVal = 1;                     // starting value for counting
const int endVal = 10;                      //Ending value for for counting 
const int baudRate = 9600;                  // setting baud rate

void setup()                                //built in initialization bloack
{
  Serial.begin(baudRate);                   //Set data rate to baudRate
  
  for(int i = startVal; i <= endVal; i++)   //Countr from startVal to endVal
    {
      Serial.println(i);                    //Display i in serial
      delay(500);                           //pause 0.5 seconds between values
    }
    Serial.println("All done!");            //Display message when done
}

void loop()                                 //Main loop auto-repeats
{
//Empty, no repeating code
}
      
