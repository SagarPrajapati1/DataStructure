#include <bits/stdc++.h>
using namespace std;

bool isSmaller(int arr[], int s, int e)
{
	for (int i = s; i <= e; i++)
	{
		if (arr[i] <= arr[e])
		{
			continue;
			return false;
		}
	}
	return true;
}
bool isGreater(int arr[], int s, int e)
{
	int x = s - 1;
	for (int i = s; i < e; i++)
	{
		if (arr[x] <arr[i])
		{
			continue;
			
		}
	}
	return true;
}
int findElement(int arr[], int n)
{
	int temp = -1;

	for (int i = 1; i < n - 1; i++)
	{

		if (arr[i] >= arr[i - 1] && arr[i] <= arr[i + 1])
		{

			if (isSmaller(arr, 0, i) && isGreater(arr, i + 1, n))
			{
				temp = arr[i];
				break;
			}
		}
	}
	return temp;
}

int main()
{
	int arr[] = {5, 6, 4, 1, 7, 12, 9, 1, 4, 1, 11, 5, 7, 1};
	int n = 14;

	cout << isSmaller(arr, 0, 4) << endl;
	cout << isGreater(arr, 5, n) << endl;

	return 0;
}