#include "date.h"
#include <iostream>

using namespace std;

void Date::GetDate(){
	cout << Day << " day/" << Month << " month/"<< Year << " year\n";
}
void Date::AddAday(){
	if(Month == 2){
		if((Year % 100 != 0 && Year % 4 == 0) || Year % 400 ==0){
			if(Day > 27){
				Month ++;
				Day = 1;
			}
			else
				Day ++;
		}
		else{
			if(Day > 28){
				Month ++;
				Day = 1;
			}
			else{
				Day ++;
			}
		}
	}
	else{
		switch(Month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
				if(Day > 30){
					Month ++;
					Day = 1;
					}
					else{
						Day ++;
					};break;
			case 12:
				if(Day > 30){
					Year ++;
					Month = 1;
					Day = 1;
					}
					else{
						Day ++;
					};break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(Day > 29){
					Month ++;
					Day = 1;
					}
					else{
						Day ++;
					};break;
		}
	}
}
void Date::SetDate(){
	cout << "Please entry year,month,day\n";
	cin >> Year >> Month >> Day;
}
