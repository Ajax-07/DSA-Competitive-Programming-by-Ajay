#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	int LongestBitonicSequence(vector<int>arr)
	{
	    // code here
	    int n=arr.size();
	    int dpLeft[n];
	    dpLeft[0] = 1;

	    
	    for(int i=1; i<n; i++){
	       int mx = 0;
	       
	       for(int j=0; j<i; j++){
	           if(arr[j] < arr[i])
	              mx = max(dpLeft[j], mx);
	       }
	       
	       dpLeft[i] = mx+1;
	    }
	    
	    int dpRight[n];
	    dpRight[n-1] = 1;
	     for(int i=n-2; i>=0; i--){
	       int mx = 0;
	       
	       for(int j=n-1; j>i; j--){
	           if(arr[j] < arr[i])
	              mx = max(dpRight[j], mx);
	       }
	       
	       dpRight[i] = mx+1;
	    }
	    
	    int ans=0;
	    
	    for(int i=0; i<n; i++){
	        ans = max(ans, dpLeft[i]+dpRight[i]);
	    }
	    
	    return ans-1;
	    
	}
};