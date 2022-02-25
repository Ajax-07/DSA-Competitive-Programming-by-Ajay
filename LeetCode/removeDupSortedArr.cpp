// link - [ https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int i=1;
        int j=1;
        
        while(i<nums.size()){
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        
        return j;
    }
};