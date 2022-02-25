// link - [ https://leetcode.com/problems/find-the-difference/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0;
        long long sumS=0;
        while(i<s.size()){
            sumS += s[i];
            i++;
        }
        
        i=0;
        long long sumT=0;
        while(i<t.size()){
            sumT += t[i];
            i++;
        }
        
        
        return (char)abs(sumS-sumT);
       
    }
};