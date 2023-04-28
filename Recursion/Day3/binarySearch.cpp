#include<iostream>
using namespace std;

bool isPresent(int* arr,int s, int e, int k) {

    if(e == 0) return 0;
    

    if(s > e) return 0;
    int mid = s + (e-s)/2; 

    if(arr[mid] == k) return true;
    if(arr[mid] < k) {
        return isPresent(arr, mid + 1, e, k);
    }
    else {
        return isPresent(arr, s, mid - 1, k);
    }
}

int main () {

    int arr[] = {2, 3, 6, 8, 10, 22};
    int k;
    cin >> k;

    bool Index = isPresent(arr, 0, 6, k);
    if(Index){
        cout << "Element is present  "<< endl;
    }
    else{
        cout << "Element is not present" << endl;
    }
    return 0;
}