#include <bits/stdc++.h>
using namespace std;

void InsertAtBottom(stack<int> &st, int element) {
	//base case
	if(st.empty()){
		st.push(element);
		return;
	}

	int num = st.top();
	st.pop();

	//Recursive call
	InsertAtBottom(st, element);
	st.push(num);
}

void ReverseStack(stack<int> &st) {
	// base case
	if(st.empty()){
		return;
	}

	int top = st.top();
	st.pop();

	//Recursive call
	ReverseStack(st);

	InsertAtBottom(st, top);
}

int main()
{
	stack<int> st;
	st.push(5);
	st.push(8);
	st.push(9);
	st.push(6);
	cout <<"Before reverse top of the stack "<< st.top() << endl;

	ReverseStack(st);
	cout << "After reverse top of the stack " << st.top() << endl;

	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}