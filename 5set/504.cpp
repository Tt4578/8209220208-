#include<iostream>
using namespace std;

class student {
public:
	string id;
	double score;
	double Max;
	void max(student *p) {
		student* i;
		student* j;
			for (i = p,j = p; i <p+4; i++) {
			if ((i->score) > Max) {
				Max = (i->score);
				j = i;
			}
		}
		cout << "�ɼ���ߵ�ѧ��ѧ��Ϊ��" << (j->id) << endl << "�ɼ�Ϊ��" << Max << "��" << endl;
	}
};

int main() {
	student s[5];
	cout << "��������������ѧ����ѧ�źͳɼ���" << endl;
	for (int n = 0; n < 5; n++) {
		cin >> s[n].id >> s[n].score;
	}
	cout << endl;
	s[0].max(s);
	return 0;
}