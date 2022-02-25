// link [ https://leetcode.com/problems/same-tree/submissions/ ]

#include<bits/stdc++.h>
using namespace std;

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)
            return true;
        if(p == NULL || q == NULL)
            return false;
        
        
        int x = isSameTree(p->left,q->left);
        int y = isSameTree(p->right,q->right);
        
        return x&&y&&(p->val == q->val);
        
    }
};