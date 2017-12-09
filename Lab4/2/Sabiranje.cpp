#include "Sabiranje.h"



Sabiranje::Sabiranje():Operacija()
{
}

Sabiranje::Sabiranje(char * Naziv, int DrugiOperand, Operacija * Suprotnaoperacija): Operacija(Naziv,DrugiOperand,Suprotnaoperacija)
{
}


Sabiranje::~Sabiranje()
{
}

int Sabiranje::DoOperation(int op1, int op2)
{
	return op1 + op2;
}
