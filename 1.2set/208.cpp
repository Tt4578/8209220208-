#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入a的值：";
	cin >> a;
	if (a < 0) {
		cout << endl << "a没有平方根" << endl;
	}
	else
	{
		c = a;
		b = (c + a / c) / 2;
		while (fabs(b - c) >= 0.00001) {
			c = b;
			b = (c + a / c) / 2;
		}
		cout << endl << "a的平方根为:" << b << endl;
	}	
	return 0;
}