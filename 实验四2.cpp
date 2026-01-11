#include<iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <n-1; j++)
			if (arr[j] > arr[j + 1])
			{
				swap (arr[j] , arr[j + 1]);
				changed = true;
			}
	} while (changed);
}

int main()
{
	int a[10] = { 25,55, 68, 51, 45, 25, 36, 14, 58, 65 };
	int n = sizeof(a) / sizeof(a[0]);
	bubblesort(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] <<" " << endl;
}