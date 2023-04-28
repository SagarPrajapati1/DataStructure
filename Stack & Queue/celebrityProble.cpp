#include <bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int>> &M,int a, int b, int n) {
	
	if(M[a][b] == 1){
		return true;
	}
	else
		return false;
}

int celebrityProblem(vector<vector<int>> &M, int n){
	
	stack<int> st;
	
	//step1: put all elements in stack
	for (int i = 0; i < n; i++){
		st.push(i);
	}

	//step2: get two elements ans compare them
	while(st.size() > 1){
		int a = st.top();
		st.pop();

		int b = st.top();
		st.pop();

		if(knows(M, a, b, n)){
			st.push(b);
		}
		else {
			st.push(a);
		}
	}
	int candidate = st.top();

	//step3: single element in stack is potential celebrity
	// so verify it

	int zeroCount = 0;
	for (int i = 0; i < n; i++) {
		if(M[candidate][i] == 0){
			zeroCount++;
		}
	}
	if(zeroCount != n){
		return -1;
	}

	int oneCount = 0;
	for (int i = 0; i < n; i++){
		if(M[i][candidate] == 1){
			oneCount++;
		}
	}
	if(oneCount != n-1){
		return -1;
	}

	return candidate;
	
	/* 	bool rowCheck = false;
		int zeroCount = 0;
		for (int i = 0; i < n; i++) {
			if(M[candidate][i] == 0){
				zeroCount++;
			}
		}

		// all zeros
		if(zeroCount == n){
			rowCheck = true;
		}

		bool colCheck = false;
		int oneCount = 0;
		for (int i = 0; i < n; i++){
			if(M[i][candidate] == 1){
				oneCount++;
			}
		}

		//all ones
		if(oneCount == n-1){
			colCheck = true;
		}
		if(rowCheck == true && colCheck == true){
			return candidate;
		}
		else {
			return -1;
		} */
}

int main()
{
	int n;
	cin >> n;
	vector < vector<int>> M = {{0,0,1},{0,0,1 },{0,0,0}};
	int celebrity = celebrityProblem(M, n);
	cout << "Celebrity is  : " << celebrity << endl;

	return 0;
}