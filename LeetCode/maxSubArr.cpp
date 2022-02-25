// link - [ https://leetcode.com/problems/maximum-subarray/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
   
    
    int maxSubArray(vector<int>& nums) {
       int mxSum=INT_MIN;
       int curSum=0;
        
        for(int i=0; i<nums.size(); i++){
            
            curSum += nums[i];
            
            mxSum = max(mxSum, curSum);
            if(curSum<0)
                curSum = 0;
        }
	    
	    return mxSum;
    }
};