#ifndef STUDENT_H_
#define STUDENT_H_

class Student
{
	public:
		float Grade()                               //Print the average grade
		{
			return gpa;
		}
		int Hours()                                 //Print the sum of the learning hours
		{
			return semesHours;
		}
		void AddCourse(int hours,float grade)       //Add grade and class hours for new courses
		{
			gpa = semesHours * gpa + grade * hours;
			semesHours += hours;
			gpa /=semesHours;
		}
	protected:
		int semesHours = 0;                         //The total hours of study in a semester
		float gpa = 0;                              //The average grade
};

#endif /* STUDENT_H_ */
