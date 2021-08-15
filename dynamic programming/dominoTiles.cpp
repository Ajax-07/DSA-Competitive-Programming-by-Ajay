#include<bits/stdc++.h>
using namespace std;

class Solution {
    int mod = 1e9+7;
public:
    int numTilings(int n) {
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i=3; i<=n; i++){
            dp[i] = (dp[i-1]%mod+dp[i-2]%mod)%mod;
        }
        
        return dp[n];
    }
};