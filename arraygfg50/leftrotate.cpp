#include <bits/stdc++.h>
using namespace std;

// void rightRotate(int *arr, int n, int d) {

//     int i = n - d;
//     int j = n - 1;
//     while(i < j) {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }

//     i = 0;
//     j = n - d;
//     while(i < j) {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
//     i = 0;
//     j = n - 1;
//     while(i < j) {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }

void leftRotate (int* arr, int n, int d) {

    int i = 0;
    int j = d - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    i = d;
    j = n - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    i = 0,
    j = n - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    
    int d = 3;
    leftRotate(arr, 7, d);
    
    printArray(arr, 7);

    cout << endl;

    // rightRotate(arr, n, d);
    // printArray(arr, n);
return 0;
}