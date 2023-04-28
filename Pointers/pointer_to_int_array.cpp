#include<iostream>
using namespace std;

int main () {

    // int arr[5] = {1, 7, 3, 4, 5};
    // int *ptr;
    // ptr = &arr[0];

    // cout <<  "Address of 0th inedx  "<< arr << endl;
    // cout <<  "Address of 0th inedx  "<< &arr[0] << endl;
    // cout <<  "Address of 0th inedx  "<< ptr << endl;
    // cout <<  "Address of 0th inedx  "<< ptr + 1 << endl;

    // cout << "Value at 0th index  "<< *arr << endl;
    // cout << "Value at 0th index  "<< *ptr << endl;
    // cout << "Value at 0th index  "<< *(ptr + 1) << endl;


    int a[5] = {10, 20};
    int *p = a;
    // cout << p << " "<<  *p << endl;

    // cout << sizeof(p) << endl;
    // cout << sizeof(*p) << endl;
    // cout << sizeof(a) << endl;
    // cout << sizeof(&p) << endl;


    cout << *++p << endl;

    

    return 0;
}