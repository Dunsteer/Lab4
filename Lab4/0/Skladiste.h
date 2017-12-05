#pragma once
#include "Element.h"
#include <iostream>
using namespace std;

//Kreirati klasu Skladiste koja od privatnih atributa sadrži
//maksimalni kapacitet skladišta u kg(double), broj elemenata niza i niz pointera na
//objekte klase Element.Klasa sadrži i sledeće javne funkcije :
// konstruktor koji postavlja maksimalni kapacitet, broj elemenata niza i zauzima
//potreban prostor u memoriji,
// destruktor,
// funkciju za dodavanje jednog elementa u niz ako time ukupna količina materijala
//ne prevazilazi maksimalnu vrednost,
// funkciju za određivanje ukupne količine materijala u skladištu,
// funkciju koja prikazuje listu šifara svih materijala koji su uskladišteni(svaku šifru
//	štampati po jednom),
//	 prijateljsku operatorsku funkciju << za prikaz liste elemenata u skladištu uređenu
//	u rastući niz po šifri materijala.

class Skladiste
{
private:
	double maksimalniKapacitet;
	int brojElemenata;
	Element **nizElemenata;
	double trenutnaKolicinaMaterijala;
	int trenutniBrojElemenata;
public:
	Skladiste();
	Skladiste(double MaksimalniKapacite,int BrojElemenata);
	~Skladiste();
	bool Dodaj(Element* el);
	inline double UkupnaKolicinaMaterijala()
	{
		return trenutnaKolicinaMaterijala;
	}
	void Sifre();
	friend ostream& operator<<(ostream& izlaz, Skladiste& s);
};

