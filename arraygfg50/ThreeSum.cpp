#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> three_Sum(vector<int> &nums) {
	int i = 0;
	set<vector<int>> st;
	vector<vector<int>> vec;
	sort(nums.begin(), nums.end());

	while (i < nums.size()) {
		int j = i + 1;
		int k = nums.size() - 1;

		while(j < k) {
			int sum = nums[i] + nums[j] + nums[k];
			if(sum == 0) {
				st.insert({nums[i], nums[j], nums[k]});
				k--;
				j++;
			}
			else if(sum > 0) {
				k--;
			}
			else {
				j++;
			}
		}
		i++;
	}

	for(auto it : st) {
		vec.push_back(it);
	}
	return vec;
}

int main()
{
	vector<int> nums = {-1, 0, 1, 2, -1, -4};
	vector<vector<int>> vec;
	vec = three_Sum(nums);
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec[0].size(); j++){
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}