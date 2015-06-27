/*
  easyReg.cpp - Library for easy software usage for 74HC595 Shift Register.
  Created by Ido Daniel, June 26, 2015.
  Build it, Hack it, Share it - beacuse Arduino is you!

  visit http://ido.org.il for instructions
*/

#include "Arduino.h"
#include "easyReg.h"

easyReg::easyReg(int DS, int STCP, int SHCP, int rg)
{
  pinMode(DS,OUTPUT);
  pinMode(STCP,OUTPUT);
  pinMode(SHCP,OUTPUT);
  _ds = DS;
  _stcp = STCP;
  _shcp = SHCP;
  _rg = 8*rg;
 // registers = registers[8];
  this->setrg();
}

void easyReg::setrg()
{
  digitalWrite(_stcp, LOW);
  for (int i = (_rg-1); i>=0; i--) {
    digitalWrite(_shcp, LOW);
    digitalWrite(_ds, registers[i]);
    digitalWrite(_shcp, HIGH);
  }
  digitalWrite(_stcp, HIGH);
}

void easyReg::writeReg(int pin, boolean state) {
  registers[pin] = state;
  this->setrg();
}

