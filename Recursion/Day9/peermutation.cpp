#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> s, int index, vector<vector<int>> &ans)
{
    if (index >= s.size())
    {
        ans.push_back(s);
        return;
    }
    for (int i = index; i < s.size(); i++)
    {
        swap(s[i], s[index]);
        solve(s, index + 1, ans);
        swap(s[i], s[index]);
    }
}

vector<vector<int>> permutation(vector<int> &s)
{
    int index = 0;
    vector<vector<int>> ans;

    solve(s, index, ans);
    return ans;
}
int main()
{
    vector<int> s = {2, 3, 4};
    vector < vector<int>> ans;
    ans = permutation(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}