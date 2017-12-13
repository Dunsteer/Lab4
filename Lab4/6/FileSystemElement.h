#pragma once
class FileSystemElement
{
protected:
	char* ime;
	char* ekstenzija;
	FileSystemElement* parent;
public:
	FileSystemElement();
	FileSystemElement(char *Ime, char *Ekstenzija);
	virtual ~FileSystemElement();
	void Postavi(FileSystemElement* Parent);
	virtual char* VratiIme() = 0;
	virtual void Printlist() = 0;
	char* GetIme()
	{
		return ime;
	}
	virtual void StampajFajlove();
	
};

