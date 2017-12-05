#include "Skladiste.h"
#include "Paleta.h"
#include <iostream>
using namespace std;

//U funkciji main napraviti skladište, napraviti nekoliko paketa i silosa i dodati ih skladištu.
//Zatim odrediti ukupnu količinu materijala u skladištu, prokazati listu šifara svih materijala
//koji se javljaju u skladištu i prikazati listu svih paketa i silosa.

void main()
{
	Skladiste *s = new Skladiste(1000, 10);

	s->Dodaj(new Paleta(1, 1, 100, "xya", "pck"));
	s->Dodaj(new Paleta(1, 2, 100, "xya", "pck"));
	s->Dodaj(new Paleta(2, 1, 100, "xya", "silo"));
	s->Dodaj(new Paleta(3, 2, 100, "xya", "silo"));
	s->Dodaj(new Paleta(8, 1, 100, "xya", "pck"));

	cout << "Ukupna kolicina materijala u skaldistu je " << s->UkupnaKolicinaMaterijala() << endl;
	s->Sifre();
	cout << s;
	delete s;
}