#include<bits/stdc++.h>
using namespace std;

class Solution {
    int mod = 1e9+7;
public:
    int numTilings(int m, int n) {
        int dp[n+1];

        for(int i=1; i<=n; i++){
            if(i<m){
                dp[i] = 1;
            }else if(i==m){
                dp[i]=2;
            }else{
                dp[i] = dp[i-1]+dp[i-m];
            }
        }
        return dp[n];
    }
};