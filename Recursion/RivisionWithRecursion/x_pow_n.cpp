#include <bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    
    // base case
    if(n == 0) {
        return 1;
    }
    if(x == 0) {
        return 0;
    }

    int ans = 1;

    ans = ans * power(x, ans++);
    return ans;
} 

int main()
{
    int x = 3;
    int n = 4;
    int ans = power(x, n);
    cout << ans << endl;
    return 0;
}