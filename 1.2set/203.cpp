#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "���������������ߣ�";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		d = a + b + c;
		cout << endl << "�������ܳ�Ϊ:" << d << endl;
		if (a == b || b == c || a == c) {
			if(a==b&&a==c){
				cout << "������Ϊ�ȱ�������" << endl;
			}
			else {
				cout << "������Ϊ����������" << endl;
			}
		}
		else {
			cout << "�����β��ǵ���������" << endl;
		}
	}
	else {
		cout << endl << "�����޷����������" << endl;
	}
	return 0;
}