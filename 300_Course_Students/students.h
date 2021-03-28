#ifndef STUDENTS_H_
#define STUDENTS_H_

#include "course.h"
struct course_list;
class students{
public:
	students(const char*);
	~students();
	void Dispaly();
	void Add_Course(Course*,double);
	void Get_Coursegrade(Course*);
	void Get_Average();
private:
	char name[20];
	int num_courses;
	course_list* current;
	course_list* Head;
};



#endif /* STUDENTS_H_ */
