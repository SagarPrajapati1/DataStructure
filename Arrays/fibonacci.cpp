#include <bits/stdc++.h>
using namespace std;

long long  fibo(long long  n) {

    long long  i = 1;
    if(n <= 0) return 0;
    long long  a = 0; 
    long long  b = 1;
    cout << a << endl;
    while(i <= n) {
        b = b + a;
        if(b > INT_MAX) return 0;
        cout <<  b << " ";
        a = b-a;
        i++;
        cout << endl;
    }
}
int main()
{

//fibo(10);
//fibo(0);
//fibo(-5);
fibo(200);

return 0;
}