#include <bits/stdc++.h>
using namespace std;
int findZeroes(int arr[], int n, int m) {
    
    int res = 0;
    int i = 0;
    int length = 0;
    if(m > n) return 0;
    while( i < n) {

        if(arr[i++] == 0) {
            m--;       
        }
        while(m < 0) {
            if(arr[length++] == 0) m++;
        }
        res = max(res, i-length); 
    }
    
    return res;
    }
int main()
{

int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1 };
int ans = findZeroes(arr, 11, 2);
cout << ans << endl;

return 0;
}