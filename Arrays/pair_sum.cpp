#include<bits/stdc++.h>
using namespace std;
int pairSum (int arr[], int size, int n) {
    vector < vector<int> > ans;
    for (int i = 0; i < size; i++) {
        
        for (int j = i+1; j < size; j++) {
        
        
            if (arr[i] + arr[j] == n) {

                cout << arr[i] << " " << arr[j] << endl;
                
            }
            /*  
            if (arr[i] + arr[j] == n) {
                
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            
            }   */
        }        
    }
    
   //sort(ans.begin(), ans.end());
    
}

int main()
{

    int key, size;
    
    cout << "Enter the value of key  ";
    cin >> key;
    cout << "Enter the size  " ;
    cin >> size;
    
    int arr[10];
    cout << "Enter the elements of the array  ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  
    
    }
    pairSum(arr, size, key);

    
}