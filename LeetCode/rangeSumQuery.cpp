// link - [ https://leetcode.com/problems/range-sum-query-immutable/ ]

#include<bits/stdc++.h>
using namespace std;

class NumArray {
private: 
    int *arr;
    int n;
public:
    NumArray(vector<int>& nums) {
        n = nums.size();
        arr = new int[n];
        
        arr[0] = nums[0];
        
        for(int i=1; i<n; i++){
            arr[i] = arr[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
          return arr[right];
        return arr[right]-arr[left-1];
    }
};
