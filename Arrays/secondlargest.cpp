#include <iostream>
#include<climits>
using namespace std;

int second_largest(int a[10], int length){
    int max = 0;
    int second_large = -1;
    
    for (int i = 1; i < length; i++){
        if (a[i] > a[max]){
            
            second_large = max;
            max = i;
            
        }

        else if (a[i] != a[max]) {
            if (second_large == -1 || a[i] > a[second_large]) {
                second_large = a[i];
            }
        }
    }
    
    return second_large;
}


int main()
{   
    int arr[10], n;
    
    cin>>n;
    cout << "Enter the elements of array" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    int a = second_largest(arr, n);
    cout << a;
}