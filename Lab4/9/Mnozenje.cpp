#include "Mnozenje.h"



Mnozenje::Mnozenje():Operacija()
{
}

Mnozenje::Mnozenje(char * Naziv, int DrugiOperand, Operacija * Suprotnaoperacija): Operacija(Naziv,DrugiOperand,Suprotnaoperacija)
{
}


Mnozenje::~Mnozenje()
{
}

int Mnozenje::DoOperation(int op1, int op2)
{
	return op1 * op2;
}
