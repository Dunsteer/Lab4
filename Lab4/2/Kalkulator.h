#pragma once
#include "Oduzimanje.h"
#include "Sabiranje.h"


class Kalkulator
{
private:
	int akumulator;
	char* naziv;
	Operacija** niz;
	int velicinaAkumulatora;
	int zauzeto;
public:
	Kalkulator();
	~Kalkulator();
	Kalkulator(int VelicinaAkumulator, char* Naziv);
	void Reset();
	void Prikazi();
	void Do(Operacija* novaOperacija);
	void Undo();
};

