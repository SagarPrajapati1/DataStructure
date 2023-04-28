#include <bits/stdc++.h>
using namespace std;

int First(int arr[], int n, int k) {

    if(n == 0) return -1;
    if(arr[0] == k) return 0;
    int ans = -1; 
    ans = First(arr + 1, n-1, k);
    if(ans == -1) return -1;
    else {
        return ans + 1;
    }
}

 int Last(int *arr, int n, int k) {
    
    if(n == 0) return -1;
    if(arr[n-1] == k) return n-1;
    int ans = -1;
    ans = Last(arr, n-1, k);
    return ans;
    // if(ans == -1) return -1;
    // else return ans ;
}


int main()
{
    int arr[] = {2,8, 5,5, 5, 5, 8, 16};

    cout <<"First Positon is at -- > " << First(arr,8, 5) << endl << endl;
    cout << "Last Positon is at -->  " <<  Last(arr, 8, 5) << endl;
return 0;
}