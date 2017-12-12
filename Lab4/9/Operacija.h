#pragma once

//Kreirati apstraktnu klasu Operacija koja od zaštićenih atributa sadrži naziv(char*), 
//drugiOperand(int) i suprotnaOperacija(Operacija*) : 
// funkciju koja vraća suprotnu operaciju, 
// funkciju koja vraća drugi operand, 
// funkciju za prikaz podataka o operaciji(naziv, drugi operand i naziv suprotne operacije), 
// čistu virtuelnu funkciju DoOperation(int op1, int op2) čiji je povratni tip int.

class Operacija
{
protected:
	char* naziv;
	int drugiOperand;
	Operacija* suprotnaOperacija;
public:
	Operacija();
	Operacija(Operacija &o);
	virtual ~Operacija();
	Operacija(char* Naziv, int DrugiOperand, Operacija* Suprotnaoperacija);
	inline Operacija* GetSuprotnaOperacija() 
	{
		return suprotnaOperacija;
	}
	inline int GetDrugiOp()
	{
		return drugiOperand;
	}
	void Prikaz();
	virtual int DoOperation(int op1, int op2) = 0;


};	

