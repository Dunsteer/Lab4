#include "Process.h"
#include "iostream"
using namespace std;

Process::Process()
{
	stanje = 0;
}


Process::~Process()
{
}

Process::Process(int Sifra, int Tip)
{
	sifra = Sifra;
	tip = Tip;
}

int Process::Vratisifru()
{
	return sifra;
}

int Process::Vratistanje()
{
	return stanje;
}

void Process::Prikazi()
{
	cout << sifra<< " " << stanje << " " << tip << endl;
}

void Process::Start(char* parametar)
{
	stanje = 1;
}

void Process::Stop()
{
	stanje = 2;
}
