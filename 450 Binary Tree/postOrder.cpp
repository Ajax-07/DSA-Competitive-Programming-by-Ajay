// #8 - [https://leetcode.com/problems/binary-tree-postorder-traversal/submissions/]
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
    
    void postorderTraversal(TreeNode* root, vector<int> &res){
        if(root == NULL)
            return ;
    
    postorderTraversal(root->left, res);
    postorderTraversal(root->right, res);
    
    res.push_back(root->val);
}
    
    vector<int> postorderTraversal(TreeNode* root) {
       
        vector<int> res;
        postorderTraversal(root, res);
        
        return res;

        /*
        // iterative 
        vector<int> res;
        stack<TreeNode*> st;
        TreeNode* curr = root;
        
        while(!st.empty() || curr != NULL){
            if(curr == NULL){
                curr = st.top();
                st.pop();
                curr = curr->right;
                
            }else{
                res.push_back(curr->val);
                st.push(curr);
                curr = curr->left;
            }
        }
        return res;
        
        */
      
    }
};