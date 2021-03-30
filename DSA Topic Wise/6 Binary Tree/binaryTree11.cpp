//................. create duplicate node at left  ..............

#include<bits/stdc++.h>
using namespace std;

#include "BinaryTree.h"

binaryTree<int>* createDuplicate(binaryTree<int>* root){
    if(root == NULL)
      return NULL ;
   
   binaryTree<int>* dup = new binaryTree<int>(root->data);

   createDuplicate(root->left)  ;
   createDuplicate(root->right) ;
   
   dup->left = root->left;
   root->left = dup; 

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


/*
i/p : ------------>
1
10 7 15 2 8 12 25 -1 -1 -1 -1 -1 -1 -1 -1 

o/p : ------------>

10 : L 10, R 15
10 : L 7, 
15 : L 15, R 25
7 : L 7, R 8
15 : L 12, 
25 : L 25, 
7 : L 2, 
8 : L 8, 
12 : L 12, 
25 : 
2 : L 2, 
8 : 
12 : 
2 : 

*/


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
      
      int test; cin >> test;
      while(test--){
           binaryTree<int>* root = takeInput();

           cout << endl;
           binaryTree<int>* res = createDuplicate(root);

           print(res);
           cout << endl;
      } 


return 0;
    
}

