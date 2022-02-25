// link - [ https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,int> mp;
        
        for(int i=0; i<n; i++)
            mp.insert({nums[i],1});
        
        vector<int> res;
        for(int k=1; k<=n; k++){
            if(mp.find(k) == mp.end())
                res.push_back(k);
        }
        
        return res;
        
    }
};