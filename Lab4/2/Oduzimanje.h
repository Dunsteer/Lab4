#pragma once
#include "Operacija.h"
class Oduzimanje :
	public Operacija
{
public:
	Oduzimanje();
	~Oduzimanje();
	Oduzimanje(char* Naziv, int DrugiOperand, Operacija* Suprotnaoperacija);
	int DoOperation(int op1, int op2) override;


};

