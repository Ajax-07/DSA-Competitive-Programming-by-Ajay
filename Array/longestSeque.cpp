// #22 - [https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#]
#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      unordered_map<int,bool> m;
      
      int longest=0;
      
      for(int i=0; i<n; i++){
          m[arr[i]] = false;
      }
      for(int i=0; i<n; i++){
         m[arr[i]] = true;
          
         int x=arr[i]+1;
         int temp=1;
          while( m.find(x) != m.end() && m[x] != true){
              temp++;
              m[x] = true;
              x++;
          }
          int y=arr[i]-1;
          while(m.find(y) != m.end() && m[y] != true){
              temp++; 
              m[y] = true;
              y--;
          }
          
          longest = max(longest,temp);
      }
      return longest;
    }
};