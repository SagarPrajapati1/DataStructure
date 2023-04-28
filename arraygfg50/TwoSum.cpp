#include <bits/stdc++.h>
using namespace std;

/* 	Naive approach
	Time complexity(N^2) Space(1)
	vector<int> Two_Sum(int arr[], int n, int target){
	vector<int> vec;
	for(int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] + arr[i] == target) {
				vec.emplace_back(i);
				vec.emplace_back(j);
				break;
			}
		}
		if(vec.size() == 2)
			break;
	}
	return vec;	
} */

vector<int> Two_Sum(vector<int> &arr, int n, int target) {

	int i = 0;
	int j = n - 1;
	vector<int> vec, store;
	int n1;
	int n2;
	store = arr;

	sort(store.begin(), store.end());

	while(i < j) {
		if(store[i] + store[j] == target) {
			n1 = store[i];
			n2 = store[j];
			break;
		}
		else if(store[i] + store[j] > target)
			j--;
		
		else {
			i++;
		}
	}

	for (int i = 0; i < n; i++) {
		if (n1 == arr[i]) {
				vec.emplace_back(i);
		}
		else if(n2 == arr[i]) {
				vec.emplace_back(j);
		}
	}
	return vec;
}

int main()
{
	vector<int> arr = {2, 7, 11, 15};

	vector<int> ans;
	ans = Two_Sum(arr, 4, 9);

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}