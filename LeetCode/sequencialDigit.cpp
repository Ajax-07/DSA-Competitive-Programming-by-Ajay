// link -  [ https://leetcode.com/problems/sequential-digits/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        
        int arr[] = {1,2,3,4,5,6,7,8,9};
        
        for(int i=0; i<9; i++){
            int num=0;
           for(int j=i; j<9; j++){
               num = num*10+arr[j];
               if(num>=low && num<=high)
                   res.push_back(num);
               
           }
        }
        
        sort(res.begin(), res.end());
        return res;
        
    }
};