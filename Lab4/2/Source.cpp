#include "Sabiranje.h"
#include "Oduzimanje.h"
#include "Kalkulator.h"

void main()
{
	Kalkulator *k = new Kalkulator(12, "Kal");

	k->Do(new Sabiranje("s", 5, new Oduzimanje()));
	k->Prikazi();
	k->Do(new Sabiranje("s", 8, new Oduzimanje()));
	k->Prikazi();
	k->Do(new Sabiranje("s", 16, new Oduzimanje()));
	k->Prikazi();
	k->Do(new Oduzimanje("s", 5, new Sabiranje()));
	k->Prikazi();

	k->Undo();
	k->Prikazi();

	delete k;
}