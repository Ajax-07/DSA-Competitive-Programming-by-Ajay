// #21 - [https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1#]

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long neg=1;
	    long long pos=1;
	    long long maxprd=INT_MIN;
	    
	    for(int i=0;i<n; i++){
	        long long x = arr[i];
	        if(x<0) swap(pos,neg);
	        pos = max(pos,pos*x);
	        neg = min(neg, neg*x);
	        
	        maxprd = max(maxprd, pos);
	        if(x==0){
	            pos=1; neg=1;
	        }
	    }
	    
	    return maxprd;
	}
};