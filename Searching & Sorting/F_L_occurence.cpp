#include<bits/stdc++.h>
using namespace std;

int first_occ (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = 0;
    while (start <= end) {

        if (key == arr[mid]) {
            ans = mid;
            end = mid - 1;

        }

        else if (key > arr[mid])
            start = mid + 1;

        else if (key < arr[mid]) {
            end = mid -1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int last_occ (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = 0;
    while (start <= end) {

        if (key == arr[mid]) {
            ans = mid;
            start = mid + 1 ;

        }

        else if (key > arr[mid]) {
            start = mid + 1;
        }

        else if (key < arr[mid]) {
            end = mid -1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
int odd[10] = {2, 5, 8, 8, 8, 8, 8, 8, 5, 16};

cout << "First occurence of 8 is at index " << first_occ(odd, 10, 8); 

cout << endl;

cout << "last occurence of 8 is at index  " << last_occ(odd, 10, 8); 

return 0;
}