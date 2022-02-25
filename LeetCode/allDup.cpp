// link - [ https://leetcode.com/problems/find-all-duplicates-in-an-array/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++)
            mp.insert({nums[i], mp[nums[i]]++});
        
        vector<int> res;
        
        for(auto itr : mp){
            if(itr.second > 1)
                res.push_back(itr.first);
        }
        
        return res;
    }
};  