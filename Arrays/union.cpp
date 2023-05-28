#include <bits/stdc++.h>
using namespace std;

//T C   and S C is O(n1+ n2)
vector<int> Union(int *A, int *B, int n1, int n2){

	vector<int> ans;
	int i = 0;
	int j = 0;

	while(i < n1){
		while(j < n2){
			if( A[i] <= B[j] ) {
				if(ans.size() == 0 || ans.back() != A[i]) {
					ans.push_back(A[i]);
				}
				i++;
			}
			else{
				if(ans.size() == 0 || ans.back() != B[j]) {
					ans.push_back(B[j]);
				}
				j++;
			}
		}
	}

	while(j < n2){
		if(ans.size() == 0 || ans.back() != B[j]) {
			ans.push_back(B[j]);
		}
		j++;
	}
	
	while(i < n1){
		if(ans.size() == 0 || ans.back() != A[i]) 
			ans.push_back(A[i]);
		}
		i++;

	return ans;
}
int main()
{

	int A[] = {1, 1, 2, 3, 4, 5};
	int B[] = {1, 2, 2, 3, 4, 6};

	vector<int> unionArr;
	unionArr = Union(A, B, 6, 6);

	for(int x: unionArr){
		cout << x << " ";
	}

	cout << endl;

	return 0;
}