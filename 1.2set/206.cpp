#include<iostream>
using namespace std;
int main()
{
	int a, b,max=1,min=1,x=2;
	cout << "请输入两个正整数：";
	cin >> a >> b;
	if (a <= 0 || b <= 0) {
		cout << endl << "输入的两个数不符合正整数的要求，无法求最大公约数和最小公倍数" << endl;
	}
	else {
		while (x <= a && x <= b) {
			if (a % x == 0 && b % x == 0) {
				max = x;
			}
			x++;
		}
		min = (a * b) / max;
		cout << endl << "两个数的最大公约数为：" << max << endl;
		cout << "两个数的最小公倍数为：" << min << endl;
	}
	
	return 0;
}