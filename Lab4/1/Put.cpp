#include "Put.h"

Put::Put()
{
	niz = nullptr;
	trenutni = 0;
}

Put::Put(int d)
{
	duzinaniza = d;
	niz = new Element*[duzinaniza];
	for (int i = 0; i < duzinaniza; i++)
	{
		niz[i] = nullptr;
	}
	
}

Put::~Put()
{

	for (int i = 0; i < duzinaniza; i++)
	{
		if (niz[i]!=nullptr)
		{
			delete niz[i];
		}
	}
	delete[] niz;
}

void Put::PostaviElement(Element * e)
{
	niz[trenutni++] = e;
}

void Put::PrikaziBrojElemenata()
{
	int br1, br2;
	br1 = br2 = 0;
	for (int i = 0; i < duzinaniza; i++)
	{ 
		if (niz[i]->VratiTip() == 1)
		{
			br1++;
		}
		else
		{
			br2++;
		}
		
	}
	cout << "zemljaaa:" <<br1<< endl;
	cout << "vodaa:" << br2 << endl;

}

ostream & operator << (ostream& levo, Put& desno)
{
	 for (int i = 0; i < desno.trenutni; i++)
	{
		 desno.niz[i]->Stampaj();
	}
	 return levo;
}


