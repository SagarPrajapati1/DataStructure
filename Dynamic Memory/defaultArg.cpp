#include<iostream>
using namespace std;
                                // start is a default argument
void printArray(int arr[], int n, int start  = 0) {
    for(int i = start; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main () {
    int arr[] = { 1,2,3,4,5};
    int size = 5;
    printArray(arr, size, 2);
    
    cout << endl;

    printArray(arr, size);
    
    return 0;
}