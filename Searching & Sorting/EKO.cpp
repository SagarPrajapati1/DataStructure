#include <bits/stdc++.h>
using namespace std;

int n;
const int N = 1e6 + 10;
long long m;
long long trees[N];

bool isSufficientWood(int h){
    long long wood = 0;
    for(int i = 0; i < n; i++) {
        if(trees[i] >= h) {
            wood+= (trees[i] - h);
        }
        if(wood >= m) {
            return true;
        }
        else {
            return false;
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> trees[i];
    }

    long long s = 0, e = 1e9, mid;
    
    while (e-s > 1) {
        mid = s + (e-s)/2 ;
        if(isSufficientWood(mid)) {
            s = mid;
        }
        else {
            e = mid - 1;
        }
        
    }
    if ( isSufficientWood(e) ) {
            cout << e << " ";
        }
        else{
            cout << s << " ";
        }

return 0;
}