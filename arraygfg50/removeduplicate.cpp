#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        
    set<int> st;
    for(int i = 0; i < nums.size(); i++){
        st.insert(nums[i]);
		
	}
    int k = 0;
	
	for(auto it : st) {
		cout << it << " ";
		nums.push_back(it);
        k++;
    }
    return k;
}

int main()
{
	vector<int> nums = {1, 1, 2};
	int k = removeDuplicates(nums);
	cout << endl;
	for(auto it : nums){
		cout << it << " ";
	}
	return 0;
}