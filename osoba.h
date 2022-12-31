#ifndef _osoba_h_
#define _osoba_h_
#include <iostream>
using namespace std;

class Osoba {
protected:
	string ime;
	int godine;
	virtual void pisi(ostream& os)const {
		os << ime << "(" << godine << ")";
	}

public:
	Osoba() = default;
	Osoba(string i, int g) :ime(i), godine(g) {};
	Osoba(const Osoba& o) = delete;
	virtual ~Osoba() {};

	Osoba& operator=(const Osoba& o) = delete;

	bool operator>(const Osoba& o) {
		return this->godine > o.godine;
	}
	friend ostream& operator<<(ostream& os, const Osoba& o) {
		o.pisi(os);
		return os;
	}
};

#endif // !_osoba_h_
