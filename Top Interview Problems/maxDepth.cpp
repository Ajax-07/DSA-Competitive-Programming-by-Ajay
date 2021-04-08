//  8. link : [ https://leetcode.com/problems/maximum-depth-of-binary-tree ]

#include<bits/stdc++.h>
using namespace std;

// tree node class
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode(){
        delete left;
        delete right;
    }

};


//.............................. Solution .................

int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        return  1+max(maxDepth(root->left),  maxDepth(root->right));
    }

//......................................

// taking input
TreeNode* takeInputLevelwise(){

    cout << "Enter Root Data : ";
    int data; cin >> data;
    cout << endl;
     
     if(data == -1)
     return NULL;

    TreeNode* root = new TreeNode(data);
    queue<TreeNode*> Q;
    Q.push(root);

    while(!Q.empty()){
        TreeNode* front = Q.front();
        Q.pop();

        cout << "Enter left child for " << front->data  << " : ";
        int leftchild; cin >> leftchild;
        
        cout << endl;
        if(leftchild!=-1){
            TreeNode* child = new TreeNode(leftchild);
            front->left = child;
            Q.push(child);
        }

        cout << "Enter right child for " << front->data  << " : ";
        int rightchild; cin >> rightchild;

        if(rightchild!=-1){
            TreeNode* child = new TreeNode(rightchild);
            front->right = child;
            Q.push(child);
        }
        cout << endl;
    }
return root;
}


/*
2
3 9 30 -1 -1 15 7 -1 -1 -1 -1
1 -1 2 -1 -1 

3
2

*/

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        int test;
        cin >> test;

        while(test--){
           TreeNode* root = takeInputLevelwise();

           cout << maxDepth(root); 
           cout << endl; 
        }


    return 0;    
}