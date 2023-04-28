#include <bits/stdc++.h>
using namespace std;

void merge(int * arr, int s,  int e) {
    int mid = s+(e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    
    int *first = new int[len1];
    int *second = new int[len2];

    int mainArray = s;
    for(int i = 0; i < len1; i++) {
        first[i] = arr[mainArray++];
    }

    mainArray = mid + 1;
    for(int i = 0; i < len2; i++) {
        second[i] = arr[mainArray++];

    }

    int index1 = 0;
    int index2 = 0;
    mainArray = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArray++] = first[index1++];
        }
        else {
            arr[mainArray++] = second[index2++];
        }
    }

    while(index1 < len1) {
        arr[mainArray++] = first[index1++];
    }

    while(index2 < len2) {
        arr[mainArray++] = second[index2++];
    }
    delete[]first;
    delete[]second;
    
}

void mergeSort(int *arr, int s, int e) {

    if(s >= e) return;

    int mid = s +(e-s) / 2;

    // left part sort krna h 
    mergeSort(arr,s,mid);

    // right part sort krna h 
    mergeSort(arr, mid+1, e);

    // merge krdo 
    merge(arr, s, e);
}

int main()
{

    int arr[] = {2,5,6,9, 10, 13, 11, 15, 1 }; 
    int n = 9;

    mergeSort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " " ;
return 0;
} 