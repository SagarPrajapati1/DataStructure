#include <bits/stdc++.h>
using namespace std;

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

	int n = spells.size();
	int m = potions.size();
	vector<int> vec;
	int arr[m];

	for (int i = 0; i < n; ++i) {
		int cnt = 0;
		for (int j = 0; j < m; ++j) {
			arr[j] = spells[i] * potions[j];
			if(success <= arr[j]) {
				cnt++;
			}
		}
		vec.push_back(cnt);
	}
	return vec;
}

int main()
{
	vector<int> spells = {3, 1, 2};
	vector<int> potions = {8, 5, 8};
	long long success = 16;

	vector<int> vec;

	vec = successfulPairs(spells, potions, success);

	for(int i = 0; i < vec.size(); ++i) {
		cout << vec[i] << " ";
	}

	cout << endl;

	return 0;
}