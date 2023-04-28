#include <bits/stdc++.h>
using namespace std;

void rotate(int matrix[][3], int n)
{
    int row = 0;
    /*   int i = 0;
        int j = 0; */
    int arr[n][n];

    while (row < n)
    {
        int col = 0;
        while (col < n)
        {
            arr[row][col] = matrix[col][n - 1 - row];

            col++;		
        }
        row++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = arr[i][j];
            // cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        for(int i = 0; i < n; i++){
            int a = 0;
            int b = n-1;
            while(a < b){
                swap(matrix[a++][i], matrix[b--][i]);
            }
            
        }
    }

void print(int matrix[3][3], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int n = 3;
    rotate(matrix, n);
    print(matrix, n);
    return 0;
}