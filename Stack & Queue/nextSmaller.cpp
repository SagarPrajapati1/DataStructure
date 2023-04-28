#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(int *arr, int size){

	stack<int> st;
	st.push(-1);
	vector<int> ans(size);

	for (int i = size - 1; i >= 0; --i){
		int curr = arr[i];
		
		while(st.top() >= curr){
			st.pop();
		}
		
		ans[i] = st.top();
		st.push(curr);
	}
	return ans;
}

int main()
{
	int arr[4] = {2, 1, 4, 3};
	vector<int> result;
	result = nextSmaller(arr, 4);
	for (int i = 0; i < result.size();  i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;

	return 0;
}