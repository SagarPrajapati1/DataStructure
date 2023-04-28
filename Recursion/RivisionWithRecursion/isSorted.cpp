#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size) {
    
    // base case
    if(size == 0 || size == 1) {
        return true;
    }

    //smaller calculation
    if(arr[0] > arr[1]) {
        return false;
    }

    //recursion for rest of the array
    bool check = isSorted(arr + 1, size - 1);

    return check;
    //   ^ replace with single line
    /* if(check) {
        return true;
    }
    else {
        return false;
    } */
}

int main()
{

    int arr[5] = {2, 3, 4, 5, 6};
    int a[] = {2, 4, 5, 1, 6};

    cout << isSorted(arr, 5) << endl << endl;
    cout << isSorted(a, 5) << endl << endl;

    return 0;
}