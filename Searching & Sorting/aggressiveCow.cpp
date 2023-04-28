#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> arr, int c, int mid){
    sort (arr.begin(), arr.end());
    int cnt = 1;
    int lastPos =  arr[0];
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] - lastPos >= mid) {
            cnt++;
            if(cnt == c) return true;
            lastPos = arr[i];
        }
    }
    return false;
}
int aggressive(vector<int> arr ,int c) {
    int s = 0;
    int maxi = INT_MIN;
    for(int i = 0; i < arr.size(); i++) {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e-s)/2;
        if(isPossible(arr, c, mid)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {4, 2, 1, 3, 6};
    cout << aggressive(arr, 2) << endl;


return 0;
}