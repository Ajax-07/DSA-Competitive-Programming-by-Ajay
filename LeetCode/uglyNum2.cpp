// link - [ https://leetcode.com/problems/ugly-number-ii/ ]

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
   
    
    int nthUglyNumber(int n) {
       
       int arr[n];
       arr[0] = 1;
        int p2=0, p3=0, p5=0;
       
        for( int i=1; i<n; i++){
            arr[i] = min(2*arr[p2], min(arr[p3]*3, arr[p5]*5));
            
            if(arr[i] == arr[p2]*2)
                p2++;
            if(arr[i] == arr[p3]*3)
                p3++;
            if(arr[i] == arr[p5]*5)
                p5++;
        }
       
        
        return arr[n-1];
    }
};