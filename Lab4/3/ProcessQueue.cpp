#include "ProcessQueue.h"

ProcessQueue::ProcessQueue()
{
	ispunjen1 = 0;
	ispunjen2 = 0;
	niz1 = nullptr;
	niz2 = nullptr;
	maxbr1 = 0;
	maxbr2 = 0;
}

ProcessQueue::ProcessQueue(int brel1, int brel2)
{
	ispunjen1 = 0;
	ispunjen2 = 0;
	maxbr1 = brel1;
	niz1 = new Process*[maxbr1];

	for (int i = 0; i < maxbr1; i++)
		niz1[i] = nullptr;

	maxbr2 = brel2;
	niz2 = new Process*[maxbr2];
	for (int i = 0; i < maxbr2; i++)
		niz2[i] = nullptr;
}

ProcessQueue::~ProcessQueue()
{
	for (int i = 0; i < maxbr1; i++)
		if (niz1[i] != nullptr)
		{
			delete niz1[i];
		}
	delete[] niz1;

	for (int i = 0; i < maxbr2; i++)
		if (niz2[i] != nullptr)
		{
			delete niz2[i];
		}
	delete[] niz2;
}

void ProcessQueue::Dodaj(Process* p, int x)
{
	if (x == 1)
	{
		if (niz1 != nullptr)
			if (!(ispunjen1 == maxbr1))
			{
				niz1[ispunjen1++] = p;
			}
	}
	else
	{
		if (x == 2)
		{
			if (niz2 != nullptr)
				if (!(ispunjen2 == maxbr2))
				{
					niz1[ispunjen2++] = p;
				}
		}
	}
}

void IzbaciStanje2(Process **p, int maxbr)
{
	for (int i = 0; i < maxbr; i++)
		if (p[i] != nullptr)
		{
			if (p[i]->Vratistanje() == 2)
			{
				delete p[i];
				for (int j = i; j < maxbr - 1; j++)
				{
					p[j] = p[j + 1];
				}
				p[maxbr - 1] = nullptr;
				maxbr--;
			}
		}
}

void ProcessQueue::Izbaci()
{
	IzbaciStanje2(niz1, ispunjen1);

	IzbaciStanje2(niz2, ispunjen2);
}

void ProcessQueue::Start(char* username, char* code)
{
	for (int i = 0; i < ispunjen1; i++)
	{
		if (niz1[i] != nullptr)
		{
			if (niz1[i]->Vratistanje() == 0)
			{
				if (niz1[i]->VratiTip() == 0)
				{
					niz1[i]->Start(username);
				}

				if (niz2[i]->VratiTip() == 1)
				{
					niz1[i]->Start(code);
				}
			}
		}
	}
	for (int i = 0; i < ispunjen2; i++)
	{
		if (niz2[i] != nullptr)
		{
			if (niz2[i]->Vratistanje() == 0)
			{
				if (niz2[i]->VratiTip() == 0)
				{
					niz2[i]->Start(username);
				}

				if (niz2[i]->VratiTip() == 1)
				{
					niz2[i]->Start(code);
				}
			}
		}
	}
}

void ProcessQueue::Stop()
{
	for (int i = 0; i < ispunjen1; i++)
	{
		if (niz1[i] != nullptr)
		{
			if (niz1[i]->Vratistanje() == 1)
			{
				niz1[i]->Stop();
			}
		}
	}

	for (int i = 0; i < ispunjen2; i++)
	{
		if (niz2[i] != nullptr)
		{
			if (niz2[i]->Vratistanje() == 1)
			{
				niz2[i]->Stop();
			}
		}
	}
}

void ProcessQueue::Prikazi()
{
	for (int i = 0; i < ispunjen1; i++)
	{
		if (niz1[i] != nullptr)
		{
			niz1[i]->Prikazi();
		}
	}

	for (int i = 0; i < ispunjen2; i++)
	{
		if (niz2[i] != nullptr)
		{
			niz2[i]->Prikazi();
		}
	}
}

ProcessQueue& operator+(ProcessQueue& levi, ProcessQueue& desni)
{
	ProcessQueue *p = new ProcessQueue(levi.maxbr1 + desni.maxbr1, levi.maxbr2 + desni.maxbr2);

	for (int i = 0; i < levi.ispunjen1; i++)
	{
		p->niz1[i] = levi.niz1[i];
	}

	for (int i = 0; i < levi.ispunjen2; i++)
	{
		p->niz2[i] = levi.niz2[i];
	}

	for (int i = 0; i < desni.ispunjen1; i++)
	{
		p->niz1[i + levi.ispunjen1] = desni.niz1[i];
	}

	for (int i = 0; i < desni.ispunjen2; i++)
	{
		p->niz2[i + levi.ispunjen2] = desni.niz2[i];
	}

	return *p;
}