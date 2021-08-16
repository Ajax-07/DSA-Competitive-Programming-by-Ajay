// #9 - [https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1]

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

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       if(root == NULL){
       vector<int> v;
       return v;
   }
   
   vector<int> res;
   queue<Node*> t;
   t.push(root);
   while(!t.empty()){
       int n=t.size();
       for(int i=1; i<=n; i++){
          Node* front = t.front();
          t.pop();
          if(i==n) res.push_back(front->data);
          if(front->left)
              t.push(front->left);
          if(front->right)   
             t.push(front->right);
       }
   }
   return res;
    }
};

