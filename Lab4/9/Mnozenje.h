#pragma once
#include "Operacija.h"

//Kreirati klasu Mnozenje koja je javno izvedena iz klase Operacija i d javnih metoda
//sadrži :
// konstruktor koji postavlja sve atribute.

class Mnozenje :
	public Operacija
{
public:
	Mnozenje();
	Mnozenje(char* Naziv, int DrugiOperand, Operacija* Suprotnaoperacija);
	~Mnozenje();
	int DoOperation(int op1, int op2) override;

};

