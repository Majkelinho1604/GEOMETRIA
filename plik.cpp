#include <iostream>
#include <cstdio>
#include <cmath>
#include "klasa.h"

using namespace std;

int main()
{
	dlugosc pa, pb, pc;
	pa.x = 0.0;
	pa.y = 0.0;
	pb.x = 0.0;
	pb.y = 4.0;
	pc.x = 3.0;
	pc.y = 4.0;
	
	global trojkat;

	trojkat.oblicza(pa, pb);
	cout << trojkat.getOBLICZa() << endl;

	trojkat.obliczb(pa, pc);
	cout << trojkat.getOBLICZb() << endl;

	trojkat.obliczc(pb, pc);
	cout << trojkat.getOBLICZc() << endl;

	cout << "Obwod wynosi: " << trojkat.getOBWOD() << endl;
	cout << "Pole wynosi: " << trojkat.getPOLE() << endl;

	if (trojkat.czyProstokatny())
	{
		cout << "Ten trojkat jest prostkatny" << endl;
	}
	else if (trojkat.czyRownoboczny())
	{
		cout << "Ten trojkat jest rownoboczny" << endl;
	}
	if (trojkat.czyRownoramienny())
	{
		cout << "Ten trojkat jest rownoramienny" << endl;
	}

	trojkat.wektorA();
	cout << trojkat.getwekA() << endl;
	trojkat.wektorB();
	cout << trojkat.getwekB() << endl;
	trojkat.wektorC();
	cout << trojkat.getwekC() << endl;

	system("Pause");
	return 0;
}