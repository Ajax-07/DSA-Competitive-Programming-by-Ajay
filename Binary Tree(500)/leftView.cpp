// #8 - [https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#]
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
 

//Function to return a list containing elements of left view of the binary tree.

vector<int> leftView(Node *root)
{
   // Your code here
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
          if(i==1) res.push_back(front->data);
          if(front->left)
              t.push(front->left);
          if(front->right)   
             t.push(front->right);
       }
   }
   return res;
}
