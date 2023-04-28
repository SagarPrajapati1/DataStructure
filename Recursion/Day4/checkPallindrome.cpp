#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string& s, int i, int j) {
        
        //base case
        if(i > j) return true;

        if(s[i] != s[j]) {
            // first char
            return false;
            
        }
        else {
            // Recursion Call
            return checkPalindrome(s,i+1,j-1);
        }
}
int main()
{
    string s = "abba";

    bool ans = checkPalindrome(s, 0, s.length()-1);

    if(ans) { // if true
        cout << "String is Palindrome " << endl;
    }

    else { // not true
        cout << "String is not Palindrome  "<< endl;   
        }

return 0;
}