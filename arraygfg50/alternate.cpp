#include <bits/stdc++.h>
using namespace std;

void rearrange(int *arr, int n)
{

	int i = 0;
	vector<int> a;
	vector<int> b;
	while (arr[i] > 0 && i < n)
	{
		a.push_back(arr[i]);
		i++;
	}
	int j = 0;
	while (arr[j] < 0 && j < n)
	{
		b.push_back(arr[j]);
		j++;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = a[i];
		i++;
		arr[i] = b[i];
	}
}

int main()
{
	int arr[9] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
	rearrange(arr, 9);
	for (int i = 0; i < 9; i++){
		cout << arr[i] << " ";

	}
	cout << endl;

	return 0;
}