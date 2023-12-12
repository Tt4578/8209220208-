#include<iostream>
using namespace std;

void Max(int a, int b, int&max, int&min) {
	int t = 2;
	while (t <= a && t <= b) {
		if (a % t == 0 && b % t == 0) {
			max = t;
		}
		t++;
	}
	min = (a * b) / max;

}



int main()
{
	int m, n, max, min;
	cout << "请输入自然数m和n：";
	cin >> m >> n;
	if (m <= 0 || n <= 0) {
		cout << endl << "输入的两个数不符合自然数的要求，无法求最大公约数和最小公倍数" << endl;
	}
	else {
		Max(m, n, max, min);
		cout << "m和n的最大公约数是：" << max << endl;
		cout << "m和n的最小公倍数是：" << min << endl;
	}
	return 0;
}