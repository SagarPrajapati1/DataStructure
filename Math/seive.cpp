#include <bits/stdc++.h>
using namespace std;

int countPrime (int n) {
    // 2d array 
    vector<bool> prime(n+1, true);
    int cnt = 0;
    // for 0 and 1 initialize with 0 becoz minimum prime number is 2
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++) {
        if(prime[i]) {
            cnt++;
            // for every i devide the number if yes then 
            //cancel it i.e false otherwise don't cancel
            for (int j = 2 * i; j < n; j = j+i) {
                prime[j] = 0;
            }
        }
    }
    return cnt;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int ans = countPrime(n);
    cout << ans << endl;

    return 0;
}