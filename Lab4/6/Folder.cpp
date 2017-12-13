#include "Folder.h"
#include <string.h>
#include <iostream>
using namespace std;

Folder::Folder()
{
	for (int i = 0; i < 25; i++)
		niz[i] = nullptr;
}

Folder::Folder(char* Ime) :FileSystemElement(Ime, "")
{
	for (int i = 0; i < 25; i++)
		niz[i] = nullptr;
}

char* Folder::VratiIme()
{
	char* mat = new char[1000];
	mat[0] = 0;

	if (parent != nullptr)
	{
		strcat(mat, parent->VratiIme());
		strcat(mat, "/");
		strcat(mat, ime);
		return mat;
	}
	
	return ime;
}

void Folder::Add(FileSystemElement* F)
{
	int i = 0;

	while(niz[i]!=nullptr&&i<25)
	{
		i++;
	}

	if(i<25)
	{
		niz[i] = F;
		F->Postavi(this);
	}
}

FileSystemElement* Folder::Remove(int index)
{
	if(index>=0&&index<25)
	{
		niz[index]->Postavi(nullptr);
		FileSystemElement* p = niz[index];
		niz[index] = nullptr;
		return p;
	}
}

void Folder::Printlist()
{
}

void Folder::StampajFajlove()
{
	for(int i =0; i<25;i++)
	{
		if(niz[i]!=nullptr)
		{
			cout << niz[i]->GetIme()<<endl;
		}
	}
}

Folder::~Folder()
{
	for(int i=0;i<25;i++)
	{
		if(niz[i]!=nullptr)
		{
			delete niz[i];
			niz[i] = nullptr;
		}
	}
}


