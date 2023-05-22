#include <bits/stdc++.h>
using namespace std;


// brute force solution with time complexity O(n^2)
int sumMaxMinElement(int *arr, int n, int k){

	//initialize mini and maxi element
	int maxi = INT_MIN;
	int mini = INT_MAX;

	//initialize sum with 0
	int sum = 0;

	//iterate a loop for n-k elements becoz of window size 
	for (int i = 0; i < n-k; ++i) {

	
		int K = k;

		//iterate a loop for window 
		for (int j = i; j < K; ++j)
		{	
			//find minimum and maximun element in present window 
			mini = min(mini, arr[j]);
			maxi = max(maxi, arr[j]);
		}

		// add the mini and maxi to find the sum of that particular window
		sum += mini + maxi;
	}
	// return sum for each window
	return sum;
}

int main()
{
	int arr[] = {2, 5, -1, 7, -3, -1, -2};
	int sum = sumMaxMinElement(arr, 7, 4);

	cout <<"sum is : "<< sum << endl;

	return 0;
}