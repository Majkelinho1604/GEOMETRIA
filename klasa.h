#pragma once
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

struct dlugosc
{
	double x, y;
};

class global
{
private:
	//zmienne
	double obwod;
	double pole;
	double dlga;
	double dlgb;
	double dlgc;
	double wekA;
	double wekB;
	double wekC;

public:
	void setOBWOD(double obw)
	{
		obwod = obw;
	}
	void setPOLE(double pol)
	{
		pole = pol;
	}
	void oblicza(dlugosc px, dlugosc py)
	{
		dlga = sqrt((pow(px.x - py.x, 2) + pow(px.y - py.y, 2)));
	}
	void obliczb(dlugosc px, dlugosc py)
	{
		dlgb = sqrt((pow(px.x - py.x, 2) + pow(px.y - py.y, 2)));
	}
	void obliczc(dlugosc px, dlugosc py)
	{
		dlgc = sqrt((pow(px.x - py.x, 2) + pow(px.y - py.y, 2)));
	}
	void wektorA()
	{
		wekA = dlga + 2.0;
	}
	void wektorB()
	{
		wekB = dlgb + 2.0;
	}
	void wektorC()
	{
		wekC = dlgc + 2.0;
	}

	double getOBLICZa()
	{
		return dlga;
	}
	double getOBLICZb()
	{
		return dlgb;
	}
	double getOBLICZc()
	{
		return dlgc;
	}
	double getOBWOD()
	{
		obwod = dlga + dlgb + dlgc;

		return obwod;
	}
	double getPOLE()
	{
		pole = sqrt((obwod / 2) * ((obwod / 2) - dlga) * ((obwod / 2) - dlgb) * ((obwod / 2) - dlgc));

		return pole;
	}
	double getwekA()
	{
		return wekA;
	}
	double getwekB()
	{
		return wekB;
	}
	double getwekC()
	{
		return wekC;
	}

	bool czyProstokatny()
	{
		return ((dlga * dlga + dlgb * dlgb == dlgc * dlgc) || (dlga * dlga + dlgc * dlgc == dlgb * dlgb) || (dlgc * dlgc + dlgb * dlgb == dlga * dlga) ? 1 : 0);
	}
	bool czyRownoboczny()
	{
		return (dlga == dlgb && dlgc == dlgb ? 1 : 0);
	}
	bool czyRownoramienny()
	{
		return (dlga == dlgb || dlga == dlgc || dlgc == dlgb ? 1 : 0);
	}
};

