#include "Sabiranje.h"
#include "Oduzimanje.h"
#include "Kalkulator.h"

//U funkciji main napraviti Kalkulator sa baferom za 12 operacija.Izvr�iti nekoliko
//sabiranja i oduzimanja a onda primeniti par undo operacija.Prikazati sadr�aj
//akumulatora nakon svake izvr�ene operacije.

void main()
{
	Kalkulator *k = new Kalkulator(12, "Kal");

	k->Do(new Sabiranje("s", 5, new Oduzimanje()));
	k->Prikazi();
	k->Do(new Sabiranje("s", 8, new Oduzimanje()));
	k->Prikazi();
	k->Do(new Sabiranje("s", 16, new Oduzimanje()));
	k->Prikazi();
	k->Do(new Oduzimanje("o", 5, new Sabiranje()));
	k->Prikazi();

	k->Undo();
	k->Prikazi();

	delete k;
}