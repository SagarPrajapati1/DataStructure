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
			if(K > arr[mid] && K <= arr[n-1]) {
				s = mid + 1;
			}
			else
				e = mid - 1;
		}
	}
	return -1;
}