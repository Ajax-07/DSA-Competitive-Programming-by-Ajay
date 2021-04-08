

// 12. link : [ https://leetcode.com/problems/validate-binary-search-tree ]

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool helper(TreeNode* root,TreeNode* lowerBound, TreeNode* uperBound){
        if(root == NULL)
            return true;
        if(lowerBound && root->val <= lowerBound->val || uperBound && root->val >= uperBound->val )
            return false;
        return helper(root->left, lowerBound,root) && helper(root->right,root,uperBound);
    }
    
    bool isValidBST(TreeNode* root) {
        return helper(root, NULL,NULL);
    }
};