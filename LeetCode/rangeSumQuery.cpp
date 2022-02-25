// link - [ https://leetcode.com/problems/range-sum-query-immutable/submissions/ ]

#include<bits/stdc++.h>
using namespace std;

class NumArray {
    private:
    int *sumTillPosition;

    public:
    NumArray(vector<int>& nums) {
        sumTillPosition = new int[nums.size()];
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            sumTillPosition[i] = sum;
        }
    }

   
    int sumRange(int left, int right) {
        if (left == 0) {
            return sumTillPosition[right];
        }
        return sumTillPosition[right] - sumTillPosition[left - 1];
    }
};
