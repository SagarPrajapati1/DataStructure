#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack<char> st;
	string s = "Hello";
	for (int i = 0; i < s.length(); ++i){
		char ch = s[i];
		st.push(ch);
	}
	string ans = "";
	int cnt = st.size();
	while(!s.empty()) {
		ans += st.top();
		st.pop();
		
	}
	cout << ans << endl;

	return 0;
}