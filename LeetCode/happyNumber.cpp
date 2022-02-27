// link - [ https://leetcode.com/problems/happy-number/ ]

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isHappy(int n) {
        
        unordered_set<int> Set;
        
        while(true){
           
            int sum=0;
            while(n){
                int x = n%10;
                sum += x*x;
                n/=10;
            }
            if(sum == 1){
                return true;
            }else{
                if(Set.find(sum) != Set.end())
                    break;
                Set.insert(sum);
                n=sum;
            }
        }
        return false;
    }
};