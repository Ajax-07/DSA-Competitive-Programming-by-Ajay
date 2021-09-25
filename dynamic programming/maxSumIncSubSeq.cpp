#include<bits/stdc++.h>
using namespace std;

class Solution{
    		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    dp[0] = arr[0];
	    int ans=arr[0];

	    
	    for(int i=1; i<n; i++){
	       int mx = 0;
	       
	       for(int j=0; j<i; j++){
	           if(arr[j] < arr[i])
	              mx = max(dp[j], mx);
	       }
	       
	       dp[i] = mx+arr[i];
	       ans = max(ans, dp[i]);
	    }
	    
	    return ans;
	}  
};
