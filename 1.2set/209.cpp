#include<iostream>
using namespace std;
int main()
{
	double a,b,c,sum,day;
	a = 2;
	day = 0;

	for (c = 2; c <= 100; c = c + a) {
		sum = c * 0.8;
		day++;
		a = 2 * a;
	}
	b = sum / day;
	cout << "苹果每个 0.8 元，第一天买 2 个，第二天开始，每天买前一天的 2 倍，直到购买的苹果数不超过100的最大值，每天平均花" << b << "元钱" << endl;
	return 0;
}