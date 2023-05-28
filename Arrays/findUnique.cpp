#include <bits/stdc++.h>
using namespace std;

int Unique(int arr[], int n)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans = ans ^ arr[i];
	}
	return ans;
}

// using recursion
int unique(int *arr, int n)
{

	// sort the array
	// sort(arr, arr + n);

	// create an count array to count of number
	int count[n] = {0};

	for (int i = 0; i < n; ++i)
	{
		count[arr[i]]++;
	}

	for (int i = 0; i < n; ++i)
	{
		if (count[i] == 1)
		{
			return i;
		}
	}
	return 0;
}
// bool Unique(vector<int>& arr ) {
//     unordered_map<int, int> mp;
//     unordered_set<int> st;

//     for(auto i : arr) {
//         mp[i]++;
//     }
//     for(auto i : mp) {
//         st.insert(i.second);

//     }
//     if(mp.size() == st.size()) {
//         return true;
//     }
//     return false;
// }
int main()
{
	vector<int> arr = {2, 5, 5, 3, 3, 3};
	int a[6] = {5, 5, 2, 2, 2, 3};
	cout << unique(a, 6) << endl;

	return 0;
}