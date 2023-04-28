#include <bits/stdc++.h>
using namespace std;

void fun1() {
    cout << "Funtion 1" << endl;
}
// if we change only return type then it can't be possible to overload the function
// we have to chane the signature/prototype of the funtion then we can overload the funtion
void fun1(int a) {
    cout << "Funtion 2" << endl;
}

void fun1(string s) {
    cout << "Funtion 3" << endl;
}

void fun1 (int a, int b) {
    cout << "Funtion 4" << endl;
}


int main()
{

    fun1();

    return 0;
}