#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
		cout << hour << "��" << minute << "��" << sec << endl;
	}
};

int main()
{
	Time t1;       //����t1ΪTime�����
	int H, M, S;
	cout << "������ʱ�䣺";
	cin >> H;      //�����趨��ʱ�� 
	cin >> M;
	cin >> S;
	t1.set_time(H, M, S);
	cout << endl;
	t1.get_time();
	return 0;
}