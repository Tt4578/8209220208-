#include"iostream"
#include<iomanip>
using namespace std;

int main()
{
	float f, c;
	cout << "�����뻪���¶ȣ�";
	cin >> f;
	c = (f - 32) / 1.8;
	cout << endl << "�����¶ȣ�" <<fixed<<setprecision(2)<< c << endl;
	return 0;
}