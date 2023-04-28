#include <bits/stdc++.h>
using namespace std;


/* // it is working for few test cases
int majorityElement(int arr[], int size){
	int j = 0;
	int i = 0;
	
	while(i < size) {
		int cnt = 0;
		while(j < size){
			if (arr[i] == arr[j]) {
				cnt++;
				j++;
				if(cnt > size/2){
					return cnt;
				}
			}
			else {
				j++;
			}
		}
		i++;
	}
	return -1;
} */


//using boyer moore algorithm for findind majority element(n/2)
int majorityElement(int *arr, int n){
	if(n == 1) return arr[0];

	int cnt = 0;
	int el = 0;
	for(int i = 0; i < n; i++){
		
		if(cnt ==  0) {
			el = arr[i];
		}

		if(el == arr[i]) {
			cnt++;
		}
		else {
			cnt--;
		}
	}

	cnt = 0;
	// check if the element is present in majrity or not 
	for(int i = 0; i < n; i++) {
		if(el == arr[i]) {
			cnt++;
		}
	}

	if(cnt > n/2){
		return el;
	}
	else{
		return -1;
	}
}

int main()
{
	int arr[7] = {3, 3, 1, 2, 3, 2, 2};
	cout << majorityElement(arr, 7) << endl;

	return 0;
}