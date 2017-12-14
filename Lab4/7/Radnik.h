#pragma once
#include <iostream>
using namespace std;

class Radnik
{
protected:
	int JMBG;
	char* ime_prezime;
	int godina_zaposljenja;
	int godina_starosti;
	double osnovica_plate;
public:
	Radnik();
	virtual ~Radnik();
	Radnik(char* ime_prezime, int JMBG, int zaposljenje, int starost, int osnovica);
	int getJMBG();
	int getGodinaZaposljenja();
	void povecaj_osnovicu();
	void smanji_osnovicu();
	char* get_ime_prezime();
	virtual	void  Podaci() = 0;
	virtual double Plata() = 0;
};