#include "filo.h"
#include <iostream>

using namespace std;

FILO::FILO():ptr(NULL){}
FILO::~FILO(){
	Node* q = ptr;
	while(ptr != NULL){
		q = ptr;
		ptr = ptr->next;
		delete q;
	}
}
void FILO::put(int item){
	Node* q = new Node;
	q->a = item;
	q->next = ptr;
	ptr = q;
}
int FILO::get(){
	if(ptr == NULL){
		cout << "FILO is NULL\n";
		return 0;
	}
	int a = ptr->a;
	Node* q = ptr;
	ptr = ptr->next;
	delete q;
	return a;
}
