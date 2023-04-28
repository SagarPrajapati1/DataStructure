#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[6] = {2, 5, 5, 5, 8, 7};
	int n = 6;
	int k = 5;
	int i = 0;
	int j = n - 1;

	while (i < n - 1 && j > i)
	{

		if (arr[j] == k)
		{
			cout << j;

			j--;
		}
		if (arr[i] == k)
		{

			cout << i;
			i++;
		}
	}

	return 0;
}