// link []

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
private: 
    unordered_map<int,int> mp;
public:
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
            return false;
        
        int x = k-root->val;
        if(mp.find(x) != mp.end()){
            return true;
        }
        
        mp.insert({root->val,1});
        
        if(findTarget(root->left,k))
            return true;
        if(findTarget(root->right,k))
            return true;
        return false;
           
    }
};