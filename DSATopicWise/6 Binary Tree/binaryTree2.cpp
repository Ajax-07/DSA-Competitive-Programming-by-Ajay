
// .................. Count Total Nodes in Binary Tree .................

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"


int countNode(binaryTree<int>* root){
    if(root == NULL)
       return 0;

    return 1+countNode(root->left) + countNode(root->right);   
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


// print tree level wise 

void print(binaryTree<int>* root){
    if(root == NULL)
     return;
     
     
     queue<binaryTree<int>*> Q;
     Q.push(root);

     
     while(!Q.empty()){
         binaryTree<int>* front = Q.front();
         cout << front->data << " : ";
         Q.pop();

         if(front->left != NULL){
             cout << "L " << front->left->data << ", ";
             Q.push(front->left);
         }
           if(front->right != NULL){
             cout << "R " << front->right->data;
             Q.push(front->right);
         }
         cout << endl;
     }
}


// ex .. = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    binaryTree<int>* root = takeInput();
    cout << endl;

    print(root);

    cout << endl;

    cout << "Total Nodes : " << countNode(root);

    return 0;
}