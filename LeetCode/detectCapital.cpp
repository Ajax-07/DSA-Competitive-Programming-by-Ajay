// link - [ https://leetcode.com/problems/detect-capital/submissions/ ]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n=word.size();
        if(n<=1)
            return true;
        
        
        if(word[0]>=65 && word[0]<=90){
            if(word[1]>=65 && word[1]<=90){
                int i=2;
                while(i<n){
                    if(word[i]<65 || word[i]>90)
                        return false;
                    i++;
                }
            }else{
                int i=2;
                while(i<n){
                    if(word[i]<97 || word[i]>122)
                        return false;
                    i++;
                }
            }
        }else{
             int i=1;
                while(i<n){
                    if(word[i]<97 || word[i]>122)
                        return false;
                    i++;
                }   
        }
        
        return true;
    }
};