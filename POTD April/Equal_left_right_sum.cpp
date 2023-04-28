#include <bits/stdc++.h>
using namespace std;
int left(vector<int> &A, int s, int e){

	int sum = 0;
	for (int i = s; i < e; ++i){
		sum += A[i];
	}
	return sum;
}

int right(vector<int> &A, int s, int e){

	int sum = 0;
	for (int i = s; i < e; ++i) {
		sum += A[i];
	}
	return sum;
}
int equalSum(int N, vector<int> &A) {
	

	if(N == 1)
		return 1;
	/* if(n == 2) {
		if(A[1] == A[2])
			return 1;
	} */
	// Array index is 1 - based

	int ans = 0;
	int curr = 0;

	for (int i = 0; i < N; ++i)
	{
		if(curr == (ans + A[i])) {
			return i;
		}
		else if(curr < (ans + A[i])){
			ans -= A[i];
			curr += A[i];
		}
	}
	return -1;
}

int EqualSum(int N, vector<int> &A){
	
	int ans = 0;
	for (int i = 0; i < N; i++) {
		ans += A[i];
	}

	int curr = 0;

	for (int i = 0; i < N; ++i) {
		
		if(curr == (ans - A[i])) {
			return i + 1;
		}
		
		else {
			ans -= A[i];
			curr += A[i];
		}
	}
	return -1;
}

int main()
{
	vector<int> vec = {1, 3, 5, 2, 2};
	int ans = EqualSum(5, vec);
	cout << ans << endl;

	return 0;
}