#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(string s, set<string> &ans, int index)
    {
        // base case
        if (index >= s.length())
        {
            ans.insert(s);
            return;
        }
        for (int j = index; j < s.length(); j++)
        {
            swap(s[index], s[j]);
            solve(s, ans, index + 1);
            // swap(s[index],s[j]);// BACKTRACKING
        }
    }

public:
    vector<string> find_permutation(string S)
    {
        // to store the answer
        set<string> ans;
        solve(S, ans, 0);
        vector<string> final_ans;
        final_ans.assign(ans.begin(), ans.end());
        // sort(ans.begin(),ans.end());
        return final_ans;
    }
};


int main() {

    string S = "ABC";

    Solution find;

    find.find_permutation(S);

    return 0;
}
