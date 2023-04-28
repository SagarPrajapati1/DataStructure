#include <bits/stdc++.h>
using namespace std;

long long inversion(long long arr[], long long s,long long mid, long long e, long long &ans){
        
        if(s >= e) return 0;
        
        long long i = s, j = e, k = mid + 1;
        long long b[e];
        long long m = 0;
        
        while(i <= mid && k <= j) {
            if(arr[i] <= arr[k]) {
                b[m++] = arr[i++];
            }
            else{

                // it si when arr[i] > arr[k] then we will count the inversions
                b[m++] = arr[k++];

                // counting inversions
                ans = ans + (mid - i + 1);
            }
        }

        // copying remaining part of both arrays

        while(i <= mid) {
            b[m++] = arr[i++];
        }
        
        while(k <= e) {
            b[m++] = arr[k++];
        }

        //releasing the b array memory
        for(long long i = s; i <= e; i++) {
            arr[i] = b[i];
        }
    }
    
    void mergeSort(long long arr[], long long s, long long e, long long &ans) {
        
        if(s < e) {
            
            long long mid = s + (e-s)/2;
            
            // left part
            mergeSort(arr, s, mid, ans);
        
            // right part
            mergeSort(arr, mid + 1 , e, ans);
        
            // merge
            inversion(arr, s, mid, e, ans);
        }
    }

    long long int inversionCount(long long arr[], long long N)
    {       
            long long ans = 0;
            mergeSort(arr, 0, N-1, ans);
            return ans;
    }

int main()
{
    long long  arr[] = {4,1,2,3,5};
    long long inv = inversionCount(arr, 5);
    cout << " No of inversion  --> " << inv << endl;

return 0;
}