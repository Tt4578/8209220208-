#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "输入三角形三条边：";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		d = a + b + c;
		cout << endl << "三角形周长为:" << d << endl;
		if (a == b || b == c || a == c) {
			if(a==b&&a==c){
				cout << "三角形为等边三角形" << endl;
			}
			else {
				cout << "三角形为等腰三角形" << endl;
			}
		}
		else {
			cout << "三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << endl << "三边无法组成三角形" << endl;
	}
	return 0;
}