#include "Preduzece.h"
#include "Radnik.h"
#include "Developer.h"
#include "Menager.h"
#include <iostream>
using namespace std;

void main()
{
	Preduzece P1("qrc inc", 100000, 10);
	P1.Dodaj(new Developer("Perica", 1401997030050, 1992, 47, 1400, "programer"));
	P1.Dodaj(new Developer("Mikica", 4638927462782, 2008, 38, 1400, "programer"));
	P1.Dodaj(new Developer("Lazica", 19274648203, 2008, 35, 1400, "programer"));
	P1.Dodaj(new Menager("Boban", 21389748542589, 1992, 48, 9000, "finansijski"));

	if (P1.Rentabilnost())
	{
		P1++;
	}
	else
	{
		P1--;
	}

	cout << P1;
}