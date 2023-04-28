#include <bits/stdc++.h>
using namespace std;

void rightRotate(vector<int> &arr, int k) {
	
	int i = k + 1;
	int j = arr.size() - 1;

	while(i <= j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	i = 0;
	j = k;
	while(i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}

	i = 0;
	j = arr.size() - 1;
	while(i <= j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
}

void print(vector<int> &arr){
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{

	vector<int> arr;
	arr = {1, 2, 3, 4};
	int k = 2;
	rightRotate(arr, k);
	print(arr);
	cout << endl;
	return 0;
}