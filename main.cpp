#include <iostream>             //将类声明头文件包含进来
#include "student.h"
int main()
{
	Student stud;
	stud.set_value(007, "tag", 'm');
		stud.display();
	return 0;
}