#include "student.h"
#include <iostream>

using namespace std;

int main()
{
	Student s;
	cout << s.Grade() << endl;
	cout << s.Hours() << endl;
	
	s.AddCourse(3,4.0);
	
	cout << s.Grade() << endl;
	cout << s.Hours() << endl;
}
