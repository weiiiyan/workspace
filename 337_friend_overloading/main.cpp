#include<iostream>

using namespace std;
class Animal;

void SetValue(Animal&, int);
void SetValue(Animal&, int, int);

class Animal
{
public:
	friend void SetValue(Animal&, int);
protected:
	int itsWeight;
	int itsAge;
};

void SetValue(Animal& ta, int tw)
{
	ta.itsWeight = tw;
}
//void SetValue(Animal& ta, int tw, int tn)  //The overloaded function is not a function, only the first one is a friend function
//{
//	ta.itsWeight = tw;
//	ta.itsAge = tn;
//}

int main()
{
	Animal peppy;
	SetValue(peppy, 5);
//	SetValue(peppy, 7, 9);
	return 0;
}
