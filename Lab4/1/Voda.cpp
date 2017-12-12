#include "Voda.h"


Voda::Voda() 
{
	tip = 2;
}

Voda::Voda(float dub)
{
	dubina = dub;
	tip = 2;
}

Voda::~Voda()
{
}

istream & operator >> (istream& levo, Voda& desno)
{
	levo >> desno.dubina;
	return levo;
}

float Voda::Vrati()
{
	return dubina;
}

void Voda::Stampaj()
{
	cout << "dubina vode" << dubina << endl;
}