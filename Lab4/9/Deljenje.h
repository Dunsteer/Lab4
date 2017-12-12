#pragma once
#include "Operacija.h"

//Kreirati klasu Deljenje koja je javno izvedena iz klase Operacija i od javnih metoda
//sadrži :
// konstruktor koji postavlja sve atribute.

class Deljenje :
	public Operacija
{
public:
	Deljenje();
	~Deljenje();
	Deljenje(char* Naziv, int DrugiOperand, Operacija* Suprotnaoperacija);
	int DoOperation(int op1, int op2) override;


};

