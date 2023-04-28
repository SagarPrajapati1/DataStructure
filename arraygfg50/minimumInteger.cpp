#include <bits/stdc++.h>
using namespace std;

int minimumInteger(vector<int> arr, int N){
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += arr[i];
	}
	int mini = INT_MAX;
	for (int i = 0; i < N; i++){
		if(sum <= N * arr[i]) {
			mini = min(arr[i], mini);
		}
	}
	return mini;
}

int main()
{

	vector<int> arr = {9, 8, 2};
	cout << minimumInteger(arr, 3) << endl;

	return 0;
}