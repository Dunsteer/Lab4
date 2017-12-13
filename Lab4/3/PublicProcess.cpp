#include "PublicProcess.h"
#include "string.h"


PublicProcess::PublicProcess()
{
}

PublicProcess::PublicProcess(char* CreatorName, int sifra):Process(sifra,0)
{
	creatorName = new char[strlen(CreatorName) + 1];
	strcpy(creatorName, CreatorName);
}


PublicProcess::~PublicProcess()
{
	if (creatorName != nullptr)
		delete[]creatorName;
}

void PublicProcess::Start(char* userName)
{
	Process::Start(userName);
	if (creatorName != nullptr)
	{
		if (strcmp(creatorName, userName) != 0)
		{
			strcpy(creatorName, userName);
		}
	}
	else
	{
		creatorName = new char[strlen(userName) + 1];
		strcpy(creatorName, userName);
	}

}
