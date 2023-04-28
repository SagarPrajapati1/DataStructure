#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    if(n == 0 || n == 1) {
        return;
    }
    insertionSort(arr, n-1);

    int l = arr[n-1];
    int j = n-2;
    while(j >= 0 && arr[j] > l) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = l;
}

void printArray(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 5, 6, 4, 3, 8, 9, 7};

    insertionSort(arr, 8);

    cout << endl << endl;
    printArray(arr,8);

return 0;
}