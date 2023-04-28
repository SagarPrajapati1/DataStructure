#include <bits/stdc++.h>
using namespace std;

void InsertElement(stack<int> &st, int element){
	
	// base case
	if(st.empty()){
		st.push(element);
		return;
	}

	// not Empty
	//Recursive call
	int num = st.top();
	st.pop();
	InsertElement(st, element);
	st.push(num);
}

int main()
{
	stack<int> st;
	int n;

	cin >> n;

	st.push(2);
	st.push(3);
	st.push(4);
	InsertElement(st, n);
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}

	return 0;
}