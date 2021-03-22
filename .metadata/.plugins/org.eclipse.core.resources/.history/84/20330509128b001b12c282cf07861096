#include "name.h"
#include <iostream>
#include <cstring>

using namespace std;

	Student::Student(char* pName){
		cout << "construcying student " << pName << endl;
		strncpy(name,pName,sizeof(name));
		name[sizeof(name) - 1] = '\0';                    //Prevent names that are too long from crashing
	}
	Student::~Student(){
		cout << "destructing " << name << endl;
	}
