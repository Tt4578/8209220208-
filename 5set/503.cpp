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
		cout << "长方柱长宽高为" << length << "," << width << "," << height << "的体积为：" << V << endl;
	}

};
int main() {
	coboid C1;
	coboid C2;
	coboid C3;
	cout << "请输入第一个长方柱的长宽高：";
	C1.get_date();
	cout << "请输入第二个长方柱的长宽高：";
	C2.get_date();
	cout << "请输入第三个长方柱的长宽高：";
	C3.get_date();
	C1.set_date();
	C2.set_date();
	C3.set_date();
	return 0;
}