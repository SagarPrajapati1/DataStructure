#include <bits/stdc++.h>
using namespace std;

vector<int> majority(int arr[], int n) {
	int cnt1 = 0;
	int cnt2 = 0;
	int ele1 = -1;
	int ele2 = -1;

	for (int i = 0; i < n; i++) {
		if(cnt1 == 0) {
			ele1 = arr[i];
			cnt1 = 1;
		}
		else if(cnt2 == 0) {
			ele2 = arr[i];
			cnt2 = 1;
		}
		else if(ele1 == arr[i]) {
			cnt1++;
		}
		else if(ele2 == arr[i]) {
			cnt2++;
		}
		else {
			cnt1--;
			cnt2--;
		}
	}
	vector<int> ans;
	cnt1 = cnt2 = 0;
	for (int i = 0; i < n; i++) {
		if(ele1 == arr[i]) {
			cnt1++;
		}
		else if(ele2 == arr[i]) {
			cnt2++;
		}
	}
	if(cnt1 > n/3 && cnt2 > n/3) {
		ans.push_back(ele1);
		ans.push_back(ele2);
		sort(ans.begin(), ans.end());
		return ans;
	}
	else if(cnt1 > n / 3) {
		return {ele1};
	}
	else if(cnt2 > n / 3 ) {
		return {ele2};

	}
	else {
		return {-1};
	}
}

int main()
{
	int arr[] = {7, 7, 5, 7, 6, 4, 5, 5, 7, 5};
	vector<int> vec;
	vec = majority(arr, 10);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	return 0;
}