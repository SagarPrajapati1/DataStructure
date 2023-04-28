#include<bits/stdc++.h>
using namespace std;

int linear_Search(int arr[], int size, int k) {

    if (size == 1) return 1;
    
    else {
        for (int i = 0; i < size; i++) {
            if (arr[i] == k) {
                return i;
            }
            
        
        }
        return -1;
    } 
}
int main()
{

int arr[5] = {2, 6, 5, 3, 8};
int n = 5;
int k; 
cout << "Enter the k : ";
cin >> k;

cout << linear_Search(arr, n, k) << endl;


return 0;
}