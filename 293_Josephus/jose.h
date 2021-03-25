#ifndef JOSE_H_
#define JOSE_H_
class Jose{
public:
	Jose(int boys = 10, int begin = 1, int m = 3){
		numofBoys = boys;
		beginPos = begin;
		interval = m;
	}
	void Initial();
	void GetWinner();
private:
	int numofBoys;
	int beginPos;
	int interval;
};

#endif /* JOSE_H_ */
