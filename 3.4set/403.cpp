#include<iostream>
using namespace std;

int main() 
{
	bool box[100];
	for (int i = 0; i < 100; i++) {
		box[i] = false;
	}//第一步
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
	//每个人的操作
	cout << "当所有学生完成这个过程后，开着的储物柜号为：";
	for (int j = 0; j < 100; j++) {
		if (box[j] == 1) {
			cout << j + 1 << " ";
		}
		else {
			continue;
		}
	}
	//得出
	return 0;
}