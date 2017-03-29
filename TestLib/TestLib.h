#ifndef TestLib_h
#define TestLib_h

#include "Arduino.h"

class Test{
  public:
    Test(int pin);
	void flash(int rep, int del);
	void on();
	void off();
  private:
    int _pin;
	int _rep;
	int _del;
};

#endif