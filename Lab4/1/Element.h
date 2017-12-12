#pragma once
class Element
{
protected:
	int tip;
public:
	Element();
	~Element();
	inline int VratiTip()
	{
		return tip;
	}
	virtual void Stampaj() = 0;
	virtual float Vrati() = 0;
};

