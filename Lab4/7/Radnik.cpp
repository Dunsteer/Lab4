#include "Radnik.h"
#include <string.h>


Radnik::Radnik()
{
	ime_prezime = nullptr;
	JMBG = 0;
	godina_zaposljenja = 0;
	godina_starosti = 0;
	osnovica_plate = 0;
}


Radnik::~Radnik()
{
	if (ime_prezime != nullptr)
	{
		delete[] ime_prezime;
	}
}

Radnik::Radnik(char * ime_prezime, int JMBG, int zaposljenje, int starost, int osnovica)
{
	this->ime_prezime = new char[strlen(ime_prezime)+1];
	strcpy(this->ime_prezime, ime_prezime);
	this->JMBG = JMBG;
	this->godina_zaposljenja = zaposljenje;
	this->godina_starosti = starost;
	this->osnovica_plate = osnovica;
}




void Radnik::povecaj_osnovicu()
{
	osnovica_plate += osnovica_plate*0.1;
}

void Radnik::smanji_osnovicu()
{
	osnovica_plate -= osnovica_plate*0.1;
}

char * Radnik::get_ime_prezime()
{
	return ime_prezime;
}

int Radnik::getJMBG()
{
	return JMBG;
}

int Radnik::getGodinaZaposljenja()
{
	return godina_zaposljenja;
}

