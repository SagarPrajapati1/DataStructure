#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {

    
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    
    while(a != b) {
        if(a>b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}
int LCM(int a, int b) {
    int n = min(a, b);
    int ans = 0;
    for (int i = 2; i <= n; i++) {
        if(a % i == 0 && b % i == 0) {
            ans = i;
            break;
        }
        
    }
    
    return ans;
}

int main()
{
    int a = 72;
    int b = 144;
    cout <<  "GCD is --> " << GCD(a, b) << endl;
    cout <<  "LCM is --> " << LCM(a, b) << endl;

    return 0;
}