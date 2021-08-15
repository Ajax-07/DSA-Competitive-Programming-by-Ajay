// [https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> res;
        stack<long long> s;
        
        for(int i=arr.size()-1; i>=0; i--){
            long long temp = -1;
            while(!s.empty()){
                if(s.top() > arr[i]){
                    temp = s.top();
                    break;
                }
                s.pop();
            }
            
            res.push_back(temp);
            
            s.push(arr[i]);
            
        }
        reverse(res.begin(), res.end());
        return res;
    }
};