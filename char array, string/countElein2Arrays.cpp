/* 
        vector<int> ans;
        for(int i = 0; i < m; i++) {
            
            int s = 0; int e = n-1; int cnt = 0;
        
            while(s <= e) {
                if(arr2[s++] <= arr1[i] || arr2[e--] <= arr1[i]) {
                    cnt++;
                }
                else {
                    s++;
                    e--;
                }
                
            }
            ans.push_back(cnt);
        }
        return ans;
        */