#pragma once
#include "Element.h"
#include <iostream>
using namespace std;

class Voda :
	public Element
{
private:
	float dubina;
public:
	Voda();
	Voda(float dub);
	~Voda();
	friend istream & operator >> (istream&, Voda&);
	inline int VratiTip()
	{
		return tip;
	}
	float Vrati();
	void Stampaj();
};

