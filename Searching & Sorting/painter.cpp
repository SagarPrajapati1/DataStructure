#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int k, int n, int mid) {
    int count = 1, painter = 0;
    for(int i = 0; i < n; i++) {
        if(painter + arr[i] <= mid) {
            painter+= arr[i];
        }
        else {
            count++;
            if(count > k || arr[i] > mid) {
                return false;
            }
            painter = arr[i];
        }
    }
    return true;

}
int painter(int arr[], int k, int n) {

    int s = 0; 

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum+= arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s <= e) {

        if(isPossible(arr, k, n, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;    
        }

        mid = s + (e-s)/2;
    }
    return ans;

}

int main()
{
    int arr[] = {10, 20, 30, 40};
    
    int ans = painter(arr, 2, 4);
    cout << ans << endl;
    return 0;
}