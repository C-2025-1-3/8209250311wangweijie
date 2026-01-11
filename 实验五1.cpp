#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:            // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:             // 成员函数为公用的
	void Cin()
	{
		cin >> hour >> minute >> sec;
	}
	void Cout()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
	int main()
	{
		Time t1;
		t1.Cin();
		t1.Cout();
	}


