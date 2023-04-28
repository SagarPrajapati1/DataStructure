#include <bits/stdc++.h>
using namespace std;

vector<int> kLargest(int arr[], int n, int k) {
	
	sort(arr, arr + n);
	vector<int> vec;
	int cnt = 0;
	int i = 1;
	while(cnt != k){
		vec.push_back(arr[n - i]);
		cnt++;
		i++;
	}
	/* if(vec.size() == k) {
		return vec;
	} */
	return vec;
}

int main()
{

	int N = 5, K = 2;
	int Arr[] = {12, 5, 787, 1, 23};
	vector<int> ans(K);
	ans = kLargest(Arr, N, K);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";

	}
	cout << endl;

	return 0;
}