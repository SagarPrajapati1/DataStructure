#include <bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int>&s, int num){
	
	//base case
	if(s.empty() || s.top() < num){
		s.push(num);
		return;
	}
	//element is greater than num so store and pop it 
	int top = s.top();
	s.pop();
	
	//Recursive call
	sortedInsert(s, num);
	s.push(top);
}
void sortStack(stack<int> &s){
	
	//base case
	if(s.empty()){
		return;
	}
	//top ko side m rkho
	int num = s.top();
	s.pop();

	//Recursive call
	sortStack(s);

	sortedInsert(s, num);
}
int main()
{
	stack<int> s;
	s.push(5);
	s.push(2);
	s.push(8);
	s.push(1);
	sortStack(s);

	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}