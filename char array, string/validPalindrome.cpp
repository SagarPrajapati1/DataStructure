#include<iostream>
#include<string>
using namespace std;
bool valid(char ch) {
    if(( ch >= 'a' && ch  <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ) {
        return 1;
    }
    return 0;
}

char toLowerCase(char ch) {
    if ((ch >= 'a' && ch <= 'z' )|| (ch >= '0' && ch <= '9') ){
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool check_palindrome(string name) {
    int s = 0; int e = name.length()-1;
    while (s <= e) {
        if(name[s] != name[e]) {
            return false;
        }
        else {
            s++;
            e--;
        }
    }
    return true;
}

bool isPalindrome(string s) {
    
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if(valid(s[i])) {
            temp.push_back(s[i]);
        }
    }
    for(int j = 0; j < temp.length(); j++) {
        temp[j] = toLowerCase(temp[j]);
    }
    return check_palindrome(temp);
}
int main () {

string s = "a12bb21a";
bool valid = isPalindrome(s);
cout << "Palindrome or Not  " << valid << endl;

return 0;
}