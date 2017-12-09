#pragma once
//Kreirati klasu Element koja od zaštićenih atributa sadrži šifru(int), šifru materijala(int) i
//količinu(float), a od javnih funkcija :
// funkciju koja vraća šifru materijala,
// funkciju koja vraća količinu materijala,
// čistu virtuelnu funkciju za prikaz podataka o elementu,
// operatorsku funkciju za upoređivanje dva elementa(po šifri).
class Element
{
protected:
	int sifra;
	int sifraMaterijala;
	float kolicinaMaterijala;
public:
	Element();
	Element(int Sifra,int SifraMaterijala, float Kolicina);
	virtual ~Element();
	inline int GetSifra() {
		return sifra;
	}
	inline int GetSifraMaterijala() {
		return sifraMaterijala;
	}
	inline int GetKolicinaMaterijala() {
		return kolicinaMaterijala;
	}
	virtual void Print() = 0;
	friend bool operator>(Element& levi, Element& desni);
	friend bool operator<(Element& levi, Element& desni);
	friend bool operator==(Element& levi, Element& desni);
};

