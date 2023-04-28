#include <bits/stdc++.h>
using namespace std;

vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {   
        vector<int> res;
        int n = arr[0].size() - 1;
        
    
        for(int i = 0; i < K; i++ ) {
            for(int j = 0; j < K; j++){
                res.push_back(arr[i][j]);    
            }
        }
        sort(res.begin(), res.end());
        return res;
    }


int main()
{
		vector<vector<int>> arr = {{1,2,2}, {2,3,4}, {3,4,5}};
		int K = 3;
		vector<int> ans;

		ans = mergeKArrays(arr, K);
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
		return 0;
}