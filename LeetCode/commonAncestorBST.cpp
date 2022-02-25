// link [ https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/submissions/ ]

#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
   vector<TreeNode*> p1;
   vector<TreeNode*> p2;
    
    
   void rootToPath(TreeNode* root,TreeNode* node,  vector<TreeNode*>& p){
       if(root == NULL)
           return ;
       
       if(root->val == node->val){
           p.push_back(root);
           return;
       }
       
       if(node->val < root->val){
          rootToPath(root->left, node, p);
           p.push_back(root);
           return;
       }
        if(node->val > root->val){
          rootToPath(root->right, node, p);
          p.push_back(root);
          return; 
       }
       
   }
    
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        rootToPath(root,p,p1);
        rootToPath(root,q,p2);
        
       
    
        TreeNode* node = NULL;
        int i=p1.size()-1;
        int j=p2.size()-1;
        
        while(i>=0 && j>=0 && p1[i]->val == p2[j]->val){
            i--;
            j--;
        }
        
        return p1[++i];
        
    }
};