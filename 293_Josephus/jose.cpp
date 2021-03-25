#include "jose.h"
#include "ring.h"
#include <iostream>
#include <cstdlib>

using namespace std;


void Jose::Initial(){
	int num,begin,m;
	cout << "Please input the number of boys,"\
			"begin position,interval per count :\n";
	cin >> num >> begin >> m;
	if(num < 2){
		cerr << "bad number of boys.\n";
		exit(1);
	}
	if(begin < 0 || begin > num){
		cerr << "bad begin position.\n";
		exit(1);
	}
	if(m < 1 || m > num){
		cerr << "bad interval number.\n";
		exit(1);
	}
	numofBoys = num;
	beginPos = begin;
	interval = m;
}
void Jose::GetWinner(){
	Ring x(numofBoys,beginPos);
	for(int i = 1; i< numofBoys; i++){
		x.Count(interval);
		x.PutBoy();
		x.ClearBoy();
	}
	x.Count(1);
	cout << "\nthe winner is";
	x.PutBoy(0);
	cout << "\n";
}
