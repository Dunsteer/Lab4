#include "File.h"
#include <string.h>


File::File()
{
}


File::~File()
{
}

File::File(char* Ime,char* Extenzija):FileSystemElement(Ime, Extenzija)
{
}

char* File::VratiIme()
{
	char* mat = new char[1000];
	mat[0] = 0;

	if (parent != nullptr)
	{
		strcat(mat, parent->VratiIme());
		strcat(mat, "/");
		strcat(mat, ime);
		if(strcmp(ekstenzija,"")!=0)
		{
			strcat(mat, ".");
			strcat(mat, ekstenzija);
		}
		return mat;
	}

	return ime;
}

void File::Printlist()
{
	if(parent!=nullptr)
	{
		parent->StampajFajlove();
	}
}
