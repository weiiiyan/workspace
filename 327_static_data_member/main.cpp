#include "student.h"

Student* fn(){
	Student* Ps = new Student("Jenny");
	Student sb("Jone");
	return Ps;
}

int main(){
	Student sa("Jamsa");
	Student* sb = fn();
	Student sc("Jracey");
	delete sb;
	return 0;
}
