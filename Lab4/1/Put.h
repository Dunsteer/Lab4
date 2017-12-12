#pragma once
#include <iostream>
#include "Voda.h"
#include "Zemlja.h"
#include "Element.h"
using namespace std;
class Put
{
private:
	Element **niz;
	int duzinaniza;
	int trenutni;
public:
	Put();
	Put(int d);
	~Put();
	void PrikaziBrojElemenata();
	void PostaviElement(Element* e);
	friend ostream & operator << (ostream& levo, Put& desno);
};

