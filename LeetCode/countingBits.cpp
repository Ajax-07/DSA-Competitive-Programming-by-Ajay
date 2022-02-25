// link - [ https://leetcode.com/problems/counting-bits/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        
        for(int i=0; i<=num; i++){
            int setBit = 0;
            int x = i;
            while(x){
                if(x&1)
                    setBit++;
                x = x>>1;
            }
            res.push_back(setBit);
        }
        return res;
    }
};