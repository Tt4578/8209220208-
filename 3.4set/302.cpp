#include<iostream>
using namespace std;

bool is_prime(int num) {
	int x ,t=0;
	for (x = 1; x <= num; x++) {
		if (num % x == 0) {
			t++;
		}
	}
	if (t == 2) {
		return true;
	}
	else {
		return false;
	}
}


int main()
{
	int a=1, b=0;
	cout << "前200个素数为：" << endl;
	for (a; b < 200; a++) {
		if (is_prime(a) == 1) {
			b++;
			cout << a << "  ";
			if (b % 10 == 0) {
				cout << endl;
			}
		}
	}

	return 0;
}