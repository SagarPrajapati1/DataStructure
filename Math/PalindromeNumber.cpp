#include <bits/stdc++.h>
using namespace std;

int reverse(int x){

	int ans = 0;
	while(x){
		int digit = x % 10;
		if(ans < INT_MIN / 10 || ans > INT_MAX / 10){
			return 0;
		}
		ans = (ans * 10) + digit;
		x = x / 10;
	}
	return ans;
}

bool checkPalindrome(int x) {
	if(x < 0) {
		return false;
	}
	int ans = reverse(x);
	if(ans == x){
		return true;

	}
	return false;
}
bool Palindrome(int x){
	
	if(x < 0 || x != 0 && x % 10 == 0) {
		return false;
	}

	int half = 0;
	while(x > half){

		half = (half * 10) + (x % 10);
		x /= 10;
	
	}
	
	return (x == half || x == half / 10);
}

int main()
{
	int x = 121;
	cout << Palindrome(x) << endl;
	cout << checkPalindrome(x) << endl;

	return 0;
}