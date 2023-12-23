#pragma once
#include<iostream>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(string number,const char *name1, char sex1);
private:
	string num;
	char name[20];
	char sex;
};