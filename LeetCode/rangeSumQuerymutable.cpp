// link - [ https://leetcode.com/problems/range-sum-query-mutable/ ]

#include<bits/stdc++.h>
using namespace std;

class NumArray {
private :
    int *tree;
    int n;
    
   void buildTree(vector<int>& nums, int node, int st, int end){
        if(st==end){
            tree[node] = nums[st];
            return ;
        }
       
       int mid = (st+end)/2;
       int nodeL = node*2;
       int nodeR = node*2+1;
       
       buildTree(nums, nodeL, st, mid);
       buildTree(nums, nodeR, mid+1, end);
       
       tree[node] = tree[nodeL] + tree[nodeR];
    }
    
    int queryTree(int node, int st, int end, int l, int r){
        
       if(end < l || st > r){
           return 0;
       }
        
        if(st>= l && end<=r){
            return tree[node];
        }
        
        int mid = (st+end)/2;
        int sum1 = queryTree(node*2, st,mid, l,r);
        int sum2 = queryTree(node*2+1, mid+1, end, l, r);
        
        return sum1+sum2;
       
    }
    
    
    void updateTree(int node, int st, int end, int idx, int value){
        if(st==end){
            tree[node] = value;
            return ;
        }
            
        int mid =(st+end)/2;
        
        if(idx <= mid){
            int nodeL = node*2;
            updateTree(nodeL, st, mid, idx, value);
        }else{
            int nodeR = node*2+1;
            updateTree(nodeR, mid+1, end, idx, value);
        }
        
        tree[node] = tree[node*2] + tree[node*2+1];
    }
    
public :    
    NumArray(vector<int>& nums) {
        n = nums.size();
        tree = new int[n*4];
        buildTree(nums, 1, 0,n-1);
    }
    
    void update(int index, int val) {
        updateTree(1, 0, n-1, index, val);
    }
    
    int sumRange(int left, int right) {
        return queryTree(1, 0, n-1,left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */