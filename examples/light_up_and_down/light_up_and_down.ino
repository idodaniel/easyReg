/**

This examples sets 8 74HC595 outputs HIGH, waits 500 ms,
then puts them LOW and wait 500 ms again.

Created by Ido Daniel, June 27'th, 2015.
**/

#include <easyReg.h>  //Including the library

int DS = 8;           //pin 8 is DS pin
int STCP = 9;         //Pin 9 is STCP
int SHCP = 10;        //Pin 10 is SHCP pin
int howMany = 1;      //One IC is connected

easyReg ic = easyReg(DS, STCP, SHCP, howMany); //Set up the class

void setup() {
  //nothing here
}

void loop() { //loops forever

  for (int i = 0; i <= 7; i++) {
    ic.writeReg(i, HIGH); //sets the output HIGH
    delay(50); //wait 50 ms
  }
  
  delay(500); //wait 500 ms
  
    for (int i = 7; i >= 0; i--) {
    ic.writeReg(i, LOW); //sets the output LOW
    delay(50); //wait 50 ms
  }
  
  delay(500); //wait 500 ms again

}
