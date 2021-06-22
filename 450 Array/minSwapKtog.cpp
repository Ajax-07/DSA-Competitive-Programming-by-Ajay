// #30 - [https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#]
#include<bits/stdc++.h>
using namespace std;


int minSwap(int *arr, int n, int k) {
    // Complet the function
    int ans=n;
    
    int win=0;
    for(int i=0; i<n; i++)
       if(arr[i] <= k) 
         win++;
    if(win == 0) return 0;
    
    int cur=0;         
    int i=0; 
    int j=0;
    while(j<n){
        if(arr[j]>k)
           cur++;
        if(j-i+1 == win){
            ans = min(ans, cur);
            if(arr[i]>k) cur--;
            i++; j++;
        }else j++;   
    }
    return ans;
}
