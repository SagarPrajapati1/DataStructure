#include <bits/stdc++.h>
using namespace std;
/*
int count_set_bits(int n) {

    int count = 0;
    while (n) {
        if(n & 1 == 1) count++;
        n >>= 1;
    }
    return count;
} */
int brian_kerninghan(int n) {
    int cnt = 0;
    while (n > 0) {
        n = n & (n-1);
        cnt++;
    }
    return cnt;

}
int main()
{

int n;
cout << "Enter the number -> ";
cin >> n;
cout << "Number of set bits -> " << brian_kerninghan(n) << endl;
cout << "Number of set bits -> " << __builtin_popcount(n) << endl; // time complexity log2(n)
return 0;
}