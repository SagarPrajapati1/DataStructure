#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int>&nums, int mid){
	vector<long long> vec(begin(nums), end(nums));

	for (int i = 0; i < nums.size() - 1; i++){
		
		if(vec[i] > mid)
			return false;

		long long buffer = mid - vec[i];
		vec[i + 1] = vec[i + 1] - buffer;
	}

	return vec[nums.size() - 1] <= mid;
}

int minimizeMax(vector<int> nums){

	int s = 0;
	int e = *max_element(nums.begin(), nums.end());

	int res = 0;

	while(s <= e) {

		int mid = s + (e - s) / 2;

		if(isValid(nums, mid)) {
			res = mid;
			e = mid - 1;

		}

		else {
			s = mid + 1;
		}
	}

	return res;
}

int main()
{
	vector<int> nums = {3, 7, 1, 6};
	cout << minimizeMax(nums) << endl; 

	return 0;
}