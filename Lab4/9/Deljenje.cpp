#include "Deljenje.h"



Deljenje::Deljenje():Operacija()
{
}


Deljenje::~Deljenje()
{
}

Deljenje::Deljenje(char * Naziv, int DrugiOperand, Operacija * Suprotnaoperacija):Operacija(Naziv,DrugiOperand,Suprotnaoperacija)
{

}

int Deljenje::DoOperation(int op1, int op2)
{
	return op1 / op2;
}
