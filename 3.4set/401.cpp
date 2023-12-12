#include<iostream>
using namespace std;

int main() 
{
	int num[10];
	cout << "请输入十个数：";
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	cout << endl << "这十个数中不同的数有：";
	cout << num[0] << " ";
	for (int m = 1; m < 10; m++) {
		for (int n =m-1; n>=0; n--) {
			if (num[m] != num[n]) {
				if (n == 0) {
					cout << num[m] << " ";
				}
				else {
					continue;
				}
			}
			else {
				break;
			}
		}
	}
	return 0;
}