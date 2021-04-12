#include <iostream>
#include <vector>

using namespace std;

class A{
public:
	A(int valib = 10){
		a = valib;
	}
public:
	int a;
};
class B{
public:
	vector<A*> APtrVector;
};
class C{
public:
	B b;
};
int main(){
	A* ptr1 = new A(1);
	A* ptr2 = new A(2);
	A* ptr3 = new A(3);
    cout << (*ptr1).a << endl;
    cout << (*ptr2).a << endl;
    cout << (*ptr3).a << endl;
	C C1;
	C1.b.APtrVector.push_back(ptr1);
	C1.b.APtrVector.push_back(ptr2);
	C1.b.APtrVector.push_back(ptr3);

	const C* CC = &C1;
	C* CCC = const_cast<C*>(CC);

	cout << "After deleting two elements in the vector, now the capacity is: " << CCC->b.APtrVector.capacity() << endl;
    for (vector<A*>::iterator iter = CCC->b.APtrVector.begin(); iter != CCC->b.APtrVector.end();) {
    	delete (*iter);
    	iter=CCC->b.APtrVector.erase(iter);
    }
    vector<A*>(CCC->b.APtrVector).swap(CCC->b.APtrVector);
    cout << "After deleting two elements in the vector, now the capacity is: " << CCC->b.APtrVector.capacity() << endl;
    cout << (*ptr1).a << endl;
    cout << (*ptr2).a << endl;
    cout << (*ptr3).a << endl;
    cout << CCC->b.APtrVector.empty() << endl;
    int aa = 0x88;
    cout << static_cast<bool>(aa & (0x01 << 3));
}
