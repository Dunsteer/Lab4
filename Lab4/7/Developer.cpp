#include "Developer.h"
#include <string.h>


Developer::Developer():Radnik()
{
	tip = nullptr;
	prekomerni_sati = 0;
}

Developer::Developer(char * ime_prezime, int JEMEBEGE, int zaposljenje, int starost, int osnovica, char* tip):Radnik(ime_prezime, JEMEBEGE, zaposljenje, starost, osnovica)
{
	this->tip = new char[strlen(tip) + 1];
	strcpy(this->tip, tip);
}

double Developer::Plata()
{
	return 25 * osnovica_plate + 1500 * godina_zaposljenja + 1000 * prekomerni_sati;
}

void Developer::Podaci()
{
	cout << tip << " " << ime_prezime << " " << godina_starosti << " " << JMBG << " " << godina_zaposljenja << " " << osnovica_plate << " " << prekomerni_sati << endl;
}


Developer::~Developer()
{
	if (tip != nullptr)
	{
		delete[] tip;
	}
}

istream & operator>>(istream & ulaz, Developer & D)
{
	ulaz >> D.tip >> D.ime_prezime >> D.JMBG >> D.godina_starosti >> D.godina_zaposljenja >> D.osnovica_plate >> D.prekomerni_sati;
	return ulaz;
}
