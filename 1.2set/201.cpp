#include<iostream>
using namespace std;
int main()
{
	char x,y;
	cout << "������һ���ַ���" << endl;
	cin >> x;
	if (x >= 'a' && x <= 'z')
	{
		y = (x - 32);
		cout << endl<<y << endl;
	}
	else {
			cout << (x+1) << endl;
	}
	return 0;
}
