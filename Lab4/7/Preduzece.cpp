#include "Preduzece.h"
#include <string.h>
#include <iostream>
using namespace std;

Preduzece::Preduzece()
{
	naziv = nullptr;
	budzet = 0;
	r = nullptr;
	maks = 0;
	elem = 0;
}

Preduzece::Preduzece(char* ime, int budzet, int maks)
{
	elem = 0;
	this->budzet = budzet;
	this->maks = maks;
	naziv = new char[strlen(ime) + 1];
	strcpy(naziv, ime);
	r = new Radnik*[maks];
	for (int i = 0; i < maks; i++)
		r[i] = nullptr;
}

Preduzece::~Preduzece()
{
	if (naziv != nullptr)
	{
		delete[] naziv;
	}
	for (int i = 0; i < elem; i++)
	{
		delete r[i];
	}
	delete[] r;
}

void Preduzece::Dodaj(Radnik* R)
{
	if (r != nullptr && elem < maks)
	{
		r[elem++] = R;
	}
}

void Preduzece::Obrisi(int jmbg)
{
	if (r != nullptr)
	{
		for (int i = 0; i < elem; i++)
		{
			if (r[i]->getJMBG() == jmbg)
			{
				delete[] r[i];
				r[i] = 0;
			}
		}
	}
}

int Preduzece::Svota()
{
	if (r != nullptr)
	{
		for (int i = 0; i < elem; i++)
		{
			int suma=0;
			suma += r[i]->Plata();
			return suma;
		}
	}
}

bool Preduzece::Rentabilnost()
{
	if (budzet > Svota())
	{
		return true;
	}
	else
	{
		return false;
	}
}

Preduzece& Preduzece::operator++(int)
{
	for (int i = 0; i < elem; i++)
	{
		r[i]->povecaj_osnovicu();
	}
	return *this;
}

Preduzece& Preduzece::operator--(int)
{
	for (int i = 0; i < elem; i++)
	{
		r[i]->smanji_osnovicu();
	}
	return *this;
}


ostream& operator<<(ostream & izlaz, Preduzece & P)
{
	Radnik* *rad = new Radnik*[P.elem];

	for (int i = 0; i < P.elem; i++)
	{
		rad[i] = P.r[i];
	}

	for (int i = 0; i < P.elem; i++)
	{
		for (int j = i; j < P.elem; j++)
		{
			if (rad[i] != nullptr&&rad[j] != nullptr) 
			{
				Radnik* pom;
				if (rad[i]->getGodinaZaposljenja() > rad[j]->getGodinaZaposljenja())
				{
					pom = rad[i];
					rad[i] = rad[j];
					rad[j] = pom;
				}
			}
		}
	}

	for (int i = 0; i < P.elem; i++)
	{
		izlaz <<rad[i]->getGodinaZaposljenja() << rad[i]->get_ime_prezime() << " " << rad[i]->getJMBG() << " " << rad[i]->Plata() << endl;
	}
	return izlaz;
}
