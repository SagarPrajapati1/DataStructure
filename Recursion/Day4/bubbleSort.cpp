#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int*arr, int n) {

    if(n == 0 || n == 1) {
        return;
    }
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i +1]){
            swap(arr[i], arr[i+1]);
        }

        bubbleSort(arr, n-1);

    }
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

    bubbleSort(arr, 8);

    cout << endl << endl;
    printArray(arr,8);

return 0;
}