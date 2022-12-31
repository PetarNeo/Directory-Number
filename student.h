#ifndef _student_h_
#define _student_h_
#include "osoba.h"
#include "greska.h"

class Student:public Osoba {
	int* ocena;
	int ispiti;
	int tr_is;

	void pisi(ostream& os)const override {
		Osoba::pisi(os);
		os << "/" << this->srVr();
	}

	void brisi();

public:
	Student(string i, int g, int is = 20,int tr = 0) :Osoba(i, g),ispiti(is),tr_is(tr) {
		ocena = new int[ispiti];
	}
	~Student() { brisi(); }

	Student& operator+=(int o) {
		if (tr_is > ispiti) throw GPreviseIspita();
		ocena[tr_is++] = o;
		return *this;
	}
	int kolikoJosOcena()const { return ispiti - tr_is; }
	double srVr()const {
		double sr = 0;
		//cout << tr_is << ispiti;
		for (int i = 0; i < tr_is; i++) {
			sr += ocena[i];
			//cout << sr << endl;
		}
		sr /= tr_is;
		return sr;
	}
};



#endif // !_student_h_
