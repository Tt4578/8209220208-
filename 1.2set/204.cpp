#include<iostream>
using namespace std;
int main()
{
	int a, c;
	char b;
	cout << "��������ʽ��";
	cin >> a >> b >> c;
	switch (b)
	{
	    case '+':cout << endl << a << "+" << c << "=" << a + c << endl; break;
		case '-':cout << endl << a << "-" << c << "=" << a - c << endl; break;
		case '*':cout << endl << a << "*" << c << "=" << a * c << endl; break;
		case '%':cout << endl << a << "%" << c << "=" << a % c << endl; break;
		case '/': {
			if (c == 0) {
				cout << endl << "��������Ϊ0����ʽ����" << endl;
			}
			else {
				cout << endl << a << "/" << c << "=" << a / c << endl;
			}
			break;
		}

		default:cout << endl << "������Ƿ�����ʽ������" << endl;
		break;
	}
	return 0;
}