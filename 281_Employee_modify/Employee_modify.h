#ifndef EMPLOYEE_MODIFY_H_
#define EMPLOYEE_MODIFY_H_

class Name{
public:
	Name();
	void ChangeName();
	void Display();
protected:
	char name[20];
};

class Employee{
public:
	Employee(const char*,const char*,const char*,const char*);
	void ChangeName();
	void Display();
protected:
	Name name;
	char street[40];
	char city[10];
	char province[10];
	char z_code[7];
};


#endif /* EMPLOYEE_MODIFY_H_ */
