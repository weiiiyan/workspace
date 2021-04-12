#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

Student* Student::pHead = 0;

Student::Student(const char* pName){
	strncpy(name,pName,sizeof(name));
	name[sizeof(name)-1] = '\0';
	pNext = pHead;
	pHead = this;
}

Student::~Student(){
	cout << this->name << endl;
	if(pHead == this){
		pHead = pNext;
		return;
	}
	for(Student* Ps = pHead;Ps;Ps = Ps->pNext){
		if(Ps->pNext == this){
			Ps->pNext = this->pNext;
			return;
		}
	}
}
