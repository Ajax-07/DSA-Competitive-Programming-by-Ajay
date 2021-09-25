#include<bits/stdc++.h>

using namespace std;

// leetcode super ugly number solution

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int dp[n+1];
        dp[1] = 1;
        int pointer[primes.size()];
        
        for(int i=0; i<primes.size(); i++)
            pointer[i] = 1;
        
        for(int i=2; i<=n; i++){
            int MIN = INT_MAX;
            
            for(int j=0; j<primes.size(); j++){
                MIN = min(MIN, dp[pointer[j]]*primes[j]);
            }
           dp[i] = MIN;
            
           for(int j=0; j<primes.size(); j++)
               if(MIN == dp[pointer[j]]*primes[j])
                   pointer[j]++;
        }
        
        return dp[n];
    }
};