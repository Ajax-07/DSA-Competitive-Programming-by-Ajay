// [https://www.codingninjas.com/codestudio/problem-details/insert-an-element-at-its-bottom-in-a-given-stack_1171166]

#include<bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    if(myStack.empty()){
        myStack.push(x);
        return myStack;
    }
    
    int temp = myStack.top();
    myStack.pop();
    stack<int> ans = pushAtBottom(myStack, x);
    ans.push(temp);
    return ans;
        
}
