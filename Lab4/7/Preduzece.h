#pragma once
#include "Radnik.h"
#include <iostream>
using namespace std;

class Preduzece
{
private:
	char* naziv;
	int budzet;
	Radnik** r;
	int maks;
	int elem;
public:
	Preduzece();
	Preduzece(char* ime, int budzet, int maks);
	~Preduzece();
	void Dodaj(Radnik* R);
	void Obrisi(int jmbg);
	int Svota();
	bool Rentabilnost();
	Preduzece& operator++ (int);
	Preduzece& operator--(int);
	friend ostream& operator<<(ostream& izlaz, Preduzece& P);
};

