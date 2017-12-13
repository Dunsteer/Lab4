#pragma once

//Kreirati klasu Process koja od zaštićenih atributa sadrži šifru(int), 
//stanje(int, može da uzme vrednosti 0 – kreiran, 1 – startovan i 2 - zaustavljen) i tip(int) a od javnih funkcija sadrži :
//funkciju koja vraća šifru,
//funkciju koja vraća stanje,
//funkciju za prikaz šifre, stanja i tipa procesa,
//čistu virtuelnu funkciju za startovanje procesa koja kao parametar ima jedan niz karaktera - void Start(char* parameter),
//čistu virtuelnu funkciju za zaustavljanje procesa – void Stop().
//Nakon kreiranja objekta tipa Process, objekat je u stanju 0. 
//U stanje 1 prelazi ,INTnakon što se startuje pozivom odgovarajuće funkcije,
//a u stanje 2 nakon što se pozove funkcija za njegovo zaustavljanje.

class Process
{
protected:
	int sifra;
	int stanje;
	int tip;

public:
	
	Process();
	~Process();
	Process(int Sifra, int Tip);
	int Vratisifru();
	int Vratistanje();
	void Prikazi();
	virtual void Start(char* parametar);
	virtual void Stop();
	inline int VratiTip()
	{
		return tip;
	}
};

