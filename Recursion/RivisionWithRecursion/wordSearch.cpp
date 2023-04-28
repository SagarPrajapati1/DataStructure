#include <bits/stdc++.h>
using namespace std;

bool isWordExist(vector<vector<char>> &board, string word)
{
    int index = 0;
    int i = 0;
    int j = 0;
    
    while(i < board.size() && j < board.size() ) {
        if(word[index] != board[i][j]) {
            i++;
            j++;
        }
        else if(word[index] == board[i][j]) {

            
            index++;
            i++;
            j++;
        }
        if(index > word.size()) {
            
                return false;
            
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> board = {{'a', 'g', 'b', 'c'}, {'q', 'e', 'e', 'l'}, {'g', 'b', 'k', 's'}};
    string word = "geeks";
    bool ans = isWordExist(board, word);
    cout << ans << endl;
    return 0;
}