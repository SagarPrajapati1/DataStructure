#include <bits/stdc++.h>
using namespace std;

bool isPossible(int *arr, int n, int m, int mid) {
    int count = 1;
    int page = 0;
    for(int i = 0; i < n; i++) {
        if(page + arr[i] <= mid) {
            page += arr[i];
            
        }
        else {
            count++;
            if(count > m || arr[i] > mid) {
                return false;
            }

            page = arr[i];
        }
    }
    return true;
}
int book(int *arr, int n, int m) {
    int s = 0;
    int sum = 0;
    for(int  i =0; i < n; i++) {
        sum+= arr[i];
    }
    int e = sum;
    int ans = -1;
    while(s <= e) {
        int mid = s + (e-s)/2;
        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }

    }
    return ans;
    
}
int main() {
    
    int arr[4] ;
    cout << "Entere the array elements : " << endl;
    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }

    int ans = book(arr, 4, 2);
    cout << ans << endl; 

    return 0;
}