#pragma once
#include "Operacija.h"
class Sabiranje :
	public Operacija
{
public:
	Sabiranje();
	Sabiranje(char* Naziv, int DrugiOperand, Operacija* Suprotnaoperacija);
	~Sabiranje();
	int DoOperation(int op1, int op2) override;

};

