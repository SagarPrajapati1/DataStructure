#include <bits/stdc++.h>
using namespace std;

bool redundantBraces(string str){
	
	stack<int> s;
	for (int i = 0; i < str.length(); ++i){
		char ch = str[i];

		if(ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*'){
			s.push(ch);
		}
		else {
			if(ch == ')') {
				bool isRedundant = true;

				while(s.top() != '('){
					char top = s.top();
					if(top == '+' || top == '-' || top == '/' || top == '*'){
						isRedundant = false;
					}
					s.pop();
				}
				if(isRedundant == true) {
					return true;
				}
				s.pop();
			}
		}
	}

	return false;
}


int main()
{

	string str = "(()a + b * (c / d)) ";

	cout << redundantBraces(str) << endl;

	return 0;
}