#include<iostream>
using namespace std;
int main()
{
	int a, c;
	char b;
	cout << "请输入算式：";
	cin >> a >> b >> c;
	switch (b)
	{
	    case '+':cout << endl << a << "+" << c << "=" << a + c << endl; break;
		case '-':cout << endl << a << "-" << c << "=" << a - c << endl; break;
		case '*':cout << endl << a << "*" << c << "=" << a * c << endl; break;
		case '%':cout << endl << a << "%" << c << "=" << a % c << endl; break;
		case '/': {
			if (c == 0) {
				cout << endl << "除数不能为0，算式错误" << endl;
			}
			else {
				cout << endl << a << "/" << c << "=" << a / c << endl;
			}
			break;
		}

		default:cout << endl << "运算符非法，算式不成立" << endl;
		break;
	}
	return 0;
}