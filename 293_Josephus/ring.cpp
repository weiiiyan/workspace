#include "ring.h"
#include <iostream>
#include <iomanip>

using namespace std;

Ring::Ring(int n,int beg){
	pBegin = new Boy[n];
	pCurrent = pBegin;
	for(int i = 1; i <= n; i++){
		pBegin[i - 1].next = &pBegin[i % n];
		pBegin[i - 1].code = i;
		PutBoy();
		pCurrent = pCurrent->next;
	}
	cout << endl;
	pCurrent = pBegin + beg -1;
}
void Ring::Count(int m){
	for(int i = 1; i <= m; i++){
		pivot = pCurrent;
		pCurrent = pCurrent->next;
	}
}
void Ring::PutBoy(bool f)const{
	static int numInLine;
	if(f){
		numInLine = 0;
		return ;
	}
	if(numInLine++ % 10 == 0)
		cout << endl;
	cout << setw(4) << pCurrent->code;
}
void Ring::ClearBoy(){
	pivot->next = pCurrent->next;
}
void Ring::Dispaly(){
	for(Boy* pB = pCurrent; (pCurrent = pCurrent->next) != pB; )
		PutBoy(0);
	PutBoy(1);
}
Ring::~Ring(){
	delete[] pBegin;
}
