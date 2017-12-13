#pragma once
#include "FileSystemElement.h"
class Folder : public FileSystemElement
{
	FileSystemElement *niz[25];
public:
	Folder();
	~Folder();
	Folder(char *Ime);
	char* VratiIme() override;
	void Add(FileSystemElement* F);
	FileSystemElement* Remove(int index);
	void Printlist();
	void StampajFajlove() override;
};

