#include "course.h"
#include <iostream>


struct student_list{
	string name;
	double grade;
	student_list* next;
};
Course::Course(const char* pName):num_students(0),head(NULL){
	strncpy(name,pName,sizeof(name));
	name[sizeof(name) - 1] = '\0';
}
Course::~Course(){
	while(head != NULL){
		current = head;
		head = head->next;
		delete current;
	}
}
bool Course::Add_Student(char* pStudent,double grade){
	if(num_students == 30){
		cout << name << " already has 30 student and can't add any more" << endl;
		return 1;
	}
	num_students ++;
	student_list* ptr = new student_list;
	ptr->name = pStudent;
	ptr->grade = grade;
	ptr->next = head;
	head = ptr;
	return 0;
}
void Course::Set_Credit(int Credit){
	credit = Credit;
}
void Course::Get_Average(){
	current = head;
	double sum = 0;
	while(current != NULL){
		sum += current->grade;
		current = current->next;
	}
	cout << "This course is average grade:" << sum/num_students << endl;
}
void Course::Get_Student_Grade(const char* pName){
	current = head;
	char name[20];
	strncpy(name,pName,sizeof(name));
	name[sizeof(name) - 1] = '\0';
	while(current != NULL){
		if(current->name == (string)pName){
			cout << current->name << ":" << current->grade << endl;
			return ;
		}
		current = current->next;
	}
	cout << "This course not is the student" << endl;
}
string Course::Get_CourseName(){
	return (string)name;
}
