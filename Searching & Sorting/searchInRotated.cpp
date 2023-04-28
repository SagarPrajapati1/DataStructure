#include <bits/stdc++.h>
using namespace std;

int Search(int arr[], int n, int K) {
	int s = 0;
	int e = n - 1;

	while(s <= e) {
		int mid = s + (e - s) / 2;

		if(arr[mid] == K ){
			return mid;
		}

		if(arr[s] < arr[mid]) {
			if(K >= arr[s] && K < arr[mid]) {
				e = mid - 1;
			}
			else {
				s + mid + 1;
			}
		}
		else {
			if(K > arr[mid] && K <= arr[e]) {
				s = mid + 1;
			}
			else
				e = mid - 1;
		}
	}
	return -1;
}

/* int Search(int *vec, int n, int K) {

	int low = 0;
	int high = n - 1;

	while(low <= high){
		int mid = (low + high) / 2;
		if(vec[mid] == K){
			return mid;
		}
        if(vec[low] < vec[mid]){
            if(K >= vec[low] && K < vec[mid]){
				high = mid - 1;
			}
            else{
				low = mid + 1;
		}
    }
    else {
        if(K <= vec[high] && K > vec[mid]){
				low = mid + 1;
		}
        else{
				high = mid - 1;
		}
    }
}
return -1;
}


int main()
{

	int arr[7] = {3, 4, 5, 6, 7, 1, 2};
	cout << Search(arr, 7, 1) << endl;

	return 0;
} */