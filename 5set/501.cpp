#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void set_time(int h, int m, int s)
	{
		hour = h;
		minute = m;
		sec = s;
	}
	void get_time() 
	{
		cout << hour << "：" << minute << "：" << sec << endl;
	}
};

int main()
{
	Time t1;       //定义t1为Time类对象
	int H, M, S;
	cout << "请输入时间：";
	cin >> H;      //输入设定的时间 
	cin >> M;
	cin >> S;
	t1.set_time(H, M, S);
	cout << endl;
	t1.get_time();
	return 0;
}