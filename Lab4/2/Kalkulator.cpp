#define _CRT_SECURE_NO_WARNINGS
#include "Kalkulator.h"
#include <string.h>
#include <iostream>
using namespace std;

Kalkulator::Kalkulator()
{
	zauzeto = 0;
	akumulator = 0;
	naziv = nullptr;
	niz = nullptr;
	velicinaAkumulatora = 0;
}


Kalkulator::~Kalkulator()
{
	if (niz != nullptr) 
	{
		for (int i = 0; i < akumulator; i++)
		{
			if (niz[i] != nullptr)
				delete niz[i];
		}
		delete[] niz;
	}
	if (naziv != nullptr)
		delete[] naziv;
}

Kalkulator::Kalkulator(int VelicinaAkumulator, char * Naziv)
{
	velicinaAkumulatora = VelicinaAkumulator;
	naziv = new char[strlen(Naziv) + 1];
	strcpy(naziv, Naziv);
	niz = new Operacija*[VelicinaAkumulator];
}

void Kalkulator::Reset()
{
	for (int i = 0; i < akumulator; i++)
	{
		delete niz[i];
	}
	akumulator = 0;
}

void Kalkulator::Prikazi()
{
	cout << "Stanje akumulatora :" << akumulator<<endl;
}

void Kalkulator::Do(Operacija * novaOperacija)
{
	if (niz != nullptr)
	{
		niz[zauzeto++] = novaOperacija;
		akumulator = novaOperacija->DoOperation(akumulator, novaOperacija->GetDrugiOp());
	}
}

void Kalkulator::Undo()
{
	if (niz != nullptr)
	{		
		akumulator = niz[zauzeto-1]->GetSuprotnaOperacija()->DoOperation(akumulator, niz[zauzeto - 1]->GetDrugiOp());
		zauzeto--;
		delete niz[zauzeto];
		niz[zauzeto] = nullptr;
	}
}
