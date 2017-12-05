#include "Paleta.h"
#include <string.h>


Paleta::Paleta() :Element()
{
	lotKod = nullptr;
	tip = nullptr;
}

Paleta::Paleta(int Sifra, int SifraMaterijala, float Kolicina, char * LotKod, char * Tip) :Element(Sifra, SifraMaterijala, Kolicina)
{
	lotKod = new char[strlen(LotKod) + 1];
	strcpy(lotKod, LotKod);
	tip = new char[strlen(Tip) + 1];
	strcpy(tip, Tip);
}


Paleta::~Paleta()
{
	if (lotKod != nullptr)
	{
		delete[] lotKod;
	}

	if (tip != nullptr)
	{
		delete[] tip;
	}
}

void Paleta::Print()
{
	cout << "Sifra: " << sifra << endl;
	cout << "Sifra materijala: " << sifraMaterijala << endl;
	cout << "Kolicina: " << kolicinaMaterijala << endl;
	cout << "Lot kod: " << lotKod << endl;
	cout << "Tip: " << tip << endl;
}

istream & operator>>(istream & ulaz, Paleta & p)
{
	cin >> p.sifra;
	cin >> p.sifraMaterijala;
	cin >> p.kolicinaMaterijala;
	cin >> p.lotKod;
	cin >> p.tip;
}
