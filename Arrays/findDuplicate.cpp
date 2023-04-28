#include <bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int n) {

    int index = 0;
    for(int i = 0; i < n; i++) {
        index = index^arr[i];
    }
    for(int i = 1; i < n; i++) {
        index = index ^ i;
    }
    return index;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 2};
    cout << "Duplicate at index is - > " << duplicate(arr, 6) << endl;

return 0;
}