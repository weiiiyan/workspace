#include "filo.h"
#include <iostream>

using namespace std;

int main(){
	FILO que;

	que.put(10);
	que.put(12);
	que.put(14);

	cout << que.get() <<endl;
	cout << que.get() <<endl;
	cout << que.get() <<endl;
	cout << que.get() <<endl;

}
