#include <iostream>

using namespace std;

class Account
{
public:
	virtual void Withdrawal(float amount)
	{
		cout << "Account " << amount << endl;
	}
};

class Savings :public Account
{
public:
	virtual void Withdrawal(float amount)
	{
		cout << "Savings " << amount << endl;
	}
};

void func(Account* PA)
{
	PA->Withdrawal(100.0);
}

int main()
{
	Savings s;
	func(&s);

	return 0;
}
