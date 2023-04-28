#include<iostream>
using namespace std;

void fun(int a, int b) {
    a++;
    b++;
    cout << a << " " << b << endl;
}

inline int getMax(int& a, int& b) {
    int ans = (a < b) ? a : b;
    return ans;
}

int main() {

    int a = 7, b = 8;
    // fun (a,b);
    int ans = getMax(a , b);
    
    cout << a << endl;
    a = a+ 3;
    b = b + 1;
    ans = getMax(a , b);
    cout << a << endl;


    return 0;
}