#include<iostream>

using namespace std;

class static_data_member
{
public:
	static_data_member(int);
	~static_data_member();
private:
	int a;
	static int b;
};
static_data_member::static_data_member(int A)
{
	a = A;
	b++;
	cout << "a = " << a << ",b = " << b << endl;
}
static_data_member::~static_data_member()
{
	b--;
	cout << "a = " << a << ",b = " << b << endl;
}
int static_data_member::b = 0;
int main()
{
	static_data_member s(1);
	static_data_member ss(2);
	static_data_member sss(3);
	return 0;
}
