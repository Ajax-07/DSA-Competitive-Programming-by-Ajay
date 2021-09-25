#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        bool dp[n][n];
        int count=0;
        
       
        for(int j=0; j<n; j++)
            for(int i=0, k=j; i<n-j && k<n; i++, k++){
                 
                if(i==k)
                    dp[i][k] = true;
                else if(k-i == 1){
                    if(s[i] == s[k])
                        dp[i][k] = true;
                    else
                        dp[i][k] = false;
                }
                else if(s[i] == s[k])
                  dp[i][k] = dp[i+1][k-1];
                else 
                    dp[i][k] = false;
                
                if(dp[i][k]) count++;
            
            }
        
        return count;
        
    }
};