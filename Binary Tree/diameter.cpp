// #4 - [https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1#]

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

class Solution {
  public:
  
   pair<int, int> helper(Node* root) {
        if(root==NULL){
            pair<int,int> p(0,0);
            return p;
        }
        
        pair<int,int> a = helper(root->left);
        pair<int,int> b = helper(root->right);
        
        pair<int,int> ans;
        ans.first = 1+max(a.first,b.first);
        ans.second = max((1+a.first+b.first),max(a.second,b.second));
        return ans;
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        
        return helper(root).second;
    }
};