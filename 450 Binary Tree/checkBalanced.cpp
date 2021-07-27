// #13 - [https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1#]
#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 


//Function to check whether a binary tree is balanced or not.

pair<int,bool> helper(Node* root){
    if(!root){
        pair<int,bool> p = {0,true};
        return p;
    }
    pair<int,bool> left = helper(root->left);
    pair<int,bool> right = helper(root->right);
    
    pair<int, bool> ans;
    ans.first = 1+max(left.first, right.first);
    if(abs(left.first-right.first) > 1){
        ans.second=false;
        return ans;
    }
    ans.second = left.second&&right.second;
    return ans;
}

bool isBalanced(Node *root)
{
    //  Your Code here
   return helper(root).second;
      
}