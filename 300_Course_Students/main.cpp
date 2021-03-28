#include "students.h"
#include "course.h"

int main(){
	students zs("zhangsan");
	students ls("lisi");
	Course s1("Math");
	Course s2("English");
	zs.Add_Course(&s1, 3.1);
	ls.Add_Course(&s1, 4.5);
	s1.Get_Average();
	zs.Get_Coursegrade(&s1);
	zs.Add_Course(&s2, 4);
	zs.Get_Average();
	return 0;
}
