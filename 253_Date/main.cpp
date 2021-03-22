#include "date.h"
#include <iostream>

using namespace std;

int main(){
	Date a;
	while(1){
		a.SetDate();
		a.GetDate();
		a.AddAday();
		a.GetDate();
	}
}
