#include "cat.h"
#include <iostream>

using namespace std;

int main(){
	Cat frisky;
	frisky.SetAge(5);
	frisky.Meow();
	cout <<"frishy is a cat who is "
			<<frisky.GetAge()
			<<" years old.\n";
	frisky.Meow();
	return 0;
}
