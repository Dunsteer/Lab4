#pragma once
#include "Radnik.h"
#include <iostream>
using namespace std;

class Menager : public Radnik
{
	private:
		char* tip;
public:
	Menager();
	Menager(char* ime_prezime, int JEMEBEGE, int zaposljenje, int starost, int osnovica, char* tip);
	~Menager();
	double Plata();
	friend istream& operator>>(istream& ulaz, Menager& M);
	void Podaci();
};

