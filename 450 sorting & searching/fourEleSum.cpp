// #11 - [https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1]

#include<bits/stdc++.h>
using namespace std;

 vector<vector<int> > fourSum(vector<int> &arr, int k) {
      sort(arr.begin(),arr.end());
      vector<vector<int>>ans;
      set<vector<int>>m;
      int n=arr.size();
      for(int i=0;i<n-3;i++)
      {
          for(int j=i+1;j<n-2;j++)
          {
              int l=j+1,r=n-1;
              while(l<r)
              {
                  int s=arr[i]+arr[j]+arr[l]+arr[r];
                  if(k==s)
                  {
                      m.insert({arr[i],arr[j],arr[l],arr[r]});
                     
                      l++;
                      r--;
                      
                  }
                  else if(s<k)
                  l++;
                  else
                  r--;
              }
          }
      }
      for(auto x:m)
      {
          ans.push_back({x});
      }
      return ans;
    }
