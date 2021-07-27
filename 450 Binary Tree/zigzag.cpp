// #12 - [https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1#]
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


//Function to store the zig zag order traversal of tree in a list.
vector <int> zigZagTraversal(Node* root)
{
	// Code here
     Node* temp;
     vector<int> ans;
    stack <Node*> s1;
    stack <Node*> s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);
            if(temp->left)
                s2.push(temp->left);
            if(temp->right)
                s2.push(temp->right);
        }
        while(!s2.empty()){
            temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);
            if(temp->right)
                s1.push(temp->right);
            if(temp->left)
                s1.push(temp->left);
        }
    }
   return ans;
}