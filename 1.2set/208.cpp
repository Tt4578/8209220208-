#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "������a��ֵ��";
	cin >> a;
	if (a < 0) {
		cout << endl << "aû��ƽ����" << endl;
	}
	else
	{
		c = a;
		b = (c + a / c) / 2;
		while (fabs(b - c) >= 0.00001) {
			c = b;
			b = (c + a / c) / 2;
		}
		cout << endl << "a��ƽ����Ϊ:" << b << endl;
	}	
	return 0;
}