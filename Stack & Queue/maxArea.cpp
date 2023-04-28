#include <bits/stdc++.h>
using namespace std;
#define MAX = 100

vector<int> nextSmaller(int *arr, int n){
	stack<int> st;
	st.push(-1);
	vector<int> ans(n);

	for (int i = n - 1; i >= 0; i--){
		int curr = arr[i];
		while(st.top() >= curr) {
			st.pop();
		}

		ans[i] = st.top();
		st.push(curr);
	}
	return ans;
}

vector<int> prevSmaller(int *arr, int n){
	stack<int> st;
	st.push(-1);

	vector<int> ans(n);

	for (int i = 0; i < n; i++){
		int curr = arr[i];

		while(st.top() >= curr){
			st.pop();
		}

		ans[i] = st.top();
		st.push(curr);
	}
	return ans;
}

int largestArea(int *heights, int n){
	
	//next smaller element
	vector<int> next;
	next = nextSmaller(heights, n);

	//previous smaller element
	vector<int> prev;
	prev = prevSmaller(heights, n);

	int area = INT_MIN;

	for (int i = 0; i < n; i++){
		int l = heights[i];
		
		if(next[i] == -1)
			next[i] = n;

		int b = next[i] - prev[i] - 1;

		area = max(area, (l * b));
	}
	return area;
}

int maxArea(int M[100][100], int n, int m) {
	
	// area of first row
	int area = largestArea(M[0], m);

	//for remaining rows
	for (int i = 1; i < n; i++){
		for (int j = 0; j < m; j++){

			// if current element is non zero then add 
			if(M[i][j] == 0)
			// add the elements 
				M[i][j] = M[i][j] + M[i - 1][j];

			else  
				M[i][j] = 0;
		}
		//compare area
		area = max(area, largestArea(M[i], m));
	}
	return area;
}
int main()
{


return 0;
}