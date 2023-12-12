#include<iostream>
using namespace std;
int fac(int day) {
	int n;
	if (day == 10) {
		n = 1;
	}
	else {
		n = (fac(day+1)+1)*2;
	}
	return n;
}
int main() 
{
	const int day_max = 10;
	int day=1;
	cout << "猴子第一天摘若干桃子，当即吃了一半，还不过瘾，又吃了一个。第二天又将剩下的桃子吃掉一半，又多吃一个，以后每天如此，到第10天，发现只剩最后一个桃子，问，第一天猴子共摘多少桃子" << endl;
	cout <<"第一天猴子共摘了" << fac(day)<<"个桃" << endl;

	return 0;
}