#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
	void Set(double ix,double iy){
		x = ix;
		y = iy;
	}
	double xOffset(){
		return x;
	}
	double yOffset(){
		return y;
	}
	double angle(){
		return (180/3.14159) * atan2(x,y);
	}
	double radius(){
		return (x * x + y * y);
	}
protected:
	double x;
	double y;
};

int main()
{
	Point p;
	double x,y;

	cout <<"Enter x and y:\n";
	cin >> x >> y;

	p.Set(x,y);
	cout <<"angle = " <<p.angle()
			<<",radius = " <<p.radius()
			<<",x.offset = "<<p.xOffset()
			<<",y.offset = "<<p.yOffset() << endl;
	return 0;
}

