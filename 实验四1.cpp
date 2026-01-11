#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int b[10];
	int num=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		bool is = true;
		for (int j = 0; j < num; j++)
		{
			if (a[i] == b[j])
				is = false;
		}
		if (is)
		{
			b[num] = a[i];
			num++;
		}
	}
	for(int i=0;i<num;i++)
	{
		cout<<b[i]<<" ";
	}
}