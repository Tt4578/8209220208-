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
	cout << "ƻ��ÿ�� 0.8 Ԫ����һ���� 2 �����ڶ��쿪ʼ��ÿ����ǰһ��� 2 ����ֱ�������ƻ����������100�����ֵ��ÿ��ƽ����" << b << "ԪǮ" << endl;
	return 0;
}