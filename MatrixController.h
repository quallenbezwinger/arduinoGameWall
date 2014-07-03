// MatrixController.h

#ifndef _MATRIXCONTROLLER_h
#define _MATRIXCONTROLLER_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class MatrixControllerClass
{
public:
	void init(short latchPin, short clockPin, short dataPin);
	void setPixel(short xPos, short yPos);
	void update();
	static const short MATRIX_SIZE = 4;

private:
	short latchPin;
	short clockPin;
	short dataPin;
	short rowIndex;
	short colIndex;
	bool ledStatus[4][4];
	byte dataToSend;
	short lastActiveRow;
	short lastActiveCol;
};

extern MatrixControllerClass MatrixController;

#endif
