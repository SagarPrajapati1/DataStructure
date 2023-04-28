#include <bits/stdc++.h>
using namespace std;

int solve(int mid ) {

    int cnt = 0;
        while(mid) {
        cnt = cnt + mid / 5;
        mid /= 5;
    }
    return cnt;
}

int findNum(int n) {
    int s = 1;
    int e = n * 5;
    int ans;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        if(solve(mid) >= n) {
            e = mid - 1;
            ans = mid;
            
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = findNum(n);

    cout << "No of zeros at the end : " << ans << endl;

    return 0;
}