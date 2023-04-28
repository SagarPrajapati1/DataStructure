#include <bits/stdc++.h>
using namespace std;
/*
bool powerOf2(int num) {
int power;
for(int i = 0; i <= 30; i++) {
    // pow se humne power find kr li or match kra liya number se 
    power = pow(2, i);
    if(power == num) return true;
    }
    return false;
} */

bool powerOf2(int num) {

    int ans = 1;
    for(int i = 0; i <= 30; i++) {
        if(ans == num) return true;
        if(ans < INT_MAX / 2){
            ans*= 2;
        }
    }
}

/* O(logn)
bool powerof2(int n) {
    if (n == 0) return false;
    while(n >1){
        if(n&1 != 0) {
            return false;
        }
        n>>=1;
    }
    return true;
}*/
int main() {
    int num ;
    cout << "Enter the number -> ";
    cin >> num;
    bool ans = powerOf2(num);
    cout << ans << endl;
    return 0;

}