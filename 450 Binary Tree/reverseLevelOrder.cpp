// #2 - [https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#]

#include<bits/stdc++.h>
using namespace std;
  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; 

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    if(root==NULL){
          vector<int> v;
          return v;
      }
      
      vector<int> res;
      queue<Node*> temp;
      temp.push(root);
      
      
      while(!temp.empty()){
          Node* front = temp.front();
          temp.pop();
          res.push_back(front->data);
          
          if(front->right)
            temp.push(front->right);
         if(front->left)    
            temp.push(front->left);
      }
      
      reverse(res.begin(), res.end());
      return res;
     
}