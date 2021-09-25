#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
     string rev(string s){
        if(s.length() <= 1)
            return s;
        return rev(s.substr(1))+s[0];
    }
    
    int longestPalindromeSubseq(string s) {
        string t = rev(s);
        int n  = s.length();
        int dp[n+1][n+1];
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(s[i-1] == t[j-1])
                    dp[i][j] = max(dp[i-1][j-1], dp[i-1][j-1]+1);
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        
        return dp[n][n];
    }
};