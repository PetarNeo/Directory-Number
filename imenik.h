#ifndef _imenik_h_
#define _imenik_h_
#include "osoba.h"
#include "greska.h"

class Imenik {

	int kapacitet;
	int brOsb = 0;
	Osoba** osobe;

public:
	Imenik(int kap = 10) :kapacitet(kap) {
		osobe = new Osoba * [kap];
	}
	Imenik(const Imenik& i) = delete;
	Imenik& operator=(const Imenik& i) = delete;
	~Imenik();

	Imenik& operator+=(Osoba* o) {
		if (brOsb > kapacitet)throw GPreviseOsoba();
		osobe[brOsb++] = o;
		return *this;
	}

	int dohvKap()const { return kapacitet; }
	int dohvTrBrOsb()const { return brOsb; }
	void uredi();
	friend ostream& operator<<(ostream& os, const Imenik& i);

};

#endif // !_imenik_h_
