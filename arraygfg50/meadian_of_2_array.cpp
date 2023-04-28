#include <bits/stdc++.h>
using namespace std;

double MedianOfArrays(vector<int>& v1, vector<int>& v2)
    {
        vector<int> v;
        
        for(int i =  0; i < v1.size(); i++) {
            v[i] = v1[i];
        }
        for(int i = 0; i < v2.size(); i++) {
            v[i] = v2[i];
        }
        
        sort(v.begin(), v.end());
        double  ans = v.size() / 2;
        double ans1 = v[ans]; 
        
        return ans1;
    
    }

int main()
{

    vector<int> v1 =  {1,5, 9}; 
    vector<int> v2 = {2, 3, 6, 7};

    double result = MedianOfArrays(v1, v2);
    cout << result << endl;

    return 0;
}