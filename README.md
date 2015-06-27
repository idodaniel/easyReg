# easyReg
Arduino library for easy software usage to 74HC595 Shift Register.

#### Version - 1.00

## Installation
1. Click on the "Download Zip" button or [click here](https://github.com/idodaniel/easyReg/archive/master.zip).
2. Extract the zip file
3. Move the "easyReg" folder that has been extracted to your libraries directory.

## Usage
After installing the library, you should include the library whenever you wish to use it. In order to include it, simply add these line in the beginning of your code: `#include <easyReg.h>`.

* `easyReg reg = easyReg(int DS, int STCP, int SHCP, int rg); ` - This is the constructer of the class. 
  * `DS` = DS pin, 
  * `STCP` = STCP pin, 
  * `SHCP` = SHCP pin, 
  * `rg` = how many shift registers are connected together.
<br /><br />
* `reg.writeReg(int pin, boolean state)` - Changing the state of an output pin in the register. This function works just like Arduino's `digitalWrite` function.
  * `pin` = the pin in the register, 
  * `state` = pin mode (`HIGH` or `LOW`). 


__Note: two code examples are included in the libaray__

## About the developer
This tiny library was developed by me, Ido Daniel, a 16 years-old developer from Tel Mond, Israel. I made it for my own usage and uploaded it to GitHub so anyone can enjoy it. Please share it and modify it!
