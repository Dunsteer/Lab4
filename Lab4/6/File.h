#pragma once
#include "FileSystemElement.h"
class File :public FileSystemElement
{
public:
	File();
	~File();
	File(char *Ime, char* Extenzija);
	char* VratiIme() override;
	void Printlist();
};

