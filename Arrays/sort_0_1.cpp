#include<bits/stdc++.h>
using namespace std;
int sort_0_1(int arr[], int size) {

    int i = 0, j = size-1;
    while (i < j) {

        while (arr[i] == 0  && i < j)  {
            i++;
            
        }
        while (arr[j] == 1 && i < j)
            j--;
        
        if (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }


    }
}



void printarray(int arr[], int size) {
    for (int  i = 0; i < size; i++) {
        cout << arr[i];
    }
}

int main()
{

    int size, arr[10];

    cin >> size ;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort_0_1(arr, size);
    printarray(arr, size);
}