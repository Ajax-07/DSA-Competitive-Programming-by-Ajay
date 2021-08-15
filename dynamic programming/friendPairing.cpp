#include<bits/stdc++.h>
using namespace std;

class Solution{
   public: int pairing(int n){
        int dp[n+1];
        dp[0]=dp[1] = 1;

        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1]+(i-1)*dp[i-2];
        }
        return dp[n];
    }
};

int main(){

    Solution s;
    cout << s.pairing(4);

    return 0;
}