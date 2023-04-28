#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= size && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}
int main()
{

    int arr[10], temp, size = 8;

    cout << "Enter the array element : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    insertion(arr, size);

    return 0;
}