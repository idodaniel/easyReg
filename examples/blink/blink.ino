/**
blink.ino

This examples sets one 74HC595 output HIGH, waits 1 second,
then puts it LOW and wait 1 second again.

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

    ic.writeReg(0, HIGH);   //sets output Q0 HIGH
    delay(1000);            //wait 1 second
    
    ic.writeReg(0, LOW);    //sets output Q0 HIGH
    delay(1000);            //wait 1 second

}
