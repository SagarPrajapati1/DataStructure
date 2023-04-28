#include <bits/stdc++.h>
using namespace std;

int reverseInt(int n) {

    int ans = 0;
    int rem = 0;
    
    while (n) {
        // reminder nikl liya hai
        
        rem = n % 10;
        
        // check ki integer limit se cross n ho 
        // age hua to return 0 kre dega;;
        if(ans > INT_MAX/10 || ans < INT_MIN/10) {
            return 0;
        }
        ans = (ans*10) + rem;
        n = n / 10;
    }
    return ans;

}

int main () {

    int num ;

    cout << "Enter the number -> ";
    cin >> num;
    
    cout << reverseInt(num) << endl;
    return 0;
}