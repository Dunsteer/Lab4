#pragma once
#include "Operacija.h"

//Kreirati klasu Oduzimanje koja je javno izvedena iz klase Operacija i od javnih metoda
//sadrži :
// konstruktor koji postavlja sve atribute.

class Oduzimanje :
	public Operacija
{
public:
	Oduzimanje();
	~Oduzimanje();
	Oduzimanje(char* Naziv, int DrugiOperand, Operacija* Suprotnaoperacija);
	int DoOperation(int op1, int op2) override;


};

