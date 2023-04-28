#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int>  &v) {
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << endl;
}

void solve(vector<int> nums, int index, vector<int> output, vector<vector<int>> &ans)
{

    // base case bn gya
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude krlo

    solve(nums, index + 1, output, ans);

    // include krlo
    int element = nums[index];
    output.push_back(element);
    solve(nums, index + 1, output, ans);
    // print the output
    printVec(output);
    
}
vector<vector<int>> subsets(vector<int>& nums) {

    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, index, output, ans);
    
    return ans;
}
int main()
{

    vector<int> v = {1, 2, 3};

    vector<vector<int>> ans = {subsets(v)};

    //printVec(ans);

    return 0;
}