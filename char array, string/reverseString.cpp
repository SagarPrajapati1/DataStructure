#include <bits/stdc++.h>
using namespace std;
string reverse_by_word(string S){
    int i = S.length()-1;
    string ans = "";
    while(i >= 0){

        while(S[i] != '.' && i >= 0) i--;
        int j = i;
        while(j >= 0 && S[j] != '.') i--;
        if(ans.empty()) {
            
        }

    }
}
int main()
{


return 0;
} 