#pragma once
#include "Oduzimanje.h"
#include "Sabiranje.h"

//Kreirati klasu Kalkulator koja od privatnih atributa sadrži
//akumulator(int), naziv(char*) i niz pointera tipa Operacija i koji treba da funkcioniše
//kao stek.Klasa sadrži i sledeće javne funkcije :
// konstruktor koji postavlja naziv, broj elemenata niza i zauzima potreban prostor u
//memoriji,
// destruktor,
// funkciju koja postavlja akumulator na 0 i briše stek operacija,
// funkciju koja prikazuje stanje akumulatora,
// funkciju Do(Operacija& novaOperacija) koja dodaje novaOperacija u stek i
//izvršava je tako što se kao op1 prosleđuje vrednost akumulatora a kao op2
//vrednost drugog operanda iz novaOperacija.Rezultat se smešta u akumulator.
// funkciju Undo koja uzima zadnju operaciju sa steka i izvršava njenu suprotnu
//operaciju gde je op1 vrednost akumulatora a op2 vrednost drugog operanda iz
//zadnje operacije.

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

