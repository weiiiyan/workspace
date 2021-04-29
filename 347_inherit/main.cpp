#include<iostream>

using namespace std;

class A
{
	int s = 1;
protected:
	int ss = 2;
public:
	int sss = 3;
};

class B:public A
{
public:
	using A::ss;
	int getSs()
	{
		return ss;
	}
/*	int getS()
	{
		return s;
	}*/                    //The derived scope of a derived class cannot access private members of the base class
};
int main()
{
	B b;
	cout << "b.ss = " << b.ss << endl;
	cout << "b.ss = " << b.getSs() << endl;
	cout << "b.sss = " << b.sss << endl;
}
