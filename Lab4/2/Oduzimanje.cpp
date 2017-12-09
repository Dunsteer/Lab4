#include "Oduzimanje.h"



Oduzimanje::Oduzimanje():Operacija()
{
}


Oduzimanje::~Oduzimanje()
{
}

Oduzimanje::Oduzimanje(char * Naziv, int DrugiOperand, Operacija * Suprotnaoperacija):Operacija(Naziv,DrugiOperand,Suprotnaoperacija)
{

}

int Oduzimanje::DoOperation(int op1, int op2)
{
	return op1 - op2;
}
