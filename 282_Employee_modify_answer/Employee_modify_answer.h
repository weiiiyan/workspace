#ifndef EMPLOYEE_MODIFY_ANSWER_H_
#define EMPLOYEE_MODIFY_ANSWER_H_

class Name{
public:
  Name(const char* n);
  void Display();
  void ChangeName(const char* n);
protected:
  char firstName[20];
  char lastName[20];
}; //------------------------
class Employ{
public:
  Employ(char* n,char* a,char* c,char* s,char* z);
  void ChangeName(char* n);
  void Display();
protected:
  Name name;
  char addr[40];
  char city[20];
  char state[20];
  char zip[10];
}; //------------------------



#endif /* EMPLOYEE_MODIFY_ANSWER_H_ */
