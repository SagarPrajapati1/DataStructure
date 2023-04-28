#include <bits/stdc++.h>
using namespace std;

void RotateRight90(vector<vector<int>> &arr)
{
	cout << "Inside Rotate" << endl;
	int n = arr.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) {
			swap(arr[i][j], arr[j][i]);
		}
	}
	for (int i = 0; i < n; i++) {
		// cout << "Inside Reverse" << endl;
		for (int j = 0; j < n / 2; j++) {
			swap(arr[i][n - j - 1],arr[i][j] );
		}
	}
}

void print(vector<vector<int>> arr) {
	cout << "Inside Print" << endl;
	int n = arr.size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] <<" ";
		}
		cout << endl;
	}
}

int main()
{
	vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	RotateRight90(arr);
	print(arr);

	return 0;
}