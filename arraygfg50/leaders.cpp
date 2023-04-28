#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int *a, int n, vector<int> &v)
{

    int max = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] >= max)
        {
            max = a[i];
            v.push_back(max);
        }
    }
    reverse(v.begin(), v.end());
    return v;
    cout << endl;
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    vector<int> v;
    leaders(arr, 6, v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}