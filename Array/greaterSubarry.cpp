// #28 - [https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1#]
#include<bits/stdc++.h>
using namespace std;

class Solution{
 public:

    int sb(int arr[], int n, int x)
    {
        // Your code goes here
        int ans=INT_MAX;
        int sum=0;
        int i=0, j=0;
        while(i<=j && j<n){
           if(arr[j] > x) return 1;
           
           sum += arr[j];
           if(sum > x)
             ans = min(ans, j-i+1);
            while(sum>=x){
                sum -= arr[i];
                i++;
                if(sum>x)
                ans = min(ans,j-i+1);
            } 
            
            j++;
        }
        
        return ans;
    }
};
