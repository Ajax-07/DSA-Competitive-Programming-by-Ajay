// #6 - [https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1#]
#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        int i=0; 
        while(i<x.size() || !st.empty()){
            if(x[i] == '{' || x[i] == '(' || x[i] == '['){
                st.push(x[i]);
            }else{
                if(!st.empty() && (abs(st.top()-x[i]) == 2 || abs(st.top()-x[i]) == 1))
                       st.pop();
                else return false;       
            }
            i++;
        }
        
        return st.empty()&&i==x.size();
    }

};