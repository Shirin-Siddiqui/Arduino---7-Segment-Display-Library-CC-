#ifndef seg7_h
#define seg7_h

#include <Arduino.h>



class seg7
{
public:
	seg7(int a,int b,int c,int d,int e,int f,int g,int dp);  //Constructor. attach pin to blink
	void Seg7(int no);  //enable blinking with 1s duration
	void done();
private:
	uint8_t al;
	uint8_t bl;
	uint8_t cl;
	uint8_t dl;
	uint8_t el;
	uint8_t fl;
	uint8_t gl;
	uint8_t dpl;
};

#endif