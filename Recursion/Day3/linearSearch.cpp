#include<iostream>
using namespace std;

bool isPresent(int *arr, int size, int k) {
    if(size == 0) return false;
    if(arr[0] == k) return true;
    isPresent(arr + 1, size - 1, k);
}

int main () {

    int arr[6] = { 2, 3, 4, 5, 6, 8};

    int k;
    cin >> k; 
    bool ans = isPresent(arr, 6, k);

    cout << ans  << endl;

    return 0;
}