#include<iostream>

using namespace std;

class A
{
	int x;
public:
	A(int a):x(a)
	{
		cout << "constructing A\n" << endl;
	}
	A():x(2)
	{
		cout << "constructing A1\n" << endl;
	}
};

class B :  public A
{
public:
	B(int b) :  A(b)
	{
		cout << "constructing B\n" << endl;
	}
};

int main()
{
	B b(1);
}
