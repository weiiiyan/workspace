#include <iostream>

using namespace std;

class X{
public:
	X(int);
	X(X&);
	~X();
private:
	int* ss;
};
X::X(int s){
	ss = new int;
	*ss = s;
	cout << "Constructing" << *ss << "\t" << ss <<endl;
}
X::X(X& S){
	ss = new int;
	*ss = *S.ss + 1;
	cout << "Copying Constructing" << *ss << "\t" << ss << endl;
}
X::~X(){
	cout << "Destructing" << *ss << "\t" << ss << endl;
	delete ss;
}
X f(X s){
	cout << "redundant" << endl;
	return s;
}

int main(){
	X a(1);
	X b = f(X(2));
	//a = f(a);
	return 0;
}
