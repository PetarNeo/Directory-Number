#ifndef _greska_h_
#define _greska_h_
#include <iostream>
#include <exception>
using namespace std;

class GPreviseIspita:public exception {
public:
	GPreviseIspita() :exception("Greska: Prekoracenje ispita!") {};
};
class GPreviseOsoba :public exception {
public:
	GPreviseOsoba() :exception("Greska: Prekoracenje osoba!") {};
};

#endif // !_greska_h_
