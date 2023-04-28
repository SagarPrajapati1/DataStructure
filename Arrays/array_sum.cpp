#include <bits/stdc++.h>
using namespace std;
int arraySum(int arr[], int size) {

    int sum = 0;
    for(int i =0; i < size; i++) {

        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
int arr[6] = {5, 6, 8, 9, 7, 12};
cout << "Array sum is -> " << arraySum(arr, 6);

return 0;
}