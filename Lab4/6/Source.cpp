#include "Folder.h"
#include "File.h"
#include <iostream>
using namespace std;

void main()
{
	Folder * f1 = new Folder("1");
	Folder * f2 = new Folder("2");
	Folder * f3 = new Folder("3");
	Folder * f4 = new Folder("4");
	Folder * f5 = new Folder("5");
	Folder * f6 = new Folder("6");
	File * f = new File("7", "jbtk");

	f1->Add(f2);
	f2->Add(f3);
	f3->Add(f4);
	f4->Add(f5);
	f5->Add(f6);
	f6->Add(f);

	cout << f->VratiIme();
}
