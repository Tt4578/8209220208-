#include<iostream>
using namespace std;

class coboid {
private:
	int length, width, height;
public:
	void get_date() 
	{
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void set_date()
	{
		int V;
		V = length * width * height;
		cout << "�����������Ϊ" << length << "," << width << "," << height << "�����Ϊ��" << V << endl;
	}

};
int main() {
	coboid C1;
	coboid C2;
	coboid C3;
	cout << "�������һ���������ĳ���ߣ�";
	C1.get_date();
	cout << "������ڶ����������ĳ���ߣ�";
	C2.get_date();
	cout << "������������������ĳ���ߣ�";
	C3.get_date();
	C1.set_date();
	C2.set_date();
	C3.set_date();
	return 0;
}