#include <iostream>

using namespace std;

class Samp{
public:
	void Setij(int a,int b){
		i = a;
		j = b;
	}
	~Samp(){
		cout << "Destroying.." << i << endl;
	}

	int GetMulti(){
		return i*j;
	}
private:
	int i;
	int j;
};
int main(){
	Samp *p;
	p = new Samp[10];
	if(!p){
		cout << "Allocat error\n";
		return 0;
	}
	for(int j = 0; j < 10; j++){
		p[j].Setij(j,j);
	}
	for(int k = 0; k < 10; k++){
		cout << "Multi[" << k << "] is: "
				<< p[k].GetMulti() << endl;
	}
	delete []p;
}
