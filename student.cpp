#include <iostream>
#include"student.h"            //不要漏写此行，否则编译通不过
using namespace std;           // 添加此行以解决cout和endl未定义的问题

void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "nam:" << name << endl;
    cout << "sex:" << sex << endl;
}

void Student::set_value(int x, char nam[], char z)
{
    num = x;
    for(int i=0; nam[i] != '\0'; i++)
    {
        name[i] = nam[i];
	}
    sex = z;
}
