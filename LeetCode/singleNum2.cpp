// link - [ https://leetcode.com/problems/single-number-ii/ ]

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    int singleNumber(vector<int>& nums) {
            
        int ans=0;
        for(int i=0; i<32; i++){
            int x=0;
            for(int j=0; j<nums.size(); j++ ){
               
                if(nums[j]&(1<<i)) x++;
                
            }
            
             if(x%3!=0)
                ans=ans|(1<<i);
            
        }
        
        return ans;
    }
};