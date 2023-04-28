#include<bits/stdc++.h>
using namespace std;

int pivot2(int arr[], int n){
    

    int s = 0; 
    int e = n - 1;
    int mid = s + (e-s)/2;
    
    while (s < e) {

        if (arr[mid] <= arr[n-1] ) {
            e = mid - 1;
        }
        
        else {
            s = mid;
        }
        mid = s + (e-s)/2;
    }

    return s; 

    
}


int main()
{


int arr[6] = {7, 8, 9, 1, 2, 3};

int pivot = pivot2(arr, 6);

cout << "Pivot is at index " << pivot << endl;


return 0;
}