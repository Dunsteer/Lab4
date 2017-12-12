#pragma once
#include "Operacija.h"

//Kreirati klasu Sabiranje koja je javno izvedena iz klase Operacija i d javnih metoda
//sadrži :
// konstruktor koji postavlja sve atribute.

class Sabiranje :
	public Operacija
{
public:
	Sabiranje();
	Sabiranje(char* Naziv, int DrugiOperand, Operacija* Suprotnaoperacija);
	~Sabiranje();
	int DoOperation(int op1, int op2) override;

};

