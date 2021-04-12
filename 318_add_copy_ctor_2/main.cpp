#include <iostream>

using namespace std;

class CAT{
public:
	CAT();
	CAT(const& CAT&);
	~CAT();
	int GetAge() const{return *itsAge;}
	void SetAge(int age){*itsAge = age;}
protected:
	int* itsAge;
};
CAT::CAT(){
	itsAge = new int;
	* itsAge = 5;
}
CAT::~CAT(){
	delete itsAge;
	itsAge = 0;
}
int main(){
	CAT frisky;
	cout << "frisky's age:" << frisky.GetAge() << endl;
	cout << "Setting frisky to 6...\n";
	frisky.SetAge(6);

}
