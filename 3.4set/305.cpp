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
	cout << "���ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ�����ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ����ˣ�����10�죬����ֻʣ���һ�����ӣ��ʣ���һ����ӹ�ժ��������" << endl;
	cout <<"��һ����ӹ�ժ��" << fac(day)<<"����" << endl;

	return 0;
}