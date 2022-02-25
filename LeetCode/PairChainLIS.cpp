// link - [ https://leetcode.com/problems/maximum-length-of-pair-chain/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end());
        int n = pairs.size();
        int dp[n];
        dp[0] = 1;
        int ans=1;
        for(int i=1; i<n; i++){
            dp[i] = 1;
            for(int j=i-1; j>=0; --j){
                if(pairs[i][0] > pairs[j][1])
                    dp[i] = max(dp[i], dp[j]+1);
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};