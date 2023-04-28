#include <bits/stdc++.h>
using namespace std;

long long lcmAndGcd(long long A , long long B) {
        
        long long i = 2;
        long long ans = 0;
        long long finalans = ans;
        while (i <= A/2 || i <= B/2) {

            if(A % i == 0 && B % i == 0){
                finalans = ans;
                ans = i;
            }

        }
        return max(finalans, ans);
    }
int main()
{
long long gcda = lcmAndGcd(200, 50);
cout << gcda << endl;

return 0;
}