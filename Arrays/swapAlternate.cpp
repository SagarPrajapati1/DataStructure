#include <bits/stdc++.h>
using namespace std;

int swapAlternate (int arr[], int n ) {
    for (int i = 0; i < n; i+= 2) {
        if(i+1 < n) {
            swap(arr[i], arr[i+1]);
        }
        
    }
}

void printArray(int arr[], int n ) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {2, 5, 6, 4, 9, 7};
    swapAlternate(arr, 6);
    printArray(arr,6);

return 0;
}