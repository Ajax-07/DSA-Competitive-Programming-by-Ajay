// #23 - [https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#]

#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int> m;
        
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        int ans=0;
        unordered_map<int,int> :: iterator it = m.begin();
        while(it != m.end()){
            if(it->second > n/k)
              ans++;
            it++;  
        }
        return ans;
    }
};
