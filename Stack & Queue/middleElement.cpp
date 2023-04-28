#include <bits/stdc++.h>
using namespace std;

int solve(stack<int> &s, int size, int cnt){
	// base case
	
	if(cnt ==  size/2){
		int res = s.top();
		s.pop();
		return res;
	}

	//Recursive call
	int ans = s.top();
	s.pop();
	solve(s, size, cnt + 1);
	s.push(ans);
}

int middleElement(stack<int> &s, int size) {
	int cnt = 0;
	int ans = solve(s, size, cnt);
	return ans;
}

int main()
{
	stack<int> s;

	s.push(5);
	s.push(9);
	s.push(12);
	s.push(8);
	//s.push(4);

	int ans = middleElement(s, s.size());
	cout << "Size of the stack " << s.size() << endl;
	cout << ans << endl;
	
	while(!s.empty()) {
		cout << s.top()<< " ";
		s.pop();
	}

	//cout << "Middle Element is " <<	s.top();
	return 0;
}