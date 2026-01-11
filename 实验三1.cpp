#include<iostream>
using namespace std;
int app(int x, int y)
{
	while (y != 0)
	{
		int z = y;
		y = x % y;
		x = z;
	}
	return x;
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << app(m, n) << endl;
	cout << m * n / app(m, n) << endl;
}