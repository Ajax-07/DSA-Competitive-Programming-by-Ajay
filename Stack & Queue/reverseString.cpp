// #7 - [https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1]
#include<bits/stdc++.h>
using namespace std;


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    char* str = new char[len+1];
    
    stack<char> st;
    int i=0; 
    while(i<len){
        st.push(S[i]);
        i++;
    }
    
     i=0;
    while(!st.empty()){
        str[i] = st.top();
        st.pop();
        i++;
    }
    str[len] = '\0';
    return str;
}