#include <bits/stdc++.h>
using namespace std;

// first approach with O(nlogn)
int duplicateEle(int *arr, int n){
	
	//step 1 sort the array
	sort(arr, arr+n);

	// step 2 find the duplicate element traverse array just one time
	// now duplicate element will be arr[i] == arr[i+1]

	for (int i = 0; i < n; ++i){
		
		if(arr[i] == arr[i + 1]) {
			// return the index of the duplicate element
			return i;
		}
	}
	return -1;
}


// another approach

int Duplicate(int *arr, int n){
	int freq[n] = {0};

	for (int i = 0; i < n; ++i){
		if(freq[i] == 0){
			freq[arr[i]]++;
		}
	}

	for (int i = 0; i < n; ++i){
		if(arr[i] >= 2){
			return i;
		}
	}
		return -1;
}

//optimal approach with O(1) TC
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


// changes in same array
int duplicateElement(int *a, int n){
	
	for (int i = 0; i < n; ++i){
		a[a[i]] = a[a[i] + n];
	}

	for (int i = 0; i < n; ++i){
		if(a[i] %n >= 2){
			return i;
		}
	}
	return -1;
}



int main()
{
    int arr[] = {1, 2, 4, 3, 2};
    cout << "Duplicate at index is - > " << duplicateElement(arr, 5) << endl;

return 0;
}