#pragma once
#include "iostream"
#include "Element.h"
using namespace std;

class Zemlja :
	public Element
{
private:
	int nadmorskavisina;
public:
	Zemlja();
	Zemlja(int nad);
	~Zemlja();
	friend istream & operator >> (istream&, Zemlja&);
	float Vrati();
	void Stampaj();
};

