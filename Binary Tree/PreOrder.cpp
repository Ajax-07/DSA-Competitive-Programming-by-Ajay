// #7 - [https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/]
#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
   struct TreeNode {
       int val;
       TreeNode *left;
       TreeNode *right;
       TreeNode() : val(0), left(nullptr), right(nullptr) {}
       TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
       TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
   };
 
class Solution {
public:
    
    void preorderTraversal(TreeNode* root, vector<int> &res){
        if(root== NULL)
            return;
        res.push_back(root->val);
        preorderTraversal(root->left, res);
        preorderTraversal(root->right, res);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorderTraversal(root, res);
        return res;

        /*
        // iterative

        vector<int> res;
        stack<TreeNode*>  st;
        TreeNode* curr = root;
        TreeNode* prev = NULL;
        
        while(!st.empty() || curr!= nullptr){
           
            if(curr == NULL){
                curr = st.top();
               if(curr->right == NULL || curr->right == prev){
                   res.push_back(curr->val);
                   st.pop();
                   prev = curr;
                   curr = NULL;
               }else curr = curr->right;
            }else {
                st.push(curr);
                curr = curr->left;
            }
            
        }
        return res;
   
        */
    }
};