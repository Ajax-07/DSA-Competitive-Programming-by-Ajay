// #24 - [https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1]
#include<bits/stdc++.h>
using namespace std;


string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int> s;
    for(int i=0; i<m; i++)
       s.insert(a2[i]);
    
    for(int i=0; i<n; i++){
        if(s.find(a1[i]) != s.end()){
            s.erase(a1[i]);
        }
    }   
    
   string ans =  s.empty() ? "Yes" : "No";
   return ans;
}