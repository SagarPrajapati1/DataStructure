#include <bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> &matrix) {

    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    
    int count = 0; 
    int total = row * col;
    
    // initialization
    int startRow = 0;
    int endCol = col - 1;
    int startCol = 0;
    int endRow = row - 1;

    while(count < total) {
        // Printing first row
        for(int index = startCol; count < total && index <= endCol; index++) {
            ans.push_back(matrix[startRow][index]);
            count++;
        }
        startRow++;
        // Printing end Column
        for(int index = startRow; count < total && index <= endRow; index++) {
            ans.push_back(matrix[index][endCol]);
            count++;
        }
        endCol--;
        //Printing end Row
        for(int index = endCol; count < total && index >= startCol; index--) {
            ans.push_back(matrix[endRow][index]);
            count++;
        }
        endRow--;
        //Printing start Column
        for(int index = endRow; count < total && index >= startRow; index--) {
            ans.push_back(matrix[index][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
    
}

int main()
{

    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    vector<int> ans = spiral(v);
    for(int  i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }


return 0;
}