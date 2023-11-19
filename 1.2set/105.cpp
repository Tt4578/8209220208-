#include"iostream"
#include<iomanip>
using namespace std;

int main()
{
	float f, c;
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶È£º";
	cin >> f;
	c = (f - 32) / 1.8;
	cout << endl << "ÉãÊÏÎÂ¶È£º" <<fixed<<setprecision(2)<< c << endl;
	return 0;
}