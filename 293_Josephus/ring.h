#ifndef RING_H_
#define RING_H_
struct Boy{
	int code;
	Boy* next;
};
class Ring{
public:
	Ring(int n,int beg);
	void Count(int m);
	void PutBoy(bool f= 0)const;
	void ClearBoy();
	void Dispaly();
	~Ring();
private:
	Boy* pBegin;
	Boy* pivot;
	Boy* pCurrent;
};
#endif /* RING_H_ */
