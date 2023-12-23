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
		cout << "成绩最高的学生学号为：" << (j->id) << endl << "成绩为：" << Max << "分" << endl;
	}
};

int main() {
	student s[5];
	cout << "请依次输入五名学生的学号和成绩：" << endl;
	for (int n = 0; n < 5; n++) {
		cin >> s[n].id >> s[n].score;
	}
	cout << endl;
	s[0].max(s);
	return 0;
}