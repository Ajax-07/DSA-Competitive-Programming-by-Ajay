// #19 - [https://practice.geeksforgeeks.org/problems/construct-tree-1/1#]
#include<bits/stdc++.h>
using namespace std;

// Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;

  Node(int data) : data(data) {};
};

class Solution{
    public:
    
    Node* makeBinaryTree(int preOrder[], int inOrder[], int i, int j, int m, int n){
        if(i>j && m>n)
			return nullptr;
		
		int x = preOrder[i];
		int k=m;
		while(k<=n) {
			if(inOrder[k] == x) {
				break;
			}
			k++;
		}
		
		 Node* root = new Node(x);
		 
		 root->left = makeBinaryTree(preOrder, inOrder, i+1, i+(k-m), m, k-1);
		 root->right = makeBinaryTree(preOrder, inOrder, i+(k-m)+1, j, k+1, n);
		 return root;
		
			
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        return makeBinaryTree(pre, in, 0, n-1, 0, n-1);
        
    }
};
