#include<iostream>
using namespace std;

int main  () {

    char ch[5] = "abcd";
    char *ptr = &ch[0];

    cout << ch << endl;
    cout << &ptr << endl;
    return 0;
}