#include <bits/stdc++.h>
using namespace std;
void printArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Rotate(int *arr, int n){

    int brr[n] = {0};
    for (int i = 0; i < n; i++) {
        brr[i + 1] = arr[i];
    }
    brr[0] = arr[n - 1];
    cout << endl;

    for (int i = 0; i < n; i++ ) {
        arr[i] = brr[i];
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

    Rotate(arr, n);
    printArray(arr, n);
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

    return 0;
}