#include <bits/stdc++.h>
using namespace std;
void reverseWord(string  &s) {
    int st = 0; int e = s.length() - 1;
    while (st <= e) {
        swap(s[st++], s[e--]);
    }

}

int main()
{
    string s ;
    string temp;
    for(int i = 0; i < s.length(); i++) {
        int j = i;
        while (s[j] != ' ' || s[j] != '\0') {
            temp.push_back(s[j]);
            j++;
        }
        reverseWord(temp);
        cout << temp << " ";
    }
    return 0;
}