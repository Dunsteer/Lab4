#pragma once
#include "Process.h"
//Na programskom jeziku C++ kreirati klasu ProcessQueue koja od privatnih atributa sadrži 
//maksimalni broj elemenata po nizu i dva niza pointera na objekte klase Process.Jedan niz 
//predstavlja aktivne procese a drugi procese na čekanju.Klasa sadrži i sledeće javne funkcije :
//konstruktor koji postavlja broj elemenata nizova i zauzima potreban prostor u memoriji,
//destruktor,
//funkciju koja za dodavanje pointera na tip Process u specificirani niz ako u njemu postoji slobodno mesto,
//funkciju koja iz nizova izbacuje sve procese u stanju 2,
//funkciju koja startuje sve procese iz oba niza koji su stanju 0,
//funkciju koja zaustavlja sve procese iz oba niza koji su u stanju 1,
//operatorsku funkciju + koja spaja dva objekta tipa ProcessQueue u jedan,
//funkciju koja prikazuje sadržaj oba niza.

class ProcessQueue
{
private:
	int maxbr1;
	int maxbr2;
	Process **niz1;
	Process **niz2;
	int ispunjen1;
	int ispunjen2;
public:
	ProcessQueue();
	ProcessQueue(int brel1, int brel2);
	~ProcessQueue();
	void Dodaj(Process *p, int x);
	void Izbaci();
	void Start(char* username,char* code);
	void Stop();
	void Prikazi();
	friend ProcessQueue& operator+(ProcessQueue& levi, ProcessQueue& desni);
};

