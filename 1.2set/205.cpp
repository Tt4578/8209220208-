#include<iostream>
using namespace std;
int main()
{
	char c;
	int letter=0, space=0, number=0, other=0;
	cout << "������һ���ַ���";
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
	cout << endl << "�����ַ���Ӣ����ĸ�У�" << letter << "  �ո��У�" << space << "  �����У�" << number << "  �����ַ��У�" << other << endl;
	
	return 0;
}