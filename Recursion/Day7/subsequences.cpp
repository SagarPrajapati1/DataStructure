#include <bits/stdc++.h>
using namespace std;

void printVec(string  v) {
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << endl;
}

void solve(string str, int index, string output, vector<string> &ans)
{

    // base case
    if (index >= str.size())
    {
        if (output.size() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exlude krlo
    solve(str, index + 1, output, ans);

    // include krlo
    char element = str[index];
    output.push_back(element);
    solve(str, index + 1, output, ans);
    // sort(output, output.size()+1);
    printVec(output);
}

vector<string> subsequences(string str)
{

    vector<string> ans;
    string output;
    int index = 0;
    solve(str, index, output, ans);
    return ans;
}
int main()
{
    string str = "abc";
    subsequences(str);

    return 0;
}