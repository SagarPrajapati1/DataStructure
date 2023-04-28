#include <bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(int *arr, int size) {
	
	stack<int> st;
	st.push(-1);
	vector<int> vec(size);

	for (int i = 0; i < size; i++){
		int curr = arr[i];
		
		while(st.top() >= curr){
			st.pop();
		}
		
		vec[i] = st.top();
		st.push(curr);
	}
	return vec;
}

int main()
{

	int arr[4] = {2,1,4,3};
	vector<int> ans;
	ans = prevSmaller(arr, 4);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}