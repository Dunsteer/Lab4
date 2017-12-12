#include "Mnozenje.h"
#include "Deljenje.h"
#include "Kalkulator.h"

//U funkciji main napraviti Kalkulator sa baferom za 14 operacija.Izvršiti nekoliko
//množenja i deljenja a onda primeniti par undo operacija.Štampati sadržaj akumulatora
//nakon svake izvršene operacije.

void main()
{
	Kalkulator *k = new Kalkulator(14, "Kal");

	k->Do(new Mnozenje("m", 5, new Deljenje()));
	k->Prikazi();
	k->Do(new Mnozenje("m", 8, new Deljenje()));
	k->Prikazi();
	k->Do(new Mnozenje("m", 16, new Deljenje()));
	k->Prikazi();
	k->Do(new Deljenje("sd", 5, new Mnozenje()));
	k->Prikazi();

	k->Undo();
	k->Prikazi();

	delete k;
}