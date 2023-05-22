#include <bits/stdc++.h>
using namespace std;

string firstNonRepeatingChar(string s){
	
	
	unordered_map<char, int> count;
	queue<int> q;
	string ans = "";

	for (int i = 0; i < s.length(); ++i){
		
		char ch = s[i];
		
		// increase count
		count[ch]++;
		
		// push element in queue
		q.push(ch);

		// check front element
		while(!q.empty())
		{	
			//repeating element
			if(count[q.front()] > 1) {
				q.pop();
			}
			//non repeating element
			else {
				ans.push_back(q.front());
				break;
			}
		}

		// queue is empty
		if(q.empty()){
			ans.push_back('#');
		}
	}

	return ans;
}

int main()
{
	string s = "aabc";
	string str = firstNonRepeatingChar(s);

	for (int i = 0; i < str.length(); ++i)
		cout << str[i]<< " ";

	return 0;
}