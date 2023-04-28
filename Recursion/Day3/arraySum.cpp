#include<iostream>
using namespace std;

int arraySum(int *arr, int n) {

    if(n == 0) return 0;
    if(n == 1) return arr[0];

    int ans = arr[0];
    return ans + arraySum(arr + 1 , n - 1);

}

int main() {

    int arr[6] = { 2, 3, 5, 6, 7, 8};
    
    int ans = arraySum(arr, 6);
    cout << "Array sum is --> " << ans << endl;

    return 0;
}