#include <iostream>
#include"student.h"//��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(string number,const char* name1, char sex1)
{
    num = number;
    strcpy_s(name, name1);
    sex = sex1;
    
}
