#include "imenik.h"

Imenik::~Imenik() {
	for (int i = 0; i <brOsb; i++) {
		delete osobe[i];
	}
	delete[] osobe;
}
ostream& operator<<(ostream& os, const Imenik& i) {
	for (int k = 0; k < i.dohvTrBrOsb(); k++) {
		os << *i.osobe[k] << endl;
	}
	return os;
}
void Imenik::uredi() {
	for (int i = 0; i < brOsb - 1; i++) {
		for (int j = i; j < brOsb; j++) {
			if (!(*osobe[i] > *osobe[j])) {
				Osoba* pom = osobe[i];
				osobe[i] = osobe[j];
				osobe[j] = pom;
			}
		}
	}
}