#include<iostream>
using namespace std;

int getSum(int *a, int n){
    int sum = 0;
    int i = 0;
    while(i < n) {
        sum = sum + a[i];
        i++;
    }
    return sum;
}
int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    cout << getSum(arr +2,3) << endl;
    return 0;
}