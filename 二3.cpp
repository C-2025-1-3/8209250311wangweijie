#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << a + b + c;
		if(a==b||b==c||a==c)
			cout << "	yes";
	}
	else
		cout << "error";
	return 0;
}