#include <iostream>
#include <cstring>

using namespace std;

class Employee{
public:
	Employee(const char* Pname,const char* Pstreet,const char* Pcity,const char* Pprovince,const char* Pz_code){
		strncpy(name,Pname,sizeof(name));
		name[sizeof(name) - 1] = '\0';
		strncpy(street,Pstreet,sizeof(street));
		street[sizeof(street) - 1] = '\0';
		strncpy(city,Pcity,sizeof(city));
		city[sizeof(city) - 1] = '\0';
		strncpy(province,Pprovince,sizeof(province));
		province[sizeof(province) - 1] = '\0';
		strncpy(z_code,Pz_code,sizeof(z_code));
		z_code[sizeof(z_code) - 1] = '\0';
	}
	void ChangeName(){
		char Pname[20];
		cout << "Please cin your name:";
		cin >> Pname;
		strncpy(name,Pname,sizeof(name));
		name[sizeof(name) - 1] = '\0';
	}
	void Display(){
		cout << "name:" << name << "\t"
				<< "street:" << street << "\t"
				<< "city:" << city << "\t"
				<< "province:" << province << "\t"
				<< "z_code:" << z_code << endl;
	}
protected:
	char name[20];
	char street[40];
	char city[10];
	char province[10];
	char z_code[7];
};
int main(){
	Employee ss("jordon","Hua Yang","Cheng Du","Si Chuan","000000");
	ss.Display();
	ss.ChangeName();
	ss.Display();
	return 0;
}
