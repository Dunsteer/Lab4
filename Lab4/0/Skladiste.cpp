#include "Skladiste.h"



Skladiste::Skladiste()
{
	maksimalniKapacitet = 0;
	brojElemenata = 0;
	nizElemenata = nullptr;
	trenutnaKolicinaMaterijala = 0;
	trenutniBrojElemenata = 0;
}

Skladiste::Skladiste(double MaksimalniKapacite, int BrojElemenata)
{
	maksimalniKapacitet = MaksimalniKapacite;
	brojElemenata = BrojElemenata;
	nizElemenata = new Element*[BrojElemenata];
	trenutnaKolicinaMaterijala = 0;
	trenutniBrojElemenata = 0;
	for (int i = 0; i < brojElemenata; i++)
	{
		nizElemenata[i] = nullptr;
	}
}


Skladiste::~Skladiste()
{
	if (nizElemenata != nullptr)
	{
		for (int i = 0; i < brojElemenata; i++)
		{
			delete nizElemenata[i];
		}
		delete[] nizElemenata;
	}
}

bool Skladiste::Dodaj(Element * el)
{
	bool add = false;

	if (el != nullptr)
	{
		if (trenutnaKolicinaMaterijala + el->GetKolicinaMaterijala() < maksimalniKapacitet && trenutniBrojElemenata < brojElemenata)
		{
			nizElemenata[trenutniBrojElemenata++] = el;
			trenutnaKolicinaMaterijala += el->GetKolicinaMaterijala();
			add = true;
		}
	}

	return add;
}

void Skladiste::Sifre()
{
	if (nizElemenata != nullptr)
	{
		if (nizElemenata[0] != nullptr)
		{
			int *elem = new int[brojElemenata];
			elem[0] = nizElemenata[0]->GetSifra();

			int n = 1;

			for (int i = 1; i < brojElemenata; i++)
			{
				bool postoji = false;

				for (int j = 0; j < n; j++)
				{
					if (elem[j] == nizElemenata[i]->GetSifra())
					{
						postoji = true;
					}
				}

				if (!postoji)
				{
					elem[n++] = nizElemenata[i]->GetSifra();
				}
			}

			for (int j = 0; j < n; j++)
			{
				cout << elem[j] << endl;
			}
			cout << endl;
			delete[] elem;
		}
	}
}

ostream & operator<<(ostream & izlaz, Skladiste & s)
{
	if (s.nizElemenata != nullptr)
	{
		Element** elem = new Element*[s.brojElemenata];

		for (int i = 0; i < s.brojElemenata; i++) {
			elem[i] = s.nizElemenata[i];
		}
		for (int i = 0; i < s.brojElemenata - 1; i++)
		{
			for (int j = i + 1; j < s.brojElemenata; j++)
			{
				if (elem[i] > elem[j])
				{
					Element * e = elem[i];
					elem[i] = elem[j];
					elem[j] = e;
				}
			}
		}
		for (int i = 0; i < s.brojElemenata; i++)
		{
			if (elem[i] != nullptr)
				elem[i]->Print();
		}
		delete[] elem;
	}
	return izlaz;
}
