#include<iostream>
using namespace std;

int main() 
{
	int a,b;
	cout << "����������Ԫ�ظ�����";
	cin >> a;
	int* s = new int[a];
	cout << endl << "����������Ԫ�أ�";
	for (int i = 0; i < a; i++) {
		cin >> s[i];
	}
	for (int m = 0; m < a; m++) {
		for (int n = m + 1; n < a; n++) {
			if (s[m] > s[n]) {
				b = s[m];
				s[m] = s[n];
				s[n] = b;
			}
		}
	}
	cout << endl;
	cout << "��������������Ϊ��";
	int* p_s = s;
	for (int j = 0; j < a; j++) {
		cout << *(p_s + j) << " ";
	}
	delete p_s;
	delete s;
	return 0;
}