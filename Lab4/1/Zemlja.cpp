#include "Zemlja.h"


Zemlja::Zemlja()
{
	tip = 1;
}

Zemlja::Zemlja(int nad)
{
	nadmorskavisina = nad;
	tip = 1;
}

Zemlja::~Zemlja()
{
}

istream & operator >> (istream& levo, Zemlja& desno)
{
	levo >> desno.nadmorskavisina;
	return levo;
}

float Zemlja::Vrati()
{
	return nadmorskavisina;
}


void Zemlja::Stampaj()
{
	cout << "Nadmorska visina" << nadmorskavisina << endl;
}
