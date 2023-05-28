#include <bits/stdc++.h>
using namespace std;

// brute force solution 
vector<int> interSection(int *arr1, int *arr2, int n1, int n2){
	
	vector<int> vis = {0};

	vector<int> ans;

	for (int i = 0; i < n1; ++i) {
		for (int j = 0; j < n2; ++j){
			
			if(arr1[i] == arr2[j] && vis[j] == 0){
				ans.push_back(arr1[i]);
				vis[j] = 1;
				break;
			}

			if(arr2[j] > arr1[i])
				break;
		}
	}
	return ans;
}

//optimal solutuon with O(n*m) time complexity in the worst case
void intersection (int arr1[], int arr2[], int n, int m) {
    
    int i = 0; int j = 0;

    while(i < n && j < m) {
        if(arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            arr2[j] = -1;
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j]) {
            j++;            
        }
        else {
            i++;
        }        
    }
}
int main()
{

    int arr1[] = {2, 3, 4, 5, 6, 7};
    int arr2[] = {2, 3, 5,  6, 7, 2};
    intersection(arr1, arr2, 6, 6);
    

return 0;
}