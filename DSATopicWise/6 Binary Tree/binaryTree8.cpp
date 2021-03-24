//................. remove leaf node ..............

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"

binaryTree<int>* removeLeaf(binaryTree<int>* root){
    if(root == NULL)
     return NULL;

    if(root->left == NULL && root->right == NULL )
         return NULL; 
     
     root->left = removeLeaf(root->left);
     root->right = removeLeaf(root->right);

    

    return root;   
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



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
      
      int test; cin >> test;
      while(test--){
           binaryTree<int>* root = takeInput();
         print(root); 
        cout << "\n";
      
        
        binaryTree<int>* newRoot =  removeLeaf(root);
        
        print(newRoot);
        cout  << "\n\n\n";
      } 


return 0;
    
}

