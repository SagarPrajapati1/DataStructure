#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int index, int N, vector<string> &ans, string output, string mapping[]){

    if(index >= N) {
        ans.push_back(output);
        return;
    }

    int number =  a[index];
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);
        solve(a, index + 1, N, ans, output, mapping);
        output.pop_back();
    }
}

vector<string> phone(int a[], int N) {

    vector<string> ans;

    if(N == 0)
        return ans;
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string output;
    int index = 0;
    solve(a, index, N, ans, output, mapping);
    return ans;
}

int main()
{
    int arr[] = {2, 3};
    int n = 2;
    phone(arr, n);

    return 0;
}