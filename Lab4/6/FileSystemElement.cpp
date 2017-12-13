#include "FileSystemElement.h"
#include <string.h>


FileSystemElement::FileSystemElement()
{
	ime = nullptr;
	ekstenzija = nullptr;
	parent = nullptr;
}

FileSystemElement::FileSystemElement(char* Ime, char* Ekstenzija)
{
	ime = new char[strlen(Ime) + 1];
	strcpy(ime, Ime);
	ekstenzija = new char[strlen(Ekstenzija) + 1];
	strcpy(ekstenzija, Ekstenzija);
}


FileSystemElement::~FileSystemElement()
{
	if (ime!=nullptr)
	{
		delete[] ime;
	}
	
	if (ekstenzija!=nullptr)
	{
		delete[] ekstenzija;
	}
}

void FileSystemElement::Postavi(FileSystemElement* Parent)
{
	parent = Parent;
}

void FileSystemElement::StampajFajlove()
{

}
