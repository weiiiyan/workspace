//#include<iostream>

//using namespace std;
//
//class Boat;
//
//class Car
//{
//public:
//	Car(int j)
//	{
//		size = j;
//	}
//	friend int Boat::Leisure(int time, Car& aobj, Boat& bobj);
//protected:
//	int size;
//};
//class Boat
//{
//public:
//	Boat(int j)
//	{
//		size = j;
//	}
//	int Leisure(int time, Car& aobj, Boat& bobj);
//protected:
//	int size;
//};
//
//int Boat::Leisure(int time, Car& aobj, Boat& bobj)
//{
//	return time*aobj.size * bobj.size;
//}
//int main()
//{
//	Car c1(2);
//	Boat b1(3);
//	int time = 4;
//	cout << b1.Leisure(time,c1,b1);
//	return 0;
//}                                        //Leisure cannot be a friend function in the Car class, pay attention to the order
#include<iostream>

using namespace std;

class Boat;

class Car
{
public:
	Car(int j)
	{
		size = j;
	}
	int Leisure(int time, Car& aobj, Boat& bobj);
protected:
	int size;
};
class Boat
{
public:
	Boat(int j)
	{
		size = j;
	}
	friend int Car::Leisure(int time, Car& aobj, Boat& bobj);
protected:
	int size;
};

int Car::Leisure(int time, Car& aobj, Boat& bobj)
{
	return time*aobj.size * bobj.size;
}
int main()
{
	Car c1(2);
	Boat b1(3);
	int time = 4;
	cout << c1.Leisure(time,c1,b1);
	return 0;
}
