#include<iostream>
using namespace std;
int main()
{
	char c;
	int letter=0, space=0, number=0, other=0;
	cout << "请输入一行字符：";
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z' )||( c >= 'A' && c <= 'Z')) {
			letter++;
		}
		else {
			if (c >= '0' && c <= '9') {
				number++;
			}
			else {
				if (c == ' ') {
					space++;
				}
				else {
					other++;
				}
			}
		}
	}
	cout << endl << "这行字符中英语字母有：" << letter << "  空格有：" << space << "  数字有：" << number << "  其他字符有：" << other << endl;
	
	return 0;
}