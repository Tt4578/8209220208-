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
	cout << "��������Ȼ��m��n��";
	cin >> m >> n;
	if (m <= 0 || n <= 0) {
		cout << endl << "�������������������Ȼ����Ҫ���޷������Լ������С������" << endl;
	}
	else {
		Max(m, n, max, min);
		cout << "m��n�����Լ���ǣ�" << max << endl;
		cout << "m��n����С�������ǣ�" << min << endl;
	}
	return 0;
}