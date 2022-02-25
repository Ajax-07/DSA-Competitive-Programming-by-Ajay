// link [ https://leetcode.com/problems/missing-number/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        
        for(int& x : nums){
            sum+=x;
        }
        
        int n=nums.size();
        int total = n*(n+1)/2;
        
        return total-sum;
    }
};

