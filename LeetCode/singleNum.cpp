// link - [ https://leetcode.com/problems/single-number/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        
        for(int &p : nums){
            x = x^p;
        }
        
        return x;
    }
};