#ifndef FILO_H_
#define FILO_H_

struct Node{
	int a;
	Node* next;
};

class FILO{
public:
	FILO();
	~FILO();
	void put(int item);
	int get();
	Node* ptr;
};

#endif /* FILO_H_ */
