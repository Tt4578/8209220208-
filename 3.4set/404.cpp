#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int m = 0; m < size1; m++) {
		list3[m] = list1[m];
	}
	for (int n = 0; n < size2; n++) {
		list3[size1 + n] = list2[n];
	}
	for (int a = 0; a < size1 + size2-1; a++) {
		for (int b = a + 1; b < size1 + size2; b++) {
			if (list3[a] > list3[b]) {
				int c;
				c = list3[a];
				list3[a] = list3[b];
				list3[b] = c;
			}
			else {
				continue;
			}
		}
	}
	for (int t = 0; t < size1 + size2; t++) {
		cout << list3[t] << " ";
	}
}

int main()
{
    int size1, size2;
	cout << "������������Ԫ������������Ԫ�أ�" << endl;
	cout << "Enter list1�� ";
	cin >> size1;
	int* list1 = new int[size1];
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << endl<<"Enter list2��";
	cin >> size2;
	int* list2 = new int[size2];//��vs��devC++���棬���鶨���ʱ�����һЩƫ���vs���治֧�ֱ�����Ϊ�����Сȥ�������飬����dev����֧����������������vs���涨�������С��Ҫ�ñ�����ʱ���������д��int* list1 = new int[size1];ȥ���嶯̬����
	for (int j = 0; j < size2; j++) {
		cin >> list2[j];
	}
	int size3;
	size3 = size1 + size2;
	int* list3 = new int[size3];
	cout << endl << "The merged list is ��";
	merge(list1, size1, list2, size2, list3);
	return 0;
}