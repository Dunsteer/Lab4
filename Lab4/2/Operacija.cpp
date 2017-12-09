#define _CRT_SECURE_NO_WARNINGS
#include "Operacija.h"
#include <iostream>
using namespace std;


Operacija::Operacija()
{
	naziv = NULL;
	suprotnaOperacija = NULL;
	drugiOperand = 0;
}

Operacija::Operacija(Operacija & o)
{
	naziv = new char[strlen(o.naziv) + 1];
	strcpy(naziv, o.naziv);
	drugiOperand = o.drugiOperand;
	suprotnaOperacija = o.suprotnaOperacija;
}


Operacija::~Operacija()
{
	if (naziv != NULL)
		delete[] naziv;
	if (suprotnaOperacija != NULL)
		delete suprotnaOperacija;
}

Operacija::Operacija(char * Naziv, int DrugiOperand, Operacija * Suprotnaoperacija)
{
	naziv = new char[strlen(Naziv) + 1];
	strcpy(naziv, Naziv);
	drugiOperand = DrugiOperand;
	suprotnaOperacija = Suprotnaoperacija;

}

void Operacija::Prikaz()
{
	cout << naziv << " " << drugiOperand<<" ";
	if(suprotnaOperacija!=NULL)
		cout << suprotnaOperacija->naziv << endl;
}
