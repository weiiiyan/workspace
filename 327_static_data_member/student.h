#ifndef STUDENT_H_
#define STUDENT_H_
class Student{
private:
	static Student* pHead;
	Student* pNext;
	char name[20];
public:
	Student(const char* pName);
	~Student();
};
#endif /* STUDENT_H_ */
