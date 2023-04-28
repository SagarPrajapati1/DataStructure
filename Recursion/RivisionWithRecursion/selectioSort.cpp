#include <bits/stdc++.h>
using namespace std;

int minIndex(int *arr, int i, int n) {
    if(i == n) return i;

    int k = minIndex(arr, i+1, n);

    return(arr[i] < arr[k] ) ? i : k;
}

void selection(int *arr, int n, int index = 0) {

    if(n == index) return;

    int k = minIndex(arr, index, n-1);

    if(k != index) {
        swap(arr[k], arr[index]);
    }

selection(arr, n, index + 1);

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

    selection(arr, 8);

    cout << endl << endl;
    printArray(arr,8);

return 0;
}