#include "Menager.h"
#include "string.h"


Menager::Menager():Radnik()
{
}

Menager::Menager(char * ime_prezime, int JEMEBEGE, int zaposljenje, int starost, int osnovica, char* tip): Radnik(ime_prezime, JEMEBEGE, zaposljenje, starost, osnovica)
{
	this->tip = new char[strlen(tip) + 1];
	strcpy(this->tip, tip);
}



Menager::~Menager()
{
	if (tip != nullptr)
	{
		delete[] tip;
	}
}

double Menager::Plata()
{
	return 30*osnovica_plate+100*godina_zaposljenja;
}

void Menager::Podaci()
{
	cout << tip << " " << ime_prezime << " " << godina_starosti << " " << JMBG << " " << godina_zaposljenja << " " << osnovica_plate << " " << endl;
}

istream & operator>>(istream & ulaz, Menager & M)
{
	ulaz >> M.tip >> M.ime_prezime >> M.JMBG >> M.godina_starosti >> M.godina_zaposljenja >> M.osnovica_plate;
	return ulaz;
}
