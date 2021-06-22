// #25 - [https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#]
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        //Your Code Here
    sort(arr, arr+n);
    
    for(int i=0; i<n-1; i++){
      int j=i+1, k=n-1;
      while(j<k){
           int cs = arr[i]+arr[j]+arr[k];
           if(cs == X) return true;
           if(cs < X) j++;
           if(cs > X) k--;
            
        }
    }
    return false;
        
    }
};
