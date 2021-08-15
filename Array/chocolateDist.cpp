// #27 - [https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#]
#include<bits/stdc++.h>
using namespace std;

class Solution{
   public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    sort(a.begin(), a.end());
    
    long long i=0, j=m-1;
    long long  ans=INT_MAX;
    while(j<n){
        ans = min(ans, (a[j]-a[i]));
        i++; j++;
     }
    return ans;
   }
};