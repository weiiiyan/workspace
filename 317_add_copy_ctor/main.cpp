#include <iostream>

 using namespace std;

class Vector{
public:
	 Vector(int s = 100);
	 Vector(Vector& s);
	 int& Elem(int ndx);
	 void Display();
	 void Set();
	 ~Vector();
protected:
	 int size;
	 int* buffer;
 };

Vector::Vector(int s){
	buffer = new int[size = s];
	for(int i = 0; i < size; i++)
		buffer[i] = i * i;
}
Vector::Vector(Vector& s){
	size = s.size;
	buffer = new int[size];
	for(int i = 0; i < size; i++){
		buffer[i] = s.Elem(i);
	}
}
int& Vector::Elem(int ndx){
	if(ndx < 0 || ndx >= size){
		cout << "error in index" << endl;
		exit(1);
	}
	return buffer[ndx];
}

void Vector::Display(){
	for(int j = 0;j < size; j++)
		cout << Elem(j) << endl;
}
void Vector::Set(){
	for(int j = 0; j < size; j++)
		Elem(j) = j + 1;
}

Vector::~Vector(){
	delete[]buffer;
}
int main(){
	Vector a(10);
	Vector b(a);
	a.Display();
	a.Set();
	a.Display();
	b.Display();
}
