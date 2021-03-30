// ......................... Binary Tree Traversal ...............    
// ......................... 1. Level order ...............    
// ......................... 2. Pre-order ...............    
// ......................... 3. Post-order ...............    
// ......................... 4. In-order ...............    

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"


// ............ Level Order....

void LevelOrder(binaryTree<int>* root){
    if(root == NULL)
     return;

     queue <binaryTree<int>*> Q;
     Q.push(root);

     while(!Q.empty()){
         binaryTree<int>* front = Q.front();
         Q.pop();

         cout << front->data << " : ";

         if(front->left){
             cout << "L " << front->left->data << ", " ;
             Q.push(front->left);
         }

         if(front->right){
             cout << "R " << front->right->data ;
             Q.push(front->right);
             
         }
         cout << endl;
    }

}


//............. pre-order ... ORDER = NODE->LEFT->RIGHT
void preOrder(binaryTree<int>* root){
     if(root == NULL)
     return;

     cout << root->data << " ";
     preOrder(root->left);
     preOrder(root->right);

}


//............. post-order ......... ORDER = LEFT->RIGHT->NODE
void postOrder(binaryTree<int>* root){
    if(root == NULL)
        return;

    postOrder(root->left);
    postOrder(root -> right);

    cout << root->data << " ";    
}


//............. In-order  ............... ORDER = LEFT->NODE->RIGHT
void inOrder(binaryTree<int>* root){
    if(root == NULL)
        return;

    inOrder(root->left);
    cout << root->data  << " ";
    inOrder(root -> right);

   
}

// take input..................
binaryTree<int>* takeInput(){

    cout << "Enter Root Data : ";
    int data; cin >> data;
    cout << endl;
     
     if(data == -1)
     return NULL;

    binaryTree<int>* root = new binaryTree<int>(data);
    queue<binaryTree<int>*> Q;
    Q.push(root);

    while(!Q.empty()){
        binaryTree<int>* front = Q.front();
        Q.pop();

        cout << "Enter left child for " << front->data  << " : ";
        int leftchild; cin >> leftchild;
        
        cout << endl;
        if(leftchild!=-1){
            binaryTree<int>* child = new binaryTree<int>(leftchild);
            front->left = child;
            Q.push(child);
        }

        cout << "Enter right child for " << front->data  << " : ";
        int rightchild; cin >> rightchild;

        if(rightchild!=-1){
            binaryTree<int>* child = new binaryTree<int>(rightchild);
            front->right = child;
            Q.push(child);
        }
        cout << endl;
    }
return root;

}


//.... EX = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    binaryTree<int>* root = takeInput();
/*...................................................................................................*/
    // level order
    cout << endl << "level order --> " << endl;
    LevelOrder(root); 

/*  o/p:
level order --> 
1 : L 2, R 3
2 : L 4, R 5
3 : L 6, R 7
4 : 
5 : 
6 : L 8, R 9
7 : 
8 : 
9 : 
    
    
............................................................................................*/
    //  pre-order
    cout << endl << "Pre-Order --> " << endl; 
    preOrder(root);

    cout << endl;
/*
o/p:
Pre-Order --> 
1 2 4 5 3 6 8 9 7   

..........................................................................................................*/
    //  post order
    
    cout << endl << "Post-Order --> " << endl;
    postOrder(root);

    cout << endl;

/*
o/p:
Post-Order --> 
4 5 2 8 9 6 7 3 1 
................................................................................................*/    


    //    In order .............
    cout << endl << "In-Order --> " << endl; 
    inOrder(root);

    cout << endl;

 /*
   o/p :
In-Order --> 
4 2 5 1 8 6 9 3 7 
 .................................................................................................................*/   
   delete root;
   
    return 0;
}