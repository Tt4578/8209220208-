#include<iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x_, int y_) :x(60), y(80) {}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << "(" << x << "，" << y << "）" << endl;
	}
};

int main() {
	int m=0, n=60;
	Point p(m, n);
	cout << "修改前的坐标为：";
	p.display();
	cout << "x,y分别需要修改的值：";
	cin >> m >> n;
	p.setPoint(m, n);
	cout << "修改后的坐标为：";
	p.display();
	return 0;
}