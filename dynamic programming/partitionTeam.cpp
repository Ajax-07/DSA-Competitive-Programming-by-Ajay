#include<bits/stdc++.h>
using namespace std;

class Solution{
    public :
    long partitionTeam(int n, int k){
        long dp[k+1][n+1];
        
        for(int i=0; i<=k; i++){
            for(int j=0; j<=n; j++){
               if(i==0 || j==0 || i>j)
                  dp[i][j] = 0;
               else if(i==1 || i==j)
                  dp[i][j] = 1;
               else
                 dp[i][j] = dp[i][j-1]*i+dp[i-1][j-1];
                  
            }
        }  
        return dp[k][n];
    }
};


int main(){

    Solution s;
    cout << s.partitionTeam(4,3);

    return 0;
}