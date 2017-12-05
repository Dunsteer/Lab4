#pragma once
#include "Element.h"
#include <iostream>
using namespace std;

///Kreirati klasu Paleta koja je javno izvedena iz klase Element i koja od privatnih atributa
///sadrži lot kod(niz karaktera) i tip(„pck“ za paket i „silo“ za silos) i dd javnih metoda
///sadrži :
/// konstruktor koji postavlja sve atribute,
/// operator >> za unos podataka o paleti.

class Paleta :	public Element
{
protected:
	char* lotKod;
	char* tip;
public:
	Paleta();
	Paleta(int Sifra, int SifraMaterijala, float Kolicina, char* LotKod,char* Tip);
	~Paleta();
	friend istream& operator>>(istream& ulaz, Paleta& p);
	void Print();
};

