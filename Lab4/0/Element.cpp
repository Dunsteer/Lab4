#include "Element.h"



Element::Element()
{
	sifra = -1;
	sifraMaterijala = -1;
	kolicinaMaterijala = -1;
}

Element::Element(int Sifra, int SifraMaterijala, float Kolicina)
{
	sifra = Sifra;
	sifraMaterijala = SifraMaterijala;
	kolicinaMaterijala = Kolicina;
}


Element::~Element()
{
}

bool operator>(Element & levi, Element & desni)
{
	return levi.sifra > desni.sifra;
}

bool operator<(Element & levi, Element & desni)
{
	return levi.sifra < desni.sifra;
}

bool operator==(Element & levi, Element & desni)
{
	return levi.sifra==desni.sifra;
}
