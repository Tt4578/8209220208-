#include<iostream>
using namespace std;

int main() 
{
	bool box[100];
	for (int i = 0; i < 100; i++) {
		box[i] = false;
	}//��һ��
	for (int m = 0; m < 100; m++) {
		for (int n = m; n < 100; n = n + m + 1) {
			if (box[n] == 1) {
				box[n] = false;
			}
			else {
				box[n] = true;
			}
		}
	}
	//ÿ���˵Ĳ���
	cout << "������ѧ�����������̺󣬿��ŵĴ�����Ϊ��";
	for (int j = 0; j < 100; j++) {
		if (box[j] == 1) {
			cout << j + 1 << " ";
		}
		else {
			continue;
		}
	}
	//�ó�
	return 0;
}