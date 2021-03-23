#include "Employee_modify_answer.h"

int main(){
	Employ em("Mark Brooks","5 West St.","Revere","CA","12290");
	char buffer[255];
	em.Display();

	em.ChangeName("Richard Voss");
	em.Display();
	return 0;
}
