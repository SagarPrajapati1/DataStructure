#include <bits/stdc++.h>
using namespace std;

// Not an optimal approach
vector<int> firstNegativeInteger(int *arr, int size, int k){
	deque<int> dq;

	// for k size window
	for (int i = 0; i < k; ++i){
		if(arr[i] < 0 ){
			dq.push_back(i);
		}
	}

	// create answer array
	vector<int> ans;
	if(dq.size() > 0){
		ans.push_back(arr[dq.front()]);
	}
	else {
		ans.push_back(0);
	}

	//remaining elements
	for (int i = k; i < size; ++i){
		
		// removal
		if(!dq.empty() && i - dq.front() >= k){
			dq.pop_front();
		}

		//addition
		if(arr[i] < 0){
			dq.push_back(i);
		}

		if(dq.size() > 0){
			ans.push_back(arr[dq.front()]);
		}
		else {
			ans.push_back(0);
		}
	}
	return ans;
}

int main()
{
	int arr[] = {-8, 2, 3, -6, 10};
	int k = 2;
	int size = 5;

	vector<int> NegativeInteger;
	NegativeInteger = firstNegativeInteger(arr, size, k);

	for (int i = 0; i < NegativeInteger.size(); ++i){
		cout << NegativeInteger[i] << " ";
	}
	cout << endl;

	return 0;
}