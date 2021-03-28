#include "students.h"
#include "course.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct course_list{
	string name;
	double grade;
	course_list* next;
};
students::students(const char* pName):num_courses(0),Head(NULL){
	strncpy(name,pName,sizeof(name));
	name[sizeof(name) - 1] = '\0';
}
students::~students(){
	while(Head != NULL){
		current = Head;
		Head = Head->next;
		delete current;
	}
}
void students::Dispaly(){
	current = Head;
	cout << name << ":" << endl;
	while(current != NULL){
		cout << current->name
			<< "-"
			<< current->grade
			<< "\t";
		current = current->next;
	}
}
void students::Add_Course(Course* pCourse,double pGrade){
	if(num_courses == 5){
		cout << name << " already has 5 courses and can't add any more" << endl;
		return ;
	}
	if(pCourse->Add_Student(name,pGrade))
		return ;
	num_courses ++;
	course_list* ptr = new course_list;
	ptr->name = pCourse->Get_CourseName();
	ptr->grade = pGrade;
	ptr->next = Head;
	Head = ptr;
	pCourse->Add_Student(name,pGrade);
}
void students::Get_Coursegrade(Course* pCourse){
	current = Head;
	while(current != NULL){
		if(pCourse->Get_CourseName() == current->name){
			cout << current->name << ":" << current->grade << endl;
			return ;
		}
		current = current->next;
	}
	cout << "This student not is the course" << endl;
}
void students::Get_Average(){
	current = Head;
	double sum = 0;
	while(current != NULL){
		sum += current->grade;
		current = current->next;
	}
	cout << "This student is average grade:" << sum/num_courses << endl;
}
