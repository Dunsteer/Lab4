#include "PrivateProcess.h"
#include "string.h"


PrivateProcess::PrivateProcess()
{
}


PrivateProcess::~PrivateProcess()
{
	if (code != nullptr)
		delete[]code;
}


PrivateProcess::PrivateProcess(char* Code, int sifra) :Process(sifra, 1)
{
	code = new char[strlen(Code) + 1];
	strcpy(code, Code);
}

void PrivateProcess::Start(char* kod)
{
	if (code != nullptr)
	{
		if (strcmp(code, kod) == 0)
		{
			Process::Start(kod);
		}
	}
}

void PrivateProcess::Stop()
{
	if(stanje==1)
	{
		Process::Stop();
	}
}
