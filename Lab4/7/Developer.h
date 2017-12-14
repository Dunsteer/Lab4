#pragma once
#include "Radnik.h"
#include <iostream>
using namespace std;

class Developer : public Radnik
{
	char* tip;
	int prekomerni_sati;
public:
	Developer();
	Developer(char* ime_prezime, int JEMEBEGE, int zaposljenje, int starost, int osnovica, char* tip);
	~Developer();
	double Plata();
	friend istream& operator>>(istream& ulaz, Developer& D);
	void Podaci();
};

