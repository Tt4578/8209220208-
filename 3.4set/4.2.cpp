#include<iostream>
#include"math.h"
using namespace std;

int parseHex(const char* const hexString) {
	int a,b=0;
	a = strlen(hexString);
	int* s = new int[a];
	for (int i = a; i >0; i--) {
		if (hexString[a - i] >= 'A' && hexString[a - i] <= 'F') {
			s[a - i] = (static_cast<int>(hexString[a - i]-'A')+10) * (pow(16, i - 1));
		}
		else {
			s[a - i] = (static_cast<int>(hexString[a - i]-'0')) * (pow(16, i - 1));
		}
		b = b + s[a - i];
	}
	return b;
}

int main() 
{
	char string[999];
	cout << "���������ַ�����ʽ��ʾ��һ��16��������";
	cin.getline(string, 999);
	cout << endl << "ת��Ϊ10���ƣ�" << parseHex(string) << endl;
	return 0;
}