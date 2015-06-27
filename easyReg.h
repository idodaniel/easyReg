/*
  easyReg.h - Library for easy software usage for 74HC595 Shift Register.
  Created by Ido Daniel, June 26, 2015.
  Build it, Hack it, Share it - beacuse Arduino is you!

  visit http://ido.org.il for instructions
*/

#ifndef easyReg_h
#define easyReg_h

#include "Arduino.h"

class easyReg
{
  public:
    easyReg(int DS, int STCP, int SHCP, int rg);
    //void easyReg( );

    void writeReg(int pin, boolean state);

  private:
  	void setrg();
    int _ds;
    int _stcp;
    int _shcp;
    int _rg; //How many IC's are connected together
    boolean registers[8*8]; //Up to 8 IC's can be connected together, change for more
};

#endif

