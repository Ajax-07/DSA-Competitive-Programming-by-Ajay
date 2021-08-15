// [https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1#]

#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        for(int i=0; i<n; i++)
          s.push(i);
        
       
        
        while(s.size() >= 2){
            int i = s.top();
            s.pop();
            int j = s.top();
            s.pop();
            if(M[i][j] == 1 )
             s.push(j);
            else s.push(i); 
            
        }
        
        int ans = s.top();
        for(int i=0; i<n; i++){
            if(i != ans){
                if(M[ans][i] == 1 || M[i][ans] == 0){
                    ans = -1;
                    break;
                }
            }
        }
           
        return ans; 
    }
};