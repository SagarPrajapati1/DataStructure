#include<iostream>
using namespace std;

int main() {
    int a = 5;
    cout << "print a  " << a << endl;

    int *p = &a;
    cout << "print p  " << p << endl;
    cout << "derefrencing  " <<*p << endl;

    cout << "value after in in p  " << *p + 1 << endl;
    cout << "Value after inc in a  " << a + 1 << endl;
    cout << "addres of a  " << &a << endl;
    cout <<"addres of p  " << &p << endl;
    cout << p + 1 << endl;
    cout << "*p++  " << *p++ << endl;
    cout << "*++p  " << ++*p<< endl;

    cout << "inc in add  " << &p+1  << "    "<< &a+1 << endl;

    return 0; 
}