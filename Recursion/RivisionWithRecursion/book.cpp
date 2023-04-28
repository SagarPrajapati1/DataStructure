#include <bits/stdc++.h>
using namespace std;

int book(int* arr, int n, int m) {
    if(n == 0) {
        return -1;

    }
    int count = 1;
    if(count ==  m)
    return 1;
}

int main()
{    
    int arr[] = {10, 20, 30, 40};
    
    int ans = book(arr, 4, 2);
    cout << ans << endl; 

    return 0;
}