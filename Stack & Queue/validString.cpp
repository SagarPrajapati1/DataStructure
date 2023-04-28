#include <bits/stdc++.h>
using namespace std;

int validStringCost(string str){

	// odd string length
	if(str.length() % 2 == 1){
		return -1;
	}

	stack<char> s;
	//even string length
	//remove valid part
	for (int i = 0; i < str.length(); ++i){
		char ch = str[i];
		
		if(ch == '{') {
			s.push(ch);
		}
		else {
			// ch is close brace
			if(!s.empty() && s.top() == '{') {
				s.pop();
			}
			else {
				s.push(ch);
			}
		}
	}

	// stack contain invalid
	int a = 0, b = 0;
	while(!s.empty()){
		if(s.top() == '{'){
			a++;
		}
		else {
			b++;
		}
		s.pop();
	}
	int ans = (a + 1) / 2 + (b + 1) / 2;
	return ans;
}

int main()
{

	string str = "{{}}}{";

	int cost = validStringCost(str);
	cout << "Minimum cost is " << cost << endl;
	return 0;
}