#include<iostream>
using namespace std;

int fibonnacci(int n) {
    
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fibonnacci(n-1) + fibonnacci(n-2);
    
    
}

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;

    int ans = fibonnacci(n);
    cout << ans << endl;

    return 0;
}