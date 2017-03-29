#include "Arduino.h"
#include "TestLib.h"

Test::Test(int pin){
	_pin = pin;
	pinMode(_pin, OUTPUT);
}

void Test::flash(int rep, int del){
	_rep = rep;
	_del = del;
	for(int x = 0; x < _rep; x++){
	digitalWrite(_pin, HIGH);
	delay(_del);
	digitalWrite(_pin, LOW);
	delay(_del);
	digitalWrite(_pin, HIGH);
	delay(_del);
	digitalWrite(_pin, LOW);
	}
}

void Test::on(){
	digitalWrite(_pin,HIGH);
}

void Test::off(){
	digitalWrite(_pin, LOW);
}
