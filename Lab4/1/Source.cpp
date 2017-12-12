#pragma once
#include "Put.h"
#include "Voda.h"
#include "Zemlja.h"
#include "Element.h"
#include <iostream>
using namespace std;

void main()
{
	Put *p = new Put(12);

	for (int i = 0; i < 6; i++)
	{
		p->PostaviElement(new Voda(20));
		p->PostaviElement(new Zemlja(10));
	}

	cout << *p;
	p->PrikaziBrojElemenata();

	delete p;
}