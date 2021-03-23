#include "Employee_modify.h"
#include <iostream>
#include <cstring>

using namespace std;
Name::Name(){
	ChangeName();
}
void Name::ChangeName(){
	char Pname[20];
	cout << "Please cin your name:";
	cin >> Pname;
	strncpy(name,Pname,sizeof(name));
	name[sizeof(name) - 1] = '\0';
}
void Name::Display(){
	cout << "name:" << name << "\t";
}

Employee::Employee(const char* Pstreet,const char* Pcity,const char* Pprovince,const char* Pz_code){
	strncpy(street,Pstreet,sizeof(street));
	street[sizeof(street) - 1] = '\0';
	strncpy(city,Pcity,sizeof(city));
	city[sizeof(city) - 1] = '\0';
	strncpy(province,Pprovince,sizeof(province));
	province[sizeof(province) - 1] = '\0';
	strncpy(z_code,Pz_code,sizeof(z_code));
	z_code[sizeof(z_code) - 1] = '\0';
}
void Employee::ChangeName(){
	name.ChangeName();
}
void Employee::Display(){
	name.Display();
	cout << "street:" << street << "\t"
		 << "city:" << city << "\t"
		 << "province:" << province << "\t"
		 << "z_code:" << z_code << endl;
}
