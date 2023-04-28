#include<iostream>
using namespace std;

int main() {


    int i = 5;
    int *p = &i;
    int **p1 = &p;

    cout <<"address of i  " << &i << endl;
    cout << "printing p  " << p << endl;
    cout <<"address of p  " << &p << endl;
    cout << "address of p1  " << &p1 << endl;
    cout << p1 << endl;

     cout << *p << endl;
    cout << *p1 << endl;
    cout << **p1 << endl;
    cout << **p1+1 << endl;
    cout << *p + 1 << endl;


}