#include<iostream>
using namespace std;
int main()
{
	int a, b,max=1,min=1,x=2;
	cout << "������������������";
	cin >> a >> b;
	if (a <= 0 || b <= 0) {
		cout << endl << "�������������������������Ҫ���޷������Լ������С������" << endl;
	}
	else {
		while (x <= a && x <= b) {
			if (a % x == 0 && b % x == 0) {
				max = x;
			}
			x++;
		}
		min = (a * b) / max;
		cout << endl << "�����������Լ��Ϊ��" << max << endl;
		cout << "����������С������Ϊ��" << min << endl;
	}
	
	return 0;
}