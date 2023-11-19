#include<iostream>
using namespace std;
int main()
{
	int i,x;
	for (i = 1; i <= 5; i++) {
		for (x = 1; x <= i; x++) {
			cout << "*";
		}
		cout<<endl;
	}

	return 0;
}