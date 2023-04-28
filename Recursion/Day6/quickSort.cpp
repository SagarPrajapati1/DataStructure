#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{

    int pivot = arr[s];

    int cnt = 0;
    // pivot ka right place
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    
    // index mil gya h
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    if (s > e)
        return;

    // pivot index dedo
    int p = partition(arr, s, e);

    // left part sort krdo
    quickSort(arr, s, p - 1);

    // right part sort krdo
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[] = {4, 1, 2, 5, 3, 6};
    int n = 6;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}