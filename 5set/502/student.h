#pragma once
#include<iostream>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(string number,const char *name1, char sex1);
private:
	string num;
	char name[20];
	char sex;
};