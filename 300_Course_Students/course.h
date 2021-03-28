#ifndef COURSE_H_
#define COURSE_H_

#include <cstring>
#include <string>
using namespace std;

struct student_list;

class Course{
public:
	Course(const char*);
	~Course();
	bool Add_Student(char*,double);
	void Set_Credit(int Credit);
	void Get_Average();
	void Get_Student_Grade(const char*);
	string Get_CourseName();
private:
	int num_students;
	int credit;
	char name[20];
	student_list* current;
	student_list* head;
};




#endif /* COURSE_H_ */
