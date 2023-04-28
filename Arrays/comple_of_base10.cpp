#include <bits/stdc++.h>
using namespace std;
/* Method 1
int comlement_base_10(int n) {
    int result = 0, factor = 1;
    while (n>0) {
        result += factor*(n%2 == 0 ? 1:0);
        factor*= 2;
        n/= 2;
    }
    return result;
    
    }

*/

// Method 2  using XOR
int comlement_base_10(int n) {
    if(n == 0) return 1;
    int m = n;
    int mask = 0;
    while (m != 0) {
        // ek mask bna liya number ki length k brabr 1s k liye
        // usko left shift krke 1 k sth OR kr diya 
        mask = (mask << 1) | 1;
        // m ko one place right shift krne pr m zero ho jaega
        m = m >> 1;
    }
    int ans  = (~n) & mask;
    // complement return kra liya hai
    return ans;
}
int main()
{
    int num;
    cout << "Enter the number -> ";
    cin >> num;
    cout << "Complement of base 10 is ->  " << comlement_base_10(num) << endl;


return 0;
}