#include <bits/stdc++.h>
using namespace std;
string Rotate(string str1, string str2)
{

	int n = str1.length();
	bool clockwise = true, anticlockwise = true;
	for (int i = 0; i < n; i++)
	{
		if (str1[i] != str2[(i + 2) % n])
		{
			clockwise = false; // not rotated clockwise
			break;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (str1[(i + 2) % n] != str2[i])
		{
			anticlockwise = false; // not rotated anticlockwise
			break;
		}
	}
	if(clockwise)
		return "YES";

	return "NO";
}

string solve(string S, string T){

	int n = S.length();
	int i = 0;
	string s;
	stack<char> st;
	while(i < n){
		st.push(S[i]);
		i++;
	}
	i = 0;
	while(!st.empty()){
		char ele = st.top();
		S[i++] = ele;
		st.pop();
	}

	swap(S[0], S[1]);
	for (int i = 0; i < n;i ++){
		if (S[i] == T[i])
		{
			return "YES";
		}
		else
			break;
	}
	return "NO";
}




int main()
{	
	string str1 = " kyoto";
	string str2 = "aokyo";

	string s =  solve(str1, str2);

	cout << s << endl;
	cout << endl;
	return 0;
}