#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(int *arr, int size){

	cout << "Nextsmaller" << endl;
	stack<int> st;
	st.push(-1);
	vector<int> ans(size);

	for (int i = size- 1; i >= 0; i--){
		int curr = arr[i];
		
		//pop krao jb tk small element n mil jaye 
		while(st.top() != -1 && arr[st.top()] >= curr) {
			st.pop();
		}
		// yhn aa gye h to ans is stack ka top
		ans[i] = st.top();
		st.push(i);
	}
	return ans;
}

vector<int> prevSmaller(int *arr, int size){
	cout << "PrevSmaller" << endl;
	stack<int> st;
	st.push(-1);

	vector<int> ans(size);

	for (int i = 0; i < size; i++) {
		int curr = arr[i];

		while(st.top() != -1 && arr[st.top()] >= curr){
			st.pop();
		}

		ans[i] = st.top();
		st.push(i);
	}
	return ans;
}
int largestArea(int *arr, int size){

	cout << "largest Area" << endl;
	vector<int> next;
	next = nextSmaller(arr, size);

	vector<int> prev;
	prev = prevSmaller(arr, size);

	int area = INT_MIN;

	for (int i = 0; i < size; i++){
		int l = arr[i];
		
		if(next[i] == -1){
			next[i] = size;
		}
		
		int b = next[i] - prev[i] - 1;
		
		int newArea = l * b;
		area = max(newArea, area);
	}
	return area;
}
int main()
{
	int arr[6] = {2, 1, 5, 6, 2, 3};
	int area = largestArea(arr, 6);

	cout << "Area is " << area << endl;
	return 0;
}