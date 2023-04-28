#include <bits/stdc++.h>
using namespace std;

vector<int> getSum(int *arr, int n, int s)
{
	vector<int> v;

	if (s == 0)
		return {-1};

	int i = 0;
	int currentsum = arr[0];
	int j = 0;
	while (j < n)
	{

		if (currentsum == s)
		{
			v.push_back(i + 1);
			v.push_back(j + 1);
			return v;
		}
		if (currentsum < s)
		{
			j++;
			currentsum += arr[j];
			continue;
		}
		if (currentsum > s)
		{
			currentsum = currentsum - arr[i];
			i++;
			continue;
		}
	}
	return {-1};
}

int main()
{
	int arr[] = {2,3,1,2,4,3};
	vector<int> vec;
	vec = getSum(arr, 6, 7);
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
		cout << endl;

	return 0;
}