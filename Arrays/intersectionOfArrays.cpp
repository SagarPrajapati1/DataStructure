#include <bits/stdc++.h>
using namespace std;
void intersection (int arr1[], int arr2[], int n, int m) {
    
    int i = 0; int j = 0;

    while(i < n && j < m) {
        if(arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            arr2[j] = -1;
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j]) {
            j++;            
        }
        else {
            i++;
        }        
    }
    
}
int main()
{

    int arr1[] = {2, 3, 4, 5, 6, 7};
    int arr2[] = {2, 3, 5,  6, 7, 2};
    intersection(arr1, arr2, 6, 6);
    

return 0;
}