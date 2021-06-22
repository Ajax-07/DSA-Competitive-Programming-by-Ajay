// #1 - [https://practice.geeksforgeeks.org/problems/level-order-traversal/1#]

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
 


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      if(node==NULL){
          vector<int> v;
          return v;
      }
      
      vector<int> res;
      queue<Node*> temp;
      temp.push(node);
      while(!temp.empty()){
          Node* front = temp.front();
          temp.pop();
          res.push_back(front->data);
          
          if(front->left)
            temp.push(front->left);
         if(front->right)    
            temp.push(front->right);
          
      }
      return res;
    }
};
