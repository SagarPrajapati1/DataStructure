#include <bits/stdc++.h>
using namespace std;

vector<int> fact(int n) {



    double ans = 1;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        ans = ans * i;
        while(int(ans) > 9) {
            count++;
            ans /= 10;
            
    }
    }

    cout << int(ans) << endl;
    cout << endl <<  count << endl;
}

int main()
{

    int n = 100;
    fact(n);
    return 0;

}