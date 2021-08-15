#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
       int inc = arr[0];
       int exc = 0;
        
        for(int i=1; i<n; i++){
           int newInc = exc+arr[i];
           int newExc = max(inc, exc);
           inc = newInc;
           exc = newExc;
        }
        
        return max(inc, exc);
    }
};