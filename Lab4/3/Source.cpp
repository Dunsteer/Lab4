#include"Process.h"
#include"PrivateProcess.h"
#include"ProcessQueue.h"
#include"PublicProcess.h"

//U funkciji main testirati sve funkcije svih klasa.

void main()
{
	ProcessQueue *pq1 = new ProcessQueue(10,10);
	pq1->Dodaj(new PublicProcess("asd", 1), 1);
	pq1->Dodaj(new PublicProcess("asd", 1),2);
	pq1->Dodaj(new PrivateProcess("asd", 2), 1);
	pq1->Dodaj(new PrivateProcess("asd", 2), 2);
	pq1->Dodaj(new PublicProcess("asd", 3), 1);
	pq1->Dodaj(new PrivateProcess("asd", 9), 2);

	pq1->Prikazi();

	pq1->Start("asd", "dsa");
	pq1->Prikazi();

	pq1->Stop();
	pq1->Prikazi();

	pq1->Izbaci();
	pq1->Prikazi();

	delete pq1;
}