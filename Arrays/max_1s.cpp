#include <bits/stdc++.h>
using namespace std;
int findZeroes(int arr[], int n, int m)
{
	int res = 0;
	int i = 0;
	int length = 0;
	if (m > n)
		return 0;
	while (i < n)
	{

		if (arr[i++] == 0)
		{
			m--;
		}
		while (m < 0)
		{
			if (arr[length++] == 0)
				m++;
		}
		res = max(res, i - length);
	}

	return res;
}

// optimal solution
int longestOnes (int nums[],int n, int k){
	int i = 0;
	int j = 0;
	for (; j < n; ++j)
	{
		if (nums[j] == 0)
			k--;
		
		if(k < 0 && nums[i++] == 0)
			k++;
	}
	return j - i;
}




int main()
{

	int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
	int ans = longestOnes(arr, 11, 2);
	cout << ans << endl;

	return 0;
}