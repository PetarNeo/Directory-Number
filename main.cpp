#include "osoba.h"
#include "student.h"
#include "imenik.h"

int main() {
	try {
		Osoba* o1 = new Osoba("Petar", 20);
		Student* s1 = new Student("Marko", 21);
		Osoba* o2 = new Osoba("Jorda", 19);
		Student* s2 = new Student("MARE MDMA", 18);
		Student* s3 = new Student("Scepa", 30);
		Osoba* o3 = new Osoba("Djolo", 25);

		*s1 += 6;
		*s1 += 7;
		*s1 += 8;
		
		Imenik i;
		i += o1;
		i += o2;
		i += o3;
		i += s2;
		i += s1;
		i += s3;
		
		cout << i<< endl;
		i.uredi();
		cout << i;
		
	}
	catch (exception e) {
		cout << e.what() << endl;
	}
	
}