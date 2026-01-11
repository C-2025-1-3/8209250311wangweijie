#include<iostream>
using namespace std;
bool is_prime(int num)
{
	
	if (num <= 1) return false;
	for (int i = 2; i <= num/2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int number = 0;
	for(int i=2;number<+200;i++)
		if (is_prime(i))
		{
						cout << i << " ";
						number++;
						if (number % 10 == 0)
						{
							cout << endl;
						}
		}
	
}
