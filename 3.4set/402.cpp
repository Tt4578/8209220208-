#include<iostream>
using namespace std;

const int listSize = 10;
void sort(double list[]) {

	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < (listSize - 1); j++)
			if (list[j] > list[j + 1])
			{
				double t;
				t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				changed = true;
			}
	} while (changed);
}

int main()
{
	double list[listSize];
	cout << "请输入十个数；";
	for (int i = 0; i < listSize; i++) {
		cin >> list[i];
	}
	sort(list);
	cout << endl << "起泡排序后：";
	for (int j = 0; j < listSize; j++) {
		cout << list[j] << " ";
	}
	return 0;
}