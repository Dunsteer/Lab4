#pragma once
#include "Process.h"

//Kreirati klasu PrivateProcess koja je javno izvedena iz klase Process, 
//koja od privatnih atributa ima kod(char* code) i od javnih metoda sadrži :
//konstruktor koji postavlja sve atribute.
//Kod objekata ove klase parametar tip uvek ima vrednost 1. 
//Ove procese može da startuje samo korisnik koji zna njihov 
//kod i koji prosleđuje kod kao parametar funkcije za startovanje, a mogu da pređu u stanje 2 samo ako se trenutno nalaze u stanju 1.

class PrivateProcess :
	public Process
{
private:
	char* code;
public:
	PrivateProcess();
	~PrivateProcess();
	PrivateProcess(char* Code, int sifra);
	void Start(char* kod);
	void Stop();
};

