#include<iostream>
using namespace std;

bool isSorted(int *arr, int size) {

    if(size == 0 || size == 1) {
        return true;
    }

    if(arr[0] > arr[1]) {
        return false;
    }
    else {
        
        return isSorted(arr + 1, size -1); 
    }


}

int main() {

    int size;
    int arr[10];
    cin >> size;
    for(int i = 0; i< size; i++) {
        cin >> arr[i];
    }

    bool ans = isSorted(arr, size);
    if(ans) {
        cout << "Array is sorted " << endl;
    }

    else {
        cout << "Array is not sorted " << endl;
    }


    return 0;
}