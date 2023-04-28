#include <bits/stdc++.h>
using namespace std;
void reverse (string& s, int i, int j) {

    if(i > j) { 
        return;
    }

    swap(s[i], s[j]);
    i++; 
    j--;

    reverse(s, i, j);

}

void reverse1 (string& s, int i){

    if(i > s.length() - i - 1) return;
    int j =s.length() - i - 1;
    swap(s[i], s[j]);
    i++;
    reverse1(s,i);
}

int main() {

    string s = "abcde";
    reverse(s, 0, s.length()-1);
    cout << s << endl << endl;

    reverse1(s, 0);
    cout << s << endl;

return 0;
}