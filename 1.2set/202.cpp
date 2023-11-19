#include<iostream>
using namespace std;
int main()
{
	double x,y;
	cout << "x的值为：";
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - 2 * x;	
		cout << endl << "y的值为：" << y << endl;
	}
	else {
		if (x >= 1 && x < 5) {
			y = 2.0 / (4 * x) + 1;
			cout << endl << "y的值为：" << y << endl;
		}
		else {
			if (x >= 5 && x < 10) {
				y = x * x;
				cout << endl << "y的值为：" << y << endl;
			}
			else {
				cout <<endl<< "x超出x的自定义范围，无y值" << endl;
			}
		}

	}
	return 0;
}