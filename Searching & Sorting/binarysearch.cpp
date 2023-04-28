#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;
	int index;
	while (start <= end)
	{

		if (key < arr[mid])
		{
			end = mid - 1;
		}
		else if (key > arr[mid])
		{
			start = mid + 1;
		}
		else
			return mid;

		mid = start + (end - start) / 2;
	}

	return -1;
}



int main()
{

	
	int oddarr[7] = {2, 5, 8, 11, 16, 25, 18};
	int evenarr[6] = {1, 3, 15, 17, 22};

	int oddindex = binarysearch(oddarr, 7, 20);
	cout << "Odd array index is " << oddindex << endl;

	int evenindex = binarysearch(evenarr, 6, 30);
	cout <<"Even array index is " << evenindex;

	return 0;
}