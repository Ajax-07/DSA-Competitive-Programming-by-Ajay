#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int dp[a.size()];
        dp[0] = 1;
        int ans=1;
        
        for(int i=1; i<a.size(); i++){
            int mx=0;
            for(int j=0; j<i; j++){
                if(a[j] < a[i])
                    mx = max(mx, dp[j]);
            }
            
            dp[i] = mx+1;
            ans = max(dp[i], ans);
        }
        
        return ans;
    }
};